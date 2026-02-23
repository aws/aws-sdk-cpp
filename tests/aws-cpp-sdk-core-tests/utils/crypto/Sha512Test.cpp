/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/Sha512.h>
#include <aws/core/utils/memory/stl/AWSArray.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <sstream>

using namespace Aws::Utils::Crypto;

class Sha512Test : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(Sha512Test, Sha512CalculateString) {
  Sha512 hash{};
  const Aws::String text{"Makoto Yuki"};
  const auto output = hash.Calculate(text);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ(
      "e218f00785dd854010379a632a36968557bffdba151f40a70f3b9647274510a50607e0b2a51632e6daafc50e9a784f7612919a086ef178d4edf5a3448be40087",
      seen.c_str());
}

TEST_F(Sha512Test, Sha512CalculateEmptyString) {
  Sha512 hash{};
  const Aws::String text{""};
  const auto output = hash.Calculate(text);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ(
      "cf83e1357eefb8bdf1542850d66d8007d620e4050b5715dc83f4a921d36ce9ce47d0d13c5d85f2b0ff8318d2877eec2f63b931bd47417a81a538327af927da3e",
      seen.c_str());
}

TEST_F(Sha512Test, Sha512CalculateStream) {
  Sha512 hash{};
  Aws::StringStream ss{};
  ss << "Yukari Takeba";
  const auto output = hash.Calculate(ss);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ(
      "56da488485067b5443ed7264aa22e413a55d74104886af4f4af39488a11c3d604d5d164ff3c9d550e8724f701d225ae9cd05230716dddfd5d1dd0bd2fc66c31c",
      seen.c_str());
}

TEST_F(Sha512Test, Sha512CalculateEmptyStream) {
  Sha512 hash{};
  Aws::StringStream ss{};
  const auto output = hash.Calculate(ss);
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ(
      "cf83e1357eefb8bdf1542850d66d8007d620e4050b5715dc83f4a921d36ce9ce47d0d13c5d85f2b0ff8318d2877eec2f63b931bd47417a81a538327af927da3e",
      seen.c_str());
}

TEST_F(Sha512Test, Sha512Update) {
  Sha512 hash{};
  Aws::Array<char, 12> text{"Junpei Iori"};
  hash.Update(reinterpret_cast<unsigned char*>(text.data()), text.size() - 1);
  const auto output = hash.GetHash();
  EXPECT_TRUE(output.IsSuccess());
  const auto seen = Aws::Utils::HashingUtils::HexEncode(output.GetResult());
  EXPECT_STREQ(
      "7990a157cc4f37faf54f80909affe831aa29e628ab8e6dc588715b7bb1891fbb8cd6af82c086e7dd74f4839936e5aef7b3cba3b8ce3502dc2541ae9a95094eb7",
      seen.c_str());
}
