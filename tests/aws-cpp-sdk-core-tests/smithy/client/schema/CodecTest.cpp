/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/Codec.h>
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

  auto d = codec.CreateDeserializer(reinterpret_cast<const unsigned char*>(bytes.data()), bytes.size());
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

}

TEST_F(CodecTest, JsonRoundTrip) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("name", Schema::CreateString("S"))
                  .PutMember("count", Schema::CreateInteger("I"))
                  .Build();
  JsonCodec codec;
  RoundTrip(codec, root);
}

TEST_F(CodecTest, CborRoundTrip) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("name", Schema::CreateString("S"))
                  .PutMember("count", Schema::CreateInteger("I"))
                  .Build();
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
  const Schema& GetSchema() const override { return *Root(); }

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
  static const std::shared_ptr<const Schema>& Root() {
    static const std::shared_ptr<const Schema> schema = Schema::StructureBuilder("Person")
                                                            .PutMember("name", Schema::CreateString("S"))
                                                            .PutMember("count", Schema::CreateInteger("I"))
                                                            .Build();
    return schema;
  }
};

}

TEST_F(CodecTest, JsonDeserializeShapeReturnsTypedObject) {
  const Aws::String payload = "{\"name\":\"Alice\",\"count\":7}";
  SCOPED_TRACE(Aws::String("input JSON: ") + payload);
  JsonCodec codec;
  Person p;
  codec.DeserializeShape(reinterpret_cast<const unsigned char*>(payload.data()), payload.size(), p);
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
  codec.DeserializeShape(reinterpret_cast<const unsigned char*>(encoded.data()), encoded.size(), p);
  EXPECT_EQ(p.name, "Bob");
  EXPECT_EQ(p.count, 9);
}

namespace {

class Bar : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *Root(); }

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

  static const std::shared_ptr<const Schema>& Root() {
    static const std::shared_ptr<const Schema> schema =
        Schema::StructureBuilder("Bar", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Bar")}})
            .PutMember("buzz", Schema::CreateString("S"))
            .Build();
    return schema;
  }
};

class Foo : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *Root(); }

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

  static const std::shared_ptr<const Schema>& Root() {
    static const std::shared_ptr<const Schema> schema =
        Schema::StructureBuilder("Foo", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Foo")}})
            .PutMember("fizz", Bar::Root())
            .Build();
    return schema;
  }
};

}

TEST_F(CodecTest, JsonNestedShape) {
  JsonCodec codec;

  Foo source;
  source.fizz.buzz = "value";
  auto bytes = codec.Serialize(source.GetSchema(), source);
  ASSERT_TRUE(bytes.IsSuccess());
  const Aws::String encoded = bytes.GetResult();
  EXPECT_EQ(encoded, "{\"fizz\":{\"buzz\":\"value\"}}");

  Foo f;
  codec.DeserializeShape(reinterpret_cast<const unsigned char*>(encoded.data()), encoded.size(), f);
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
  codec.DeserializeShape(reinterpret_cast<const unsigned char*>(encoded.data()), encoded.size(), f);
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
  codec.DeserializeShape(reinterpret_cast<const unsigned char*>(encoded.data()), encoded.size(), f);
  EXPECT_EQ(f.fizz.buzz, "value");
}
