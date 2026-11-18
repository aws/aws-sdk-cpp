/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/BatchRevokeSessionsRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchRevokeSessionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("principalArn", m_principalArn);
  }

  if (m_sessionArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionArnsJsonList(m_sessionArns.size());
    for (unsigned sessionArnsIndex = 0; sessionArnsIndex < sessionArnsJsonList.GetLength(); ++sessionArnsIndex) {
      sessionArnsJsonList[sessionArnsIndex].AsString(m_sessionArns[sessionArnsIndex]);
    }
    payload.WithArray("sessionArns", std::move(sessionArnsJsonList));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload.View().WriteReadable();
}

BatchRevokeSessionsRequest::EndpointParameters BatchRevokeSessionsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsControlPlane"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
