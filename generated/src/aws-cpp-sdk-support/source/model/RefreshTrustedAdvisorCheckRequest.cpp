/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/RefreshTrustedAdvisorCheckRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RefreshTrustedAdvisorCheckRequest::RefreshTrustedAdvisorCheckRequest() : 
    m_checkIdHasBeenSet(false)
{
}

Aws::String RefreshTrustedAdvisorCheckRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_checkIdHasBeenSet)
  {
   payload.WithString("checkId", m_checkId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RefreshTrustedAdvisorCheckRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.RefreshTrustedAdvisorCheck"));
  return headers;

}




