/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/IntrospectOAuth2TokenWithIAMRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String IntrospectOAuth2TokenWithIAMRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tokenHasBeenSet) {
    payload.WithString("token", m_token);
  }

  if (m_tokenTypeHintHasBeenSet) {
    payload.WithString("token_type_hint", m_tokenTypeHint);
  }

  return payload.View().WriteReadable();
}

IntrospectOAuth2TokenWithIAMRequest::EndpointParameters IntrospectOAuth2TokenWithIAMRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsOAuthEndpoint"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
