/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/model/ComputeNodeGroupSummary.h>
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
namespace PCS
{
namespace Model
{
  class ListComputeNodeGroupsResult
  {
  public:
    AWS_PCS_API ListComputeNodeGroupsResult() = default;
    AWS_PCS_API ListComputeNodeGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API ListComputeNodeGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of compute node groups for the cluster.</p>
     */
    inline const Aws::Vector<ComputeNodeGroupSummary>& GetComputeNodeGroups() const { return m_computeNodeGroups; }
    template<typename ComputeNodeGroupsT = Aws::Vector<ComputeNodeGroupSummary>>
    void SetComputeNodeGroups(ComputeNodeGroupsT&& value) { m_computeNodeGroupsHasBeenSet = true; m_computeNodeGroups = std::forward<ComputeNodeGroupsT>(value); }
    template<typename ComputeNodeGroupsT = Aws::Vector<ComputeNodeGroupSummary>>
    ListComputeNodeGroupsResult& WithComputeNodeGroups(ComputeNodeGroupsT&& value) { SetComputeNodeGroups(std::forward<ComputeNodeGroupsT>(value)); return *this;}
    template<typename ComputeNodeGroupsT = ComputeNodeGroupSummary>
    ListComputeNodeGroupsResult& AddComputeNodeGroups(ComputeNodeGroupsT&& value) { m_computeNodeGroupsHasBeenSet = true; m_computeNodeGroups.emplace_back(std::forward<ComputeNodeGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of <code>nextToken</code> is a unique pagination token for each
     * page of results returned. If <code>nextToken</code> is returned, there are more
     * results available. Make the call again using the returned token to retrieve the
     * next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. Using an expired pagination token returns an <code>HTTP 400
     * InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListComputeNodeGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComputeNodeGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComputeNodeGroupSummary> m_computeNodeGroups;
    bool m_computeNodeGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
