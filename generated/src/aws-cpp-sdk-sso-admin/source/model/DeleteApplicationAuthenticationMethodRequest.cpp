/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DeleteApplicationAuthenticationMethodRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationAuthenticationMethodRequest::DeleteApplicationAuthenticationMethodRequest() : 
    m_applicationArnHasBeenSet(false),
    m_authenticationMethodType(AuthenticationMethodType::NOT_SET),
    m_authenticationMethodTypeHasBeenSet(false)
{
}

Aws::String DeleteApplicationAuthenticationMethodRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_authenticationMethodTypeHasBeenSet)
  {
   payload.WithString("AuthenticationMethodType", AuthenticationMethodTypeMapper::GetNameForAuthenticationMethodType(m_authenticationMethodType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteApplicationAuthenticationMethodRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DeleteApplicationAuthenticationMethod"));
  return headers;

}




