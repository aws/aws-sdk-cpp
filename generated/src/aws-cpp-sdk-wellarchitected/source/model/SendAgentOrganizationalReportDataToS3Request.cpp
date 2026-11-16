/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/SendAgentOrganizationalReportDataToS3Request.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendAgentOrganizationalReportDataToS3Request::SerializePayload() const {
  JsonValue payload;

  if (m_formatHasBeenSet) {
    payload.WithString("format", OrganizationalReportFormatMapper::GetNameForOrganizationalReportFormat(m_format));
  }

  if (m_bucketArnHasBeenSet) {
    payload.WithString("bucketArn", m_bucketArn);
  }

  if (m_objectKeyHasBeenSet) {
    payload.WithString("objectKey", m_objectKey);
  }

  return payload.View().WriteReadable();
}

SendAgentOrganizationalReportDataToS3Request::EndpointParameters SendAgentOrganizationalReportDataToS3Request::GetEndpointContextParams()
    const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("SubServiceType"), "AGENT", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
