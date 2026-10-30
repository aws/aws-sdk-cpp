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

void DeserializeNeverCrashes(const std::string& bytes) { fuzz::DeserializeNeverCrashes(CborCodec(), bytes); }

void ReserializeIsStable(const std::string& bytes) { fuzz::ReserializeIsStable(CborCodec(), fuzz::CodecTolerance::Cbor(), bytes); }

void RoundTripsTypedValues(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings) {
  fuzz::RoundTripsTypedValues(CborCodec(), fuzz::CodecTolerance::Cbor(), choices, strings);
}

}  // namespace

FUZZ_TEST(CborCodecFuzz, DeserializeNeverCrashes).WithDomains(fuzz::PayloadDomain("cbor.dict")).WithSeeds([] {
  return fuzz::ByteSeeds(CborCodec(), "CborCodecFuzz.DeserializeNeverCrashes");
});

FUZZ_TEST(CborCodecFuzz, ReserializeIsStable).WithDomains(fuzz::PayloadDomain("cbor.dict")).WithSeeds([] {
  return fuzz::ByteSeeds(CborCodec(), "CborCodecFuzz.ReserializeIsStable");
});

FUZZ_TEST(CborCodecFuzz, RoundTripsTypedValues).WithDomains(fuzz::ChoicesDomain(), fuzz::StringPoolDomain("cbor.dict")).WithSeeds([] {
  return fuzz::TapeSeeds("CborCodecFuzz.RoundTripsTypedValues");
});
