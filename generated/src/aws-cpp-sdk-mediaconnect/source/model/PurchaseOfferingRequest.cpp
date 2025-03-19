/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/PurchaseOfferingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PurchaseOfferingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reservationNameHasBeenSet)
  {
   payload.WithString("reservationName", m_reservationName);

  }

  if(m_startHasBeenSet)
  {
   payload.WithString("start", m_start);

  }

  return payload.View().WriteReadable();
}




