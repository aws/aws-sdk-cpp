/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetConnectionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetConnectionsRequest::GetConnectionsRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_connectionIdsHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetConnectionsRequest::SerializePayload() const
{
  return {};
}

void GetConnectionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_connectionIdsHasBeenSet)
    {
      for(const auto& item : m_connectionIds)
      {
        ss << item;
        uri.AddQueryStringParameter("connectionIds", ss.str());
        ss.str("");
      }
    }

    if(m_deviceIdHasBeenSet)
    {
      ss << m_deviceId;
      uri.AddQueryStringParameter("deviceId", ss.str());
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

}



