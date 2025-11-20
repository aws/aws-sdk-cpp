/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/RoutingInformationNextHop.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

RoutingInformationNextHop::RoutingInformationNextHop(JsonView jsonValue) { *this = jsonValue; }

RoutingInformationNextHop& RoutingInformationNextHop::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IpAddress")) {
    m_ipAddress = jsonValue.GetString("IpAddress");
    m_ipAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CoreNetworkAttachmentId")) {
    m_coreNetworkAttachmentId = jsonValue.GetString("CoreNetworkAttachmentId");
    m_coreNetworkAttachmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SegmentName")) {
    m_segmentName = jsonValue.GetString("SegmentName");
    m_segmentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EdgeLocation")) {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");
    m_edgeLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingInformationNextHop::Jsonize() const {
  JsonValue payload;

  if (m_ipAddressHasBeenSet) {
    payload.WithString("IpAddress", m_ipAddress);
  }

  if (m_coreNetworkAttachmentIdHasBeenSet) {
    payload.WithString("CoreNetworkAttachmentId", m_coreNetworkAttachmentId);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_segmentNameHasBeenSet) {
    payload.WithString("SegmentName", m_segmentName);
  }

  if (m_edgeLocationHasBeenSet) {
    payload.WithString("EdgeLocation", m_edgeLocation);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
