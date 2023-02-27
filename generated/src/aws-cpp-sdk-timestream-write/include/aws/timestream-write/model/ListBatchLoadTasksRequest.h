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
    AWS_TIMESTREAMWRITE_API ListBatchLoadTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBatchLoadTasks"; }

    AWS_TIMESTREAMWRITE_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMWRITE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListBatchLoadTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListBatchLoadTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListBatchLoadTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline ListBatchLoadTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Status of the batch load task.</p>
     */
    inline const BatchLoadStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline void SetTaskStatus(const BatchLoadStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline void SetTaskStatus(BatchLoadStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline ListBatchLoadTasksRequest& WithTaskStatus(const BatchLoadStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>Status of the batch load task.</p>
     */
    inline ListBatchLoadTasksRequest& WithTaskStatus(BatchLoadStatus&& value) { SetTaskStatus(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    BatchLoadStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
