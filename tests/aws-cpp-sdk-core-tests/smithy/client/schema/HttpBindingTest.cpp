/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/HttpBinding.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;
using Aws::Utils::DateTime;

namespace {

constexpr char TAG[] = "HttpBindingTest";

template <typename T, typename... Args>
TraitEntry MakeTrait(Args&&... args) {
  return {T::KEY(), Aws::MakeShared<T>(TAG, std::forward<Args>(args)...)};
}

const Schema& Member(const Schema& root, const char* name) { return **root.GetMember(name); }
const Schema& Item(const Schema& listMember) { return **(*listMember.GetMemberTarget())->GetMember("member"); }
const Schema& MapValue(const Schema& mapMember) { return **(*mapMember.GetMemberTarget())->GetMember("value"); }

std::shared_ptr<const Schema> StringList() {
  return Schema::ListBuilder("StringList").PutMember("member", Schema::CreateString("member")).Build();
}
std::shared_ptr<const Schema> StringMap() {
  return Schema::MapBuilder("StringMap")
      .PutMember("key", Schema::CreateString("key"))
      .PutMember("value", Schema::CreateString("value"))
      .Build();
}

/** Records every member the deserializer hands it, as text, keyed by member name. */
class Recorder final : public SerializableStruct {
 public:
  explicit Recorder(const Schema& schema) : m_schema(schema) {}
  const Schema& GetSchema() const override { return m_schema; }
  void SerializeMembers(ShapeSerializer&) const override {}
  void From(const Schema& member, ShapeDeserializer& de) override {
    const Aws::String name = member.GetMemberName();
    switch (member.GetType()) {
      case ShapeType::Integer:
        m_values[name] = Aws::Utils::StringUtils::to_string(de.ReadInteger(member).value());
        break;
      case ShapeType::Boolean:
        m_values[name] = de.ReadBoolean(member).value() ? "true" : "false";
        break;
      case ShapeType::Timestamp:
        m_values[name] = Aws::Utils::StringUtils::to_string(de.ReadTimestamp(member).value().Seconds());
        break;
      case ShapeType::List: {
        Aws::String joined;
        de.ReadList(member, [&](ShapeDeserializer& item) { joined += "[" + item.ReadString(Item(member)).value() + "]"; });
        m_values[name] = joined;
        break;
      }
      case ShapeType::Map: {
        Aws::String joined;
        de.ReadMap(member, [&](const Aws::String& key, ShapeDeserializer& value) {
          joined += "[" + key + "=" + value.ReadString(MapValue(member)).value() + "]";
        });
        m_values[name] = joined;
        break;
      }
      default:
        m_values[name] = de.ReadString(member).value();
    }
  }
  const Aws::Map<Aws::String, Aws::String>& Values() const { return m_values; }

 private:
  const Schema& m_schema;
  Aws::Map<Aws::String, Aws::String> m_values;
};

}  // namespace

class HttpBindingTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(HttpBindingTest, ClassifiesMembersPerDirection) {
  const auto root = Schema::StructureBuilder("S")
                        .PutMember("q", Schema::CreateString("q"), {MakeTrait<HttpQueryTrait>("q")})
                        .PutMember("l", Schema::CreateString("l"), {MakeTrait<HttpLabelTrait>()})
                        .PutMember("c", Schema::CreateInteger("c"), {MakeTrait<HttpResponseCodeTrait>()})
                        .PutMember("h", Schema::CreateString("h"), {MakeTrait<HttpHeaderTrait>("X-H")})
                        .PutMember("b", Schema::CreateString("b"))
                        .Build();
  EXPECT_EQ(HttpBinding::Query, ClassifyHttpMember(Member(*root, "q"), HttpBindingDirection::Request));
  EXPECT_EQ(HttpBinding::Body, ClassifyHttpMember(Member(*root, "q"), HttpBindingDirection::Response));
  EXPECT_EQ(HttpBinding::Label, ClassifyHttpMember(Member(*root, "l"), HttpBindingDirection::Request));
  EXPECT_EQ(HttpBinding::Body, ClassifyHttpMember(Member(*root, "c"), HttpBindingDirection::Request));
  EXPECT_EQ(HttpBinding::Status, ClassifyHttpMember(Member(*root, "c"), HttpBindingDirection::Response));
  EXPECT_EQ(HttpBinding::Header, ClassifyHttpMember(Member(*root, "h"), HttpBindingDirection::Response));
  EXPECT_EQ(HttpBinding::Body, ClassifyHttpMember(Member(*root, "b"), HttpBindingDirection::Request));
}

TEST_F(HttpBindingTest, SerializesEveryRequestBinding) {
  const auto root = Schema::StructureBuilder("Input")
                        .PutMember("id", Schema::CreateString("id"), {MakeTrait<HttpLabelTrait>()})
                        .PutMember("path", Schema::CreateString("path"), {MakeTrait<HttpLabelTrait>()})
                        .PutMember("flag", Schema::CreateBoolean("flag"), {MakeTrait<HttpQueryTrait>("Flag")})
                        .PutMember("tags", StringList(), {MakeTrait<HttpQueryTrait>("tag")})
                        .PutMember("when", Schema::CreateTimestamp("when"), {MakeTrait<HttpQueryTrait>("when")})
                        .PutMember("params", StringMap(), {MakeTrait<HttpQueryParamsTrait>()})
                        .PutMember("count", Schema::CreateInteger("count"), {MakeTrait<HttpHeaderTrait>("X-Count")})
                        .PutMember("list", StringList(), {MakeTrait<HttpHeaderTrait>("X-List")})
                        .PutMember("stamp", Schema::CreateTimestamp("stamp"), {MakeTrait<HttpHeaderTrait>("X-Stamp")})
                        .PutMember("json", Schema::CreateString("json"), {MakeTrait<HttpHeaderTrait>("X-Json"), MakeTrait<MediaTypeTrait>("application/json")})
                        .PutMember("meta", StringMap(), {MakeTrait<HttpPrefixHeadersTrait>("X-Meta-")})
                        .PutMember("host", Schema::CreateString("host"), {MakeTrait<HostLabelTrait>()})
                        .PutMember("name", Schema::CreateString("name"))
                        .Build();
  const DateTime when(static_cast<int64_t>(1576540098000));
  LambdaStruct input(*root, [&](ShapeSerializer& s) {
    s.WriteString(Member(*root, "id"), "a b");
    s.WriteString(Member(*root, "path"), "x/y z");
    s.WriteBoolean(Member(*root, "flag"), true);
    s.WriteList(Member(*root, "tags"), 2, [&](ShapeSerializer& items) {
      items.WriteString(Item(Member(*root, "tags")), "t1");
      items.WriteString(Item(Member(*root, "tags")), "t 2");
    });
    s.WriteTimestamp(Member(*root, "when"), when);
    s.WriteMap(Member(*root, "params"), 2, [&](MapSerializer& entries) {
      entries.WriteEntry("Flag", [&](ShapeSerializer& v) { v.WriteString(MapValue(Member(*root, "params")), "ignored"); });
      entries.WriteEntry("extra", [&](ShapeSerializer& v) { v.WriteString(MapValue(Member(*root, "params")), "e"); });
    });
    s.WriteInteger(Member(*root, "count"), 7);
    s.WriteList(Member(*root, "list"), 2, [&](ShapeSerializer& items) {
      items.WriteString(Item(Member(*root, "list")), "a");
      items.WriteString(Item(Member(*root, "list")), "b,c");
    });
    s.WriteTimestamp(Member(*root, "stamp"), when);
    s.WriteString(Member(*root, "json"), "true");
    s.WriteMap(Member(*root, "meta"), 1, [&](MapSerializer& entries) {
      entries.WriteEntry("k", [&](ShapeSerializer& v) { v.WriteString(MapValue(Member(*root, "meta")), "v"); });
    });
    s.WriteString(Member(*root, "host"), "bucket");
    s.WriteString(Member(*root, "name"), "body");
  });
  OperationRequestContext operation{"", "", "/items/{id}/{path+}?x-id=Get", "{host}.data."};

  const auto outcome = RestJsonProtocol().SerializeHttpRequest(operation, input);
  ASSERT_TRUE(outcome.IsSuccess()) << outcome.GetError().GetMessage();
  const HttpRequestParts& parts = outcome.GetResult();
  EXPECT_EQ("/items/a%20b/x/y%20z", parts.path);
  EXPECT_EQ("x-id=Get&Flag=true&tag=t1&tag=t%202&when=2019-12-16T23%3A48%3A18Z&extra=e", parts.query);
  EXPECT_EQ("bucket.data.", parts.hostPrefix);
  EXPECT_EQ("7", parts.headers.at("X-Count"));
  EXPECT_EQ("a, \"b,c\"", parts.headers.at("X-List"));
  EXPECT_EQ("Mon, 16 Dec 2019 23:48:18 GMT", parts.headers.at("X-Stamp"));
  EXPECT_EQ("dHJ1ZQ==", parts.headers.at("X-Json"));
  EXPECT_EQ("v", parts.headers.at("X-Meta-k"));
  ASSERT_TRUE(parts.body.has_value());
  EXPECT_EQ(R"({"host":"bucket","name":"body"})", *parts.body);
  EXPECT_EQ("application/json", parts.contentType);
}

TEST_F(HttpBindingTest, MissingLabelIsASerializationError) {
  const auto root = Schema::StructureBuilder("Input").PutMember("id", Schema::CreateString("id"), {MakeTrait<HttpLabelTrait>()}).Build();
  LambdaStruct input(*root, [](ShapeSerializer&) {});
  const auto outcome = RestJsonProtocol().SerializeHttpRequest(OperationRequestContext{"", "", "/items/{id}", ""}, input);
  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_NE(Aws::String::npos, outcome.GetError().GetMessage().find("'id'"));
}

TEST_F(HttpBindingTest, PayloadsChooseTheBodyAndContentType) {
  const auto nested = Schema::StructureBuilder("Nested").PutMember("a", Schema::CreateString("a")).Build();
  const auto structRoot = Schema::StructureBuilder("Input").PutMember("payload", nested, {MakeTrait<HttpPayloadTrait>()}).Build();
  // An unset structure payload sends {} on restJson1.
  LambdaStruct unset(*structRoot, [](ShapeSerializer&) {});
  auto outcome = RestJsonProtocol().SerializeHttpRequest(OperationRequestContext{"", "", "/", ""}, unset);
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("{}", *outcome.GetResult().body);
  EXPECT_EQ("application/json", outcome.GetResult().contentType);

  const auto blobRoot = Schema::StructureBuilder("Input").PutMember("data", Schema::CreateBlob("data"), {MakeTrait<HttpPayloadTrait>()}).Build();
  LambdaStruct blob(*blobRoot, [&](ShapeSerializer& s) {
    s.WriteBlob(Member(*blobRoot, "data"), Aws::Utils::ByteBuffer(reinterpret_cast<const unsigned char*>("raw"), 3));
  });
  outcome = RestJsonProtocol().SerializeHttpRequest(OperationRequestContext{"", "", "/", ""}, blob);
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("raw", *outcome.GetResult().body);
  EXPECT_EQ("application/octet-stream", outcome.GetResult().contentType);

  // No body members and no payload: no body at all.
  const auto headerOnly = Schema::StructureBuilder("Input").PutMember("h", Schema::CreateString("h"), {MakeTrait<HttpHeaderTrait>("X-H")}).Build();
  LambdaStruct headers(*headerOnly, [&](ShapeSerializer& s) { s.WriteString(Member(*headerOnly, "h"), "v"); });
  outcome = RestJsonProtocol().SerializeHttpRequest(OperationRequestContext{"", "", "/", ""}, headers);
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_FALSE(outcome.GetResult().body.has_value());
  EXPECT_EQ("", outcome.GetResult().contentType);
}

TEST_F(HttpBindingTest, DeserializesHeadersStatusAndBody) {
  const auto root = Schema::StructureBuilder("Output")
                        .PutMember("count", Schema::CreateInteger("count"), {MakeTrait<HttpHeaderTrait>("X-Count")})
                        .PutMember("flag", Schema::CreateBoolean("flag"), {MakeTrait<HttpHeaderTrait>("X-Flag")})
                        .PutMember("list", StringList(), {MakeTrait<HttpHeaderTrait>("X-List")})
                        .PutMember("stamp", Schema::CreateTimestamp("stamp"), {MakeTrait<HttpHeaderTrait>("X-Stamp")})
                        .PutMember("meta", StringMap(), {MakeTrait<HttpPrefixHeadersTrait>("X-Meta-")})
                        .PutMember("code", Schema::CreateInteger("code"), {MakeTrait<HttpResponseCodeTrait>()})
                        .PutMember("name", Schema::CreateString("name"))
                        .Build();
  Aws::Http::HeaderValueCollection headers{{"x-count", "7"},
                                           {"x-flag", "true"},
                                           {"x-list", "a, \"b,c\""},
                                           {"x-stamp", "Mon, 16 Dec 2019 23:48:18 GMT"},
                                           {"x-meta-k", "v"},
                                           {"content-length", "15"}};
  const Aws::String body = R"({"name":"body"})";
  Recorder output(*root);
  RestJsonProtocol().DeserializeHttpResponse(OperationRequestContext{}, 201, headers,
                                             Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(body.data()), body.size()), output);
  const auto& values = output.Values();
  EXPECT_EQ("7", values.at("count"));
  EXPECT_EQ("true", values.at("flag"));
  EXPECT_EQ("[a][b,c]", values.at("list"));
  EXPECT_EQ("1576540098", values.at("stamp"));
  EXPECT_EQ("[k=v]", values.at("meta"));
  EXPECT_EQ("201", values.at("code"));
  EXPECT_EQ("body", values.at("name"));
}

TEST_F(HttpBindingTest, DeserializesRawStringPayload) {
  const auto root = Schema::StructureBuilder("Output").PutMember("text", Schema::CreateString("text"), {MakeTrait<HttpPayloadTrait>()}).Build();
  const Aws::String body = "plain text";
  Recorder output(*root);
  RestJsonProtocol().DeserializeHttpResponse(OperationRequestContext{}, 200, {},
                                             Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(body.data()), body.size()), output);
  EXPECT_EQ("plain text", output.Values().at("text"));
}
