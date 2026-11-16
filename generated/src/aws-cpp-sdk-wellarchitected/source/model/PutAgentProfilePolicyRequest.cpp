/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/PutAgentProfilePolicyRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAgentProfilePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyHasBeenSet) {
    payload.WithString("policy", m_policy);
  }

  return payload.View().WriteReadable();
}

PutAgentProfilePolicyRequest::EndpointParameters PutAgentProfilePolicyRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("SubServiceType"), "AGENT", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
