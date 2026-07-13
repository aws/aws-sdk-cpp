/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/CreateOAuth2TokenWithIAMRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOAuth2TokenWithIAMRequest::SerializePayload() const {
  JsonValue payload;

  if (m_grantTypeHasBeenSet) {
    payload.WithString("grant_type", m_grantType);
  }

  if (m_resourceHasBeenSet) {
    payload.WithString("resource", m_resource);
  }

  return payload.View().WriteReadable();
}

CreateOAuth2TokenWithIAMRequest::EndpointParameters CreateOAuth2TokenWithIAMRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsOAuthEndpoint"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
