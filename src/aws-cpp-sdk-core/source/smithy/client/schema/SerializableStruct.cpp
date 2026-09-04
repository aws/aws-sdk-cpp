/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <smithy/client/schema/SerializableStruct.h>

#include <smithy/client/schema/ShapeDeserializer.h>

using namespace smithy::schema;

void SerializableStruct::From(const Schema& /*memberSchema*/, ShapeDeserializer& /*deserializer*/) {}

void SerializableStruct::Deserialize(ShapeDeserializer& deserializer) {
  deserializer.ReadStruct(GetSchema(),
                          [this](const Schema& memberSchema, ShapeDeserializer& de) { From(memberSchema, de); });
}
