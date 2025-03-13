/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsIamPolicyVersion.h>
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
   * <p>Represents an IAM permissions policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamPolicyDetails">AWS
   * API Reference</a></p>
   */
  class AwsIamPolicyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsIamPolicyDetails() = default;
    AWS_SECURITYHUB_API AwsIamPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of users, groups, and roles that the policy is attached to.</p>
     */
    inline int GetAttachmentCount() const { return m_attachmentCount; }
    inline bool AttachmentCountHasBeenSet() const { return m_attachmentCountHasBeenSet; }
    inline void SetAttachmentCount(int value) { m_attachmentCountHasBeenSet = true; m_attachmentCount = value; }
    inline AwsIamPolicyDetails& WithAttachmentCount(int value) { SetAttachmentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the policy was created.</p> <p>For more information about the validation
     * and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::String>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::String>
    AwsIamPolicyDetails& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline const Aws::String& GetDefaultVersionId() const { return m_defaultVersionId; }
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }
    template<typename DefaultVersionIdT = Aws::String>
    void SetDefaultVersionId(DefaultVersionIdT&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::forward<DefaultVersionIdT>(value); }
    template<typename DefaultVersionIdT = Aws::String>
    AwsIamPolicyDetails& WithDefaultVersionId(DefaultVersionIdT&& value) { SetDefaultVersionId(std::forward<DefaultVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsIamPolicyDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the policy can be attached to a user, group, or role.</p>
     */
    inline bool GetIsAttachable() const { return m_isAttachable; }
    inline bool IsAttachableHasBeenSet() const { return m_isAttachableHasBeenSet; }
    inline void SetIsAttachable(bool value) { m_isAttachableHasBeenSet = true; m_isAttachable = value; }
    inline AwsIamPolicyDetails& WithIsAttachable(bool value) { SetIsAttachable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the policy.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    AwsIamPolicyDetails& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users and roles that use the policy to set the permissions
     * boundary.</p>
     */
    inline int GetPermissionsBoundaryUsageCount() const { return m_permissionsBoundaryUsageCount; }
    inline bool PermissionsBoundaryUsageCountHasBeenSet() const { return m_permissionsBoundaryUsageCountHasBeenSet; }
    inline void SetPermissionsBoundaryUsageCount(int value) { m_permissionsBoundaryUsageCountHasBeenSet = true; m_permissionsBoundaryUsageCount = value; }
    inline AwsIamPolicyDetails& WithPermissionsBoundaryUsageCount(int value) { SetPermissionsBoundaryUsageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    AwsIamPolicyDetails& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    AwsIamPolicyDetails& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of versions of the policy.</p>
     */
    inline const Aws::Vector<AwsIamPolicyVersion>& GetPolicyVersionList() const { return m_policyVersionList; }
    inline bool PolicyVersionListHasBeenSet() const { return m_policyVersionListHasBeenSet; }
    template<typename PolicyVersionListT = Aws::Vector<AwsIamPolicyVersion>>
    void SetPolicyVersionList(PolicyVersionListT&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList = std::forward<PolicyVersionListT>(value); }
    template<typename PolicyVersionListT = Aws::Vector<AwsIamPolicyVersion>>
    AwsIamPolicyDetails& WithPolicyVersionList(PolicyVersionListT&& value) { SetPolicyVersionList(std::forward<PolicyVersionListT>(value)); return *this;}
    template<typename PolicyVersionListT = AwsIamPolicyVersion>
    AwsIamPolicyDetails& AddPolicyVersionList(PolicyVersionListT&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList.emplace_back(std::forward<PolicyVersionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the policy was most recently updated.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetUpdateDate() const { return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    template<typename UpdateDateT = Aws::String>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::String>
    AwsIamPolicyDetails& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}
  private:

    int m_attachmentCount{0};
    bool m_attachmentCountHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isAttachable{false};
    bool m_isAttachableHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_permissionsBoundaryUsageCount{0};
    bool m_permissionsBoundaryUsageCountHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::Vector<AwsIamPolicyVersion> m_policyVersionList;
    bool m_policyVersionListHasBeenSet = false;

    Aws::String m_updateDate;
    bool m_updateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
