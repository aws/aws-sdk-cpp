/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/CreateTokenWithIAMRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTokenWithIAMRequest::CreateTokenWithIAMRequest() : 
    m_clientIdHasBeenSet(false),
    m_grantTypeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_assertionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_redirectUriHasBeenSet(false),
    m_subjectTokenHasBeenSet(false),
    m_subjectTokenTypeHasBeenSet(false),
    m_requestedTokenTypeHasBeenSet(false)
{
}

Aws::String CreateTokenWithIAMRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_grantTypeHasBeenSet)
  {
   payload.WithString("grantType", m_grantType);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("refreshToken", m_refreshToken);

  }

  if(m_assertionHasBeenSet)
  {
   payload.WithString("assertion", m_assertion);

  }

  if(m_scopeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopeJsonList(m_scope.size());
   for(unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex)
   {
     scopeJsonList[scopeIndex].AsString(m_scope[scopeIndex]);
   }
   payload.WithArray("scope", std::move(scopeJsonList));

  }

  if(m_redirectUriHasBeenSet)
  {
   payload.WithString("redirectUri", m_redirectUri);

  }

  if(m_subjectTokenHasBeenSet)
  {
   payload.WithString("subjectToken", m_subjectToken);

  }

  if(m_subjectTokenTypeHasBeenSet)
  {
   payload.WithString("subjectTokenType", m_subjectTokenType);

  }

  if(m_requestedTokenTypeHasBeenSet)
  {
   payload.WithString("requestedTokenType", m_requestedTokenType);

  }

  return payload.View().WriteReadable();
}




