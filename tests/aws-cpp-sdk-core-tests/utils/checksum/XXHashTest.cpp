/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/checksum/XXHash.h>
#include <aws/core/utils/memory/stl/AWSArray.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <sstream>

using namespace Aws::Utils::Checksum;
using namespace Aws::Utils::Crypto;

class XXHashTest : public Aws::Testing::AwsCppSdkGTestSuite {};

/*
 * XXHash64 Tests
 */

TEST_F(XXHashTest, XXHash64CalculateString) {
  XXHash64 hash{};
  const Aws::String text{"Makoto Yuki"};
  const auto output = hash.Calculate(text);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("ae16dd99c273c40c", seen.c_str());
}

TEST_F(XXHashTest, XXHash64CalculateEmptyString) {
  XXHash64 hash{};
  const Aws::String text{""};
  const auto output = hash.Calculate(text);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("ef46db3751d8e999", seen.c_str());
}

TEST_F(XXHashTest, XXHash64CalculateStream) {
  XXHash64 hash{};
  Aws::StringStream ss{};
  ss << "Yukari Takeba";
  const auto output = hash.Calculate(ss);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("4d96b263f9e33fa2", seen.c_str());
}

TEST_F(XXHashTest, XXHash64CalculateEmptyStream) {
  XXHash64 hash{};
  Aws::StringStream ss{};
  const auto output = hash.Calculate(ss);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("ef46db3751d8e999", seen.c_str());
}

TEST_F(XXHashTest, XXHash64Update) {
  XXHash64 hash{};
  Aws::Array<char, 12> text{"Junpei Iori"};
  hash.Update(reinterpret_cast<unsigned char*>(text.data()), text.size() - 1);
  const auto output = hash.GetHash();
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("97b1195f55c2be2a", seen.c_str());
}

/*
 * XXHash3 Tests
 */

TEST_F(XXHashTest, XXHash3CalculateString) {
  XXHash3 hash{};
  const Aws::String text{"Makoto Yuki"};
  const auto output = hash.Calculate(text);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("0251220ee488b11c", seen.c_str());
}

TEST_F(XXHashTest, XXHash3CalculateEmptyString) {
  XXHash3 hash{};
  const Aws::String text{""};
  const auto output = hash.Calculate(text);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("2d06800538d394c2", seen.c_str());
}

TEST_F(XXHashTest, XXHash3CalculateStream) {
  XXHash3 hash{};
  Aws::StringStream ss{};
  ss << "Yukari Takeba";
  const auto output = hash.Calculate(ss);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("152bc4abd8e5e19a", seen.c_str());
}

TEST_F(XXHashTest, XXHash3CalculateEmptyStream) {
  XXHash3 hash{};
  Aws::StringStream ss{};
  const auto output = hash.Calculate(ss);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("2d06800538d394c2", seen.c_str());
}

TEST_F(XXHashTest, XXHash3Update) {
  XXHash3 hash{};
  Aws::Array<char, 12> text{"Junpei Iori"};
  hash.Update(reinterpret_cast<unsigned char*>(text.data()), text.size() - 1);
  const auto output = hash.GetHash();
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("d89feda404a509e5", seen.c_str());
}

/*
 * XXHash128 Tests
 */

TEST_F(XXHashTest, XXHash128CalculateString) {
  XXHash128 hash{};
  const Aws::String text{"Makoto Yuki"};
  const auto output = hash.Calculate(text);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("a7936e52bdf9189a41e1463008334f10", seen.c_str());
}

TEST_F(XXHashTest, XXHash128CalculateEmptyString) {
  XXHash128 hash{};
  const Aws::String text{""};
  const auto output = hash.Calculate(text);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("99aa06d3014798d86001c324468d497f", seen.c_str());
}

TEST_F(XXHashTest, XXHash128CalculateStream) {
  XXHash128 hash{};
  Aws::StringStream ss{};
  ss << "Yukari Takeba";
  const auto output = hash.Calculate(ss);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("5a0517797cc79a90de30a81c63332cd6", seen.c_str());
}

TEST_F(XXHashTest, XXHash128CalculateEmptyStream) {
  XXHash128 hash{};
  Aws::StringStream ss{};
  const auto output = hash.Calculate(ss);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("99aa06d3014798d86001c324468d497f", seen.c_str());
}

TEST_F(XXHashTest, XXHash128Update) {
  XXHash128 hash{};
  Aws::Array<char, 12> text{"Junpei Iori"};
  hash.Update(reinterpret_cast<unsigned char*>(text.data()), text.size() - 1);
  const auto output = hash.GetHash();
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ("89f50b35550be238d2b197b9f04b1c49", seen.c_str());
}
