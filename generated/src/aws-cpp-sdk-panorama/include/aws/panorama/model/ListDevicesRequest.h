/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/panorama/model/DeviceAggregatedStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/ListDevicesSortBy.h>
#include <aws/panorama/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Panorama
{
namespace Model
{

  /**
   */
  class ListDevicesRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API ListDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDevices"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;

    AWS_PANORAMA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Filter based on a device's status.</p>
     */
    inline const DeviceAggregatedStatus& GetDeviceAggregatedStatusFilter() const{ return m_deviceAggregatedStatusFilter; }

    /**
     * <p>Filter based on a device's status.</p>
     */
    inline bool DeviceAggregatedStatusFilterHasBeenSet() const { return m_deviceAggregatedStatusFilterHasBeenSet; }

    /**
     * <p>Filter based on a device's status.</p>
     */
    inline void SetDeviceAggregatedStatusFilter(const DeviceAggregatedStatus& value) { m_deviceAggregatedStatusFilterHasBeenSet = true; m_deviceAggregatedStatusFilter = value; }

    /**
     * <p>Filter based on a device's status.</p>
     */
    inline void SetDeviceAggregatedStatusFilter(DeviceAggregatedStatus&& value) { m_deviceAggregatedStatusFilterHasBeenSet = true; m_deviceAggregatedStatusFilter = std::move(value); }

    /**
     * <p>Filter based on a device's status.</p>
     */
    inline ListDevicesRequest& WithDeviceAggregatedStatusFilter(const DeviceAggregatedStatus& value) { SetDeviceAggregatedStatusFilter(value); return *this;}

    /**
     * <p>Filter based on a device's status.</p>
     */
    inline ListDevicesRequest& WithDeviceAggregatedStatusFilter(DeviceAggregatedStatus&& value) { SetDeviceAggregatedStatusFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of devices to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of devices to return in one page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of devices to return in one page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of devices to return in one page of results.</p>
     */
    inline ListDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline const Aws::String& GetNameFilter() const{ return m_nameFilter; }

    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline bool NameFilterHasBeenSet() const { return m_nameFilterHasBeenSet; }

    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline void SetNameFilter(const Aws::String& value) { m_nameFilterHasBeenSet = true; m_nameFilter = value; }

    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline void SetNameFilter(Aws::String&& value) { m_nameFilterHasBeenSet = true; m_nameFilter = std::move(value); }

    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline void SetNameFilter(const char* value) { m_nameFilterHasBeenSet = true; m_nameFilter.assign(value); }

    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline ListDevicesRequest& WithNameFilter(const Aws::String& value) { SetNameFilter(value); return *this;}

    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline ListDevicesRequest& WithNameFilter(Aws::String&& value) { SetNameFilter(std::move(value)); return *this;}

    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline ListDevicesRequest& WithNameFilter(const char* value) { SetNameFilter(value); return *this;}


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListDevicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListDevicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListDevicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The target column to be sorted on. Default column sort is CREATED_TIME.</p>
     */
    inline const ListDevicesSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The target column to be sorted on. Default column sort is CREATED_TIME.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The target column to be sorted on. Default column sort is CREATED_TIME.</p>
     */
    inline void SetSortBy(const ListDevicesSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The target column to be sorted on. Default column sort is CREATED_TIME.</p>
     */
    inline void SetSortBy(ListDevicesSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The target column to be sorted on. Default column sort is CREATED_TIME.</p>
     */
    inline ListDevicesRequest& WithSortBy(const ListDevicesSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The target column to be sorted on. Default column sort is CREATED_TIME.</p>
     */
    inline ListDevicesRequest& WithSortBy(ListDevicesSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sorting order for the returned list. SortOrder is DESCENDING by default
     * based on CREATED_TIME. Otherwise, SortOrder is ASCENDING.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sorting order for the returned list. SortOrder is DESCENDING by default
     * based on CREATED_TIME. Otherwise, SortOrder is ASCENDING.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sorting order for the returned list. SortOrder is DESCENDING by default
     * based on CREATED_TIME. Otherwise, SortOrder is ASCENDING.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sorting order for the returned list. SortOrder is DESCENDING by default
     * based on CREATED_TIME. Otherwise, SortOrder is ASCENDING.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sorting order for the returned list. SortOrder is DESCENDING by default
     * based on CREATED_TIME. Otherwise, SortOrder is ASCENDING.</p>
     */
    inline ListDevicesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sorting order for the returned list. SortOrder is DESCENDING by default
     * based on CREATED_TIME. Otherwise, SortOrder is ASCENDING.</p>
     */
    inline ListDevicesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    DeviceAggregatedStatus m_deviceAggregatedStatusFilter;
    bool m_deviceAggregatedStatusFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameFilter;
    bool m_nameFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListDevicesSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
