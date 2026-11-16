/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wellarchitected/model/GetAgentOrganizationalReportDataRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetAgentOrganizationalReportDataRequest::SerializePayload() const { return {}; }

void GetAgentOrganizationalReportDataRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_formatHasBeenSet) {
    ss << OrganizationalReportFormatMapper::GetNameForOrganizationalReportFormat(m_format);
    uri.AddQueryStringParameter("format", ss.str());
    ss.str("");
  }
}

GetAgentOrganizationalReportDataRequest::EndpointParameters GetAgentOrganizationalReportDataRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("SubServiceType"), "AGENT", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
