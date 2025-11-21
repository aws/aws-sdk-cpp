/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/CoreNetworkChangeEventValues.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

CoreNetworkChangeEventValues::CoreNetworkChangeEventValues(JsonView jsonValue) { *this = jsonValue; }

CoreNetworkChangeEventValues& CoreNetworkChangeEventValues::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EdgeLocation")) {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");
    m_edgeLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PeerEdgeLocation")) {
    m_peerEdgeLocation = jsonValue.GetString("PeerEdgeLocation");
    m_peerEdgeLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingPolicyDirection")) {
    m_routingPolicyDirection =
        RoutingPolicyDirectionMapper::GetRoutingPolicyDirectionForName(jsonValue.GetString("RoutingPolicyDirection"));
    m_routingPolicyDirectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SegmentName")) {
    m_segmentName = jsonValue.GetString("SegmentName");
    m_segmentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NetworkFunctionGroupName")) {
    m_networkFunctionGroupName = jsonValue.GetString("NetworkFunctionGroupName");
    m_networkFunctionGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttachmentId")) {
    m_attachmentId = jsonValue.GetString("AttachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Cidr")) {
    m_cidr = jsonValue.GetString("Cidr");
    m_cidrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingPolicyAssociationDetails")) {
    Aws::Utils::Array<JsonView> routingPolicyAssociationDetailsJsonList = jsonValue.GetArray("RoutingPolicyAssociationDetails");
    for (unsigned routingPolicyAssociationDetailsIndex = 0;
         routingPolicyAssociationDetailsIndex < routingPolicyAssociationDetailsJsonList.GetLength();
         ++routingPolicyAssociationDetailsIndex) {
      m_routingPolicyAssociationDetails.push_back(routingPolicyAssociationDetailsJsonList[routingPolicyAssociationDetailsIndex].AsObject());
    }
    m_routingPolicyAssociationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue CoreNetworkChangeEventValues::Jsonize() const {
  JsonValue payload;

  if (m_edgeLocationHasBeenSet) {
    payload.WithString("EdgeLocation", m_edgeLocation);
  }

  if (m_peerEdgeLocationHasBeenSet) {
    payload.WithString("PeerEdgeLocation", m_peerEdgeLocation);
  }

  if (m_routingPolicyDirectionHasBeenSet) {
    payload.WithString("RoutingPolicyDirection", RoutingPolicyDirectionMapper::GetNameForRoutingPolicyDirection(m_routingPolicyDirection));
  }

  if (m_segmentNameHasBeenSet) {
    payload.WithString("SegmentName", m_segmentName);
  }

  if (m_networkFunctionGroupNameHasBeenSet) {
    payload.WithString("NetworkFunctionGroupName", m_networkFunctionGroupName);
  }

  if (m_attachmentIdHasBeenSet) {
    payload.WithString("AttachmentId", m_attachmentId);
  }

  if (m_cidrHasBeenSet) {
    payload.WithString("Cidr", m_cidr);
  }

  if (m_routingPolicyAssociationDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> routingPolicyAssociationDetailsJsonList(m_routingPolicyAssociationDetails.size());
    for (unsigned routingPolicyAssociationDetailsIndex = 0;
         routingPolicyAssociationDetailsIndex < routingPolicyAssociationDetailsJsonList.GetLength();
         ++routingPolicyAssociationDetailsIndex) {
      routingPolicyAssociationDetailsJsonList[routingPolicyAssociationDetailsIndex].AsObject(
          m_routingPolicyAssociationDetails[routingPolicyAssociationDetailsIndex].Jsonize());
    }
    payload.WithArray("RoutingPolicyAssociationDetails", std::move(routingPolicyAssociationDetailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
