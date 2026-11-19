#!/usr/bin/env bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# Builds and runs aws-cpp-sdk-schema-fuzz-tests in a Linux container. See tests/fuzz/README.md.
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
IMAGE="aws-sdk-cpp-schema-fuzz"
MODE="${1:-unit}"
shift || true

STACK_LIMIT_KB=2304
CAMPAIGN_RSS_MB="${FUZZ_CAMPAIGN_RSS_MB:-2560}"
DURATION_PATTERN='^[0-9]+[smh]$'
# Typed targets ignore a raw file, so repro rejects them.
BYTE_TARGET_PATTERN='\.(DeserializeNeverCrashes|ReserializeIsStable|DeserializeResponse[A-Za-z]*|ReadDocumentNeverCrashes|JsonMatchesReference|XmlMatchesReference)$'

usage() {
  echo "usage: $0 unit [gtest-args...] | fuzz <Suite.Test> <duration> | campaign [duration] [jobs] | repro <Suite.Test> <repo-path> | replay <Suite.Test> <repo-path>" >&2
  echo "       duration is <number><s|m|h>, e.g. 90s, 10m, 2h" >&2
  exit 2
}

require_duration() {
  if [[ ! "$1" =~ ${DURATION_PATTERN} ]]; then
    echo "invalid duration '$1': expected <number><s|m|h>, e.g. 90s, 10m, 2h" >&2
    usage
  fi
}

require_repo_file() {
  if [[ "$1" == /* || "$1" == *..* || ! -f "${REPO_ROOT}/$1" ]]; then
    echo "'$1' must be an existing file path relative to the repository root" >&2
    usage
  fi
}

ENV_ARGS=()
RUN_ARGS=()
REPRODUCERS_OUT_DIR=""
case "${MODE}" in
  unit) FUZZING=OFF; RUN_ARGS=("$@") ;;
  fuzz)
    [ $# -eq 2 ] || usage
    require_duration "$2"
    FUZZING=ON
    RUN_ARGS=("--fuzz=$1" "--fuzz_for=$2" "--time_limit_per_input=10s" "--stack_limit_kb=${STACK_LIMIT_KB}")
    REPRODUCERS_OUT_DIR="/src/tests/fuzz/reproducers" ;;
  campaign)
    [ $# -le 2 ] || usage
    FUZZING=ON
    RUN_ARGS=("${1:-30m}" "${2:-}")
    require_duration "${RUN_ARGS[0]}"
    if [[ -n "${RUN_ARGS[1]}" && ! "${RUN_ARGS[1]}" =~ ^[1-9][0-9]*$ ]]; then
      echo "jobs must be a positive integer" >&2; usage
    fi
    REPRODUCERS_OUT_DIR="/src/tests/fuzz/reproducers" ;;
  repro)
    [ $# -eq 2 ] || usage
    require_repo_file "$2"
    if [[ ! "$1" =~ ${BYTE_TARGET_PATTERN} ]]; then
      echo "repro feeds a raw byte file and $1 is a typed target that never reads it; use: $0 replay $1 $2" >&2
      exit 2
    fi
    FUZZING=ON
    RUN_ARGS=("--gtest_filter=$1" "--stack_limit_kb=${STACK_LIMIT_KB}")
    ENV_ARGS=(-e "SCHEMA_FUZZ_REPRO_FILE=/src/$2") ;;
  replay)
    [ $# -eq 2 ] || usage
    require_repo_file "$2"
    FUZZING=ON
    RUN_ARGS=("--gtest_filter=$1" "--time_limit_per_input=10s" "--stack_limit_kb=${STACK_LIMIT_KB}")
    # FuzzTest treats a set-but-empty FUZZTEST_REPLAY as active, so the variable is only passed in this mode.
    ENV_ARGS=(-e "FUZZTEST_REPLAY=/src/$2") ;;
  *) usage ;;
esac

# One process per FUZZ_TEST, so a finding in one does not stop the others.
read -r -d '' CAMPAIGN_RUN <<'EOS' || true
BIN="$1"; DURATION="$2"; JOBS="$3"; RSS_MB="$4"; STACK_KB="$5"
# Raise when fuzz targets are added.
MIN_FUZZ_TESTS=21
MEM_MB=$(( $(awk '/^MemTotal:/ {print $2}' /proc/meminfo) / 1024 ))
# Every process may grow to the RSS cap, so the pool must fit in memory.
FIT_JOBS=$(( MEM_MB * 85 / 100 / RSS_MB ))
if [ -z "${JOBS}" ]; then
  JOBS=$(( $(nproc) - 2 )); [ "${JOBS}" -gt 8 ] && JOBS=8
  [ "${JOBS}" -gt "${FIT_JOBS}" ] && JOBS="${FIT_JOBS}"
  [ "${JOBS}" -lt 1 ] && JOBS=1
elif [ "${JOBS}" -gt "${FIT_JOBS}" ]; then
  echo "campaign: warning: ${JOBS} jobs x ${RSS_MB} MiB exceeds 85% of ${MEM_MB} MiB; runs may be OOM-killed" >&2
fi
OUT="/build/campaign/$(date +%Y%m%d-%H%M%S)"
REPRO_ROOT="/src/tests/fuzz/reproducers"
mkdir -p "${OUT}"
if ! LISTING=$("${BIN}" --list_fuzz_tests); then
  echo "campaign: ${BIN} --list_fuzz_tests failed" >&2; exit 1
fi
TESTS=$(printf '%s\n' "${LISTING}" | sed -n 's/^\[\*\] Fuzz test: //p')
NUM_TESTS=$(printf '%s\n' "${TESTS}" | grep -c . || true)
if [ "${NUM_TESTS}" -lt "${MIN_FUZZ_TESTS}" ]; then
  echo "campaign: listed ${NUM_TESTS} fuzz tests, expected at least ${MIN_FUZZ_TESTS}" >&2; exit 1
fi
echo "=== campaign: $(echo "${TESTS}" | wc -w) tests, ${DURATION} each, ${JOBS} parallel, rss limit ${RSS_MB} MiB, memory ${MEM_MB} MiB, logs in ${OUT}"
run_one() {
  local t="$1"
  mkdir -p "${REPRO_ROOT}/${t}"
  FUZZTEST_REPRODUCERS_OUT_DIR="${REPRO_ROOT}/${t}" "${BIN}" --fuzz="${t}" --fuzz_for="${DURATION}" \
    --time_limit_per_input=10s --stack_limit_kb="${STACK_KB}" --rss_limit_mb="${RSS_MB}" > "${OUT}/${t}.log" 2>&1
  echo $? > "${OUT}/${t}.rc"
  rmdir "${REPRO_ROOT}/${t}" 2>/dev/null || true
  echo "done ${t} rc=$(cat "${OUT}/${t}.rc")"
}
for T in ${TESTS}; do
  while [ "$(jobs -rp | wc -l)" -ge "${JOBS}" ]; do wait -n || true; done
  echo "start ${T}"
  run_one "${T}" &
done
wait
FAILED=0
echo "=== campaign summary"
for T in ${TESTS}; do
  RC=$(cat "${OUT}/${T}.rc" 2>/dev/null || echo 255)
  STATS=$(tr -cd '\11\12\15\40-\176' < "${OUT}/${T}.log" | grep 'Corpus size.*Edges covered' | tail -1 \
    | sed -E 's/.*Corpus size: *([0-9]+).*Edges covered: *([0-9]+).*Runs\/secs: *([0-9]+).*/corpus=\1 edges=\2 runs\/s=\3/')
  if [ "${RC}" -eq 0 ]; then
    printf 'PASS %-70s %s\n' "${T}" "${STATS}"
  else
    FAILED=$(( FAILED + 1 ))
    printf 'FAIL %-70s rc=%s %s\n' "${T}" "${RC}" "${STATS}"
    mkdir -p "${REPRO_ROOT}/${T}"
    cp "${OUT}/${T}.log" "${REPRO_ROOT}/${T}/campaign.log"
    tr -cd '\11\12\15\40-\176' < "${OUT}/${T}.log" | tail -15 | cut -c1-300 | sed 's/^/    /'
  fi
done
echo "=== campaign: ${FAILED} failed"
[ "${FAILED}" -eq 0 ]
EOS

BUILD_DIR="/build/schema-fuzz-$(echo "${FUZZING}" | tr '[:upper:]' '[:lower:]')"

docker build -q -t "${IMAGE}" "${REPO_ROOT}/tools/CI/docker-file/Ubuntu/24.04-schema-fuzz" >/dev/null

DOCKER_RUN=(docker run --rm)
if [ "${MODE}" != "unit" ] && command -v caffeinate >/dev/null 2>&1; then
  # Idle sleep freezes the container clock and FuzzTest then reports a false per-input timeout.
  DOCKER_RUN=(caffeinate -i docker run --rm)
fi
if [ "$(uname -s)" = Linux ]; then
  # Run as the caller so files written through the bind mount stay theirs; take over a volume an earlier root run created.
  HOST_IDS="$(id -u):$(id -g)"
  docker run --rm -v aws-sdk-cpp-schema-fuzz-build:/build "${IMAGE}" \
    sh -c '[ "$(stat -c %u:%g /build)" = "$1" ] || chown -R "$1" /build' _ "${HOST_IDS}"
  DOCKER_RUN+=(--user "${HOST_IDS}" -e HOME=/tmp)
fi

# User-controlled values reach the inner script only as environment variables or positional parameters.
read -r -d '' INNER_RUN <<'EOS' || true
set -euo pipefail
if [ -n "${FUZZTEST_REPRODUCERS_OUT_DIR}" ]; then mkdir -p "${FUZZTEST_REPRODUCERS_OUT_DIR}"; fi
cmake -S /src -B "${BUILD_DIR}" -G Ninja \
  -DCMAKE_BUILD_TYPE=RelWithDebInfo \
  -DBUILD_ONLY=sts \
  -DBUILD_SHARED_LIBS=OFF \
  -DENABLE_TESTING=OFF \
  -DAUTORUN_UNIT_TESTS=OFF \
  -DUSE_CRT_HTTP_CLIENT=ON \
  -DENABLE_SCHEMA_FUZZ_TESTS=ON \
  -DFUZZTEST_FUZZING_MODE="${FUZZING}" >/dev/null
cmake --build "${BUILD_DIR}" --target aws-cpp-sdk-schema-fuzz-tests
BIN="${BUILD_DIR}/tests/fuzz/aws-cpp-sdk-schema-fuzz-tests"
if [ "${FUZZ_MODE}" = campaign ]; then
  bash -c "${CAMPAIGN_RUN}" _ "${BIN}" "$1" "$2" "${CAMPAIGN_RSS_MB}" "${STACK_LIMIT_KB}"
else
  "${BIN}" "$@"
fi
EOS

"${DOCKER_RUN[@]}" \
  -v "${REPO_ROOT}:/src" \
  -v aws-sdk-cpp-schema-fuzz-build:/build \
  ${ENV_ARGS[@]+"${ENV_ARGS[@]}"} \
  -e FUZZTEST_REPRODUCERS_OUT_DIR="${REPRODUCERS_OUT_DIR}" \
  -e CAMPAIGN_RUN="${CAMPAIGN_RUN}" \
  -e FUZZ_MODE="${MODE}" \
  -e FUZZING="${FUZZING}" \
  -e BUILD_DIR="${BUILD_DIR}" \
  -e CAMPAIGN_RSS_MB="${CAMPAIGN_RSS_MB}" \
  -e STACK_LIMIT_KB="${STACK_LIMIT_KB}" \
  -e SCHEMA_FUZZ_LOCALE="${SCHEMA_FUZZ_LOCALE:-}" \
  "${IMAGE}" bash -c "${INNER_RUN}" _ ${RUN_ARGS[@]+"${RUN_ARGS[@]}"}
