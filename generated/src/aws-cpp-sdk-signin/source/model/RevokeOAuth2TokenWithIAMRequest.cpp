/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/RevokeOAuth2TokenWithIAMRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RevokeOAuth2TokenWithIAMRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tokenHasBeenSet) {
    payload.WithString("token", m_token);
  }

  return payload.View().WriteReadable();
}

RevokeOAuth2TokenWithIAMRequest::EndpointParameters RevokeOAuth2TokenWithIAMRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsOAuthEndpoint"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
