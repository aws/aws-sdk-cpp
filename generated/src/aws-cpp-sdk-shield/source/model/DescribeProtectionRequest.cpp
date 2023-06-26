/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DescribeProtectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProtectionRequest::DescribeProtectionRequest() : 
    m_protectionIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Aws::String DescribeProtectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protectionIdHasBeenSet)
  {
   payload.WithString("ProtectionId", m_protectionId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProtectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.DescribeProtection"));
  return headers;

}




