/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IAMPolicyAssignmentSummary.h>
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
  class ListIAMPolicyAssignmentsResult
  {
  public:
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsResult() = default;
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline const Aws::Vector<IAMPolicyAssignmentSummary>& GetIAMPolicyAssignments() const { return m_iAMPolicyAssignments; }
    template<typename IAMPolicyAssignmentsT = Aws::Vector<IAMPolicyAssignmentSummary>>
    void SetIAMPolicyAssignments(IAMPolicyAssignmentsT&& value) { m_iAMPolicyAssignmentsHasBeenSet = true; m_iAMPolicyAssignments = std::forward<IAMPolicyAssignmentsT>(value); }
    template<typename IAMPolicyAssignmentsT = Aws::Vector<IAMPolicyAssignmentSummary>>
    ListIAMPolicyAssignmentsResult& WithIAMPolicyAssignments(IAMPolicyAssignmentsT&& value) { SetIAMPolicyAssignments(std::forward<IAMPolicyAssignmentsT>(value)); return *this;}
    template<typename IAMPolicyAssignmentsT = IAMPolicyAssignmentSummary>
    ListIAMPolicyAssignmentsResult& AddIAMPolicyAssignments(IAMPolicyAssignmentsT&& value) { m_iAMPolicyAssignmentsHasBeenSet = true; m_iAMPolicyAssignments.emplace_back(std::forward<IAMPolicyAssignmentsT>(value)); return *this; }
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
    ListIAMPolicyAssignmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIAMPolicyAssignmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListIAMPolicyAssignmentsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<IAMPolicyAssignmentSummary> m_iAMPolicyAssignments;
    bool m_iAMPolicyAssignmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
