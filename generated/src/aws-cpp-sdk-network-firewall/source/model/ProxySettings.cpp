/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxySettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxySettings::ProxySettings(JsonView jsonValue) { *this = jsonValue; }

ProxySettings& ProxySettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ListenerProperties")) {
    Aws::Utils::Array<JsonView> listenerPropertiesJsonList = jsonValue.GetArray("ListenerProperties");
    for (unsigned listenerPropertiesIndex = 0; listenerPropertiesIndex < listenerPropertiesJsonList.GetLength();
         ++listenerPropertiesIndex) {
      m_listenerProperties.push_back(listenerPropertiesJsonList[listenerPropertiesIndex].AsObject());
    }
    m_listenerPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxySettings::Jsonize() const {
  JsonValue payload;

  if (m_listenerPropertiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> listenerPropertiesJsonList(m_listenerProperties.size());
    for (unsigned listenerPropertiesIndex = 0; listenerPropertiesIndex < listenerPropertiesJsonList.GetLength();
         ++listenerPropertiesIndex) {
      listenerPropertiesJsonList[listenerPropertiesIndex].AsObject(m_listenerProperties[listenerPropertiesIndex].Jsonize());
    }
    payload.WithArray("ListenerProperties", std::move(listenerPropertiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
