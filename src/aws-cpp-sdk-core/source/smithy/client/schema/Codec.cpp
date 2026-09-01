/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <smithy/client/schema/Codec.h>

#include <smithy/client/schema/CborShapeDeserializer.h>
#include <smithy/client/schema/CborShapeSerializer.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/XmlShapeDeserializer.h>
#include <smithy/client/schema/XmlShapeSerializer.h>

using namespace smithy::schema;

namespace {
constexpr char ALLOC_TAG[] = "SmithyCodec";
}

Codec::SerializerOutcome JsonCodec::Serialize(const Schema& schema, const SerializableStruct& shape) const {
  JsonShapeSerializer serializer;
  serializer.WriteStruct(schema, shape);
  return serializer.GetPayload();
}
Aws::UniquePtr<ShapeDeserializer> JsonCodec::CreateDeserializer(const unsigned char* data, size_t length) const {
  return Aws::MakeUnique<JsonShapeDeserializer>(ALLOC_TAG, data, length);
}

Codec::SerializerOutcome XmlCodec::Serialize(const Schema& schema, const SerializableStruct& shape) const {
  XmlShapeSerializer serializer;
  serializer.WriteStruct(schema, shape);
  return serializer.GetPayload();
}
Aws::UniquePtr<ShapeDeserializer> XmlCodec::CreateDeserializer(const unsigned char* data, size_t length) const {
  return Aws::MakeUnique<XmlShapeDeserializer>(ALLOC_TAG, data, length);
}

Codec::SerializerOutcome CborCodec::Serialize(const Schema& schema, const SerializableStruct& shape) const {
  CborShapeSerializer serializer;
  serializer.WriteStruct(schema, shape);
  return serializer.GetPayload();
}
Aws::UniquePtr<ShapeDeserializer> CborCodec::CreateDeserializer(const unsigned char* data, size_t length) const {
  return Aws::MakeUnique<CborShapeDeserializer>(ALLOC_TAG, data, length);
}
