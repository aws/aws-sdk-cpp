/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterNetworkInterface.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterNetworkInterface::RouterNetworkInterface(JsonView jsonValue) { *this = jsonValue; }

RouterNetworkInterface& RouterNetworkInterface::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = RouterNetworkInterfaceStateMapper::GetRouterNetworkInterfaceStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkInterfaceType")) {
    m_networkInterfaceType =
        RouterNetworkInterfaceTypeMapper::GetRouterNetworkInterfaceTypeForName(jsonValue.GetString("networkInterfaceType"));
    m_networkInterfaceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedOutputCount")) {
    m_associatedOutputCount = jsonValue.GetInteger("associatedOutputCount");
    m_associatedOutputCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedInputCount")) {
    m_associatedInputCount = jsonValue.GetInteger("associatedInputCount");
    m_associatedInputCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionName")) {
    m_regionName = jsonValue.GetString("regionName");
    m_regionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterNetworkInterface::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", RouterNetworkInterfaceStateMapper::GetNameForRouterNetworkInterfaceState(m_state));
  }

  if (m_networkInterfaceTypeHasBeenSet) {
    payload.WithString("networkInterfaceType",
                       RouterNetworkInterfaceTypeMapper::GetNameForRouterNetworkInterfaceType(m_networkInterfaceType));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_associatedOutputCountHasBeenSet) {
    payload.WithInteger("associatedOutputCount", m_associatedOutputCount);
  }

  if (m_associatedInputCountHasBeenSet) {
    payload.WithInteger("associatedInputCount", m_associatedInputCount);
  }

  if (m_regionNameHasBeenSet) {
    payload.WithString("regionName", m_regionName);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
