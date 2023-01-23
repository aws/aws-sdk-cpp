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


    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }

    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }

    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }

    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }

    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }

    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>Name of a specific schedule to fetch jobs for.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline ListMonitoringExecutionsRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline ListMonitoringExecutionsRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>Name of a specific endpoint to fetch jobs for.</p>
     */
    inline ListMonitoringExecutionsRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline const MonitoringExecutionSortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const MonitoringExecutionSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(MonitoringExecutionSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline ListMonitoringExecutionsRequest& WithSortBy(const MonitoringExecutionSortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline ListMonitoringExecutionsRequest& WithSortBy(MonitoringExecutionSortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline ListMonitoringExecutionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline ListMonitoringExecutionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListMonitoringExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListMonitoringExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListMonitoringExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filter for jobs scheduled before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimeBefore() const{ return m_scheduledTimeBefore; }

    /**
     * <p>Filter for jobs scheduled before a specified time.</p>
     */
    inline bool ScheduledTimeBeforeHasBeenSet() const { return m_scheduledTimeBeforeHasBeenSet; }

    /**
     * <p>Filter for jobs scheduled before a specified time.</p>
     */
    inline void SetScheduledTimeBefore(const Aws::Utils::DateTime& value) { m_scheduledTimeBeforeHasBeenSet = true; m_scheduledTimeBefore = value; }

    /**
     * <p>Filter for jobs scheduled before a specified time.</p>
     */
    inline void SetScheduledTimeBefore(Aws::Utils::DateTime&& value) { m_scheduledTimeBeforeHasBeenSet = true; m_scheduledTimeBefore = std::move(value); }

    /**
     * <p>Filter for jobs scheduled before a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithScheduledTimeBefore(const Aws::Utils::DateTime& value) { SetScheduledTimeBefore(value); return *this;}

    /**
     * <p>Filter for jobs scheduled before a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithScheduledTimeBefore(Aws::Utils::DateTime&& value) { SetScheduledTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Filter for jobs scheduled after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimeAfter() const{ return m_scheduledTimeAfter; }

    /**
     * <p>Filter for jobs scheduled after a specified time.</p>
     */
    inline bool ScheduledTimeAfterHasBeenSet() const { return m_scheduledTimeAfterHasBeenSet; }

    /**
     * <p>Filter for jobs scheduled after a specified time.</p>
     */
    inline void SetScheduledTimeAfter(const Aws::Utils::DateTime& value) { m_scheduledTimeAfterHasBeenSet = true; m_scheduledTimeAfter = value; }

    /**
     * <p>Filter for jobs scheduled after a specified time.</p>
     */
    inline void SetScheduledTimeAfter(Aws::Utils::DateTime&& value) { m_scheduledTimeAfterHasBeenSet = true; m_scheduledTimeAfter = std::move(value); }

    /**
     * <p>Filter for jobs scheduled after a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithScheduledTimeAfter(const Aws::Utils::DateTime& value) { SetScheduledTimeAfter(value); return *this;}

    /**
     * <p>Filter for jobs scheduled after a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithScheduledTimeAfter(Aws::Utils::DateTime&& value) { SetScheduledTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only jobs created before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only jobs created before a specified time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only jobs created before a specified time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only jobs created before a specified time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only jobs created before a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only jobs created before a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only jobs created after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only jobs created after a specified time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only jobs created after a specified time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only jobs created after a specified time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only jobs created after a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only jobs created after a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only jobs modified after a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>A filter that returns only jobs modified after a specified time.</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only jobs modified after a specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>A filter that returns only jobs modified after a specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only jobs modified after a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only jobs modified after a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only jobs modified before a specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>A filter that returns only jobs modified before a specified time.</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only jobs modified before a specified time.</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>A filter that returns only jobs modified before a specified time.</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only jobs modified before a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only jobs modified before a specified time.</p>
     */
    inline ListMonitoringExecutionsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline const ExecutionStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline void SetStatusEquals(const ExecutionStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline void SetStatusEquals(ExecutionStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline ListMonitoringExecutionsRequest& WithStatusEquals(const ExecutionStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline ListMonitoringExecutionsRequest& WithStatusEquals(ExecutionStatus&& value) { SetStatusEquals(std::move(value)); return *this;}


    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const{ return m_monitoringJobDefinitionName; }

    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }

    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline void SetMonitoringJobDefinitionName(const Aws::String& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = value; }

    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline void SetMonitoringJobDefinitionName(Aws::String&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::move(value); }

    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline void SetMonitoringJobDefinitionName(const char* value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName.assign(value); }

    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMonitoringJobDefinitionName(const Aws::String& value) { SetMonitoringJobDefinitionName(value); return *this;}

    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMonitoringJobDefinitionName(Aws::String&& value) { SetMonitoringJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>Gets a list of the monitoring job runs of the specified monitoring job
     * definitions.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMonitoringJobDefinitionName(const char* value) { SetMonitoringJobDefinitionName(value); return *this;}


    /**
     * <p>A filter that returns only the monitoring job runs of the specified
     * monitoring type.</p>
     */
    inline const MonitoringType& GetMonitoringTypeEquals() const{ return m_monitoringTypeEquals; }

    /**
     * <p>A filter that returns only the monitoring job runs of the specified
     * monitoring type.</p>
     */
    inline bool MonitoringTypeEqualsHasBeenSet() const { return m_monitoringTypeEqualsHasBeenSet; }

    /**
     * <p>A filter that returns only the monitoring job runs of the specified
     * monitoring type.</p>
     */
    inline void SetMonitoringTypeEquals(const MonitoringType& value) { m_monitoringTypeEqualsHasBeenSet = true; m_monitoringTypeEquals = value; }

    /**
     * <p>A filter that returns only the monitoring job runs of the specified
     * monitoring type.</p>
     */
    inline void SetMonitoringTypeEquals(MonitoringType&& value) { m_monitoringTypeEqualsHasBeenSet = true; m_monitoringTypeEquals = std::move(value); }

    /**
     * <p>A filter that returns only the monitoring job runs of the specified
     * monitoring type.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMonitoringTypeEquals(const MonitoringType& value) { SetMonitoringTypeEquals(value); return *this;}

    /**
     * <p>A filter that returns only the monitoring job runs of the specified
     * monitoring type.</p>
     */
    inline ListMonitoringExecutionsRequest& WithMonitoringTypeEquals(MonitoringType&& value) { SetMonitoringTypeEquals(std::move(value)); return *this;}

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
