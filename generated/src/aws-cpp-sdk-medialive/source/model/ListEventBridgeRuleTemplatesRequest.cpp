/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListEventBridgeRuleTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListEventBridgeRuleTemplatesRequest::ListEventBridgeRuleTemplatesRequest() : 
    m_groupIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_signalMapIdentifierHasBeenSet(false)
{
}

Aws::String ListEventBridgeRuleTemplatesRequest::SerializePayload() const
{
  return {};
}

void ListEventBridgeRuleTemplatesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_groupIdentifierHasBeenSet)
    {
      ss << m_groupIdentifier;
      uri.AddQueryStringParameter("groupIdentifier", ss.str());
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

    if(m_signalMapIdentifierHasBeenSet)
    {
      ss << m_signalMapIdentifier;
      uri.AddQueryStringParameter("signalMapIdentifier", ss.str());
      ss.str("");
    }

}



