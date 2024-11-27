    import './App.css'
    import { useState, useCallback, useEffect, useRef } from 'react'

    function App() {
      const [length, setLength] = useState(8)
      const [numberAllowed, setNumberAllowed] = useState(false)
      const [charAllowed, setCharAllowed] = useState(false)
      const [password, setPassword] = useState('')

      const passwordRef = useRef(null)

      const generatePassword = useCallback(() => {
        let pass = ""
        let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
        if (numberAllowed) str += "0123456789"
        if (charAllowed) str += "!@#$%^&*()_+"  
        for (let i = 0; i < length; i++) {
          const randomIndex = Math.floor(Math.random() * str.length)
          pass += str[randomIndex]
        }
        setPassword(pass)
      }, [length, numberAllowed, charAllowed])

      useEffect(() => {
        generatePassword()
      }, [length, numberAllowed, charAllowed]);

      const copyPasswordToClipboard = () => {
        window.navigator.clipboard.writeText(password)
        passwordRef.current?.select()
      }

      return (
        <div className='w-full max-w-md mx-auto shadow-md rounded-lg px-4 py-3 my-8 bg-gray-800 text-black'>
          <h1 className='text-white text-center my-3'>Password Generator</h1>
          <div className='flex shadow rounded-lg overflow-hidden mb-4'>
            <input
              type="text"
              value={password}
              className='outline-none w-full py-1 px-3'
              placeholder='Password'
              readOnly
              ref={passwordRef}
            />
            <button style={{backgroundColor: '#413d82', padding: '0.5rem'
            }} onClick={copyPasswordToClipboard} className='text-white outline py-0.5 shrink-0' >copy</button>
          </div>
          <div className='flex text-sm gap-x-2'>
            <div className="flex items-center gap-x-1">
              <input
                onChange={(e) => setLength(e.target.value)}
                className='cursor-pointer'
                type="range"
                min={6}
                max={30}
                value={length}
              />
              <label htmlFor="length" className='text-white'>Length: {length}</label>
            </div>
            <div className="flex items-center gap-x-1">
              <input
                type="checkbox"
                defaultChecked={numberAllowed}
                onChange={() => setNumberAllowed((prev) => !prev)}
              />
              <label htmlFor="number" className='text-white'>Numbers</label>
            </div>
            <div className="flex items-center gap-x-1">
              <input
                type="checkbox"
                defaultChecked={charAllowed}
                onChange={() => setCharAllowed((prev) => !prev)}
              />
              <label htmlFor="char" className='text-white'>Characters</label>
            </div>
          </div>
        </div>
      )
    }

    export default App
