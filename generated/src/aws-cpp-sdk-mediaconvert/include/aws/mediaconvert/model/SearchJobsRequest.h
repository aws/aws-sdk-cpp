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
  class SearchJobsRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API SearchJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchJobs"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;

    AWS_MEDIACONVERT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * Optional. Provide your input file URL or your partial input file name. The
     * maximum length for an input file is 300 characters.
     */
    inline const Aws::String& GetInputFile() const{ return m_inputFile; }
    inline bool InputFileHasBeenSet() const { return m_inputFileHasBeenSet; }
    inline void SetInputFile(const Aws::String& value) { m_inputFileHasBeenSet = true; m_inputFile = value; }
    inline void SetInputFile(Aws::String&& value) { m_inputFileHasBeenSet = true; m_inputFile = std::move(value); }
    inline void SetInputFile(const char* value) { m_inputFileHasBeenSet = true; m_inputFile.assign(value); }
    inline SearchJobsRequest& WithInputFile(const Aws::String& value) { SetInputFile(value); return *this;}
    inline SearchJobsRequest& WithInputFile(Aws::String&& value) { SetInputFile(std::move(value)); return *this;}
    inline SearchJobsRequest& WithInputFile(const char* value) { SetInputFile(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Number of jobs, up to twenty, that will be returned at one time.
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline SearchJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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
    inline SearchJobsRequest& WithOrder(const Order& value) { SetOrder(value); return *this;}
    inline SearchJobsRequest& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Provide a queue name, or a queue ARN, to return only jobs from that
     * queue.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }
    inline SearchJobsRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}
    inline SearchJobsRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}
    inline SearchJobsRequest& WithQueue(const char* value) { SetQueue(value); return *this;}
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
    inline SearchJobsRequest& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline SearchJobsRequest& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputFile;
    bool m_inputFileHasBeenSet = false;

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
