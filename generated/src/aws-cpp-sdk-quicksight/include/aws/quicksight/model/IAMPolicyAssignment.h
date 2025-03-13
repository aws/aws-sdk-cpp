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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An Identity and Access Management (IAM) policy assignment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IAMPolicyAssignment">AWS
   * API Reference</a></p>
   */
  class IAMPolicyAssignment
  {
  public:
    AWS_QUICKSIGHT_API IAMPolicyAssignment() = default;
    AWS_QUICKSIGHT_API IAMPolicyAssignment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IAMPolicyAssignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    IAMPolicyAssignment& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assignment ID.</p>
     */
    inline const Aws::String& GetAssignmentId() const { return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    template<typename AssignmentIdT = Aws::String>
    void SetAssignmentId(AssignmentIdT&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::forward<AssignmentIdT>(value); }
    template<typename AssignmentIdT = Aws::String>
    IAMPolicyAssignment& WithAssignmentId(AssignmentIdT&& value) { SetAssignmentId(std::forward<AssignmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assignment name.</p>
     */
    inline const Aws::String& GetAssignmentName() const { return m_assignmentName; }
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }
    template<typename AssignmentNameT = Aws::String>
    void SetAssignmentName(AssignmentNameT&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::forward<AssignmentNameT>(value); }
    template<typename AssignmentNameT = Aws::String>
    IAMPolicyAssignment& WithAssignmentName(AssignmentNameT&& value) { SetAssignmentName(std::forward<AssignmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    IAMPolicyAssignment& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identities.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetIdentities() const { return m_identities; }
    inline bool IdentitiesHasBeenSet() const { return m_identitiesHasBeenSet; }
    template<typename IdentitiesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetIdentities(IdentitiesT&& value) { m_identitiesHasBeenSet = true; m_identities = std::forward<IdentitiesT>(value); }
    template<typename IdentitiesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    IAMPolicyAssignment& WithIdentities(IdentitiesT&& value) { SetIdentities(std::forward<IdentitiesT>(value)); return *this;}
    template<typename IdentitiesKeyT = Aws::String, typename IdentitiesValueT = Aws::Vector<Aws::String>>
    IAMPolicyAssignment& AddIdentities(IdentitiesKeyT&& key, IdentitiesValueT&& value) {
      m_identitiesHasBeenSet = true; m_identities.emplace(std::forward<IdentitiesKeyT>(key), std::forward<IdentitiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Assignment status.</p>
     */
    inline AssignmentStatus GetAssignmentStatus() const { return m_assignmentStatus; }
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }
    inline void SetAssignmentStatus(AssignmentStatus value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }
    inline IAMPolicyAssignment& WithAssignmentStatus(AssignmentStatus value) { SetAssignmentStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;

    Aws::String m_assignmentName;
    bool m_assignmentNameHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_identities;
    bool m_identitiesHasBeenSet = false;

    AssignmentStatus m_assignmentStatus{AssignmentStatus::NOT_SET};
    bool m_assignmentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
