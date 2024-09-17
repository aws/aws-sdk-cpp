/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Tag.h>
#include <aws/ssm/model/RegistrationMetadataItem.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreateActivationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreateActivationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateActivation"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-defined description of the resource that you want to register with
     * Systems Manager. </p>  <p>Don't enter personally identifiable
     * information in this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateActivationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateActivationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateActivationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the registered, managed node as it will appear in the Amazon Web
     * Services Systems Manager console or when you use the Amazon Web Services command
     * line tools to list Systems Manager resources.</p>  <p>Don't enter
     * personally identifiable information in this field.</p> 
     */
    inline const Aws::String& GetDefaultInstanceName() const{ return m_defaultInstanceName; }
    inline bool DefaultInstanceNameHasBeenSet() const { return m_defaultInstanceNameHasBeenSet; }
    inline void SetDefaultInstanceName(const Aws::String& value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName = value; }
    inline void SetDefaultInstanceName(Aws::String&& value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName = std::move(value); }
    inline void SetDefaultInstanceName(const char* value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName.assign(value); }
    inline CreateActivationRequest& WithDefaultInstanceName(const Aws::String& value) { SetDefaultInstanceName(value); return *this;}
    inline CreateActivationRequest& WithDefaultInstanceName(Aws::String&& value) { SetDefaultInstanceName(std::move(value)); return *this;}
    inline CreateActivationRequest& WithDefaultInstanceName(const char* value) { SetDefaultInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Identity and Access Management (IAM) role that you want to
     * assign to the managed node. This IAM role must provide AssumeRole permissions
     * for the Amazon Web Services Systems Manager service principal
     * <code>ssm.amazonaws.com</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/hybrid-multicloud-service-role.html">Create
     * the IAM service role required for Systems Manager in a hybrid and multicloud
     * environments</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>You can't specify an IAM service-linked role for this
     * parameter. You must create a unique role.</p> 
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }
    inline CreateActivationRequest& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}
    inline CreateActivationRequest& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}
    inline CreateActivationRequest& WithIamRole(const char* value) { SetIamRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the maximum number of managed nodes you want to register. The default
     * value is <code>1</code>.</p>
     */
    inline int GetRegistrationLimit() const{ return m_registrationLimit; }
    inline bool RegistrationLimitHasBeenSet() const { return m_registrationLimitHasBeenSet; }
    inline void SetRegistrationLimit(int value) { m_registrationLimitHasBeenSet = true; m_registrationLimit = value; }
    inline CreateActivationRequest& WithRegistrationLimit(int value) { SetRegistrationLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date by which this activation request should expire, in timestamp format,
     * such as "2024-07-07T00:00:00". You can specify a date up to 30 days in advance.
     * If you don't provide an expiration date, the activation code expires in 24
     * hours.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline CreateActivationRequest& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline CreateActivationRequest& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an activation to identify which
     * servers or virtual machines (VMs) in your on-premises environment you intend to
     * activate. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> 
     * <p>When you install SSM Agent on your on-premises servers and VMs, you specify
     * an activation ID and code. When you specify the activation ID and code, tags
     * assigned to the activation are automatically applied to the on-premises servers
     * or VMs.</p>  <p>You can't add tags to or delete tags from an
     * existing activation. You can tag your on-premises servers, edge devices, and VMs
     * after they connect to Systems Manager for the first time and are assigned a
     * managed node ID. This means they are listed in the Amazon Web Services Systems
     * Manager console with an ID that is prefixed with "mi-". For information about
     * how to add tags to your managed nodes, see <a>AddTagsToResource</a>. For
     * information about how to remove tags from your managed nodes, see
     * <a>RemoveTagsFromResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateActivationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateActivationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateActivationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateActivationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved for internal use.</p>
     */
    inline const Aws::Vector<RegistrationMetadataItem>& GetRegistrationMetadata() const{ return m_registrationMetadata; }
    inline bool RegistrationMetadataHasBeenSet() const { return m_registrationMetadataHasBeenSet; }
    inline void SetRegistrationMetadata(const Aws::Vector<RegistrationMetadataItem>& value) { m_registrationMetadataHasBeenSet = true; m_registrationMetadata = value; }
    inline void SetRegistrationMetadata(Aws::Vector<RegistrationMetadataItem>&& value) { m_registrationMetadataHasBeenSet = true; m_registrationMetadata = std::move(value); }
    inline CreateActivationRequest& WithRegistrationMetadata(const Aws::Vector<RegistrationMetadataItem>& value) { SetRegistrationMetadata(value); return *this;}
    inline CreateActivationRequest& WithRegistrationMetadata(Aws::Vector<RegistrationMetadataItem>&& value) { SetRegistrationMetadata(std::move(value)); return *this;}
    inline CreateActivationRequest& AddRegistrationMetadata(const RegistrationMetadataItem& value) { m_registrationMetadataHasBeenSet = true; m_registrationMetadata.push_back(value); return *this; }
    inline CreateActivationRequest& AddRegistrationMetadata(RegistrationMetadataItem&& value) { m_registrationMetadataHasBeenSet = true; m_registrationMetadata.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultInstanceName;
    bool m_defaultInstanceNameHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    int m_registrationLimit;
    bool m_registrationLimitHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<RegistrationMetadataItem> m_registrationMetadata;
    bool m_registrationMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
