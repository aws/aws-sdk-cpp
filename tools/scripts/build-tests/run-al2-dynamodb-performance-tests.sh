#!/bin/bash
set -e

DEFAULT_REGION="us-east-1"
DEFAULT_ITERATIONS=3

if [ "$#" -lt 1 ]; then
  echo "Usage: ${0} PREFIX_DIR [--region REGION] [--iterations NUM]"
  exit 1
fi

PREFIX_DIR="$1"
shift  

REGION="$DEFAULT_REGION"
ITERATIONS="$DEFAULT_ITERATIONS"

while [[ "$#" -gt 0 ]]; do
  case "$1" in
    --region) REGION="$2"; shift 2 ;;
    --iterations) ITERATIONS="$2"; shift 2 ;;
    *) echo "Unknown parameter: $1"; exit 1 ;;
  esac
done

export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${PREFIX_DIR}/al2-install/lib64/:${PREFIX_DIR}/al2-build/tests/testing-resources/"

SDK_REPO_PATH="${PREFIX_DIR}/aws-sdk-cpp"
if [ -d "$SDK_REPO_PATH" ]; then
  cd "$SDK_REPO_PATH"
  COMMIT_ID=$(git rev-parse HEAD)
  cd -
else
  COMMIT_ID="unknown"
fi

./dynamodb-performance-test --region "$REGION" --iterations "$ITERATIONS" --commit-id "$COMMIT_ID"
cat dynamodb-performance-test-results.json