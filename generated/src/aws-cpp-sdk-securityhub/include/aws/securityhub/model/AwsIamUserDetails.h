/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsIamPermissionsBoundary.h>
#include <aws/securityhub/model/AwsIamAttachedManagedPolicy.h>
#include <aws/securityhub/model/AwsIamUserPolicy.h>
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
   * <p>Information about an IAM user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamUserDetails">AWS
   * API Reference</a></p>
   */
  class AwsIamUserDetails
  {
  public:
    AWS_SECURITYHUB_API AwsIamUserDetails() = default;
    AWS_SECURITYHUB_API AwsIamUserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline const Aws::Vector<AwsIamAttachedManagedPolicy>& GetAttachedManagedPolicies() const { return m_attachedManagedPolicies; }
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AwsIamAttachedManagedPolicy>>
    void SetAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::forward<AttachedManagedPoliciesT>(value); }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AwsIamAttachedManagedPolicy>>
    AwsIamUserDetails& WithAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { SetAttachedManagedPolicies(std::forward<AttachedManagedPoliciesT>(value)); return *this;}
    template<typename AttachedManagedPoliciesT = AwsIamAttachedManagedPolicy>
    AwsIamUserDetails& AddAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.emplace_back(std::forward<AttachedManagedPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the user was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::String>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::String>
    AwsIamUserDetails& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupList() const { return m_groupList; }
    inline bool GroupListHasBeenSet() const { return m_groupListHasBeenSet; }
    template<typename GroupListT = Aws::Vector<Aws::String>>
    void SetGroupList(GroupListT&& value) { m_groupListHasBeenSet = true; m_groupList = std::forward<GroupListT>(value); }
    template<typename GroupListT = Aws::Vector<Aws::String>>
    AwsIamUserDetails& WithGroupList(GroupListT&& value) { SetGroupList(std::forward<GroupListT>(value)); return *this;}
    template<typename GroupListT = Aws::String>
    AwsIamUserDetails& AddGroupList(GroupListT&& value) { m_groupListHasBeenSet = true; m_groupList.emplace_back(std::forward<GroupListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The path to the user.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    AwsIamUserDetails& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions boundary for the user.</p>
     */
    inline const AwsIamPermissionsBoundary& GetPermissionsBoundary() const { return m_permissionsBoundary; }
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }
    template<typename PermissionsBoundaryT = AwsIamPermissionsBoundary>
    void SetPermissionsBoundary(PermissionsBoundaryT&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::forward<PermissionsBoundaryT>(value); }
    template<typename PermissionsBoundaryT = AwsIamPermissionsBoundary>
    AwsIamUserDetails& WithPermissionsBoundary(PermissionsBoundaryT&& value) { SetPermissionsBoundary(std::forward<PermissionsBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    AwsIamUserDetails& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    AwsIamUserDetails& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline const Aws::Vector<AwsIamUserPolicy>& GetUserPolicyList() const { return m_userPolicyList; }
    inline bool UserPolicyListHasBeenSet() const { return m_userPolicyListHasBeenSet; }
    template<typename UserPolicyListT = Aws::Vector<AwsIamUserPolicy>>
    void SetUserPolicyList(UserPolicyListT&& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList = std::forward<UserPolicyListT>(value); }
    template<typename UserPolicyListT = Aws::Vector<AwsIamUserPolicy>>
    AwsIamUserDetails& WithUserPolicyList(UserPolicyListT&& value) { SetUserPolicyList(std::forward<UserPolicyListT>(value)); return *this;}
    template<typename UserPolicyListT = AwsIamUserPolicy>
    AwsIamUserDetails& AddUserPolicyList(UserPolicyListT&& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList.emplace_back(std::forward<UserPolicyListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsIamAttachedManagedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupList;
    bool m_groupListHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    AwsIamPermissionsBoundary m_permissionsBoundary;
    bool m_permissionsBoundaryHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::Vector<AwsIamUserPolicy> m_userPolicyList;
    bool m_userPolicyListHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
