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
    AWS_SECURITYHUB_API AwsIamUserDetails();
    AWS_SECURITYHUB_API AwsIamUserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline const Aws::Vector<AwsIamAttachedManagedPolicy>& GetAttachedManagedPolicies() const{ return m_attachedManagedPolicies; }

    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }

    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline void SetAttachedManagedPolicies(const Aws::Vector<AwsIamAttachedManagedPolicy>& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }

    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline void SetAttachedManagedPolicies(Aws::Vector<AwsIamAttachedManagedPolicy>&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::move(value); }

    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline AwsIamUserDetails& WithAttachedManagedPolicies(const Aws::Vector<AwsIamAttachedManagedPolicy>& value) { SetAttachedManagedPolicies(value); return *this;}

    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline AwsIamUserDetails& WithAttachedManagedPolicies(Aws::Vector<AwsIamAttachedManagedPolicy>&& value) { SetAttachedManagedPolicies(std::move(value)); return *this;}

    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline AwsIamUserDetails& AddAttachedManagedPolicies(const AwsIamAttachedManagedPolicy& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }

    /**
     * <p>A list of the managed policies that are attached to the user.</p>
     */
    inline AwsIamUserDetails& AddAttachedManagedPolicies(AwsIamAttachedManagedPolicy&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates when the user was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>Indicates when the user was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>Indicates when the user was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>Indicates when the user was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>Indicates when the user was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }

    /**
     * <p>Indicates when the user was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamUserDetails& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}

    /**
     * <p>Indicates when the user was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamUserDetails& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}

    /**
     * <p>Indicates when the user was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamUserDetails& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}


    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupList() const{ return m_groupList; }

    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline bool GroupListHasBeenSet() const { return m_groupListHasBeenSet; }

    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline void SetGroupList(const Aws::Vector<Aws::String>& value) { m_groupListHasBeenSet = true; m_groupList = value; }

    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline void SetGroupList(Aws::Vector<Aws::String>&& value) { m_groupListHasBeenSet = true; m_groupList = std::move(value); }

    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline AwsIamUserDetails& WithGroupList(const Aws::Vector<Aws::String>& value) { SetGroupList(value); return *this;}

    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline AwsIamUserDetails& WithGroupList(Aws::Vector<Aws::String>&& value) { SetGroupList(std::move(value)); return *this;}

    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline AwsIamUserDetails& AddGroupList(const Aws::String& value) { m_groupListHasBeenSet = true; m_groupList.push_back(value); return *this; }

    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline AwsIamUserDetails& AddGroupList(Aws::String&& value) { m_groupListHasBeenSet = true; m_groupList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IAM groups that the user belongs to.</p>
     */
    inline AwsIamUserDetails& AddGroupList(const char* value) { m_groupListHasBeenSet = true; m_groupList.push_back(value); return *this; }


    /**
     * <p>The path to the user.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the user.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the user.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the user.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the user.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the user.</p>
     */
    inline AwsIamUserDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the user.</p>
     */
    inline AwsIamUserDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the user.</p>
     */
    inline AwsIamUserDetails& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The permissions boundary for the user.</p>
     */
    inline const AwsIamPermissionsBoundary& GetPermissionsBoundary() const{ return m_permissionsBoundary; }

    /**
     * <p>The permissions boundary for the user.</p>
     */
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }

    /**
     * <p>The permissions boundary for the user.</p>
     */
    inline void SetPermissionsBoundary(const AwsIamPermissionsBoundary& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = value; }

    /**
     * <p>The permissions boundary for the user.</p>
     */
    inline void SetPermissionsBoundary(AwsIamPermissionsBoundary&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::move(value); }

    /**
     * <p>The permissions boundary for the user.</p>
     */
    inline AwsIamUserDetails& WithPermissionsBoundary(const AwsIamPermissionsBoundary& value) { SetPermissionsBoundary(value); return *this;}

    /**
     * <p>The permissions boundary for the user.</p>
     */
    inline AwsIamUserDetails& WithPermissionsBoundary(AwsIamPermissionsBoundary&& value) { SetPermissionsBoundary(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline AwsIamUserDetails& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline AwsIamUserDetails& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline AwsIamUserDetails& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline AwsIamUserDetails& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline AwsIamUserDetails& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline AwsIamUserDetails& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline const Aws::Vector<AwsIamUserPolicy>& GetUserPolicyList() const{ return m_userPolicyList; }

    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline bool UserPolicyListHasBeenSet() const { return m_userPolicyListHasBeenSet; }

    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline void SetUserPolicyList(const Aws::Vector<AwsIamUserPolicy>& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList = value; }

    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline void SetUserPolicyList(Aws::Vector<AwsIamUserPolicy>&& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList = std::move(value); }

    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline AwsIamUserDetails& WithUserPolicyList(const Aws::Vector<AwsIamUserPolicy>& value) { SetUserPolicyList(value); return *this;}

    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline AwsIamUserDetails& WithUserPolicyList(Aws::Vector<AwsIamUserPolicy>&& value) { SetUserPolicyList(std::move(value)); return *this;}

    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline AwsIamUserDetails& AddUserPolicyList(const AwsIamUserPolicy& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList.push_back(value); return *this; }

    /**
     * <p>The list of inline policies that are embedded in the user.</p>
     */
    inline AwsIamUserDetails& AddUserPolicyList(AwsIamUserPolicy&& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList.push_back(std::move(value)); return *this; }

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
