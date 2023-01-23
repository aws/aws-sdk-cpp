/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/GetOperationDetailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetOperationDetailRequest::GetOperationDetailRequest() : 
    m_operationIdHasBeenSet(false)
{
}

Aws::String GetOperationDetailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operationIdHasBeenSet)
  {
   payload.WithString("OperationId", m_operationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetOperationDetailRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.GetOperationDetail"));
  return headers;

}




