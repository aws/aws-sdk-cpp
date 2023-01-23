﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ListSitesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSitesRequest::ListSitesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_operatingAddressCountryCodeFilterHasBeenSet(false),
    m_operatingAddressStateOrRegionFilterHasBeenSet(false),
    m_operatingAddressCityFilterHasBeenSet(false)
{
}

Aws::String ListSitesRequest::SerializePayload() const
{
  return {};
}

void ListSitesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_operatingAddressCountryCodeFilterHasBeenSet)
    {
      for(const auto& item : m_operatingAddressCountryCodeFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("OperatingAddressCountryCodeFilter", ss.str());
        ss.str("");
      }
    }

    if(m_operatingAddressStateOrRegionFilterHasBeenSet)
    {
      for(const auto& item : m_operatingAddressStateOrRegionFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("OperatingAddressStateOrRegionFilter", ss.str());
        ss.str("");
      }
    }

    if(m_operatingAddressCityFilterHasBeenSet)
    {
      for(const auto& item : m_operatingAddressCityFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("OperatingAddressCityFilter", ss.str());
        ss.str("");
      }
    }

}



