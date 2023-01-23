/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsIamAttachedManagedPolicy.h>
#include <aws/securityhub/model/AwsIamGroupPolicy.h>
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
   * <p>Contains details about an IAM group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsIamGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsIamGroupDetails();
    AWS_SECURITYHUB_API AwsIamGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline const Aws::Vector<AwsIamAttachedManagedPolicy>& GetAttachedManagedPolicies() const{ return m_attachedManagedPolicies; }

    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }

    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline void SetAttachedManagedPolicies(const Aws::Vector<AwsIamAttachedManagedPolicy>& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }

    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline void SetAttachedManagedPolicies(Aws::Vector<AwsIamAttachedManagedPolicy>&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::move(value); }

    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline AwsIamGroupDetails& WithAttachedManagedPolicies(const Aws::Vector<AwsIamAttachedManagedPolicy>& value) { SetAttachedManagedPolicies(value); return *this;}

    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline AwsIamGroupDetails& WithAttachedManagedPolicies(Aws::Vector<AwsIamAttachedManagedPolicy>&& value) { SetAttachedManagedPolicies(std::move(value)); return *this;}

    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline AwsIamGroupDetails& AddAttachedManagedPolicies(const AwsIamAttachedManagedPolicy& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }

    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline AwsIamGroupDetails& AddAttachedManagedPolicies(AwsIamAttachedManagedPolicy&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates when the IAM group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>Indicates when the IAM group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>Indicates when the IAM group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>Indicates when the IAM group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>Indicates when the IAM group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }

    /**
     * <p>Indicates when the IAM group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamGroupDetails& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}

    /**
     * <p>Indicates when the IAM group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamGroupDetails& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}

    /**
     * <p>Indicates when the IAM group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamGroupDetails& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}


    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline AwsIamGroupDetails& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline AwsIamGroupDetails& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline AwsIamGroupDetails& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The name of the IAM group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the IAM group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the IAM group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the IAM group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the IAM group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the IAM group.</p>
     */
    inline AwsIamGroupDetails& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the IAM group.</p>
     */
    inline AwsIamGroupDetails& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM group.</p>
     */
    inline AwsIamGroupDetails& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline const Aws::Vector<AwsIamGroupPolicy>& GetGroupPolicyList() const{ return m_groupPolicyList; }

    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline bool GroupPolicyListHasBeenSet() const { return m_groupPolicyListHasBeenSet; }

    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline void SetGroupPolicyList(const Aws::Vector<AwsIamGroupPolicy>& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList = value; }

    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline void SetGroupPolicyList(Aws::Vector<AwsIamGroupPolicy>&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList = std::move(value); }

    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline AwsIamGroupDetails& WithGroupPolicyList(const Aws::Vector<AwsIamGroupPolicy>& value) { SetGroupPolicyList(value); return *this;}

    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline AwsIamGroupDetails& WithGroupPolicyList(Aws::Vector<AwsIamGroupPolicy>&& value) { SetGroupPolicyList(std::move(value)); return *this;}

    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline AwsIamGroupDetails& AddGroupPolicyList(const AwsIamGroupPolicy& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList.push_back(value); return *this; }

    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline AwsIamGroupDetails& AddGroupPolicyList(AwsIamGroupPolicy&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList.push_back(std::move(value)); return *this; }


    /**
     * <p>The path to the group.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the group.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the group.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the group.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the group.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the group.</p>
     */
    inline AwsIamGroupDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the group.</p>
     */
    inline AwsIamGroupDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the group.</p>
     */
    inline AwsIamGroupDetails& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::Vector<AwsIamAttachedManagedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Vector<AwsIamGroupPolicy> m_groupPolicyList;
    bool m_groupPolicyListHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
