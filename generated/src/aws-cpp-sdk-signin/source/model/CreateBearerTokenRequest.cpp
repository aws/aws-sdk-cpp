/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/CreateBearerTokenRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBearerTokenRequest::SerializePayload() const {
  JsonValue payload;

  if (m_grantTypeHasBeenSet) {
    payload.WithString("grant_type", m_grantType);
  }

  if (m_resourceHasBeenSet) {
    payload.WithString("resource", m_resource);
  }

  if (m_durationSecondsHasBeenSet) {
    payload.WithInteger("duration", m_durationSeconds);
  }

  return payload.View().WriteReadable();
}

CreateBearerTokenRequest::EndpointParameters CreateBearerTokenRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsOAuthEndpoint"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
