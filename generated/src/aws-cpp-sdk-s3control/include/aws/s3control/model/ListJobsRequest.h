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
    AWS_S3CONTROL_API ListJobsRequest() = default;

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

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListJobsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline const Aws::Vector<JobStatus>& GetJobStatuses() const { return m_jobStatuses; }
    inline bool JobStatusesHasBeenSet() const { return m_jobStatusesHasBeenSet; }
    template<typename JobStatusesT = Aws::Vector<JobStatus>>
    void SetJobStatuses(JobStatusesT&& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses = std::forward<JobStatusesT>(value); }
    template<typename JobStatusesT = Aws::Vector<JobStatus>>
    ListJobsRequest& WithJobStatuses(JobStatusesT&& value) { SetJobStatuses(std::forward<JobStatusesT>(value)); return *this;}
    inline ListJobsRequest& AddJobStatuses(JobStatus value) { m_jobStatusesHasBeenSet = true; m_jobStatuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<JobStatus> m_jobStatuses;
    bool m_jobStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
