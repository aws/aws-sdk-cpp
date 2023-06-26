/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ListInstanceTypeDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListInstanceTypeDetailsRequest::ListInstanceTypeDetailsRequest() : 
    m_engineVersionHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_retrieveAZs(false),
    m_retrieveAZsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

Aws::String ListInstanceTypeDetailsRequest::SerializePayload() const
{
  return {};
}

void ListInstanceTypeDetailsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_domainNameHasBeenSet)
    {
      ss << m_domainName;
      uri.AddQueryStringParameter("domainName", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_retrieveAZsHasBeenSet)
    {
      ss << m_retrieveAZs;
      uri.AddQueryStringParameter("retrieveAZs", ss.str());
      ss.str("");
    }

    if(m_instanceTypeHasBeenSet)
    {
      ss << m_instanceType;
      uri.AddQueryStringParameter("instanceType", ss.str());
      ss.str("");
    }

}



