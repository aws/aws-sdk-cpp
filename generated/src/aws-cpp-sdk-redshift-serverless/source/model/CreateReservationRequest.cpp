﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/model/CreateReservationRequest.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateReservationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_capacityHasBeenSet) {
    payload.WithInteger("capacity", m_capacity);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_offeringIdHasBeenSet) {
    payload.WithString("offeringId", m_offeringId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateReservationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.CreateReservation"));
  return headers;
}
