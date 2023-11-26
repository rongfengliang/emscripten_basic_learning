import init from './build/myadd.wasm?init'

const runWasmAdd = async () => {
   
  // Instantiate our wasm module, 同时可以传递依赖的importObject
  const wasmModule = await init();

  console.log(wasmModule)
   
  // Call the Add function export from wasm, save the result
  const addResult = wasmModule.exports.add(2433, 24);

  // Set the result onto the body
  document.body.textContent = `Hello World! addResult: ${addResult}`;
};
runWasmAdd();