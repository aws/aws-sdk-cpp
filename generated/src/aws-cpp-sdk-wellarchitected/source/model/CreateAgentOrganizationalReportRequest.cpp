/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/CreateAgentOrganizationalReportRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAgentOrganizationalReportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("filters", m_filters.Jsonize());
  }

  return payload.View().WriteReadable();
}

CreateAgentOrganizationalReportRequest::EndpointParameters CreateAgentOrganizationalReportRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("SubServiceType"), "AGENT", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
