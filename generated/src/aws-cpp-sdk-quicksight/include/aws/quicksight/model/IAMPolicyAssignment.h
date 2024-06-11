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
    AWS_QUICKSIGHT_API IAMPolicyAssignment();
    AWS_QUICKSIGHT_API IAMPolicyAssignment(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IAMPolicyAssignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline IAMPolicyAssignment& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline IAMPolicyAssignment& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline IAMPolicyAssignment& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assignment ID.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }
    inline IAMPolicyAssignment& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}
    inline IAMPolicyAssignment& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}
    inline IAMPolicyAssignment& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assignment name.</p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = value; }
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::move(value); }
    inline void SetAssignmentName(const char* value) { m_assignmentNameHasBeenSet = true; m_assignmentName.assign(value); }
    inline IAMPolicyAssignment& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}
    inline IAMPolicyAssignment& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}
    inline IAMPolicyAssignment& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }
    inline IAMPolicyAssignment& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline IAMPolicyAssignment& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline IAMPolicyAssignment& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identities.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetIdentities() const{ return m_identities; }
    inline bool IdentitiesHasBeenSet() const { return m_identitiesHasBeenSet; }
    inline void SetIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_identitiesHasBeenSet = true; m_identities = value; }
    inline void SetIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_identitiesHasBeenSet = true; m_identities = std::move(value); }
    inline IAMPolicyAssignment& WithIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetIdentities(value); return *this;}
    inline IAMPolicyAssignment& WithIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetIdentities(std::move(value)); return *this;}
    inline IAMPolicyAssignment& AddIdentities(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, value); return *this; }
    inline IAMPolicyAssignment& AddIdentities(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(std::move(key), value); return *this; }
    inline IAMPolicyAssignment& AddIdentities(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, std::move(value)); return *this; }
    inline IAMPolicyAssignment& AddIdentities(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(std::move(key), std::move(value)); return *this; }
    inline IAMPolicyAssignment& AddIdentities(const char* key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, std::move(value)); return *this; }
    inline IAMPolicyAssignment& AddIdentities(const char* key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Assignment status.</p>
     */
    inline const AssignmentStatus& GetAssignmentStatus() const{ return m_assignmentStatus; }
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }
    inline void SetAssignmentStatus(const AssignmentStatus& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }
    inline void SetAssignmentStatus(AssignmentStatus&& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = std::move(value); }
    inline IAMPolicyAssignment& WithAssignmentStatus(const AssignmentStatus& value) { SetAssignmentStatus(value); return *this;}
    inline IAMPolicyAssignment& WithAssignmentStatus(AssignmentStatus&& value) { SetAssignmentStatus(std::move(value)); return *this;}
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

    AssignmentStatus m_assignmentStatus;
    bool m_assignmentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
