/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListEventBridgeRuleTemplateGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListEventBridgeRuleTemplateGroupsRequest::ListEventBridgeRuleTemplateGroupsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_signalMapIdentifierHasBeenSet(false)
{
}

Aws::String ListEventBridgeRuleTemplateGroupsRequest::SerializePayload() const
{
  return {};
}

void ListEventBridgeRuleTemplateGroupsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_signalMapIdentifierHasBeenSet)
    {
      ss << m_signalMapIdentifier;
      uri.AddQueryStringParameter("signalMapIdentifier", ss.str());
      ss.str("");
    }

}



