emcc fib.cpp -o app.js \
 -s EXPORTED_FUNCTIONS='["_fibonacci"]' \
 -s EXPORTED_RUNTIME_METHODS='["ccall","cwrap"]'
