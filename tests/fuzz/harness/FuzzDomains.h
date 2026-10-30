/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <fuzztest/fuzztest.h>
#include <harness/FuzzValue.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/Schema.h>

#include <cstdint>
#include <memory>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace smithy {
namespace schema {
namespace fuzz {

constexpr int VALUE_DEPTH_BUDGET = 8;
constexpr size_t VALUE_BYTE_BUDGET = 256 * 1024;
constexpr size_t VALUE_ELEMENT_BUDGET = 2048;
constexpr int DEEP_SEED_DEPTH = MAX_NESTING_DEPTH;
constexpr size_t MAX_PAYLOAD_BYTES = 64 * 1024;

// An exhausted tape answers 0, so every tape yields a valid value.
class ChoiceTape final {
 public:
  ChoiceTape(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings)
      : m_choices(choices), m_strings(strings), m_bytesLeft(VALUE_BYTE_BUDGET), m_elementsLeft(VALUE_ELEMENT_BUDGET) {}

  uint64_t Next() { return m_next < m_choices.size() ? m_choices[m_next++] : 0; }
  uint64_t Below(uint64_t bound) { return bound == 0 ? 0 : Next() % bound; }
  bool Flip() { return Below(2) == 1; }
  Aws::String NextString();
  Aws::String NextSizedString();
  uint64_t NextCount(uint64_t smallBound);
  void EnterBuild();
  void LeaveBuild();

 private:
  bool TakeBytes(size_t count);
  bool TakeElements(size_t count);

  const std::vector<uint64_t>& m_choices;
  const std::vector<std::string>& m_strings;
  size_t m_next = 0;
  size_t m_nextString = 0;
  size_t m_buildDepth = 0;
  size_t m_bytesLeft;
  size_t m_elementsLeft;
};

FuzzValue BuildStruct(const Schema& structSchema, ChoiceTape& tape, int depthBudget = VALUE_DEPTH_BUDGET);

std::shared_ptr<const smithy::schema::Document> BuildDocument(ChoiceTape& tape, int depthBudget = VALUE_DEPTH_BUDGET);

std::vector<std::string> LoadDictionary(const char* fileName);

using TapeSeed = std::tuple<std::vector<uint64_t>, std::vector<std::string>>;
std::vector<TapeSeed> TapeSeeds();

std::vector<TapeSeed> LoadTapes(const char* suiteTest);

std::vector<TapeSeed> TapeSeeds(const char* suiteTest);

Aws::String DeepNodePayload(const Codec& codec, int depth);

Aws::String DeepDocumentPayload(int depth);

bool ReproFileSet();

std::vector<std::tuple<std::string>> ByteSeeds(const Codec& codec, const char* suiteTest);

std::vector<std::tuple<std::string>> JsonByteSeeds(const char* suiteTest);

inline auto ChoicesDomain() { return fuzztest::VectorOf(fuzztest::Arbitrary<uint64_t>()).WithMaxSize(1024); }

inline auto StringPoolDomain(const char* dictionary) {
  return fuzztest::VectorOf(fuzztest::String().WithMaxSize(64).WithDictionary(LoadDictionary(dictionary))).WithMaxSize(32);
}

inline auto PayloadDomain(std::vector<std::string> dictionary) {
  return fuzztest::String().WithMaxSize(MAX_PAYLOAD_BYTES).WithDictionary(std::move(dictionary));
}

inline auto PayloadDomain(const char* dictionary) { return PayloadDomain(LoadDictionary(dictionary)); }

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
