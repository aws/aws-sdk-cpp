/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/PutConsoleAuthorizationConfigurationRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutConsoleAuthorizationConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_targetIdHasBeenSet) {
    payload.WithString("targetId", m_targetId);
  }

  return payload.View().WriteReadable();
}

PutConsoleAuthorizationConfigurationRequest::EndpointParameters PutConsoleAuthorizationConfigurationRequest::GetEndpointContextParams()
    const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsControlPlane"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
