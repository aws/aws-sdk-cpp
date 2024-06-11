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
    AWS_SAGEMAKER_API ListMonitoringExecutionsRequest();

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
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }
    inline ListMonitoringExecutionsRequest& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}
    inline ListMonitoringExecutionsRequest& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline ListMonitoringExecutionsRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline ListMonitoringExecutionsRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to sort the results by the <code>Status</code>,
     * <code>CreationTime</code>, or <code>ScheduledTime</code> field. The default is
     * <code>CreationTime</code>.</p>
     */
    inline const MonitoringExecutionSortKey& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const MonitoringExecutionSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(MonitoringExecutionSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithSortBy(const MonitoringExecutionSortKey& value) { SetSortBy(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithSortBy(MonitoringExecutionSortKey&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListMonitoringExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMonitoringExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMonitoringExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for jobs scheduled before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimeBefore() const{ return m_scheduledTimeBefore; }
    inline bool ScheduledTimeBeforeHasBeenSet() const { return m_scheduledTimeBeforeHasBeenSet; }
    inline void SetScheduledTimeBefore(const Aws::Utils::DateTime& value) { m_scheduledTimeBeforeHasBeenSet = true; m_scheduledTimeBefore = value; }
    inline void SetScheduledTimeBefore(Aws::Utils::DateTime&& value) { m_scheduledTimeBeforeHasBeenSet = true; m_scheduledTimeBefore = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithScheduledTimeBefore(const Aws::Utils::DateTime& value) { SetScheduledTimeBefore(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithScheduledTimeBefore(Aws::Utils::DateTime&& value) { SetScheduledTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for jobs scheduled after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimeAfter() const{ return m_scheduledTimeAfter; }
    inline bool ScheduledTimeAfterHasBeenSet() const { return m_scheduledTimeAfterHasBeenSet; }
    inline void SetScheduledTimeAfter(const Aws::Utils::DateTime& value) { m_scheduledTimeAfterHasBeenSet = true; m_scheduledTimeAfter = value; }
    inline void SetScheduledTimeAfter(Aws::Utils::DateTime&& value) { m_scheduledTimeAfterHasBeenSet = true; m_scheduledTimeAfter = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithScheduledTimeAfter(const Aws::Utils::DateTime& value) { SetScheduledTimeAfter(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithScheduledTimeAfter(Aws::Utils::DateTime&& value) { SetScheduledTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs created before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs created after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs modified after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs modified before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline const ExecutionStatus& GetStatusEquals() const{ return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(const ExecutionStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline void SetStatusEquals(ExecutionStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithStatusEquals(const ExecutionStatus& value) { SetStatusEquals(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithStatusEquals(ExecutionStatus&& value) { SetStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const{ return m_monitoringJobDefinitionName; }
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }
    inline void SetMonitoringJobDefinitionName(const Aws::String& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = value; }
    inline void SetMonitoringJobDefinitionName(Aws::String&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::move(value); }
    inline void SetMonitoringJobDefinitionName(const char* value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName.assign(value); }
    inline ListMonitoringExecutionsRequest& WithMonitoringJobDefinitionName(const Aws::String& value) { SetMonitoringJobDefinitionName(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithMonitoringJobDefinitionName(Aws::String&& value) { SetMonitoringJobDefinitionName(std::move(value)); return *this;}
    inline ListMonitoringExecutionsRequest& WithMonitoringJobDefinitionName(const char* value) { SetMonitoringJobDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only the monitoring job runs of the specified
     * monitoring type.</p>
     */
    inline const MonitoringType& GetMonitoringTypeEquals() const{ return m_monitoringTypeEquals; }
    inline bool MonitoringTypeEqualsHasBeenSet() const { return m_monitoringTypeEqualsHasBeenSet; }
    inline void SetMonitoringTypeEquals(const MonitoringType& value) { m_monitoringTypeEqualsHasBeenSet = true; m_monitoringTypeEquals = value; }
    inline void SetMonitoringTypeEquals(MonitoringType&& value) { m_monitoringTypeEqualsHasBeenSet = true; m_monitoringTypeEquals = std::move(value); }
    inline ListMonitoringExecutionsRequest& WithMonitoringTypeEquals(const MonitoringType& value) { SetMonitoringTypeEquals(value); return *this;}
    inline ListMonitoringExecutionsRequest& WithMonitoringTypeEquals(MonitoringType&& value) { SetMonitoringTypeEquals(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    MonitoringExecutionSortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTimeBefore;
    bool m_scheduledTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTimeAfter;
    bool m_scheduledTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    ExecutionStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    MonitoringType m_monitoringTypeEquals;
    bool m_monitoringTypeEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
