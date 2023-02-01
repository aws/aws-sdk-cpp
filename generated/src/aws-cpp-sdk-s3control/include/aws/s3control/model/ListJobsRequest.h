/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/JobStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class ListJobsRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline ListJobsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline ListJobsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline ListJobsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline const Aws::Vector<JobStatus>& GetJobStatuses() const{ return m_jobStatuses; }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline bool JobStatusesHasBeenSet() const { return m_jobStatusesHasBeenSet; }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline void SetJobStatuses(const Aws::Vector<JobStatus>& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses = value; }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline void SetJobStatuses(Aws::Vector<JobStatus>&& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses = std::move(value); }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline ListJobsRequest& WithJobStatuses(const Aws::Vector<JobStatus>& value) { SetJobStatuses(value); return *this;}

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline ListJobsRequest& WithJobStatuses(Aws::Vector<JobStatus>&& value) { SetJobStatuses(std::move(value)); return *this;}

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline ListJobsRequest& AddJobStatuses(const JobStatus& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses.push_back(value); return *this; }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline ListJobsRequest& AddJobStatuses(JobStatus&& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline ListJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline ListJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline ListJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<JobStatus> m_jobStatuses;
    bool m_jobStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
