/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/MapRunStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/MapRunItemCounts.h>
#include <aws/states/model/MapRunExecutionCounts.h>
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
namespace SFN
{
namespace Model
{
  class DescribeMapRunResult
  {
  public:
    AWS_SFN_API DescribeMapRunResult() = default;
    AWS_SFN_API DescribeMapRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API DescribeMapRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run.</p>
     */
    inline const Aws::String& GetMapRunArn() const { return m_mapRunArn; }
    template<typename MapRunArnT = Aws::String>
    void SetMapRunArn(MapRunArnT&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::forward<MapRunArnT>(value); }
    template<typename MapRunArnT = Aws::String>
    DescribeMapRunResult& WithMapRunArn(MapRunArnT&& value) { SetMapRunArn(std::forward<MapRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution in which the Map
     * Run was started.</p>
     */
    inline const Aws::String& GetExecutionArn() const { return m_executionArn; }
    template<typename ExecutionArnT = Aws::String>
    void SetExecutionArn(ExecutionArnT&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::forward<ExecutionArnT>(value); }
    template<typename ExecutionArnT = Aws::String>
    DescribeMapRunResult& WithExecutionArn(ExecutionArnT&& value) { SetExecutionArn(std::forward<ExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Map Run.</p>
     */
    inline MapRunStatus GetStatus() const { return m_status; }
    inline void SetStatus(MapRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeMapRunResult& WithStatus(MapRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the Map Run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    DescribeMapRunResult& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the Map Run was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const { return m_stopDate; }
    template<typename StopDateT = Aws::Utils::DateTime>
    void SetStopDate(StopDateT&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::forward<StopDateT>(value); }
    template<typename StopDateT = Aws::Utils::DateTime>
    DescribeMapRunResult& WithStopDate(StopDateT&& value) { SetStopDate(std::forward<StopDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of child workflow executions configured to run in parallel
     * for the Map Run at the same time.</p>
     */
    inline int GetMaxConcurrency() const { return m_maxConcurrency; }
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline DescribeMapRunResult& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum percentage of failed child workflow executions before the Map Run
     * fails.</p>
     */
    inline double GetToleratedFailurePercentage() const { return m_toleratedFailurePercentage; }
    inline void SetToleratedFailurePercentage(double value) { m_toleratedFailurePercentageHasBeenSet = true; m_toleratedFailurePercentage = value; }
    inline DescribeMapRunResult& WithToleratedFailurePercentage(double value) { SetToleratedFailurePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of failed child workflow executions before the Map Run
     * fails.</p>
     */
    inline long long GetToleratedFailureCount() const { return m_toleratedFailureCount; }
    inline void SetToleratedFailureCount(long long value) { m_toleratedFailureCountHasBeenSet = true; m_toleratedFailureCount = value; }
    inline DescribeMapRunResult& WithToleratedFailureCount(long long value) { SetToleratedFailureCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that contains information about the total number of items, and
     * the item count for each processing status, such as <code>pending</code> and
     * <code>failed</code>.</p>
     */
    inline const MapRunItemCounts& GetItemCounts() const { return m_itemCounts; }
    template<typename ItemCountsT = MapRunItemCounts>
    void SetItemCounts(ItemCountsT&& value) { m_itemCountsHasBeenSet = true; m_itemCounts = std::forward<ItemCountsT>(value); }
    template<typename ItemCountsT = MapRunItemCounts>
    DescribeMapRunResult& WithItemCounts(ItemCountsT&& value) { SetItemCounts(std::forward<ItemCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that contains information about the total number of child
     * workflow executions for the Map Run, and the count of child workflow executions
     * for each status, such as <code>failed</code> and <code>succeeded</code>.</p>
     */
    inline const MapRunExecutionCounts& GetExecutionCounts() const { return m_executionCounts; }
    template<typename ExecutionCountsT = MapRunExecutionCounts>
    void SetExecutionCounts(ExecutionCountsT&& value) { m_executionCountsHasBeenSet = true; m_executionCounts = std::forward<ExecutionCountsT>(value); }
    template<typename ExecutionCountsT = MapRunExecutionCounts>
    DescribeMapRunResult& WithExecutionCounts(ExecutionCountsT&& value) { SetExecutionCounts(std::forward<ExecutionCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times you've redriven a Map Run. If you have not yet redriven a
     * Map Run, the <code>redriveCount</code> is 0. This count is only updated if you
     * successfully redrive a Map Run.</p>
     */
    inline int GetRedriveCount() const { return m_redriveCount; }
    inline void SetRedriveCount(int value) { m_redriveCountHasBeenSet = true; m_redriveCount = value; }
    inline DescribeMapRunResult& WithRedriveCount(int value) { SetRedriveCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date a Map Run was last redriven. If you have not yet redriven a Map Run,
     * the <code>redriveDate</code> is null.</p>
     */
    inline const Aws::Utils::DateTime& GetRedriveDate() const { return m_redriveDate; }
    template<typename RedriveDateT = Aws::Utils::DateTime>
    void SetRedriveDate(RedriveDateT&& value) { m_redriveDateHasBeenSet = true; m_redriveDate = std::forward<RedriveDateT>(value); }
    template<typename RedriveDateT = Aws::Utils::DateTime>
    DescribeMapRunResult& WithRedriveDate(RedriveDateT&& value) { SetRedriveDate(std::forward<RedriveDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMapRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    MapRunStatus m_status{MapRunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate{};
    bool m_stopDateHasBeenSet = false;

    int m_maxConcurrency{0};
    bool m_maxConcurrencyHasBeenSet = false;

    double m_toleratedFailurePercentage{0.0};
    bool m_toleratedFailurePercentageHasBeenSet = false;

    long long m_toleratedFailureCount{0};
    bool m_toleratedFailureCountHasBeenSet = false;

    MapRunItemCounts m_itemCounts;
    bool m_itemCountsHasBeenSet = false;

    MapRunExecutionCounts m_executionCounts;
    bool m_executionCountsHasBeenSet = false;

    int m_redriveCount{0};
    bool m_redriveCountHasBeenSet = false;

    Aws::Utils::DateTime m_redriveDate{};
    bool m_redriveDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
