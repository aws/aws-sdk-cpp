#!/bin/bash
set -e

DEFAULT_REGION="us-east-1"
DEFAULT_AZ_ID="use1-az4"
DEFAULT_ITERATIONS=3

if [ "$#" -lt 1 ]; then
  echo "Usage: ${0} PREFIX_DIR [--region REGION] [--az-id AZ_ID] [--iterations NUM]"
  exit 1
fi

PREFIX_DIR="$1"
shift  

REGION="$DEFAULT_REGION"
AZ_ID="$DEFAULT_AZ_ID"
ITERATIONS="$DEFAULT_ITERATIONS"

while [[ "$#" -gt 0 ]]; do
  case "$1" in
    --region) REGION="$2"; shift 2 ;;
    --az-id) AZ_ID="$2"; shift 2 ;;
    --iterations) ITERATIONS="$2"; shift 2 ;;
    *) echo "Unknown parameter: $1"; exit 1 ;;
  esac
done

SDK_REPO_PATH="${PREFIX_DIR}/aws-sdk-cpp"
if [ -d "$SDK_REPO_PATH" ]; then
  COMMIT_ID=$(cd "$SDK_REPO_PATH" && git rev-parse HEAD)
else
  COMMIT_ID="unknown"
fi

export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${PREFIX_DIR}/al2-build/generated/src/aws-cpp-sdk-s3:${PREFIX_DIR}/al2-build/src/aws-cpp-sdk-core:${PREFIX_DIR}/al2-build/crt/aws-crt-cpp:${PREFIX_DIR}/al2-build/lib:${PREFIX_DIR}/al2-build/crt/aws-crt-cpp/crt/*"
cd "${PREFIX_DIR}/al2-build"
if [ -f "${PREFIX_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt" ]; then export LSAN_OPTIONS=suppressions="${PREFIX_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt"; fi

./tests/performance-tests/s3-performance-test --region "$REGION" --az-id "$AZ_ID" --iterations "$ITERATIONS" --commit-id "$COMMIT_ID"
cat s3-performance-test-results.json