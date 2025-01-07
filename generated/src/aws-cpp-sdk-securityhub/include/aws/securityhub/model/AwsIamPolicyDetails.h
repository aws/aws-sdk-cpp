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
    AWS_SECURITYHUB_API AwsIamPolicyDetails();
    AWS_SECURITYHUB_API AwsIamPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of users, groups, and roles that the policy is attached to.</p>
     */
    inline int GetAttachmentCount() const{ return m_attachmentCount; }
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
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }
    inline AwsIamPolicyDetails& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}
    inline AwsIamPolicyDetails& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}
    inline AwsIamPolicyDetails& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = value; }
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::move(value); }
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId.assign(value); }
    inline AwsIamPolicyDetails& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}
    inline AwsIamPolicyDetails& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}
    inline AwsIamPolicyDetails& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsIamPolicyDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsIamPolicyDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsIamPolicyDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the policy can be attached to a user, group, or role.</p>
     */
    inline bool GetIsAttachable() const{ return m_isAttachable; }
    inline bool IsAttachableHasBeenSet() const { return m_isAttachableHasBeenSet; }
    inline void SetIsAttachable(bool value) { m_isAttachableHasBeenSet = true; m_isAttachable = value; }
    inline AwsIamPolicyDetails& WithIsAttachable(bool value) { SetIsAttachable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the policy.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline AwsIamPolicyDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline AwsIamPolicyDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline AwsIamPolicyDetails& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users and roles that use the policy to set the permissions
     * boundary.</p>
     */
    inline int GetPermissionsBoundaryUsageCount() const{ return m_permissionsBoundaryUsageCount; }
    inline bool PermissionsBoundaryUsageCountHasBeenSet() const { return m_permissionsBoundaryUsageCountHasBeenSet; }
    inline void SetPermissionsBoundaryUsageCount(int value) { m_permissionsBoundaryUsageCountHasBeenSet = true; m_permissionsBoundaryUsageCount = value; }
    inline AwsIamPolicyDetails& WithPermissionsBoundaryUsageCount(int value) { SetPermissionsBoundaryUsageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline AwsIamPolicyDetails& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline AwsIamPolicyDetails& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline AwsIamPolicyDetails& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline AwsIamPolicyDetails& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline AwsIamPolicyDetails& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline AwsIamPolicyDetails& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of versions of the policy.</p>
     */
    inline const Aws::Vector<AwsIamPolicyVersion>& GetPolicyVersionList() const{ return m_policyVersionList; }
    inline bool PolicyVersionListHasBeenSet() const { return m_policyVersionListHasBeenSet; }
    inline void SetPolicyVersionList(const Aws::Vector<AwsIamPolicyVersion>& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList = value; }
    inline void SetPolicyVersionList(Aws::Vector<AwsIamPolicyVersion>&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList = std::move(value); }
    inline AwsIamPolicyDetails& WithPolicyVersionList(const Aws::Vector<AwsIamPolicyVersion>& value) { SetPolicyVersionList(value); return *this;}
    inline AwsIamPolicyDetails& WithPolicyVersionList(Aws::Vector<AwsIamPolicyVersion>&& value) { SetPolicyVersionList(std::move(value)); return *this;}
    inline AwsIamPolicyDetails& AddPolicyVersionList(const AwsIamPolicyVersion& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList.push_back(value); return *this; }
    inline AwsIamPolicyDetails& AddPolicyVersionList(AwsIamPolicyVersion&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the policy was most recently updated.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetUpdateDate() const{ return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    inline void SetUpdateDate(const Aws::String& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }
    inline void SetUpdateDate(Aws::String&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }
    inline void SetUpdateDate(const char* value) { m_updateDateHasBeenSet = true; m_updateDate.assign(value); }
    inline AwsIamPolicyDetails& WithUpdateDate(const Aws::String& value) { SetUpdateDate(value); return *this;}
    inline AwsIamPolicyDetails& WithUpdateDate(Aws::String&& value) { SetUpdateDate(std::move(value)); return *this;}
    inline AwsIamPolicyDetails& WithUpdateDate(const char* value) { SetUpdateDate(value); return *this;}
    ///@}
  private:

    int m_attachmentCount;
    bool m_attachmentCountHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isAttachable;
    bool m_isAttachableHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_permissionsBoundaryUsageCount;
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
