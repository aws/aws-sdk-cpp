/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/IcebergPartitionSpec.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

IcebergPartitionSpec::IcebergPartitionSpec(JsonView jsonValue) { *this = jsonValue; }

IcebergPartitionSpec& IcebergPartitionSpec::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fields")) {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spec-id")) {
    m_specId = jsonValue.GetInteger("spec-id");
    m_specIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergPartitionSpec::Jsonize() const {
  JsonValue payload;

  if (m_fieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
    }
    payload.WithArray("fields", std::move(fieldsJsonList));
  }

  if (m_specIdHasBeenSet) {
    payload.WithInteger("spec-id", m_specId);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
