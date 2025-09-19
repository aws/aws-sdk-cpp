/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/quicksight/model/AssignmentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateIAMPolicyAssignmentResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateIAMPolicyAssignmentResult() = default;
    AWS_QUICKSIGHT_API UpdateIAMPolicyAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateIAMPolicyAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the assignment or rule.</p>
     */
    inline const Aws::String& GetAssignmentName() const { return m_assignmentName; }
    template<typename AssignmentNameT = Aws::String>
    void SetAssignmentName(AssignmentNameT&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::forward<AssignmentNameT>(value); }
    template<typename AssignmentNameT = Aws::String>
    UpdateIAMPolicyAssignmentResult& WithAssignmentName(AssignmentNameT&& value) { SetAssignmentName(std::forward<AssignmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the assignment.</p>
     */
    inline const Aws::String& GetAssignmentId() const { return m_assignmentId; }
    template<typename AssignmentIdT = Aws::String>
    void SetAssignmentId(AssignmentIdT&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::forward<AssignmentIdT>(value); }
    template<typename AssignmentIdT = Aws::String>
    UpdateIAMPolicyAssignmentResult& WithAssignmentId(AssignmentIdT&& value) { SetAssignmentId(std::forward<AssignmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM policy applied to the QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    UpdateIAMPolicyAssignmentResult& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The QuickSight users, groups, or both that the IAM policy is assigned to.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetIdentities() const { return m_identities; }
    template<typename IdentitiesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetIdentities(IdentitiesT&& value) { m_identitiesHasBeenSet = true; m_identities = std::forward<IdentitiesT>(value); }
    template<typename IdentitiesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    UpdateIAMPolicyAssignmentResult& WithIdentities(IdentitiesT&& value) { SetIdentities(std::forward<IdentitiesT>(value)); return *this;}
    template<typename IdentitiesKeyT = Aws::String, typename IdentitiesValueT = Aws::Vector<Aws::String>>
    UpdateIAMPolicyAssignmentResult& AddIdentities(IdentitiesKeyT&& key, IdentitiesValueT&& value) {
      m_identitiesHasBeenSet = true; m_identities.emplace(std::forward<IdentitiesKeyT>(key), std::forward<IdentitiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline AssignmentStatus GetAssignmentStatus() const { return m_assignmentStatus; }
    inline void SetAssignmentStatus(AssignmentStatus value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }
    inline UpdateIAMPolicyAssignmentResult& WithAssignmentStatus(AssignmentStatus value) { SetAssignmentStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateIAMPolicyAssignmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateIAMPolicyAssignmentResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_assignmentName;
    bool m_assignmentNameHasBeenSet = false;

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_identities;
    bool m_identitiesHasBeenSet = false;

    AssignmentStatus m_assignmentStatus{AssignmentStatus::NOT_SET};
    bool m_assignmentStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
