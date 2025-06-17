/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/model/ListApprovalTeamsResponseApprovalTeam.h>
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
namespace MPA
{
namespace Model
{
  class ListApprovalTeamsResult
  {
  public:
    AWS_MPA_API ListApprovalTeamsResult() = default;
    AWS_MPA_API ListApprovalTeamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API ListApprovalTeamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a next call to the operation to get more output. You can repeat this until
     * the <code>NextToken</code> response element returns <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApprovalTeamsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ListApprovalTeamsResponseApprovalTeam</code> objects.
     * Contains details for approval teams.</p>
     */
    inline const Aws::Vector<ListApprovalTeamsResponseApprovalTeam>& GetApprovalTeams() const { return m_approvalTeams; }
    template<typename ApprovalTeamsT = Aws::Vector<ListApprovalTeamsResponseApprovalTeam>>
    void SetApprovalTeams(ApprovalTeamsT&& value) { m_approvalTeamsHasBeenSet = true; m_approvalTeams = std::forward<ApprovalTeamsT>(value); }
    template<typename ApprovalTeamsT = Aws::Vector<ListApprovalTeamsResponseApprovalTeam>>
    ListApprovalTeamsResult& WithApprovalTeams(ApprovalTeamsT&& value) { SetApprovalTeams(std::forward<ApprovalTeamsT>(value)); return *this;}
    template<typename ApprovalTeamsT = ListApprovalTeamsResponseApprovalTeam>
    ListApprovalTeamsResult& AddApprovalTeams(ApprovalTeamsT&& value) { m_approvalTeamsHasBeenSet = true; m_approvalTeams.emplace_back(std::forward<ApprovalTeamsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApprovalTeamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListApprovalTeamsResponseApprovalTeam> m_approvalTeams;
    bool m_approvalTeamsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
