/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetAccessTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetAccessTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessRequestIdHasBeenSet)
  {
   payload.WithString("AccessRequestId", m_accessRequestId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAccessTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetAccessToken"));
  return headers;

}




