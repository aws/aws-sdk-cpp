/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkSegmentEdgeIdentifier.h>
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

CoreNetworkSegmentEdgeIdentifier::CoreNetworkSegmentEdgeIdentifier() : 
    m_coreNetworkIdHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_edgeLocationHasBeenSet(false)
{
}

CoreNetworkSegmentEdgeIdentifier::CoreNetworkSegmentEdgeIdentifier(JsonView jsonValue) : 
    m_coreNetworkIdHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_edgeLocationHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkSegmentEdgeIdentifier& CoreNetworkSegmentEdgeIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");

    m_coreNetworkIdHasBeenSet = true;
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

  return *this;
}

JsonValue CoreNetworkSegmentEdgeIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_segmentNameHasBeenSet)
  {
   payload.WithString("SegmentName", m_segmentName);

  }

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
