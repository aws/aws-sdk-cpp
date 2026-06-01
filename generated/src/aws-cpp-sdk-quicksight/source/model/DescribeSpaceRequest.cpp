/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/DescribeSpaceRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeSpaceRequest::SerializePayload() const { return {}; }

void DescribeSpaceRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxContributorsHasBeenSet) {
    ss << m_maxContributors;
    uri.AddQueryStringParameter("maxContributors", ss.str());
    ss.str("");
  }
}
