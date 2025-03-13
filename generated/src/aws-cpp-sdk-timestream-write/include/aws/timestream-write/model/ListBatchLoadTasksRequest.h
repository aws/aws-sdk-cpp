/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/BatchLoadStatus.h>
#include <utility>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class ListBatchLoadTasksRequest : public TimestreamWriteRequest
  {
  public:
    AWS_TIMESTREAMWRITE_API ListBatchLoadTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBatchLoadTasks"; }

    AWS_TIMESTREAMWRITE_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMWRITE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBatchLoadTasksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBatchLoadTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the batch load task.</p>
     */
    inline BatchLoadStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(BatchLoadStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline ListBatchLoadTasksRequest& WithTaskStatus(BatchLoadStatus value) { SetTaskStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    BatchLoadStatus m_taskStatus{BatchLoadStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
