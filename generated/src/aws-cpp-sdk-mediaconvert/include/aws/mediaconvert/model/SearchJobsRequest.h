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
    AWS_MEDIACONVERT_API SearchJobsRequest() = default;

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
    inline const Aws::String& GetInputFile() const { return m_inputFile; }
    inline bool InputFileHasBeenSet() const { return m_inputFileHasBeenSet; }
    template<typename InputFileT = Aws::String>
    void SetInputFile(InputFileT&& value) { m_inputFileHasBeenSet = true; m_inputFile = std::forward<InputFileT>(value); }
    template<typename InputFileT = Aws::String>
    SearchJobsRequest& WithInputFile(InputFileT&& value) { SetInputFile(std::forward<InputFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Number of jobs, up to twenty, that will be returned at one time.
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use this string, provided with the response to a previous request, to
     * request the next batch of jobs.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. When you request lists of resources, you can specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline Order GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(Order value) { m_orderHasBeenSet = true; m_order = value; }
    inline SearchJobsRequest& WithOrder(Order value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Provide a queue name, or a queue ARN, to return only jobs from that
     * queue.
     */
    inline const Aws::String& GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    template<typename QueueT = Aws::String>
    void SetQueue(QueueT&& value) { m_queueHasBeenSet = true; m_queue = std::forward<QueueT>(value); }
    template<typename QueueT = Aws::String>
    SearchJobsRequest& WithQueue(QueueT&& value) { SetQueue(std::forward<QueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or
     * ERROR.
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SearchJobsRequest& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_inputFile;
    bool m_inputFileHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Order m_order{Order::NOT_SET};
    bool m_orderHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
