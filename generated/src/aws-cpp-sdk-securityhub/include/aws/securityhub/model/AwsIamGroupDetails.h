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


    ///@{
    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline const Aws::Vector<AwsIamAttachedManagedPolicy>& GetAttachedManagedPolicies() const{ return m_attachedManagedPolicies; }
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }
    inline void SetAttachedManagedPolicies(const Aws::Vector<AwsIamAttachedManagedPolicy>& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }
    inline void SetAttachedManagedPolicies(Aws::Vector<AwsIamAttachedManagedPolicy>&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::move(value); }
    inline AwsIamGroupDetails& WithAttachedManagedPolicies(const Aws::Vector<AwsIamAttachedManagedPolicy>& value) { SetAttachedManagedPolicies(value); return *this;}
    inline AwsIamGroupDetails& WithAttachedManagedPolicies(Aws::Vector<AwsIamAttachedManagedPolicy>&& value) { SetAttachedManagedPolicies(std::move(value)); return *this;}
    inline AwsIamGroupDetails& AddAttachedManagedPolicies(const AwsIamAttachedManagedPolicy& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }
    inline AwsIamGroupDetails& AddAttachedManagedPolicies(AwsIamAttachedManagedPolicy&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the IAM group was created.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }
    inline AwsIamGroupDetails& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}
    inline AwsIamGroupDetails& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}
    inline AwsIamGroupDetails& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline AwsIamGroupDetails& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline AwsIamGroupDetails& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline AwsIamGroupDetails& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline AwsIamGroupDetails& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline AwsIamGroupDetails& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline AwsIamGroupDetails& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline const Aws::Vector<AwsIamGroupPolicy>& GetGroupPolicyList() const{ return m_groupPolicyList; }
    inline bool GroupPolicyListHasBeenSet() const { return m_groupPolicyListHasBeenSet; }
    inline void SetGroupPolicyList(const Aws::Vector<AwsIamGroupPolicy>& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList = value; }
    inline void SetGroupPolicyList(Aws::Vector<AwsIamGroupPolicy>&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList = std::move(value); }
    inline AwsIamGroupDetails& WithGroupPolicyList(const Aws::Vector<AwsIamGroupPolicy>& value) { SetGroupPolicyList(value); return *this;}
    inline AwsIamGroupDetails& WithGroupPolicyList(Aws::Vector<AwsIamGroupPolicy>&& value) { SetGroupPolicyList(std::move(value)); return *this;}
    inline AwsIamGroupDetails& AddGroupPolicyList(const AwsIamGroupPolicy& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList.push_back(value); return *this; }
    inline AwsIamGroupDetails& AddGroupPolicyList(AwsIamGroupPolicy&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The path to the group.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline AwsIamGroupDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline AwsIamGroupDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline AwsIamGroupDetails& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}
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
