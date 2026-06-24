/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/DeleteResourcePermissionStatementRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteResourcePermissionStatementRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statementIdHasBeenSet) {
    payload.WithString("statementId", m_statementId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

DeleteResourcePermissionStatementRequest::EndpointParameters DeleteResourcePermissionStatementRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsControlPlane"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
