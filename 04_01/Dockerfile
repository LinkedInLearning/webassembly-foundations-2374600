# Verwende ein leichtgewichtiges Linux-Image als Basis
FROM alpine:latest

# Setze das Arbeitsverzeichnis im Container
WORKDIR /usr/src/app

# Lade das Wasmer-Install-Skript herunter und führe es aus
RUN curl https://get.wasmer.io -sSfL | sh

# Stelle sicher, dass Wasmer global verfügbar ist
ENV PATH="/root/.wasmer/bin:${PATH}"

# Füge dein WebAssembly-Modul zum Image hinzu
COPY app/app.wasm /app/app.wasm

CMD ["wasmer", "run", "app.wasm"]
