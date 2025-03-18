/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ListAssetInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAssetInstancesRequest::SerializePayload() const
{
  return {};
}

void ListAssetInstancesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_assetIdFilterHasBeenSet)
    {
      for(const auto& item : m_assetIdFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("AssetIdFilter", ss.str());
        ss.str("");
      }
    }

    if(m_instanceTypeFilterHasBeenSet)
    {
      for(const auto& item : m_instanceTypeFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("InstanceTypeFilter", ss.str());
        ss.str("");
      }
    }

    if(m_accountIdFilterHasBeenSet)
    {
      for(const auto& item : m_accountIdFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("AccountIdFilter", ss.str());
        ss.str("");
      }
    }

    if(m_awsServiceFilterHasBeenSet)
    {
      for(const auto& item : m_awsServiceFilter)
      {
        ss << AWSServiceNameMapper::GetNameForAWSServiceName(item);
        uri.AddQueryStringParameter("AwsServiceFilter", ss.str());
        ss.str("");
      }
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



