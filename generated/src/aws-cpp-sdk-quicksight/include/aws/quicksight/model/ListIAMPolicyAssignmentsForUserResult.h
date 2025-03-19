/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ActiveIAMPolicyAssignment.h>
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
namespace QuickSight
{
namespace Model
{
  class ListIAMPolicyAssignmentsForUserResult
  {
  public:
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsForUserResult() = default;
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsForUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsForUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The active assignments for this user.</p>
     */
    inline const Aws::Vector<ActiveIAMPolicyAssignment>& GetActiveAssignments() const { return m_activeAssignments; }
    template<typename ActiveAssignmentsT = Aws::Vector<ActiveIAMPolicyAssignment>>
    void SetActiveAssignments(ActiveAssignmentsT&& value) { m_activeAssignmentsHasBeenSet = true; m_activeAssignments = std::forward<ActiveAssignmentsT>(value); }
    template<typename ActiveAssignmentsT = Aws::Vector<ActiveIAMPolicyAssignment>>
    ListIAMPolicyAssignmentsForUserResult& WithActiveAssignments(ActiveAssignmentsT&& value) { SetActiveAssignments(std::forward<ActiveAssignmentsT>(value)); return *this;}
    template<typename ActiveAssignmentsT = ActiveIAMPolicyAssignment>
    ListIAMPolicyAssignmentsForUserResult& AddActiveAssignments(ActiveAssignmentsT&& value) { m_activeAssignmentsHasBeenSet = true; m_activeAssignments.emplace_back(std::forward<ActiveAssignmentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIAMPolicyAssignmentsForUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIAMPolicyAssignmentsForUserResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListIAMPolicyAssignmentsForUserResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<ActiveIAMPolicyAssignment> m_activeAssignments;
    bool m_activeAssignmentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
