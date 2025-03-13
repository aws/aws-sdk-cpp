/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/ListInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SupplyChain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListInstancesRequest::SerializePayload() const
{
  return {};
}

void ListInstancesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_instanceNameFilterHasBeenSet)
    {
      for(const auto& item : m_instanceNameFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("instanceNameFilter", ss.str());
        ss.str("");
      }
    }

    if(m_instanceStateFilterHasBeenSet)
    {
      for(const auto& item : m_instanceStateFilter)
      {
        ss << InstanceStateMapper::GetNameForInstanceState(item);
        uri.AddQueryStringParameter("instanceStateFilter", ss.str());
        ss.str("");
      }
    }

}



