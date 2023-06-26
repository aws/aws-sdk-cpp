/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchGetSecurityControlsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetSecurityControlsRequest::BatchGetSecurityControlsRequest() : 
    m_securityControlIdsHasBeenSet(false)
{
}

Aws::String BatchGetSecurityControlsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_securityControlIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityControlIdsJsonList(m_securityControlIds.size());
   for(unsigned securityControlIdsIndex = 0; securityControlIdsIndex < securityControlIdsJsonList.GetLength(); ++securityControlIdsIndex)
   {
     securityControlIdsJsonList[securityControlIdsIndex].AsString(m_securityControlIds[securityControlIdsIndex]);
   }
   payload.WithArray("SecurityControlIds", std::move(securityControlIdsJsonList));

  }

  return payload.View().WriteReadable();
}




