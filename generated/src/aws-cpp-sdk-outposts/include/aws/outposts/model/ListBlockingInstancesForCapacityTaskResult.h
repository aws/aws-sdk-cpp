/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/BlockingInstance.h>
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
namespace Outposts
{
namespace Model
{
  class ListBlockingInstancesForCapacityTaskResult
  {
  public:
    AWS_OUTPOSTS_API ListBlockingInstancesForCapacityTaskResult() = default;
    AWS_OUTPOSTS_API ListBlockingInstancesForCapacityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListBlockingInstancesForCapacityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all running Amazon EC2 instances on the Outpost. Stopping one or
     * more of these instances can free up the capacity needed to run the capacity
     * task.</p>
     */
    inline const Aws::Vector<BlockingInstance>& GetBlockingInstances() const { return m_blockingInstances; }
    template<typename BlockingInstancesT = Aws::Vector<BlockingInstance>>
    void SetBlockingInstances(BlockingInstancesT&& value) { m_blockingInstancesHasBeenSet = true; m_blockingInstances = std::forward<BlockingInstancesT>(value); }
    template<typename BlockingInstancesT = Aws::Vector<BlockingInstance>>
    ListBlockingInstancesForCapacityTaskResult& WithBlockingInstances(BlockingInstancesT&& value) { SetBlockingInstances(std::forward<BlockingInstancesT>(value)); return *this;}
    template<typename BlockingInstancesT = BlockingInstance>
    ListBlockingInstancesForCapacityTaskResult& AddBlockingInstances(BlockingInstancesT&& value) { m_blockingInstancesHasBeenSet = true; m_blockingInstances.emplace_back(std::forward<BlockingInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBlockingInstancesForCapacityTaskResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBlockingInstancesForCapacityTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BlockingInstance> m_blockingInstances;
    bool m_blockingInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
