/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sesv2/model/GetSuppressedDestinationRequest.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetSuppressedDestinationRequest::SerializePayload() const { return {}; }

void GetSuppressedDestinationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_tenantNameHasBeenSet) {
    ss << m_tenantName;
    uri.AddQueryStringParameter("TenantName", ss.str());
    ss.str("");
  }
}
