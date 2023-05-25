/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PurchaseReservedInstanceOfferingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PurchaseReservedInstanceOfferingRequest::PurchaseReservedInstanceOfferingRequest() : 
    m_reservedInstanceOfferingIdHasBeenSet(false),
    m_reservationNameHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false)
{
}

Aws::String PurchaseReservedInstanceOfferingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reservedInstanceOfferingIdHasBeenSet)
  {
   payload.WithString("ReservedInstanceOfferingId", m_reservedInstanceOfferingId);

  }

  if(m_reservationNameHasBeenSet)
  {
   payload.WithString("ReservationName", m_reservationName);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  return payload.View().WriteReadable();
}




