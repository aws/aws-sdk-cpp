/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationMapperSegmentConstruct.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationMapperSegmentConstruct::NetworkMigrationMapperSegmentConstruct(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationMapperSegmentConstruct& NetworkMigrationMapperSegmentConstruct::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("constructID")) {
    m_constructID = jsonValue.GetString("constructID");
    m_constructIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("constructType")) {
    m_constructType = jsonValue.GetString("constructType");
    m_constructTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logicalID")) {
    m_logicalID = jsonValue.GetString("logicalID");
    m_logicalIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
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

JsonValue NetworkMigrationMapperSegmentConstruct::Jsonize() const {
  JsonValue payload;

  if (m_constructIDHasBeenSet) {
    payload.WithString("constructID", m_constructID);
  }

  if (m_constructTypeHasBeenSet) {
    payload.WithString("constructType", m_constructType);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_logicalIDHasBeenSet) {
    payload.WithString("logicalID", m_logicalID);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
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
}  // namespace mgn
}  // namespace Aws
