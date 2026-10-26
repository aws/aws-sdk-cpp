/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/CreateOAuth2TokenWithTokenExchangeRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOAuth2TokenWithTokenExchangeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_grantTypeHasBeenSet) {
    payload.WithString("grant_type", m_grantType);
  }

  if (m_subjectTokenHasBeenSet) {
    payload.WithString("subject_token", m_subjectToken);
  }

  if (m_subjectTokenTypeHasBeenSet) {
    payload.WithString("subject_token_type", m_subjectTokenType);
  }

  if (m_resourceHasBeenSet) {
    payload.WithString("resource", m_resource);
  }

  if (m_scopeHasBeenSet) {
    payload.WithString("scope", m_scope);
  }

  return payload.View().WriteReadable();
}

CreateOAuth2TokenWithTokenExchangeRequest::EndpointParameters CreateOAuth2TokenWithTokenExchangeRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsOAuthEndpoint"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
