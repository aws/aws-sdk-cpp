/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetCustomerGatewayAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetCustomerGatewayAssociationsRequest::GetCustomerGatewayAssociationsRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_customerGatewayArnsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetCustomerGatewayAssociationsRequest::SerializePayload() const
{
  return {};
}

void GetCustomerGatewayAssociationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_customerGatewayArnsHasBeenSet)
    {
      for(const auto& item : m_customerGatewayArns)
      {
        ss << item;
        uri.AddQueryStringParameter("customerGatewayArns", ss.str());
        ss.str("");
      }
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



