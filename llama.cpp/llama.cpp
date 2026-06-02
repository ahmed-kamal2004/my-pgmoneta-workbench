## To run from a local build, use the following command:

./build/bin/llama-server -hf ggml-org/gemma-4-E4B-it-GGUF \
             --port 8100 \
             --ctx-size 65536 \
             -sm layer \
             -t 4 \
             --webui-mcp-proxy \
             --fit on


## To run from the system-wide installation, use the following command:

llama-server \
  -m ~/.cache/huggingface/hub/models--ggml-org--gemma-4-E4B-it-GGUF/snapshots/*/gemma-4-E4B-it-Q4_K_M.gguf \
  --alias "ggml-org/gemma-4-E4B-it-GGUF" \
  --port 8100 \
  --ctx-size 65536 \
  --reasoning-budget 512 \
  -t 8