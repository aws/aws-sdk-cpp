/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/GetApplicationAccessScopeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetApplicationAccessScopeRequest::GetApplicationAccessScopeRequest() : 
    m_applicationArnHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

Aws::String GetApplicationAccessScopeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetApplicationAccessScopeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.GetApplicationAccessScope"));
  return headers;

}




