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

void DeserializeNeverCrashes(const std::string& bytes) { fuzz::DeserializeNeverCrashes(XmlCodec(), bytes); }

void ReserializeIsStable(const std::string& bytes) { fuzz::ReserializeIsStable(XmlCodec(), fuzz::CodecTolerance::Xml(), bytes); }

void RoundTripsTypedValues(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings) {
  fuzz::RoundTripsTypedValues(XmlCodec(), fuzz::CodecTolerance::Xml(), choices, strings);
}

}  // namespace

FUZZ_TEST(XmlCodecFuzz, DeserializeNeverCrashes).WithDomains(fuzz::PayloadDomain("xml.dict")).WithSeeds([] {
  return fuzz::ByteSeeds(XmlCodec(), "XmlCodecFuzz.DeserializeNeverCrashes");
});

FUZZ_TEST(XmlCodecFuzz, ReserializeIsStable).WithDomains(fuzz::PayloadDomain("xml.dict")).WithSeeds([] {
  return fuzz::ByteSeeds(XmlCodec(), "XmlCodecFuzz.ReserializeIsStable");
});

FUZZ_TEST(XmlCodecFuzz, RoundTripsTypedValues).WithDomains(fuzz::ChoicesDomain(), fuzz::StringPoolDomain("xml.dict")).WithSeeds([] {
  return fuzz::TapeSeeds("XmlCodecFuzz.RoundTripsTypedValues");
});
