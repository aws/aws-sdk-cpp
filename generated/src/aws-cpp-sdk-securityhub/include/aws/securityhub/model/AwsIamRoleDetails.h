/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsIamPermissionsBoundary.h>
#include <aws/securityhub/model/AwsIamAttachedManagedPolicy.h>
#include <aws/securityhub/model/AwsIamInstanceProfile.h>
#include <aws/securityhub/model/AwsIamRolePolicy.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about an IAM role, including all of the role's
   * policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamRoleDetails">AWS
   * API Reference</a></p>
   */
  class AwsIamRoleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsIamRoleDetails() = default;
    AWS_SECURITYHUB_API AwsIamRoleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamRoleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const { return m_assumeRolePolicyDocument; }
    inline bool AssumeRolePolicyDocumentHasBeenSet() const { return m_assumeRolePolicyDocumentHasBeenSet; }
    template<typename AssumeRolePolicyDocumentT = Aws::String>
    void SetAssumeRolePolicyDocument(AssumeRolePolicyDocumentT&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = std::forward<AssumeRolePolicyDocumentT>(value); }
    template<typename AssumeRolePolicyDocumentT = Aws::String>
    AwsIamRoleDetails& WithAssumeRolePolicyDocument(AssumeRolePolicyDocumentT&& value) { SetAssumeRolePolicyDocument(std::forward<AssumeRolePolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the managed policies that are attached to the role.</p>
     */
    inline const Aws::Vector<AwsIamAttachedManagedPolicy>& GetAttachedManagedPolicies() const { return m_attachedManagedPolicies; }
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AwsIamAttachedManagedPolicy>>
    void SetAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::forward<AttachedManagedPoliciesT>(value); }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AwsIamAttachedManagedPolicy>>
    AwsIamRoleDetails& WithAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { SetAttachedManagedPolicies(std::forward<AttachedManagedPoliciesT>(value)); return *this;}
    template<typename AttachedManagedPoliciesT = AwsIamAttachedManagedPolicy>
    AwsIamRoleDetails& AddAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.emplace_back(std::forward<AttachedManagedPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the role was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::String>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::String>
    AwsIamRoleDetails& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of instance profiles that contain this role.</p>
     */
    inline const Aws::Vector<AwsIamInstanceProfile>& GetInstanceProfileList() const { return m_instanceProfileList; }
    inline bool InstanceProfileListHasBeenSet() const { return m_instanceProfileListHasBeenSet; }
    template<typename InstanceProfileListT = Aws::Vector<AwsIamInstanceProfile>>
    void SetInstanceProfileList(InstanceProfileListT&& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList = std::forward<InstanceProfileListT>(value); }
    template<typename InstanceProfileListT = Aws::Vector<AwsIamInstanceProfile>>
    AwsIamRoleDetails& WithInstanceProfileList(InstanceProfileListT&& value) { SetInstanceProfileList(std::forward<InstanceProfileListT>(value)); return *this;}
    template<typename InstanceProfileListT = AwsIamInstanceProfile>
    AwsIamRoleDetails& AddInstanceProfileList(InstanceProfileListT&& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList.emplace_back(std::forward<InstanceProfileListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AwsIamPermissionsBoundary& GetPermissionsBoundary() const { return m_permissionsBoundary; }
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }
    template<typename PermissionsBoundaryT = AwsIamPermissionsBoundary>
    void SetPermissionsBoundary(PermissionsBoundaryT&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::forward<PermissionsBoundaryT>(value); }
    template<typename PermissionsBoundaryT = AwsIamPermissionsBoundary>
    AwsIamRoleDetails& WithPermissionsBoundary(PermissionsBoundaryT&& value) { SetPermissionsBoundary(std::forward<PermissionsBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline const Aws::String& GetRoleId() const { return m_roleId; }
    inline bool RoleIdHasBeenSet() const { return m_roleIdHasBeenSet; }
    template<typename RoleIdT = Aws::String>
    void SetRoleId(RoleIdT&& value) { m_roleIdHasBeenSet = true; m_roleId = std::forward<RoleIdT>(value); }
    template<typename RoleIdT = Aws::String>
    AwsIamRoleDetails& WithRoleId(RoleIdT&& value) { SetRoleId(std::forward<RoleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    AwsIamRoleDetails& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of inline policies that are embedded in the role.</p>
     */
    inline const Aws::Vector<AwsIamRolePolicy>& GetRolePolicyList() const { return m_rolePolicyList; }
    inline bool RolePolicyListHasBeenSet() const { return m_rolePolicyListHasBeenSet; }
    template<typename RolePolicyListT = Aws::Vector<AwsIamRolePolicy>>
    void SetRolePolicyList(RolePolicyListT&& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList = std::forward<RolePolicyListT>(value); }
    template<typename RolePolicyListT = Aws::Vector<AwsIamRolePolicy>>
    AwsIamRoleDetails& WithRolePolicyList(RolePolicyListT&& value) { SetRolePolicyList(std::forward<RolePolicyListT>(value)); return *this;}
    template<typename RolePolicyListT = AwsIamRolePolicy>
    AwsIamRoleDetails& AddRolePolicyList(RolePolicyListT&& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList.emplace_back(std::forward<RolePolicyListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role.</p>
     */
    inline int GetMaxSessionDuration() const { return m_maxSessionDuration; }
    inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }
    inline void SetMaxSessionDuration(int value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = value; }
    inline AwsIamRoleDetails& WithMaxSessionDuration(int value) { SetMaxSessionDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the role.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    AwsIamRoleDetails& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assumeRolePolicyDocument;
    bool m_assumeRolePolicyDocumentHasBeenSet = false;

    Aws::Vector<AwsIamAttachedManagedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::Vector<AwsIamInstanceProfile> m_instanceProfileList;
    bool m_instanceProfileListHasBeenSet = false;

    AwsIamPermissionsBoundary m_permissionsBoundary;
    bool m_permissionsBoundaryHasBeenSet = false;

    Aws::String m_roleId;
    bool m_roleIdHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::Vector<AwsIamRolePolicy> m_rolePolicyList;
    bool m_rolePolicyListHasBeenSet = false;

    int m_maxSessionDuration{0};
    bool m_maxSessionDurationHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
