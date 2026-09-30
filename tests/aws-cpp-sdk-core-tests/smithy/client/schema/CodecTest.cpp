/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <functional>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class CodecTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {

void RoundTrip(const Codec& codec, const std::shared_ptr<const Schema>& root) {
  auto name = root->GetMember("name").value();
  auto count = root->GetMember("count").value();

  LambdaStruct shape(*root, [&](ShapeSerializer& ser) {
    ser.WriteString(*name, "hello");
    ser.WriteInteger(*count, 42);
  });
  auto payload = codec.Serialize(*root, shape);
  ASSERT_TRUE(payload.IsSuccess());
  const Aws::String bytes = payload.GetResult();

  auto d = codec.CreateDeserializer(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(bytes.data()), bytes.size()));
  ASSERT_NE(d, nullptr);
  Aws::Crt::Optional<Aws::String> gotName;
  Aws::Crt::Optional<int> gotCount;
  d->ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "name") {
      gotName = de.ReadString(m);
    } else if (m.GetMemberName() == "count") {
      gotCount = de.ReadInteger(m);
    }
  });
  ASSERT_TRUE(gotName.has_value());
  EXPECT_EQ(gotName.value(), "hello");
  ASSERT_TRUE(gotCount.has_value());
  EXPECT_EQ(gotCount.value(), 42);
}

}  // namespace

TEST_F(CodecTest, JsonRoundTrip) {
  auto root =
      Schema::StructureBuilder("Root").PutMember("name", Schema::CreateString("S")).PutMember("count", Schema::CreateInteger("I")).Build();
  JsonCodec codec;
  RoundTrip(codec, root);
}

TEST_F(CodecTest, CborRoundTrip) {
  auto root =
      Schema::StructureBuilder("Root").PutMember("name", Schema::CreateString("S")).PutMember("count", Schema::CreateInteger("I")).Build();
  CborCodec codec;
  RoundTrip(codec, root);
}

TEST_F(CodecTest, XmlRoundTrip) {
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Root")}})
                  .PutMember("name", Schema::CreateString("S"))
                  .PutMember("count", Schema::CreateInteger("I"))
                  .Build();
  XmlCodec codec;
  RoundTrip(codec, root);
}

namespace {

class Person : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *m_schema; }

  void SerializeMembers(ShapeSerializer& serializer) const override {
    serializer.WriteString(*GetSchema().GetMember("name").value(), name);
    serializer.WriteInteger(*GetSchema().GetMember("count").value(), count);
  }

  void From(const Schema& memberSchema, ShapeDeserializer& deserializer) override {
    switch (memberSchema.GetMemberIndex()) {
      case 0: {
        auto v = deserializer.ReadString(memberSchema);
        if (v.has_value()) {
          name = v.value();
        }
        break;
      }
      case 1: {
        auto v = deserializer.ReadInteger(memberSchema);
        if (v.has_value()) {
          count = v.value();
        }
        break;
      }
      default:
        break;
    }
  }

  Aws::String name;
  int count = 0;

 private:
  static std::shared_ptr<const Schema> BuildSchema() {
    return Schema::StructureBuilder("Person")
        .PutMember("name", Schema::CreateString("S"))
        .PutMember("count", Schema::CreateInteger("I"))
        .Build();
  }
  std::shared_ptr<const Schema> m_schema{BuildSchema()};
};

}  // namespace

TEST_F(CodecTest, JsonDeserializeShapeReturnsTypedObject) {
  const Aws::String payload = "{\"name\":\"Alice\",\"count\":7}";
  SCOPED_TRACE(Aws::String("input JSON: ") + payload);
  JsonCodec codec;
  Person p;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()), p);
  EXPECT_EQ(p.name, "Alice");
  EXPECT_EQ(p.count, 7);
}

TEST_F(CodecTest, CborDeserializeShapeRoundTrip) {
  Person source;
  source.name = "Bob";
  source.count = 9;
  CborCodec codec;
  auto bytes = codec.Serialize(source.GetSchema(), source);
  ASSERT_TRUE(bytes.IsSuccess());
  const Aws::String encoded = bytes.GetResult();

  Person p;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(encoded.data()), encoded.size()), p);
  EXPECT_EQ(p.name, "Bob");
  EXPECT_EQ(p.count, 9);
}

namespace {

class Bar : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *m_schema; }
  const std::shared_ptr<const Schema>& SchemaPtr() const { return m_schema; }

  void SerializeMembers(ShapeSerializer& serializer) const override {
    serializer.WriteString(*GetSchema().GetMember("buzz").value(), buzz);
  }

  void From(const Schema& memberSchema, ShapeDeserializer& deserializer) override {
    switch (memberSchema.GetMemberIndex()) {
      case 0: {
        auto v = deserializer.ReadString(memberSchema);
        if (v.has_value()) {
          buzz = v.value();
        }
        break;
      }
      default:
        break;
    }
  }

  Aws::String buzz;

 private:
  static std::shared_ptr<const Schema> BuildSchema() {
    return Schema::StructureBuilder("Bar", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Bar")}})
        .PutMember("buzz", Schema::CreateString("S"))
        .Build();
  }
  std::shared_ptr<const Schema> m_schema{BuildSchema()};
};

class Foo : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *m_schema; }

  void SerializeMembers(ShapeSerializer& serializer) const override {
    serializer.WriteStruct(*GetSchema().GetMember("fizz").value(), fizz);
  }

  void From(const Schema& memberSchema, ShapeDeserializer& deserializer) override {
    switch (memberSchema.GetMemberIndex()) {
      case 0: {
        // Recurse into the target struct; delegate members to fizz.From.
        deserializer.ReadStruct(*memberSchema.GetMemberTarget().value(),
                                [this](const Schema& im, ShapeDeserializer& ide) { fizz.From(im, ide); });
        break;
      }
      default:
        break;
    }
  }

  Bar fizz;

 private:
  static std::shared_ptr<const Schema> BuildSchema(const Bar& fizz) {
    return Schema::StructureBuilder("Foo", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Foo")}})
        .PutMember("fizz", fizz.SchemaPtr())
        .Build();
  }
  // fizz is declared above, so it is fully constructed before m_schema is built from it.
  std::shared_ptr<const Schema> m_schema{BuildSchema(fizz)};
};

}  // namespace

TEST_F(CodecTest, JsonNestedShape) {
  JsonCodec codec;

  Foo source;
  source.fizz.buzz = "value";
  auto bytes = codec.Serialize(source.GetSchema(), source);
  ASSERT_TRUE(bytes.IsSuccess());
  const Aws::String encoded = bytes.GetResult();
  EXPECT_EQ(encoded, "{\"fizz\":{\"buzz\":\"value\"}}");

  Foo f;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(encoded.data()), encoded.size()), f);
  EXPECT_EQ(f.fizz.buzz, "value");
}

TEST_F(CodecTest, XmlNestedShape) {
  Foo source;
  source.fizz.buzz = "value";
  XmlCodec codec;
  auto bytes = codec.Serialize(source.GetSchema(), source);
  ASSERT_TRUE(bytes.IsSuccess());
  const Aws::String encoded = bytes.GetResult();
  SCOPED_TRACE(Aws::String("encoded XML: ") + encoded);

  Foo f;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(encoded.data()), encoded.size()), f);
  EXPECT_EQ(f.fizz.buzz, "value");
}

TEST_F(CodecTest, CborNestedShape) {
  Foo source;
  source.fizz.buzz = "value";
  CborCodec codec;
  auto bytes = codec.Serialize(source.GetSchema(), source);
  ASSERT_TRUE(bytes.IsSuccess());
  const Aws::String encoded = bytes.GetResult();

  Foo f;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(encoded.data()), encoded.size()), f);
  EXPECT_EQ(f.fizz.buzz, "value");
}

namespace {
// One-member struct { "payload": <document> } that drives the Codec end-to-end. The `payload` member
// MUST be declared on the schema (via PutMember) — the deserializer's ReadStruct routes an incoming
// key only to a declared member.
class DocHolder final : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *m_schema; }

  void SerializeMembers(ShapeSerializer& serializer) const override {
    serializer.WriteDocument(*GetSchema().GetMember("payload").value(), m_payload);
  }

  void From(const Schema& memberSchema, ShapeDeserializer& deserializer) override {
    if (memberSchema.GetMemberName() == "payload") {
      auto doc = deserializer.ReadDocument(memberSchema);
      if (doc.has_value()) {
        m_payload = std::move(*doc);
        m_hasPayload = true;
      }
    }
  }

  void SetPayload(Document doc) {
    m_payload = std::move(doc);
    m_hasPayload = true;
  }
  bool HasPayload() const { return m_hasPayload; }
  const Document& GetPayload() const { return m_payload; }

 private:
  static std::shared_ptr<const Schema> BuildSchema() {
    return Schema::StructureBuilder("DocHolder").PutMember("payload", Schema::CreateDocument("smithy.api#Document")).Build();
  }
  std::shared_ptr<const Schema> m_schema{BuildSchema()};
  Document m_payload = Document::Null();
  bool m_hasPayload = false;
};
}  // namespace

TEST_F(CodecTest, JsonDocumentMemberRoundTrip) {
  Aws::Map<Aws::String, Document> obj;
  obj.emplace("name", Document::FromString("hi"));
  obj.emplace("count", Document::FromInteger(3));

  DocHolder out;
  out.SetPayload(Document::FromMap(std::move(obj)));

  JsonCodec codec;
  auto serialized = codec.Serialize(out.GetSchema(), out);
  ASSERT_TRUE(serialized.IsSuccess());
  const auto& body = serialized.GetResult();
  EXPECT_NE(body.find("\"payload\":{"), Aws::String::npos);

  DocHolder in;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(body.c_str()), body.size()), in);
  ASSERT_TRUE(in.HasPayload());
  EXPECT_TRUE(in.GetPayload() == out.GetPayload());
}

TEST_F(CodecTest, CborDocumentMemberSerializeFails) {
  // Documents are not supported by CBOR yet: serializing a struct with a document member fails.
  Aws::Map<Aws::String, Document> obj;
  obj.emplace("flag", Document::FromBoolean(true));

  DocHolder out;
  out.SetPayload(Document::FromMap(std::move(obj)));

  CborCodec codec;
  auto serialized = codec.Serialize(out.GetSchema(), out);
  ASSERT_FALSE(serialized.IsSuccess());
  EXPECT_EQ(serialized.GetError().GetExceptionName(), "SerializationException");
}

TEST_F(CodecTest, JsonDocumentBlobRoundTripsAsBase64String) {
  Aws::Utils::ByteBuffer blob(reinterpret_cast<const unsigned char*>("xyz"), 3);
  Aws::Map<Aws::String, Document> obj;
  obj.emplace("bin", Document::FromBlob(blob));

  DocHolder out;
  out.SetPayload(Document::FromMap(std::move(obj)));

  JsonCodec codec;
  auto serialized = codec.Serialize(out.GetSchema(), out);
  ASSERT_TRUE(serialized.IsSuccess());
  const auto& body = serialized.GetResult();

  DocHolder in;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(body.c_str()), body.size()), in);
  ASSERT_TRUE(in.HasPayload());
  const Document* bin = in.GetPayload().GetMember("bin");
  ASSERT_NE(bin, nullptr);
  // JSON encodes blobs as base64 strings; on read the value is a String whose AsBlob() recovers the
  // original bytes (SEP format-specific coercion).
  EXPECT_EQ(bin->GetType(), ShapeType::String);
  auto recovered = bin->AsBlob();
  ASSERT_TRUE(recovered.has_value());
  EXPECT_EQ(*recovered, blob);
}

TEST_F(CodecTest, JsonDocumentDoubleRoundTripsWithPrecisionAndType) {
  Aws::Map<Aws::String, Document> obj;
  obj.emplace("pi", Document::FromDouble(3.141592653589793));
  obj.emplace("whole", Document::FromDouble(2.0));
  DocHolder out;
  out.SetPayload(Document::FromMap(std::move(obj)));

  JsonCodec codec;
  auto serialized = codec.Serialize(out.GetSchema(), out);
  ASSERT_TRUE(serialized.IsSuccess());
  const Aws::String& body = serialized.GetResult();

  DocHolder in;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(body.c_str()), body.size()), in);
  ASSERT_TRUE(in.HasPayload());
  const Document* pi = in.GetPayload().GetMember("pi");
  ASSERT_NE(pi, nullptr);
  ASSERT_TRUE(pi->AsDouble().has_value());
  EXPECT_EQ(pi->AsDouble().value(), 3.141592653589793);
  const Document* whole = in.GetPayload().GetMember("whole");
  ASSERT_NE(whole, nullptr);
  EXPECT_EQ(whole->GetType(), ShapeType::Double);
}

TEST_F(CodecTest, JsonCodecHttpDateDocumentTimestampParses) {
  JsonCodec codec(CodecSettings{TimestampFormatTrait::Format::HTTP_DATE});
  const Aws::String body = "{\"payload\":\"Thu, 01 Jan 1970 00:00:00 GMT\"}";
  DocHolder in;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(body.c_str()), body.size()), in);
  ASSERT_TRUE(in.HasPayload());
  auto ts = in.GetPayload().AsTimestamp();
  ASSERT_TRUE(ts.has_value());
  EXPECT_EQ(ts->Seconds(), 0);
}

TEST_F(CodecTest, JsonDocumentBigIntegerBecomesDouble) {
  const Aws::String body = "{\"payload\":9999999999999999999}";
  JsonCodec codec;
  DocHolder in;
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(body.c_str()), body.size()), in);
  ASSERT_TRUE(in.HasPayload());
  EXPECT_EQ(in.GetPayload().GetType(), ShapeType::Double);
}
