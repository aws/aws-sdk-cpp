/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/BatchLoadTask.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TimestreamWrite
{
namespace Model
{
  class ListBatchLoadTasksResult
  {
  public:
    AWS_TIMESTREAMWRITE_API ListBatchLoadTasksResult() = default;
    AWS_TIMESTREAMWRITE_API ListBatchLoadTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API ListBatchLoadTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token to specify where to start paginating. Provide the next
     * ListBatchLoadTasksRequest.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBatchLoadTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of batch load task details.</p>
     */
    inline const Aws::Vector<BatchLoadTask>& GetBatchLoadTasks() const { return m_batchLoadTasks; }
    template<typename BatchLoadTasksT = Aws::Vector<BatchLoadTask>>
    void SetBatchLoadTasks(BatchLoadTasksT&& value) { m_batchLoadTasksHasBeenSet = true; m_batchLoadTasks = std::forward<BatchLoadTasksT>(value); }
    template<typename BatchLoadTasksT = Aws::Vector<BatchLoadTask>>
    ListBatchLoadTasksResult& WithBatchLoadTasks(BatchLoadTasksT&& value) { SetBatchLoadTasks(std::forward<BatchLoadTasksT>(value)); return *this;}
    template<typename BatchLoadTasksT = BatchLoadTask>
    ListBatchLoadTasksResult& AddBatchLoadTasks(BatchLoadTasksT&& value) { m_batchLoadTasksHasBeenSet = true; m_batchLoadTasks.emplace_back(std::forward<BatchLoadTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBatchLoadTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<BatchLoadTask> m_batchLoadTasks;
    bool m_batchLoadTasksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
