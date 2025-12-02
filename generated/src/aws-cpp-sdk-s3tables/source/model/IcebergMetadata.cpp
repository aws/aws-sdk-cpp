/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/IcebergMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

IcebergMetadata::IcebergMetadata(JsonView jsonValue) { *this = jsonValue; }

IcebergMetadata& IcebergMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("schema")) {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("properties")) {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for (auto& propertiesItem : propertiesJsonMap) {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergMetadata::Jsonize() const {
  JsonValue payload;

  if (m_schemaHasBeenSet) {
    payload.WithObject("schema", m_schema.Jsonize());
  }

  if (m_propertiesHasBeenSet) {
    JsonValue propertiesJsonMap;
    for (auto& propertiesItem : m_properties) {
      propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
    }
    payload.WithObject("properties", std::move(propertiesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
