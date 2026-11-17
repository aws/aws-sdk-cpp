/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/HttpBindingValues.h>

#include <cmath>

using namespace smithy::schema;
namespace hbv = smithy::schema::HttpBindingValues;
using Format = TimestampFormatTrait::Format;

class HttpBindingValuesTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(HttpBindingValuesTest, FormatsScalars) {
  EXPECT_EQ("true", hbv::FormatBoolean(true));
  EXPECT_EQ("false", hbv::FormatBoolean(false));
  EXPECT_EQ("1.1", hbv::FormatDouble(1.1));
  EXPECT_EQ("2", hbv::FormatDouble(2.0));
  EXPECT_EQ("0.1", hbv::FormatDouble(0.1));
  EXPECT_EQ("NaN", hbv::FormatDouble(std::nan("")));
  EXPECT_EQ("Infinity", hbv::FormatDouble(HUGE_VAL));
  EXPECT_EQ("-Infinity", hbv::FormatDouble(-HUGE_VAL));
}

TEST_F(HttpBindingValuesTest, EncodesUnreservedOnly) {
  EXPECT_EQ("a-b_c.d~e", hbv::EncodeUnreserved("a-b_c.d~e", false));
  EXPECT_EQ("%20%25%3A%2F%3F", hbv::EncodeUnreserved(" %:/?", false));
  EXPECT_EQ("foo/bar%20baz", hbv::EncodeUnreserved("foo/bar baz", true));
  EXPECT_EQ("%C3%A9", hbv::EncodeUnreserved("\xC3\xA9", false));
}

TEST_F(HttpBindingValuesTest, JoinsListHeadersQuotingDelimiters) {
  // restJson1 InputAndOutputWithQuotedStringHeaders.
  EXPECT_EQ(R"(b, "c,d", "\"e\"", f)", hbv::JoinHeaderList({"b", "c,d", "\"e\"", "f"}));
  EXPECT_EQ("Mon, 16 Dec 2019 23:48:18 GMT, Mon, 16 Dec 2019 23:48:18 GMT",
            hbv::JoinHeaderList({"Mon, 16 Dec 2019 23:48:18 GMT", "Mon, 16 Dec 2019 23:48:18 GMT"}, false));
  EXPECT_EQ("", hbv::JoinHeaderList({}));
}

TEST_F(HttpBindingValuesTest, SplitsListHeadersRespectingQuotes) {
  const Aws::Vector<Aws::String> expected{"b", "c,d", "\"e\"", "f"};
  EXPECT_EQ(expected, hbv::SplitHeaderList(R"(b, "c,d", "\"e\"", f)"));
  EXPECT_EQ((Aws::Vector<Aws::String>{"a", "b", "c"}), hbv::SplitHeaderList("a,b , c"));
  EXPECT_EQ((Aws::Vector<Aws::String>{" spaced "}), hbv::SplitHeaderList(R"(" spaced ")"));
  EXPECT_EQ(expected, hbv::SplitHeaderList(hbv::JoinHeaderList(expected)));
}

TEST_F(HttpBindingValuesTest, SplitsHttpDateLists) {
  const Aws::Vector<Aws::String> expected{"Mon, 16 Dec 2019 23:48:18 GMT", "Tue, 17 Dec 2019 23:48:18 GMT"};
  EXPECT_EQ(expected, hbv::SplitHttpDateList("Mon, 16 Dec 2019 23:48:18 GMT, Tue, 17 Dec 2019 23:48:18 GMT"));
}

TEST_F(HttpBindingValuesTest, ParsesScalarsStrictly) {
  EXPECT_EQ(true, hbv::ParseBoolean("true").value());
  EXPECT_EQ(false, hbv::ParseBoolean(" false ").value());
  EXPECT_FALSE(hbv::ParseBoolean("1").has_value());
  EXPECT_EQ(-42, hbv::ParseInteger("-42").value());
  EXPECT_FALSE(hbv::ParseInteger("4x").has_value());
  EXPECT_FALSE(hbv::ParseInteger("").has_value());
  EXPECT_DOUBLE_EQ(1.1, hbv::ParseDouble("1.1").value());
  EXPECT_TRUE(std::isnan(hbv::ParseDouble("NaN").value()));
  EXPECT_EQ(-HUGE_VAL, hbv::ParseDouble("-Infinity").value());
  EXPECT_FALSE(hbv::ParseDouble("abc").has_value());
}

TEST_F(HttpBindingValuesTest, ParsesTimestampsPerFormat) {
  EXPECT_EQ(1576540098, hbv::ParseTimestamp("Mon, 16 Dec 2019 23:48:18 GMT", Format::HTTP_DATE)->Seconds());
  EXPECT_EQ(1576540098, hbv::ParseTimestamp("2019-12-16T23:48:18Z", Format::DATE_TIME)->Seconds());
  EXPECT_EQ(1576540098500, hbv::ParseTimestamp("1576540098.5", Format::EPOCH_SECONDS)->Millis());
  EXPECT_FALSE(hbv::ParseTimestamp("not a date", Format::DATE_TIME).has_value());
}

TEST_F(HttpBindingValuesTest, OmitsHopByHopPrefixHeaders) {
  EXPECT_TRUE(hbv::IsOmittedPrefixHeader("content-length"));
  EXPECT_TRUE(hbv::IsOmittedPrefixHeader("host"));
  EXPECT_FALSE(hbv::IsOmittedPrefixHeader("x-foo"));
}
