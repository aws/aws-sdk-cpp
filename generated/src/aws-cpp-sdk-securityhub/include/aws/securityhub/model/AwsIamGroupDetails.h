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
    AWS_SECURITYHUB_API AwsIamGroupDetails() = default;
    AWS_SECURITYHUB_API AwsIamGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the managed policies that are attached to the IAM group.</p>
     */
    inline const Aws::Vector<AwsIamAttachedManagedPolicy>& GetAttachedManagedPolicies() const { return m_attachedManagedPolicies; }
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AwsIamAttachedManagedPolicy>>
    void SetAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::forward<AttachedManagedPoliciesT>(value); }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AwsIamAttachedManagedPolicy>>
    AwsIamGroupDetails& WithAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { SetAttachedManagedPolicies(std::forward<AttachedManagedPoliciesT>(value)); return *this;}
    template<typename AttachedManagedPoliciesT = AwsIamAttachedManagedPolicy>
    AwsIamGroupDetails& AddAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.emplace_back(std::forward<AttachedManagedPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the IAM group was created.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::String>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::String>
    AwsIamGroupDetails& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the IAM group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    AwsIamGroupDetails& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    AwsIamGroupDetails& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of inline policies that are embedded in the group.</p>
     */
    inline const Aws::Vector<AwsIamGroupPolicy>& GetGroupPolicyList() const { return m_groupPolicyList; }
    inline bool GroupPolicyListHasBeenSet() const { return m_groupPolicyListHasBeenSet; }
    template<typename GroupPolicyListT = Aws::Vector<AwsIamGroupPolicy>>
    void SetGroupPolicyList(GroupPolicyListT&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList = std::forward<GroupPolicyListT>(value); }
    template<typename GroupPolicyListT = Aws::Vector<AwsIamGroupPolicy>>
    AwsIamGroupDetails& WithGroupPolicyList(GroupPolicyListT&& value) { SetGroupPolicyList(std::forward<GroupPolicyListT>(value)); return *this;}
    template<typename GroupPolicyListT = AwsIamGroupPolicy>
    AwsIamGroupDetails& AddGroupPolicyList(GroupPolicyListT&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList.emplace_back(std::forward<GroupPolicyListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The path to the group.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    AwsIamGroupDetails& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
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
