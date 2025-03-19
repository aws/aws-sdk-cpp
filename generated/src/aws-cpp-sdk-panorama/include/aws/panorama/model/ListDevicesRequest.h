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
    AWS_PANORAMA_API ListDevicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDevices"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;

    AWS_PANORAMA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filter based on a device's status.</p>
     */
    inline DeviceAggregatedStatus GetDeviceAggregatedStatusFilter() const { return m_deviceAggregatedStatusFilter; }
    inline bool DeviceAggregatedStatusFilterHasBeenSet() const { return m_deviceAggregatedStatusFilterHasBeenSet; }
    inline void SetDeviceAggregatedStatusFilter(DeviceAggregatedStatus value) { m_deviceAggregatedStatusFilterHasBeenSet = true; m_deviceAggregatedStatusFilter = value; }
    inline ListDevicesRequest& WithDeviceAggregatedStatusFilter(DeviceAggregatedStatus value) { SetDeviceAggregatedStatusFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of devices to return in one page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter based on device's name. Prefixes supported.</p>
     */
    inline const Aws::String& GetNameFilter() const { return m_nameFilter; }
    inline bool NameFilterHasBeenSet() const { return m_nameFilterHasBeenSet; }
    template<typename NameFilterT = Aws::String>
    void SetNameFilter(NameFilterT&& value) { m_nameFilterHasBeenSet = true; m_nameFilter = std::forward<NameFilterT>(value); }
    template<typename NameFilterT = Aws::String>
    ListDevicesRequest& WithNameFilter(NameFilterT&& value) { SetNameFilter(std::forward<NameFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDevicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target column to be sorted on. Default column sort is CREATED_TIME.</p>
     */
    inline ListDevicesSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ListDevicesSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListDevicesRequest& WithSortBy(ListDevicesSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting order for the returned list. SortOrder is DESCENDING by default
     * based on CREATED_TIME. Otherwise, SortOrder is ASCENDING.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListDevicesRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    DeviceAggregatedStatus m_deviceAggregatedStatusFilter{DeviceAggregatedStatus::NOT_SET};
    bool m_deviceAggregatedStatusFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameFilter;
    bool m_nameFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListDevicesSortBy m_sortBy{ListDevicesSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
