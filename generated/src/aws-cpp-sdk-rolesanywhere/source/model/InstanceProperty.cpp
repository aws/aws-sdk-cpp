/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rolesanywhere/model/InstanceProperty.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RolesAnywhere {
namespace Model {

InstanceProperty::InstanceProperty(JsonView jsonValue) { *this = jsonValue; }

InstanceProperty& InstanceProperty::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("seenAt")) {
    m_seenAt = jsonValue.GetString("seenAt");
    m_seenAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("properties")) {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for (auto& propertiesItem : propertiesJsonMap) {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failed")) {
    m_failed = jsonValue.GetBool("failed");
    m_failedHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceProperty::Jsonize() const {
  JsonValue payload;

  if (m_seenAtHasBeenSet) {
    payload.WithString("seenAt", m_seenAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_propertiesHasBeenSet) {
    JsonValue propertiesJsonMap;
    for (auto& propertiesItem : m_properties) {
      propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
    }
    payload.WithObject("properties", std::move(propertiesJsonMap));
  }

  if (m_failedHasBeenSet) {
    payload.WithBool("failed", m_failed);
  }

  return payload;
}

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
