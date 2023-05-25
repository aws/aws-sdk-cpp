/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDevicesRequest::GetDevicesRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdsHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetDevicesRequest::SerializePayload() const
{
  return {};
}

void GetDevicesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deviceIdsHasBeenSet)
    {
      for(const auto& item : m_deviceIds)
      {
        ss << item;
        uri.AddQueryStringParameter("deviceIds", ss.str());
        ss.str("");
      }
    }

    if(m_siteIdHasBeenSet)
    {
      ss << m_siteId;
      uri.AddQueryStringParameter("siteId", ss.str());
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



