/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDevicesRequest::ListDevicesRequest() : 
    m_deviceAggregatedStatusFilter(DeviceAggregatedStatus::NOT_SET),
    m_deviceAggregatedStatusFilterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameFilterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortBy(ListDevicesSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListDevicesRequest::SerializePayload() const
{
  return {};
}

void ListDevicesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deviceAggregatedStatusFilterHasBeenSet)
    {
      ss << DeviceAggregatedStatusMapper::GetNameForDeviceAggregatedStatus(m_deviceAggregatedStatusFilter);
      uri.AddQueryStringParameter("DeviceAggregatedStatusFilter", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nameFilterHasBeenSet)
    {
      ss << m_nameFilter;
      uri.AddQueryStringParameter("NameFilter", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_sortByHasBeenSet)
    {
      ss << ListDevicesSortByMapper::GetNameForListDevicesSortBy(m_sortBy);
      uri.AddQueryStringParameter("SortBy", ss.str());
      ss.str("");
    }

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("SortOrder", ss.str());
      ss.str("");
    }

}



