/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/NetworkRouteDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

NetworkRouteDestination::NetworkRouteDestination() : 
    m_coreNetworkAttachmentIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

NetworkRouteDestination::NetworkRouteDestination(JsonView jsonValue) : 
    m_coreNetworkAttachmentIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkRouteDestination& NetworkRouteDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkAttachmentId"))
  {
    m_coreNetworkAttachmentId = jsonValue.GetString("CoreNetworkAttachmentId");

    m_coreNetworkAttachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayAttachmentId"))
  {
    m_transitGatewayAttachmentId = jsonValue.GetString("TransitGatewayAttachmentId");

    m_transitGatewayAttachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentName"))
  {
    m_segmentName = jsonValue.GetString("SegmentName");

    m_segmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeLocation"))
  {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");

    m_edgeLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkRouteDestination::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkAttachmentIdHasBeenSet)
  {
   payload.WithString("CoreNetworkAttachmentId", m_coreNetworkAttachmentId);

  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
   payload.WithString("TransitGatewayAttachmentId", m_transitGatewayAttachmentId);

  }

  if(m_segmentNameHasBeenSet)
  {
   payload.WithString("SegmentName", m_segmentName);

  }

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
