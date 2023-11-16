/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DeleteApplicationGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationGrantRequest::DeleteApplicationGrantRequest() : 
    m_applicationArnHasBeenSet(false),
    m_grantType(GrantType::NOT_SET),
    m_grantTypeHasBeenSet(false)
{
}

Aws::String DeleteApplicationGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_grantTypeHasBeenSet)
  {
   payload.WithString("GrantType", GrantTypeMapper::GetNameForGrantType(m_grantType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteApplicationGrantRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DeleteApplicationGrant"));
  return headers;

}




