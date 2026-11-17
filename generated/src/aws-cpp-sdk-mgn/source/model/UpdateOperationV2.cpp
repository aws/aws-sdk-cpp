/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/UpdateOperationV2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

UpdateOperationV2::UpdateOperationV2(JsonView jsonValue) { *this = jsonValue; }

UpdateOperationV2& UpdateOperationV2::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("excluded")) {
    m_excluded = jsonValue.GetBool("excluded");
    m_excludedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("properties")) {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for (auto& propertiesItem : propertiesJsonMap) {
      m_properties[propertiesItem.first] = propertiesItem.second.AsObject();
    }
    m_propertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("propertiesToDelete")) {
    Aws::Utils::Array<JsonView> propertiesToDeleteJsonList = jsonValue.GetArray("propertiesToDelete");
    for (unsigned propertiesToDeleteIndex = 0; propertiesToDeleteIndex < propertiesToDeleteJsonList.GetLength();
         ++propertiesToDeleteIndex) {
      m_propertiesToDelete.push_back(propertiesToDeleteJsonList[propertiesToDeleteIndex].AsString());
    }
    m_propertiesToDeleteHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateOperationV2::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_excludedHasBeenSet) {
    payload.WithBool("excluded", m_excluded);
  }

  if (m_propertiesHasBeenSet) {
    JsonValue propertiesJsonMap;
    for (auto& propertiesItem : m_properties) {
      propertiesJsonMap.WithObject(propertiesItem.first, propertiesItem.second.View());
    }
    payload.WithObject("properties", std::move(propertiesJsonMap));
  }

  if (m_propertiesToDeleteHasBeenSet) {
    Aws::Utils::Array<JsonValue> propertiesToDeleteJsonList(m_propertiesToDelete.size());
    for (unsigned propertiesToDeleteIndex = 0; propertiesToDeleteIndex < propertiesToDeleteJsonList.GetLength();
         ++propertiesToDeleteIndex) {
      propertiesToDeleteJsonList[propertiesToDeleteIndex].AsString(m_propertiesToDelete[propertiesToDeleteIndex]);
    }
    payload.WithArray("propertiesToDelete", std::move(propertiesToDeleteJsonList));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
