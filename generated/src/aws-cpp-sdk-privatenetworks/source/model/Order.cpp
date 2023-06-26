/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/Order.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

Order::Order() : 
    m_acknowledgmentStatus(AcknowledgmentStatus::NOT_SET),
    m_acknowledgmentStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_networkSiteArnHasBeenSet(false),
    m_orderArnHasBeenSet(false),
    m_shippingAddressHasBeenSet(false),
    m_trackingInformationHasBeenSet(false)
{
}

Order::Order(JsonView jsonValue) : 
    m_acknowledgmentStatus(AcknowledgmentStatus::NOT_SET),
    m_acknowledgmentStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_networkSiteArnHasBeenSet(false),
    m_orderArnHasBeenSet(false),
    m_shippingAddressHasBeenSet(false),
    m_trackingInformationHasBeenSet(false)
{
  *this = jsonValue;
}

Order& Order::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acknowledgmentStatus"))
  {
    m_acknowledgmentStatus = AcknowledgmentStatusMapper::GetAcknowledgmentStatusForName(jsonValue.GetString("acknowledgmentStatus"));

    m_acknowledgmentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkArn"))
  {
    m_networkArn = jsonValue.GetString("networkArn");

    m_networkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkSiteArn"))
  {
    m_networkSiteArn = jsonValue.GetString("networkSiteArn");

    m_networkSiteArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderArn"))
  {
    m_orderArn = jsonValue.GetString("orderArn");

    m_orderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shippingAddress"))
  {
    m_shippingAddress = jsonValue.GetObject("shippingAddress");

    m_shippingAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trackingInformation"))
  {
    Aws::Utils::Array<JsonView> trackingInformationJsonList = jsonValue.GetArray("trackingInformation");
    for(unsigned trackingInformationIndex = 0; trackingInformationIndex < trackingInformationJsonList.GetLength(); ++trackingInformationIndex)
    {
      m_trackingInformation.push_back(trackingInformationJsonList[trackingInformationIndex].AsObject());
    }
    m_trackingInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue Order::Jsonize() const
{
  JsonValue payload;

  if(m_acknowledgmentStatusHasBeenSet)
  {
   payload.WithString("acknowledgmentStatus", AcknowledgmentStatusMapper::GetNameForAcknowledgmentStatus(m_acknowledgmentStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_networkArnHasBeenSet)
  {
   payload.WithString("networkArn", m_networkArn);

  }

  if(m_networkSiteArnHasBeenSet)
  {
   payload.WithString("networkSiteArn", m_networkSiteArn);

  }

  if(m_orderArnHasBeenSet)
  {
   payload.WithString("orderArn", m_orderArn);

  }

  if(m_shippingAddressHasBeenSet)
  {
   payload.WithObject("shippingAddress", m_shippingAddress.Jsonize());

  }

  if(m_trackingInformationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trackingInformationJsonList(m_trackingInformation.size());
   for(unsigned trackingInformationIndex = 0; trackingInformationIndex < trackingInformationJsonList.GetLength(); ++trackingInformationIndex)
   {
     trackingInformationJsonList[trackingInformationIndex].AsObject(m_trackingInformation[trackingInformationIndex].Jsonize());
   }
   payload.WithArray("trackingInformation", std::move(trackingInformationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
