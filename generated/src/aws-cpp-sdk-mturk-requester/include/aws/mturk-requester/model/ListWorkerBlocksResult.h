/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/WorkerBlock.h>
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
namespace MTurk
{
namespace Model
{
  class ListWorkerBlocksResult
  {
  public:
    AWS_MTURK_API ListWorkerBlocksResult() = default;
    AWS_MTURK_API ListWorkerBlocksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListWorkerBlocksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkerBlocksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of assignments on the page in the filtered results list,
     * equivalent to the number of assignments returned by this call.</p>
     */
    inline int GetNumResults() const { return m_numResults; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline ListWorkerBlocksResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of WorkerBlocks, containing the collection of Worker IDs and
     * reasons for blocking.</p>
     */
    inline const Aws::Vector<WorkerBlock>& GetWorkerBlocks() const { return m_workerBlocks; }
    template<typename WorkerBlocksT = Aws::Vector<WorkerBlock>>
    void SetWorkerBlocks(WorkerBlocksT&& value) { m_workerBlocksHasBeenSet = true; m_workerBlocks = std::forward<WorkerBlocksT>(value); }
    template<typename WorkerBlocksT = Aws::Vector<WorkerBlock>>
    ListWorkerBlocksResult& WithWorkerBlocks(WorkerBlocksT&& value) { SetWorkerBlocks(std::forward<WorkerBlocksT>(value)); return *this;}
    template<typename WorkerBlocksT = WorkerBlock>
    ListWorkerBlocksResult& AddWorkerBlocks(WorkerBlocksT&& value) { m_workerBlocksHasBeenSet = true; m_workerBlocks.emplace_back(std::forward<WorkerBlocksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkerBlocksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_numResults{0};
    bool m_numResultsHasBeenSet = false;

    Aws::Vector<WorkerBlock> m_workerBlocks;
    bool m_workerBlocksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
