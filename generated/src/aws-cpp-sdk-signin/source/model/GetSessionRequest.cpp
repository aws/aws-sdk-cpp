/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/GetSessionRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sessionArnHasBeenSet) {
    payload.WithString("sessionArn", m_sessionArn);
  }

  if (m_principalArnHasBeenSet) {
    payload.WithString("principalArn", m_principalArn);
  }

  return payload.View().WriteReadable();
}

GetSessionRequest::EndpointParameters GetSessionRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsControlPlane"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
