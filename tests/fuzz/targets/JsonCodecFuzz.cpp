/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <fuzztest/fuzztest.h>
#include <gtest/gtest.h>
#include <harness/CodecFuzzTargets.h>
#include <harness/FuzzDomains.h>
#include <smithy/client/schema/Codec.h>

#include <cstdint>
#include <string>
#include <vector>

using namespace smithy::schema;

namespace {

void DeserializeNeverCrashes(const std::string& bytes) { fuzz::DeserializeNeverCrashes(JsonCodec(), bytes); }

void ReserializeIsStable(const std::string& bytes) { fuzz::ReserializeIsStable(JsonCodec(), fuzz::CodecTolerance::Json(), bytes); }

void RoundTripsTypedValues(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings) {
  fuzz::RoundTripsTypedValues(JsonCodec(), fuzz::CodecTolerance::Json(), choices, strings);
}

}  // namespace

FUZZ_TEST(JsonCodecFuzz, DeserializeNeverCrashes).WithDomains(fuzz::PayloadDomain("json.dict")).WithSeeds([] {
  return fuzz::JsonByteSeeds("JsonCodecFuzz.DeserializeNeverCrashes");
});

FUZZ_TEST(JsonCodecFuzz, ReserializeIsStable).WithDomains(fuzz::PayloadDomain("json.dict")).WithSeeds([] {
  return fuzz::JsonByteSeeds("JsonCodecFuzz.ReserializeIsStable");
});

FUZZ_TEST(JsonCodecFuzz, RoundTripsTypedValues).WithDomains(fuzz::ChoicesDomain(), fuzz::StringPoolDomain("json.dict")).WithSeeds([] {
  return fuzz::TapeSeeds("JsonCodecFuzz.RoundTripsTypedValues");
});
