/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/TimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/AttackStatisticsDataItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Shield
{
namespace Model
{
  class DescribeAttackStatisticsResult
  {
  public:
    AWS_SHIELD_API DescribeAttackStatisticsResult() = default;
    AWS_SHIELD_API DescribeAttackStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeAttackStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time range of the attack.</p>
     */
    inline const TimeRange& GetTimeRange() const { return m_timeRange; }
    template<typename TimeRangeT = TimeRange>
    void SetTimeRange(TimeRangeT&& value) { m_timeRangeHasBeenSet = true; m_timeRange = std::forward<TimeRangeT>(value); }
    template<typename TimeRangeT = TimeRange>
    DescribeAttackStatisticsResult& WithTimeRange(TimeRangeT&& value) { SetTimeRange(std::forward<TimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data that describes the attacks detected during the time period.</p>
     */
    inline const Aws::Vector<AttackStatisticsDataItem>& GetDataItems() const { return m_dataItems; }
    template<typename DataItemsT = Aws::Vector<AttackStatisticsDataItem>>
    void SetDataItems(DataItemsT&& value) { m_dataItemsHasBeenSet = true; m_dataItems = std::forward<DataItemsT>(value); }
    template<typename DataItemsT = Aws::Vector<AttackStatisticsDataItem>>
    DescribeAttackStatisticsResult& WithDataItems(DataItemsT&& value) { SetDataItems(std::forward<DataItemsT>(value)); return *this;}
    template<typename DataItemsT = AttackStatisticsDataItem>
    DescribeAttackStatisticsResult& AddDataItems(DataItemsT&& value) { m_dataItemsHasBeenSet = true; m_dataItems.emplace_back(std::forward<DataItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAttackStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TimeRange m_timeRange;
    bool m_timeRangeHasBeenSet = false;

    Aws::Vector<AttackStatisticsDataItem> m_dataItems;
    bool m_dataItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
