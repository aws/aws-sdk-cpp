/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/ListLinksResponseStructure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

ListLinksResponseStructure::ListLinksResponseStructure(JsonView jsonValue) { *this = jsonValue; }

ListLinksResponseStructure& ListLinksResponseStructure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gatewayId")) {
    m_gatewayId = jsonValue.GetString("gatewayId");
    m_gatewayIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("peerGatewayId")) {
    m_peerGatewayId = jsonValue.GetString("peerGatewayId");
    m_peerGatewayIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = LinkStatusMapper::GetLinkStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("direction")) {
    m_direction = LinkDirectionMapper::GetLinkDirectionForName(jsonValue.GetString("direction"));
    m_directionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowModules")) {
    Aws::Utils::Array<JsonView> flowModulesJsonList = jsonValue.GetArray("flowModules");
    for (unsigned flowModulesIndex = 0; flowModulesIndex < flowModulesJsonList.GetLength(); ++flowModulesIndex) {
      m_flowModules.push_back(flowModulesJsonList[flowModulesIndex].AsObject());
    }
    m_flowModulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pendingFlowModules")) {
    Aws::Utils::Array<JsonView> pendingFlowModulesJsonList = jsonValue.GetArray("pendingFlowModules");
    for (unsigned pendingFlowModulesIndex = 0; pendingFlowModulesIndex < pendingFlowModulesJsonList.GetLength();
         ++pendingFlowModulesIndex) {
      m_pendingFlowModules.push_back(pendingFlowModulesJsonList[pendingFlowModulesIndex].AsObject());
    }
    m_pendingFlowModulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributes")) {
    m_attributes = jsonValue.GetObject("attributes");
    m_attributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkId")) {
    m_linkId = jsonValue.GetString("linkId");
    m_linkIdHasBeenSet = true;
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

JsonValue ListLinksResponseStructure::Jsonize() const {
  JsonValue payload;

  if (m_gatewayIdHasBeenSet) {
    payload.WithString("gatewayId", m_gatewayId);
  }

  if (m_peerGatewayIdHasBeenSet) {
    payload.WithString("peerGatewayId", m_peerGatewayId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", LinkStatusMapper::GetNameForLinkStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_directionHasBeenSet) {
    payload.WithString("direction", LinkDirectionMapper::GetNameForLinkDirection(m_direction));
  }

  if (m_flowModulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> flowModulesJsonList(m_flowModules.size());
    for (unsigned flowModulesIndex = 0; flowModulesIndex < flowModulesJsonList.GetLength(); ++flowModulesIndex) {
      flowModulesJsonList[flowModulesIndex].AsObject(m_flowModules[flowModulesIndex].Jsonize());
    }
    payload.WithArray("flowModules", std::move(flowModulesJsonList));
  }

  if (m_pendingFlowModulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> pendingFlowModulesJsonList(m_pendingFlowModules.size());
    for (unsigned pendingFlowModulesIndex = 0; pendingFlowModulesIndex < pendingFlowModulesJsonList.GetLength();
         ++pendingFlowModulesIndex) {
      pendingFlowModulesJsonList[pendingFlowModulesIndex].AsObject(m_pendingFlowModules[pendingFlowModulesIndex].Jsonize());
    }
    payload.WithArray("pendingFlowModules", std::move(pendingFlowModulesJsonList));
  }

  if (m_attributesHasBeenSet) {
    payload.WithObject("attributes", m_attributes.Jsonize());
  }

  if (m_linkIdHasBeenSet) {
    payload.WithString("linkId", m_linkId);
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
}  // namespace RTBFabric
}  // namespace Aws
