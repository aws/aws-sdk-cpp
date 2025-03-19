/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringExecutionSortKey.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ExecutionStatus.h>
#include <aws/sagemaker/model/MonitoringType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListMonitoringExecutionsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMonitoringExecutions"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const { return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    template<typename MonitoringScheduleNameT = Aws::String>
    void SetMonitoringScheduleName(MonitoringScheduleNameT&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::forward<MonitoringScheduleNameT>(value); }
    template<typename MonitoringScheduleNameT = Aws::String>
    ListMonitoringExecutionsRequest& WithMonitoringScheduleName(MonitoringScheduleNameT&& value) { SetMonitoringScheduleName(std::forward<MonitoringScheduleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    ListMonitoringExecutionsRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to sort the results by the <code>Status</code>,
     * <code>CreationTime</code>, or <code>ScheduledTime</code> field. The default is
     * <code>CreationTime</code>.</p>
     */
    inline MonitoringExecutionSortKey GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(MonitoringExecutionSortKey value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListMonitoringExecutionsRequest& WithSortBy(MonitoringExecutionSortKey value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListMonitoringExecutionsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMonitoringExecutionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMonitoringExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for jobs scheduled before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimeBefore() const { return m_scheduledTimeBefore; }
    inline bool ScheduledTimeBeforeHasBeenSet() const { return m_scheduledTimeBeforeHasBeenSet; }
    template<typename ScheduledTimeBeforeT = Aws::Utils::DateTime>
    void SetScheduledTimeBefore(ScheduledTimeBeforeT&& value) { m_scheduledTimeBeforeHasBeenSet = true; m_scheduledTimeBefore = std::forward<ScheduledTimeBeforeT>(value); }
    template<typename ScheduledTimeBeforeT = Aws::Utils::DateTime>
    ListMonitoringExecutionsRequest& WithScheduledTimeBefore(ScheduledTimeBeforeT&& value) { SetScheduledTimeBefore(std::forward<ScheduledTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for jobs scheduled after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimeAfter() const { return m_scheduledTimeAfter; }
    inline bool ScheduledTimeAfterHasBeenSet() const { return m_scheduledTimeAfterHasBeenSet; }
    template<typename ScheduledTimeAfterT = Aws::Utils::DateTime>
    void SetScheduledTimeAfter(ScheduledTimeAfterT&& value) { m_scheduledTimeAfterHasBeenSet = true; m_scheduledTimeAfter = std::forward<ScheduledTimeAfterT>(value); }
    template<typename ScheduledTimeAfterT = Aws::Utils::DateTime>
    ListMonitoringExecutionsRequest& WithScheduledTimeAfter(ScheduledTimeAfterT&& value) { SetScheduledTimeAfter(std::forward<ScheduledTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs created before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListMonitoringExecutionsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs created after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListMonitoringExecutionsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs modified after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const { return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    void SetLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::forward<LastModifiedTimeBeforeT>(value); }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    ListMonitoringExecutionsRequest& WithLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { SetLastModifiedTimeBefore(std::forward<LastModifiedTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs modified before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const { return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    void SetLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::forward<LastModifiedTimeAfterT>(value); }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    ListMonitoringExecutionsRequest& WithLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { SetLastModifiedTimeAfter(std::forward<LastModifiedTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline ExecutionStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(ExecutionStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListMonitoringExecutionsRequest& WithStatusEquals(ExecutionStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const { return m_monitoringJobDefinitionName; }
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }
    template<typename MonitoringJobDefinitionNameT = Aws::String>
    void SetMonitoringJobDefinitionName(MonitoringJobDefinitionNameT&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::forward<MonitoringJobDefinitionNameT>(value); }
    template<typename MonitoringJobDefinitionNameT = Aws::String>
    ListMonitoringExecutionsRequest& WithMonitoringJobDefinitionName(MonitoringJobDefinitionNameT&& value) { SetMonitoringJobDefinitionName(std::forward<MonitoringJobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only the monitoring job runs of the specified
     * monitoring type.</p>
     */
    inline MonitoringType GetMonitoringTypeEquals() const { return m_monitoringTypeEquals; }
    inline bool MonitoringTypeEqualsHasBeenSet() const { return m_monitoringTypeEqualsHasBeenSet; }
    inline void SetMonitoringTypeEquals(MonitoringType value) { m_monitoringTypeEqualsHasBeenSet = true; m_monitoringTypeEquals = value; }
    inline ListMonitoringExecutionsRequest& WithMonitoringTypeEquals(MonitoringType value) { SetMonitoringTypeEquals(value); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    MonitoringExecutionSortKey m_sortBy{MonitoringExecutionSortKey::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTimeBefore{};
    bool m_scheduledTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTimeAfter{};
    bool m_scheduledTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore{};
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter{};
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    ExecutionStatus m_statusEquals{ExecutionStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    MonitoringType m_monitoringTypeEquals{MonitoringType::NOT_SET};
    bool m_monitoringTypeEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
