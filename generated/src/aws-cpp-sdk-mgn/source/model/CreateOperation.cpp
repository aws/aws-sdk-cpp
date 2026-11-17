/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/CreateOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

CreateOperation::CreateOperation(JsonView jsonValue) { *this = jsonValue; }

CreateOperation& CreateOperation::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateOperation::Jsonize() const {
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

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
