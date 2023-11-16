/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/PutApplicationGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutApplicationGrantRequest::PutApplicationGrantRequest() : 
    m_applicationArnHasBeenSet(false),
    m_grantHasBeenSet(false),
    m_grantType(GrantType::NOT_SET),
    m_grantTypeHasBeenSet(false)
{
}

Aws::String PutApplicationGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_grantHasBeenSet)
  {
   payload.WithObject("Grant", m_grant.Jsonize());

  }

  if(m_grantTypeHasBeenSet)
  {
   payload.WithString("GrantType", GrantTypeMapper::GetNameForGrantType(m_grantType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutApplicationGrantRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.PutApplicationGrant"));
  return headers;

}




