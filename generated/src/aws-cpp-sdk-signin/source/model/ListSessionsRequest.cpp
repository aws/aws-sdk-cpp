/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/ListSessionsRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListSessionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("principalArn", m_principalArn);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SessionStatusMapper::GetNameForSessionStatus(m_status));
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_issuedAfterHasBeenSet) {
    payload.WithInt64("issuedAfter", m_issuedAfter);
  }

  if (m_issuedBeforeHasBeenSet) {
    payload.WithInt64("issuedBefore", m_issuedBefore);
  }

  return payload.View().WriteReadable();
}

ListSessionsRequest::EndpointParameters ListSessionsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsControlPlane"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
