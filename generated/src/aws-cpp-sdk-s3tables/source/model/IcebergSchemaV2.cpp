/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/IcebergSchemaV2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

IcebergSchemaV2::IcebergSchemaV2(JsonView jsonValue) { *this = jsonValue; }

IcebergSchemaV2& IcebergSchemaV2::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = SchemaV2FieldTypeMapper::GetSchemaV2FieldTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fields")) {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schema-id")) {
    m_schemaId = jsonValue.GetInteger("schema-id");
    m_schemaIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifier-field-ids")) {
    Aws::Utils::Array<JsonView> identifier_field_idsJsonList = jsonValue.GetArray("identifier-field-ids");
    for (unsigned identifier_field_idsIndex = 0; identifier_field_idsIndex < identifier_field_idsJsonList.GetLength();
         ++identifier_field_idsIndex) {
      m_identifierFieldIds.push_back(identifier_field_idsJsonList[identifier_field_idsIndex].AsInteger());
    }
    m_identifierFieldIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergSchemaV2::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", SchemaV2FieldTypeMapper::GetNameForSchemaV2FieldType(m_type));
  }

  if (m_fieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
    }
    payload.WithArray("fields", std::move(fieldsJsonList));
  }

  if (m_schemaIdHasBeenSet) {
    payload.WithInteger("schema-id", m_schemaId);
  }

  if (m_identifierFieldIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> identifier_field_idsJsonList(m_identifierFieldIds.size());
    for (unsigned identifier_field_idsIndex = 0; identifier_field_idsIndex < identifier_field_idsJsonList.GetLength();
         ++identifier_field_idsIndex) {
      identifier_field_idsJsonList[identifier_field_idsIndex].AsInteger(m_identifierFieldIds[identifier_field_idsIndex]);
    }
    payload.WithArray("identifier-field-ids", std::move(identifier_field_idsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
