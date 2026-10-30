/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <gtest/gtest.h>
#include <harness/CodecFuzzTargets.h>
#include <harness/FuzzDomains.h>
#include <harness/FuzzValue.h>
#include <smithy/client/schema/Codec.h>

#include <clocale>
#include <string>
#include <tuple>

using namespace smithy::schema;
using namespace smithy::schema::fuzz;

namespace {

void ReplayFindings(const char* suiteTest, const Codec& codec, const CodecTolerance& tolerance) {
  const auto tapes = LoadTapes(suiteTest);
  EXPECT_FALSE(tapes.empty()) << suiteTest;
  for (const auto& tape : tapes) {
    RoundTripsTypedValues(codec, tolerance, std::get<0>(tape), std::get<1>(tape));
  }
}

void RoundTripSeedsUnderNumericLocale(const char* name) {
  const std::string previous = std::setlocale(LC_NUMERIC, nullptr);
  if (std::setlocale(LC_NUMERIC, name) == nullptr) {
    GTEST_SKIP() << name << " is not installed";
  }
  for (const auto& tape : TapeSeeds()) {
    RoundTripsTypedValues(JsonCodec(), CodecTolerance::Json(), std::get<0>(tape), std::get<1>(tape));
    RoundTripsTypedValues(CborCodec(), CodecTolerance::Cbor(), std::get<0>(tape), std::get<1>(tape));
    RoundTripsTypedValues(XmlCodec(), CodecTolerance::Xml(), std::get<0>(tape), std::get<1>(tape));
  }
  std::setlocale(LC_NUMERIC, previous.c_str());
}

}  // namespace

TEST(CodecRegression, RoundTripsUnderCommaDecimalLocale) { RoundTripSeedsUnderNumericLocale("de_DE.UTF-8"); }

TEST(CodecRegression, JsonFindingsRoundTrip) {
  ReplayFindings("JsonCodecFuzz.RoundTripsTypedValues", JsonCodec(), CodecTolerance::Json());
}

TEST(CodecRegression, CborFindingsRoundTrip) {
  ReplayFindings("CborCodecFuzz.RoundTripsTypedValues", CborCodec(), CodecTolerance::Cbor());
}

TEST(CodecRegression, XmlFindingsRoundTrip) { ReplayFindings("XmlCodecFuzz.RoundTripsTypedValues", XmlCodec(), CodecTolerance::Xml()); }
