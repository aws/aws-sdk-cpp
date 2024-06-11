/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/Order.h>
#include <aws/mediaconvert/model/JobStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class ListJobsRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API ListJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;

    AWS_MEDIACONVERT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * Optional. Number of jobs, up to twenty, that will be returned at one time.
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use this string, provided with the response to a previous request, to
     * request the next batch of jobs.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. When you request lists of resources, you can specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline const Order& GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }
    inline ListJobsRequest& WithOrder(const Order& value) { SetOrder(value); return *this;}
    inline ListJobsRequest& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Provide a queue name to get back only jobs from that queue.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }
    inline ListJobsRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}
    inline ListJobsRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}
    inline ListJobsRequest& WithQueue(const char* value) { SetQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or
     * ERROR.
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListJobsRequest& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline ListJobsRequest& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Order m_order;
    bool m_orderHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
