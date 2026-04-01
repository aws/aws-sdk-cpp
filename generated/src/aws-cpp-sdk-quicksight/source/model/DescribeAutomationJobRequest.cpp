/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/DescribeAutomationJobRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeAutomationJobRequest::SerializePayload() const { return {}; }

void DescribeAutomationJobRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_includeInputPayloadHasBeenSet) {
    ss << m_includeInputPayload;
    uri.AddQueryStringParameter("includeInputPayload", ss.str());
    ss.str("");
  }

  if (m_includeOutputPayloadHasBeenSet) {
    ss << m_includeOutputPayload;
    uri.AddQueryStringParameter("includeOutputPayload", ss.str());
    ss.str("");
  }
}
