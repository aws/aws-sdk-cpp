/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ListCatalogItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListCatalogItemsRequest::ListCatalogItemsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_itemClassFilterHasBeenSet(false),
    m_supportedStorageFilterHasBeenSet(false),
    m_eC2FamilyFilterHasBeenSet(false)
{
}

Aws::String ListCatalogItemsRequest::SerializePayload() const
{
  return {};
}

void ListCatalogItemsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_itemClassFilterHasBeenSet)
    {
      for(const auto& item : m_itemClassFilter)
      {
        ss << CatalogItemClassMapper::GetNameForCatalogItemClass(item);
        uri.AddQueryStringParameter("ItemClassFilter", ss.str());
        ss.str("");
      }
    }

    if(m_supportedStorageFilterHasBeenSet)
    {
      for(const auto& item : m_supportedStorageFilter)
      {
        ss << SupportedStorageEnumMapper::GetNameForSupportedStorageEnum(item);
        uri.AddQueryStringParameter("SupportedStorageFilter", ss.str());
        ss.str("");
      }
    }

    if(m_eC2FamilyFilterHasBeenSet)
    {
      for(const auto& item : m_eC2FamilyFilter)
      {
        ss << item;
        uri.AddQueryStringParameter("EC2FamilyFilter", ss.str());
        ss.str("");
      }
    }

}



