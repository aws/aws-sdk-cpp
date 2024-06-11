/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class ListCallAnalyticsJobsRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCallAnalyticsJobs"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Returns only Call Analytics jobs with the specified status. Jobs are ordered
     * by creation date, with the newest job first. If you do not include
     * <code>Status</code>, all Call Analytics jobs are returned.</p>
     */
    inline const CallAnalyticsJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CallAnalyticsJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CallAnalyticsJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListCallAnalyticsJobsRequest& WithStatus(const CallAnalyticsJobStatus& value) { SetStatus(value); return *this;}
    inline ListCallAnalyticsJobsRequest& WithStatus(CallAnalyticsJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only the Call Analytics jobs that contain the specified string. The
     * search is not case sensitive.</p>
     */
    inline const Aws::String& GetJobNameContains() const{ return m_jobNameContains; }
    inline bool JobNameContainsHasBeenSet() const { return m_jobNameContainsHasBeenSet; }
    inline void SetJobNameContains(const Aws::String& value) { m_jobNameContainsHasBeenSet = true; m_jobNameContains = value; }
    inline void SetJobNameContains(Aws::String&& value) { m_jobNameContainsHasBeenSet = true; m_jobNameContains = std::move(value); }
    inline void SetJobNameContains(const char* value) { m_jobNameContainsHasBeenSet = true; m_jobNameContains.assign(value); }
    inline ListCallAnalyticsJobsRequest& WithJobNameContains(const Aws::String& value) { SetJobNameContains(value); return *this;}
    inline ListCallAnalyticsJobsRequest& WithJobNameContains(Aws::String&& value) { SetJobNameContains(std::move(value)); return *this;}
    inline ListCallAnalyticsJobsRequest& WithJobNameContains(const char* value) { SetJobNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your <code>ListCallAnalyticsJobs</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCallAnalyticsJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCallAnalyticsJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCallAnalyticsJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Call Analytics jobs to return in each page of results.
     * If there are fewer results than the value that you specify, only the actual
     * results are returned. If you do not specify a value, a default of 5 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCallAnalyticsJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    CallAnalyticsJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_jobNameContains;
    bool m_jobNameContainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
