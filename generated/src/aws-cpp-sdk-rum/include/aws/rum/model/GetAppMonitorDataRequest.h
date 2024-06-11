/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/TimeRange.h>
#include <aws/rum/model/QueryFilter.h>
#include <utility>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class GetAppMonitorDataRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API GetAppMonitorDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAppMonitorData"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline const Aws::Vector<QueryFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<QueryFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<QueryFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetAppMonitorDataRequest& WithFilters(const Aws::Vector<QueryFilter>& value) { SetFilters(value); return *this;}
    inline GetAppMonitorDataRequest& WithFilters(Aws::Vector<QueryFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GetAppMonitorDataRequest& AddFilters(const QueryFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GetAppMonitorDataRequest& AddFilters(QueryFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in one operation. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetAppMonitorDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app monitor that collected the data that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetAppMonitorDataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetAppMonitorDataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetAppMonitorDataRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetAppMonitorDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAppMonitorDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAppMonitorDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that defines the time range that you want to retrieve results
     * from.</p>
     */
    inline const TimeRange& GetTimeRange() const{ return m_timeRange; }
    inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
    inline void SetTimeRange(const TimeRange& value) { m_timeRangeHasBeenSet = true; m_timeRange = value; }
    inline void SetTimeRange(TimeRange&& value) { m_timeRangeHasBeenSet = true; m_timeRange = std::move(value); }
    inline GetAppMonitorDataRequest& WithTimeRange(const TimeRange& value) { SetTimeRange(value); return *this;}
    inline GetAppMonitorDataRequest& WithTimeRange(TimeRange&& value) { SetTimeRange(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QueryFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    TimeRange m_timeRange;
    bool m_timeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
