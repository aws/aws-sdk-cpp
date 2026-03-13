/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/UpdateOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

UpdateOperation::UpdateOperation(JsonView jsonValue) { *this = jsonValue; }

UpdateOperation& UpdateOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("properties")) {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for (auto& propertiesItem : propertiesJsonMap) {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateOperation::Jsonize() const {
  JsonValue payload;

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
