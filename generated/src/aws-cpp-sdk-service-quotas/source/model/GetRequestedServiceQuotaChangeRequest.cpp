/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/GetRequestedServiceQuotaChangeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRequestedServiceQuotaChangeRequest::GetRequestedServiceQuotaChangeRequest() : 
    m_requestIdHasBeenSet(false)
{
}

Aws::String GetRequestedServiceQuotaChangeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRequestedServiceQuotaChangeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.GetRequestedServiceQuotaChange"));
  return headers;

}




