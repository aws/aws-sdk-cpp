/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <fuzztest/fuzztest.h>
#include <gtest/gtest.h>
#include <harness/DynamicStruct.h>
#include <harness/FuzzDomains.h>
#include <harness/FuzzSchemas.h>
#include <smithy/client/schema/Codec.h>

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <tuple>
#include <vector>

using namespace smithy::schema;
using namespace smithy::schema::fuzz;

namespace {

int Depth(const FuzzValue& v) {
  int deepest = 0;
  for (const auto& item : v.GetList()) {
    deepest = (std::max)(deepest, Depth(item));
  }
  for (const auto& entry : v.GetMap()) {
    deepest = (std::max)(deepest, Depth(entry.second));
  }
  for (const auto& entry : v.GetMembers()) {
    deepest = (std::max)(deepest, Depth(entry.second));
  }
  const bool container =
      v.GetKind() == FuzzValue::Kind::List || v.GetKind() == FuzzValue::Kind::Map || v.GetKind() == FuzzValue::Kind::Struct;
  return deepest + (container ? 1 : 0);
}

}  // namespace

TEST(FuzzDomains, EmptyTapeBuildsAValueForEverySchema) {
  const std::vector<uint64_t> choices;
  const std::vector<std::string> strings;
  for (const auto& schema : FuzzSchemas()) {
    ChoiceTape tape(choices, strings);
    const FuzzValue v = BuildStruct(*schema, tape);
    EXPECT_EQ(v.GetKind(), FuzzValue::Kind::Struct) << schema->GetId();
  }
}

TEST(FuzzDomains, ByteValuesStayInRange) {
  const auto schema = FindFuzzSchema("ByteValue");
  ASSERT_NE(schema, nullptr);
  const std::vector<std::string> strings;
  for (uint64_t raw : {uint64_t{0}, uint64_t{3}, uint64_t{255}, uint64_t{1} << 63, ~uint64_t{0}}) {
    for (uint64_t pick = 0; pick < 4; ++pick) {
      const std::vector<uint64_t> choices = {1, pick, raw, raw};
      ChoiceTape tape(choices, strings);
      const FuzzValue v = BuildStruct(*schema, tape);
      ASSERT_EQ(v.GetMembers().size(), 1u);
      for (const auto& entry : v.GetMembers()) {
        EXPECT_GE(entry.second.GetInteger(), INT8_MIN);
        EXPECT_LE(entry.second.GetInteger(), INT8_MAX);
      }
    }
  }
}

TEST(FuzzDomains, ByteSeedsIncludeGeneratedPayloads) {
  EXPECT_GT(ByteSeeds(JsonCodec(), "JsonCodecFuzz.DeserializeNeverCrashes").size(), FuzzSchemas().size());
}

TEST(FuzzDomains, ByteSeedsIncludeDeepNodePayload) {
  const Aws::String deep = DeepNodePayload(CborCodec(), DEEP_SEED_DEPTH);
  const auto seeds = ByteSeeds(CborCodec(), "CborCodecFuzz.ReserializeIsStable");
  EXPECT_NE(std::find(seeds.begin(), seeds.end(), std::make_tuple(std::string(deep.data(), deep.size()))), seeds.end());
}

// FuzzTest drops an oversized seed with only a warning.
TEST(FuzzDomains, ByteSeedsFitThePayloadLimit) {
  const auto fits = [](const std::vector<std::tuple<std::string>>& seeds) {
    return std::all_of(seeds.begin(), seeds.end(),
                       [](const std::tuple<std::string>& seed) { return std::get<0>(seed).size() <= MAX_PAYLOAD_BYTES; });
  };
  EXPECT_TRUE(fits(JsonByteSeeds("JsonCodecFuzz.ReserializeIsStable")));
  EXPECT_TRUE(fits(ByteSeeds(CborCodec(), "CborCodecFuzz.ReserializeIsStable")));
  EXPECT_TRUE(fits(ByteSeeds(XmlCodec(), "XmlCodecFuzz.ReserializeIsStable")));
}

TEST(FuzzDomains, SomeGeneratedPayloadsExceedThePayloadLimit) {
  bool exceeded = false;
  for (const auto& tapeSeed : TapeSeeds()) {
    for (const auto& schema : FuzzSchemas()) {
      ChoiceTape tape(std::get<0>(tapeSeed), std::get<1>(tapeSeed));
      const auto payload = XmlCodec().Serialize(*schema, DynamicStruct(schema, BuildStruct(*schema, tape)));
      exceeded = exceeded || (payload.IsSuccess() && payload.GetResult().size() > MAX_PAYLOAD_BYTES);
    }
  }
  EXPECT_TRUE(exceeded);
}

TEST(FuzzDomainsDeathTest, OversizedReproFileAborts) {
  const std::string path = (std::filesystem::temp_directory_path() / "schema-fuzz-oversized.bin").string();
  {
    Aws::OFStream out(path.c_str(), std::ios::binary);
    out << std::string(MAX_PAYLOAD_BYTES + 1, ' ');
  }
  setenv("SCHEMA_FUZZ_REPRO_FILE", path.c_str(), 1);
  EXPECT_DEATH(ByteSeeds(JsonCodec(), "x"), "over the 65536-byte payload limit");
  unsetenv("SCHEMA_FUZZ_REPRO_FILE");
  std::remove(path.c_str());
}

TEST(FuzzDomains, DeepNodePayloadNestsToTheRequestedDepth) {
  const Aws::String json = DeepNodePayload(JsonCodec(), 3);
  EXPECT_EQ(json, "{\"child\":{\"child\":{}}}");
  const Aws::String cbor = DeepNodePayload(CborCodec(), DEEP_SEED_DEPTH);
  size_t children = 0;
  for (size_t at = cbor.find("child"); at != Aws::String::npos; at = cbor.find("child", at + 1)) {
    ++children;
  }
  EXPECT_EQ(children, static_cast<size_t>(DEEP_SEED_DEPTH - 1));
}

TEST(FuzzDomains, DeepDocumentPayloadNestsToTheRequestedDepth) {
  EXPECT_EQ(DeepDocumentPayload(3), "{\"value\":[[]]}");
  const auto seeds = JsonByteSeeds("JsonDocumentFuzz.ReadDocumentNeverCrashes");
  const Aws::String deep = DeepDocumentPayload(DEEP_SEED_DEPTH);
  EXPECT_NE(std::find(seeds.begin(), seeds.end(), std::make_tuple(std::string(deep.data(), deep.size()))), seeds.end());
}

TEST(FuzzDomains, FindingTapesParse) {
  for (const char* suiteTest :
       {"CborCodecFuzz.RoundTripsTypedValues", "JsonCodecFuzz.RoundTripsTypedValues", "XmlCodecFuzz.RoundTripsTypedValues"}) {
    const auto tapes = LoadTapes(suiteTest);
    ASSERT_FALSE(tapes.empty()) << suiteTest;
    for (const auto& tape : tapes) {
      EXPECT_FALSE(std::get<0>(tape).empty()) << suiteTest;
    }
  }
  const auto cbor = LoadTapes("CborCodecFuzz.RoundTripsTypedValues");
  ASSERT_EQ(std::get<1>(cbor[0]).size(), 9u);
  EXPECT_EQ(std::get<1>(cbor[0])[6], "\021\021\021");
}

TEST(FuzzDomains, TimestampFindingTapeBuildsTheRecordedEntry) {
  const auto schema = FindFuzzSchema("StringTimestampMapValue");
  bool found = false;
  Aws::String built;
  for (const auto& tape : LoadTapes("JsonCodecFuzz.RoundTripsTypedValues")) {
    ChoiceTape choices(std::get<0>(tape), std::get<1>(tape));
    const FuzzValue value = BuildStruct(*schema, choices);
    built += value.Describe() + " ";
    const auto member = value.GetMembers().find(0);
    if (member != value.GetMembers().end() && member->second.GetMap().size() == 1) {
      const auto& entry = *member->second.GetMap().begin();
      found = found || (entry.first.empty() && entry.second.GetTimestamp().Millis() == -4307758798296LL);
    }
  }
  EXPECT_TRUE(found) << built;
}

TEST(FuzzDomains, TapeSeedsForATargetIncludeItsFindings) {
  EXPECT_EQ(TapeSeeds("XmlCodecFuzz.RoundTripsTypedValues").size(), TapeSeeds().size() + 1);
  EXPECT_EQ(TapeSeeds("NoSuch.Target").size(), TapeSeeds().size());
}

TEST(FuzzDomains, Base64CorpusFilesAreDecoded) {
  const auto seeds = ByteSeeds(CborCodec(), "CborCodecFuzz.ReserializeIsStable");
  const std::string indefiniteText("\xA1\x65value\x7F\x62" "ab\x60\x61" "c\xFF", 15);
  EXPECT_NE(std::find(seeds.begin(), seeds.end(), std::make_tuple(indefiniteText)), seeds.end());
}

TEST(FuzzDomains, Base64ReproFileIsDecoded) {
  const std::string path = (std::filesystem::temp_directory_path() / "schema-fuzz-repro-test.b64").string();
  {
    Aws::OFStream out(path.c_str(), std::ios::binary);
    out << "oAA=\n";
  }
  setenv("SCHEMA_FUZZ_REPRO_FILE", path.c_str(), 1);
  const auto seeds = ByteSeeds(CborCodec(), "CborCodecFuzz.DeserializeNeverCrashes");
  unsetenv("SCHEMA_FUZZ_REPRO_FILE");
  std::remove(path.c_str());
  ASSERT_EQ(seeds.size(), 1u);
  EXPECT_EQ(std::get<0>(seeds[0]), std::string("\xA0\x00", 2));
}

TEST(FuzzDomainsDeathTest, InvalidBase64SeedAborts) {
  const std::string path = (std::filesystem::temp_directory_path() / "schema-fuzz-invalid.b64").string();
  {
    Aws::OFStream out(path.c_str(), std::ios::binary);
    out << "not*base64";
  }
  setenv("SCHEMA_FUZZ_REPRO_FILE", path.c_str(), 1);
  EXPECT_DEATH(ByteSeeds(CborCodec(), "x"), "not valid base64");
  unsetenv("SCHEMA_FUZZ_REPRO_FILE");
  std::remove(path.c_str());
}

TEST(FuzzDomains, ReproFileIsTheOnlySeed) {
  const std::string path = (std::filesystem::temp_directory_path() / "schema-fuzz-repro-test.bin").string();
  {
    Aws::OFStream out(path.c_str(), std::ios::binary);
    out << "{\"x\":1}";
  }
  const char* previous = std::getenv("SCHEMA_FUZZ_REPRO_FILE");
  const std::string saved = previous != nullptr ? previous : "";
  setenv("SCHEMA_FUZZ_REPRO_FILE", path.c_str(), 1);
  const auto seeds = ByteSeeds(JsonCodec(), "JsonCodecFuzz.DeserializeNeverCrashes");
  const auto jsonSeeds = JsonByteSeeds("JsonCodecFuzz.DeserializeNeverCrashes");
  if (previous != nullptr) {
    setenv("SCHEMA_FUZZ_REPRO_FILE", saved.c_str(), 1);
  } else {
    unsetenv("SCHEMA_FUZZ_REPRO_FILE");
  }
  std::remove(path.c_str());
  ASSERT_EQ(seeds.size(), 1u);
  EXPECT_EQ(std::get<0>(seeds[0]), "{\"x\":1}");
  EXPECT_EQ(jsonSeeds, seeds);
}

TEST(FuzzDomainsDeathTest, MissingReproFileAborts) {
  const char* previous = std::getenv("SCHEMA_FUZZ_REPRO_FILE");
  const std::string saved = previous != nullptr ? previous : "";
  setenv("SCHEMA_FUZZ_REPRO_FILE", "/nonexistent/schema-fuzz-repro.bin", 1);
  EXPECT_DEATH(ByteSeeds(JsonCodec(), "x"), "SCHEMA_FUZZ_REPRO_FILE");
  if (previous != nullptr) {
    setenv("SCHEMA_FUZZ_REPRO_FILE", saved.c_str(), 1);
  } else {
    unsetenv("SCHEMA_FUZZ_REPRO_FILE");
  }
}

TEST(FuzzDomains, TapeCanSelectLargeStringsAndLists) {
  const std::vector<std::string> strings;
  {
    const std::vector<uint64_t> choices = {1, 3, 1};
    ChoiceTape tape(choices, strings);
    const FuzzValue v = BuildStruct(*FindFuzzSchema("StringValue"), tape);
    ASSERT_EQ(v.GetMembers().size(), 1u);
    EXPECT_GT(v.GetMembers().begin()->second.GetString().size(), 65535u);
  }
  {
    const std::vector<uint64_t> choices = {1, 1};
    ChoiceTape tape(choices, strings);
    const FuzzValue v = BuildStruct(*FindFuzzSchema("StringListValue"), tape);
    ASSERT_EQ(v.GetMembers().size(), 1u);
    EXPECT_GE(v.GetMembers().begin()->second.GetList().size(), 24u);
  }
}

TEST(FuzzDomains, SizeBudgetFallsBackToSmallSizes) {
  const std::vector<std::string> strings;
  std::vector<uint64_t> choices;
  for (int i = 0; i < 16; ++i) {
    choices.push_back(3);
    choices.push_back(1);
  }
  ChoiceTape tape(choices, strings);
  size_t total = 0;
  for (int i = 0; i < 16; ++i) {
    total += tape.NextSizedString().size();
  }
  EXPECT_LE(total, VALUE_BYTE_BUDGET + 16);
}

TEST(FuzzDomains, DictionariesLoad) {
  EXPECT_FALSE(LoadDictionary("json.dict").empty());
  EXPECT_FALSE(LoadDictionary("cbor.dict").empty());
  EXPECT_FALSE(LoadDictionary("xml.dict").empty());
}

void GeneratedValuesAreDeterministicBoundedAndJsonSerializable(const std::vector<uint64_t>& choices,
                                                               const std::vector<std::string>& strings) {
  JsonCodec codec;
  for (const auto& schema : FuzzSchemas()) {
    ChoiceTape first(choices, strings);
    ChoiceTape second(choices, strings);
    const FuzzValue a = BuildStruct(*schema, first);
    const FuzzValue b = BuildStruct(*schema, second);
    ASSERT_EQ(FindMismatch(a, b, *schema, CodecTolerance::Exact()), "") << schema->GetId();
    ASSERT_LE(Depth(a), 2 * VALUE_DEPTH_BUDGET + 2) << schema->GetId();
    DynamicStruct shape(schema, a);
    const auto payload = codec.Serialize(*schema, shape);
    ASSERT_TRUE(payload.IsSuccess()) << schema->GetId() << ": " << payload.GetError().GetMessage();
  }
}
FUZZ_TEST(FuzzDomains, GeneratedValuesAreDeterministicBoundedAndJsonSerializable)
    .WithDomains(ChoicesDomain(), StringPoolDomain("json.dict"))
    .WithSeeds(TapeSeeds());
