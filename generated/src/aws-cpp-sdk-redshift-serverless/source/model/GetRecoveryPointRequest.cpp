/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/GetRecoveryPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRecoveryPointRequest::GetRecoveryPointRequest() : 
    m_recoveryPointIdHasBeenSet(false)
{
}

Aws::String GetRecoveryPointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recoveryPointIdHasBeenSet)
  {
   payload.WithString("recoveryPointId", m_recoveryPointId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRecoveryPointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.GetRecoveryPoint"));
  return headers;

}




