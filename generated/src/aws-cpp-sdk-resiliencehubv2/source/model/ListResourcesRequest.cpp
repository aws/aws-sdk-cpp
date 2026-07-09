/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListResourcesRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListResourcesRequest::SerializePayload() const { return {}; }

void ListResourcesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_serviceArnHasBeenSet) {
    ss << m_serviceArn;
    uri.AddQueryStringParameter("serviceArn", ss.str());
    ss.str("");
  }

  if (m_serviceFunctionIdHasBeenSet) {
    ss << m_serviceFunctionId;
    uri.AddQueryStringParameter("serviceFunctionId", ss.str());
    ss.str("");
  }

  if (m_awsRegionHasBeenSet) {
    ss << m_awsRegion;
    uri.AddQueryStringParameter("awsRegion", ss.str());
    ss.str("");
  }

  if (m_resourceTypesHasBeenSet) {
    for (const auto& item : m_resourceTypes) {
      ss << item;
      uri.AddQueryStringParameter("resourceTypes", ss.str());
      ss.str("");
    }
  }

  if (m_billableHasBeenSet) {
    ss << m_billable;
    uri.AddQueryStringParameter("billable", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }
}
