/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/CapacityTaskSummary.h>
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
  class ListCapacityTasksResult
  {
  public:
    AWS_OUTPOSTS_API ListCapacityTasksResult() = default;
    AWS_OUTPOSTS_API ListCapacityTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListCapacityTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all the capacity tasks.</p>
     */
    inline const Aws::Vector<CapacityTaskSummary>& GetCapacityTasks() const { return m_capacityTasks; }
    template<typename CapacityTasksT = Aws::Vector<CapacityTaskSummary>>
    void SetCapacityTasks(CapacityTasksT&& value) { m_capacityTasksHasBeenSet = true; m_capacityTasks = std::forward<CapacityTasksT>(value); }
    template<typename CapacityTasksT = Aws::Vector<CapacityTaskSummary>>
    ListCapacityTasksResult& WithCapacityTasks(CapacityTasksT&& value) { SetCapacityTasks(std::forward<CapacityTasksT>(value)); return *this;}
    template<typename CapacityTasksT = CapacityTaskSummary>
    ListCapacityTasksResult& AddCapacityTasks(CapacityTasksT&& value) { m_capacityTasksHasBeenSet = true; m_capacityTasks.emplace_back(std::forward<CapacityTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCapacityTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCapacityTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityTaskSummary> m_capacityTasks;
    bool m_capacityTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
