/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/DataSourceSyncJobStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QBusiness
{
namespace Model
{

  /**
   */
  class ListDataSourceSyncJobsRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API ListDataSourceSyncJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataSourceSyncJobs"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;

    AWS_QBUSINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon Q application connected to the data source.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application connected to the data source.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q application connected to the data source.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application connected to the data source.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application connected to the data source.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application connected to the data source.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application connected to the data source.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application connected to the data source.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p> The identifier of the data source connector.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p> The identifier of the data source connector.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p> The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p> The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p> The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p> The identifier of the data source connector.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p> The identifier of the data source connector.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the data source connector.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p> The end time of the data source connector sync.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end time of the data source connector sync.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end time of the data source connector sync.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end time of the data source connector sync.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end time of the data source connector sync.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end time of the data source connector sync.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The identifier of the index used with the Amazon Q data source connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index used with the Amazon Q data source connector.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index used with the Amazon Q data source connector.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index used with the Amazon Q data source connector.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index used with the Amazon Q data source connector.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index used with the Amazon Q data source connector.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index used with the Amazon Q data source connector.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index used with the Amazon Q data source connector.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The maximum number of synchronization jobs to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of synchronization jobs to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of synchronization jobs to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of synchronization jobs to return in the response.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the <code>maxResults</code> response was incpmplete because there is more
     * data to retriever, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of responses.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the <code>maxResults</code> response was incpmplete because there is more
     * data to retriever, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of responses.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the <code>maxResults</code> response was incpmplete because there is more
     * data to retriever, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of responses.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the <code>maxResults</code> response was incpmplete because there is more
     * data to retriever, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of responses.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the <code>maxResults</code> response was incpmplete because there is more
     * data to retriever, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of responses.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the <code>maxResults</code> response was incpmplete because there is more
     * data to retriever, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of responses.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the <code>maxResults</code> response was incpmplete because there is more
     * data to retriever, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of responses.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the <code>maxResults</code> response was incpmplete because there is more
     * data to retriever, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of responses.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The start time of the data source connector sync. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start time of the data source connector sync. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The start time of the data source connector sync. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The start time of the data source connector sync. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The start time of the data source connector sync. </p>
     */
    inline ListDataSourceSyncJobsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start time of the data source connector sync. </p>
     */
    inline ListDataSourceSyncJobsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Only returns synchronization jobs with the <code>Status</code> field equal to
     * the specified status.</p>
     */
    inline const DataSourceSyncJobStatus& GetStatusFilter() const{ return m_statusFilter; }

    /**
     * <p>Only returns synchronization jobs with the <code>Status</code> field equal to
     * the specified status.</p>
     */
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }

    /**
     * <p>Only returns synchronization jobs with the <code>Status</code> field equal to
     * the specified status.</p>
     */
    inline void SetStatusFilter(const DataSourceSyncJobStatus& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Only returns synchronization jobs with the <code>Status</code> field equal to
     * the specified status.</p>
     */
    inline void SetStatusFilter(DataSourceSyncJobStatus&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }

    /**
     * <p>Only returns synchronization jobs with the <code>Status</code> field equal to
     * the specified status.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithStatusFilter(const DataSourceSyncJobStatus& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Only returns synchronization jobs with the <code>Status</code> field equal to
     * the specified status.</p>
     */
    inline ListDataSourceSyncJobsRequest& WithStatusFilter(DataSourceSyncJobStatus&& value) { SetStatusFilter(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    DataSourceSyncJobStatus m_statusFilter;
    bool m_statusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
