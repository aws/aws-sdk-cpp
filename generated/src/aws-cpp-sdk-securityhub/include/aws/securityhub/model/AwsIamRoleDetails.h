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
    AWS_SECURITYHUB_API AwsIamRoleDetails();
    AWS_SECURITYHUB_API AwsIamRoleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamRoleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const{ return m_assumeRolePolicyDocument; }
    inline bool AssumeRolePolicyDocumentHasBeenSet() const { return m_assumeRolePolicyDocumentHasBeenSet; }
    inline void SetAssumeRolePolicyDocument(const Aws::String& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = value; }
    inline void SetAssumeRolePolicyDocument(Aws::String&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = std::move(value); }
    inline void SetAssumeRolePolicyDocument(const char* value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument.assign(value); }
    inline AwsIamRoleDetails& WithAssumeRolePolicyDocument(const Aws::String& value) { SetAssumeRolePolicyDocument(value); return *this;}
    inline AwsIamRoleDetails& WithAssumeRolePolicyDocument(Aws::String&& value) { SetAssumeRolePolicyDocument(std::move(value)); return *this;}
    inline AwsIamRoleDetails& WithAssumeRolePolicyDocument(const char* value) { SetAssumeRolePolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the managed policies that are attached to the role.</p>
     */
    inline const Aws::Vector<AwsIamAttachedManagedPolicy>& GetAttachedManagedPolicies() const{ return m_attachedManagedPolicies; }
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }
    inline void SetAttachedManagedPolicies(const Aws::Vector<AwsIamAttachedManagedPolicy>& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }
    inline void SetAttachedManagedPolicies(Aws::Vector<AwsIamAttachedManagedPolicy>&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::move(value); }
    inline AwsIamRoleDetails& WithAttachedManagedPolicies(const Aws::Vector<AwsIamAttachedManagedPolicy>& value) { SetAttachedManagedPolicies(value); return *this;}
    inline AwsIamRoleDetails& WithAttachedManagedPolicies(Aws::Vector<AwsIamAttachedManagedPolicy>&& value) { SetAttachedManagedPolicies(std::move(value)); return *this;}
    inline AwsIamRoleDetails& AddAttachedManagedPolicies(const AwsIamAttachedManagedPolicy& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }
    inline AwsIamRoleDetails& AddAttachedManagedPolicies(AwsIamAttachedManagedPolicy&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the role was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }
    inline AwsIamRoleDetails& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}
    inline AwsIamRoleDetails& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}
    inline AwsIamRoleDetails& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of instance profiles that contain this role.</p>
     */
    inline const Aws::Vector<AwsIamInstanceProfile>& GetInstanceProfileList() const{ return m_instanceProfileList; }
    inline bool InstanceProfileListHasBeenSet() const { return m_instanceProfileListHasBeenSet; }
    inline void SetInstanceProfileList(const Aws::Vector<AwsIamInstanceProfile>& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList = value; }
    inline void SetInstanceProfileList(Aws::Vector<AwsIamInstanceProfile>&& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList = std::move(value); }
    inline AwsIamRoleDetails& WithInstanceProfileList(const Aws::Vector<AwsIamInstanceProfile>& value) { SetInstanceProfileList(value); return *this;}
    inline AwsIamRoleDetails& WithInstanceProfileList(Aws::Vector<AwsIamInstanceProfile>&& value) { SetInstanceProfileList(std::move(value)); return *this;}
    inline AwsIamRoleDetails& AddInstanceProfileList(const AwsIamInstanceProfile& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList.push_back(value); return *this; }
    inline AwsIamRoleDetails& AddInstanceProfileList(AwsIamInstanceProfile&& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const AwsIamPermissionsBoundary& GetPermissionsBoundary() const{ return m_permissionsBoundary; }
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }
    inline void SetPermissionsBoundary(const AwsIamPermissionsBoundary& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = value; }
    inline void SetPermissionsBoundary(AwsIamPermissionsBoundary&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::move(value); }
    inline AwsIamRoleDetails& WithPermissionsBoundary(const AwsIamPermissionsBoundary& value) { SetPermissionsBoundary(value); return *this;}
    inline AwsIamRoleDetails& WithPermissionsBoundary(AwsIamPermissionsBoundary&& value) { SetPermissionsBoundary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stable and unique string identifying the role.</p>
     */
    inline const Aws::String& GetRoleId() const{ return m_roleId; }
    inline bool RoleIdHasBeenSet() const { return m_roleIdHasBeenSet; }
    inline void SetRoleId(const Aws::String& value) { m_roleIdHasBeenSet = true; m_roleId = value; }
    inline void SetRoleId(Aws::String&& value) { m_roleIdHasBeenSet = true; m_roleId = std::move(value); }
    inline void SetRoleId(const char* value) { m_roleIdHasBeenSet = true; m_roleId.assign(value); }
    inline AwsIamRoleDetails& WithRoleId(const Aws::String& value) { SetRoleId(value); return *this;}
    inline AwsIamRoleDetails& WithRoleId(Aws::String&& value) { SetRoleId(std::move(value)); return *this;}
    inline AwsIamRoleDetails& WithRoleId(const char* value) { SetRoleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }
    inline AwsIamRoleDetails& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}
    inline AwsIamRoleDetails& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}
    inline AwsIamRoleDetails& WithRoleName(const char* value) { SetRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of inline policies that are embedded in the role.</p>
     */
    inline const Aws::Vector<AwsIamRolePolicy>& GetRolePolicyList() const{ return m_rolePolicyList; }
    inline bool RolePolicyListHasBeenSet() const { return m_rolePolicyListHasBeenSet; }
    inline void SetRolePolicyList(const Aws::Vector<AwsIamRolePolicy>& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList = value; }
    inline void SetRolePolicyList(Aws::Vector<AwsIamRolePolicy>&& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList = std::move(value); }
    inline AwsIamRoleDetails& WithRolePolicyList(const Aws::Vector<AwsIamRolePolicy>& value) { SetRolePolicyList(value); return *this;}
    inline AwsIamRoleDetails& WithRolePolicyList(Aws::Vector<AwsIamRolePolicy>&& value) { SetRolePolicyList(std::move(value)); return *this;}
    inline AwsIamRoleDetails& AddRolePolicyList(const AwsIamRolePolicy& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList.push_back(value); return *this; }
    inline AwsIamRoleDetails& AddRolePolicyList(AwsIamRolePolicy&& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role.</p>
     */
    inline int GetMaxSessionDuration() const{ return m_maxSessionDuration; }
    inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }
    inline void SetMaxSessionDuration(int value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = value; }
    inline AwsIamRoleDetails& WithMaxSessionDuration(int value) { SetMaxSessionDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the role.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline AwsIamRoleDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline AwsIamRoleDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline AwsIamRoleDetails& WithPath(const char* value) { SetPath(value); return *this;}
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

    int m_maxSessionDuration;
    bool m_maxSessionDurationHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
