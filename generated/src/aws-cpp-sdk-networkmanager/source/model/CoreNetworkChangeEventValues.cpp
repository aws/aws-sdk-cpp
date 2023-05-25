/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkChangeEventValues.h>
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

CoreNetworkChangeEventValues::CoreNetworkChangeEventValues() : 
    m_edgeLocationHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
}

CoreNetworkChangeEventValues::CoreNetworkChangeEventValues(JsonView jsonValue) : 
    m_edgeLocationHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkChangeEventValues& CoreNetworkChangeEventValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EdgeLocation"))
  {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");

    m_edgeLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentName"))
  {
    m_segmentName = jsonValue.GetString("SegmentName");

    m_segmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentId"))
  {
    m_attachmentId = jsonValue.GetString("AttachmentId");

    m_attachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cidr"))
  {
    m_cidr = jsonValue.GetString("Cidr");

    m_cidrHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreNetworkChangeEventValues::Jsonize() const
{
  JsonValue payload;

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  if(m_segmentNameHasBeenSet)
  {
   payload.WithString("SegmentName", m_segmentName);

  }

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("AttachmentId", m_attachmentId);

  }

  if(m_cidrHasBeenSet)
  {
   payload.WithString("Cidr", m_cidr);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
