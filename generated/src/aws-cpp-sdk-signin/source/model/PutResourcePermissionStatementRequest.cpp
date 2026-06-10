/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/PutResourcePermissionStatementRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutResourcePermissionStatementRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceVpcHasBeenSet) {
    payload.WithString("sourceVpc", m_sourceVpc);
  }

  if (m_signinSourceVpceHasBeenSet) {
    payload.WithString("signinSourceVpce", m_signinSourceVpce);
  }

  if (m_consoleSourceVpceHasBeenSet) {
    payload.WithString("consoleSourceVpce", m_consoleSourceVpce);
  }

  if (m_vpcSourceIpHasBeenSet) {
    payload.WithString("vpcSourceIp", m_vpcSourceIp);
  }

  if (m_sourceIpHasBeenSet) {
    payload.WithString("sourceIp", m_sourceIp);
  }

  if (m_requestedRegionHasBeenSet) {
    payload.WithString("requestedRegion", m_requestedRegion);
  }

  if (m_excludedPrincipalHasBeenSet) {
    payload.WithString("excludedPrincipal", m_excludedPrincipal);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

PutResourcePermissionStatementRequest::EndpointParameters PutResourcePermissionStatementRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsControlPlane"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
