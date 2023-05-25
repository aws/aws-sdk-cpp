/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/GetTableRestoreStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTableRestoreStatusRequest::GetTableRestoreStatusRequest() : 
    m_tableRestoreRequestIdHasBeenSet(false)
{
}

Aws::String GetTableRestoreStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableRestoreRequestIdHasBeenSet)
  {
   payload.WithString("tableRestoreRequestId", m_tableRestoreRequestId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTableRestoreStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.GetTableRestoreStatus"));
  return headers;

}




