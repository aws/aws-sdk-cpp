/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/local/Random.h>

#include <cstddef>
#include <mutex>
#include <random>
#include <thread>

std::mt19937::result_type Aws::Utils::GetRandomValue() {
  static size_t const processRandomSeed = std::random_device{}();
  static std::mt19937 threadRandomSeedGen(processRandomSeed);
  // Threads can be re-used (esp. on OS X), generate a true random per-thread random seed
  static std::mutex threadRandomSeedGenMtx;
  thread_local std::mt19937 gen([]() -> size_t {
    std::unique_lock<std::mutex> const lock(threadRandomSeedGenMtx);
    return static_cast<size_t>(std::hash<std::thread::id>{}(std::this_thread::get_id()) ^ threadRandomSeedGen());
  }());

  return gen();
}
