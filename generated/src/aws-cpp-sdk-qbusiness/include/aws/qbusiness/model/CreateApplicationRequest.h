/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/IdentityType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/EncryptionConfiguration.h>
#include <aws/qbusiness/model/AttachmentsConfiguration.h>
#include <aws/qbusiness/model/QAppsConfiguration.h>
#include <aws/qbusiness/model/PersonalizationConfiguration.h>
#include <aws/qbusiness/model/QuickSightConfiguration.h>
#include <aws/qbusiness/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the Amazon Q Business application. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateApplicationRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateApplicationRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics. If this property is not specified,
     * Amazon Q Business will create a <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/using-service-linked-roles.html#slr-permissions">service
     * linked role (SLR)</a> and use it as the application's role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateApplicationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateApplicationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type being used by a Amazon Q Business application.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }
    inline CreateApplicationRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}
    inline CreateApplicationRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an identity provider being used by an
     * Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIamIdentityProviderArn() const{ return m_iamIdentityProviderArn; }
    inline bool IamIdentityProviderArnHasBeenSet() const { return m_iamIdentityProviderArnHasBeenSet; }
    inline void SetIamIdentityProviderArn(const Aws::String& value) { m_iamIdentityProviderArnHasBeenSet = true; m_iamIdentityProviderArn = value; }
    inline void SetIamIdentityProviderArn(Aws::String&& value) { m_iamIdentityProviderArnHasBeenSet = true; m_iamIdentityProviderArn = std::move(value); }
    inline void SetIamIdentityProviderArn(const char* value) { m_iamIdentityProviderArnHasBeenSet = true; m_iamIdentityProviderArn.assign(value); }
    inline CreateApplicationRequest& WithIamIdentityProviderArn(const Aws::String& value) { SetIamIdentityProviderArn(value); return *this;}
    inline CreateApplicationRequest& WithIamIdentityProviderArn(Aws::String&& value) { SetIamIdentityProviderArn(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithIamIdentityProviderArn(const char* value) { SetIamIdentityProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM Identity Center instance you are
     * either creating for—or connecting to—your Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const{ return m_identityCenterInstanceArn; }
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
    inline void SetIdentityCenterInstanceArn(const Aws::String& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = value; }
    inline void SetIdentityCenterInstanceArn(Aws::String&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::move(value); }
    inline void SetIdentityCenterInstanceArn(const char* value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn.assign(value); }
    inline CreateApplicationRequest& WithIdentityCenterInstanceArn(const Aws::String& value) { SetIdentityCenterInstanceArn(value); return *this;}
    inline CreateApplicationRequest& WithIdentityCenterInstanceArn(Aws::String&& value) { SetIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithIdentityCenterInstanceArn(const char* value) { SetIdentityCenterInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC client ID for a Amazon Q Business application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIdsForOIDC() const{ return m_clientIdsForOIDC; }
    inline bool ClientIdsForOIDCHasBeenSet() const { return m_clientIdsForOIDCHasBeenSet; }
    inline void SetClientIdsForOIDC(const Aws::Vector<Aws::String>& value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC = value; }
    inline void SetClientIdsForOIDC(Aws::Vector<Aws::String>&& value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC = std::move(value); }
    inline CreateApplicationRequest& WithClientIdsForOIDC(const Aws::Vector<Aws::String>& value) { SetClientIdsForOIDC(value); return *this;}
    inline CreateApplicationRequest& WithClientIdsForOIDC(Aws::Vector<Aws::String>&& value) { SetClientIdsForOIDC(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddClientIdsForOIDC(const Aws::String& value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC.push_back(value); return *this; }
    inline CreateApplicationRequest& AddClientIdsForOIDC(Aws::String&& value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC.push_back(std::move(value)); return *this; }
    inline CreateApplicationRequest& AddClientIdsForOIDC(const char* value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Q Business application. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key that is used to encrypt your data. Amazon Q
     * Business doesn't support asymmetric keys.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q Business
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * Business application.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline const AttachmentsConfiguration& GetAttachmentsConfiguration() const{ return m_attachmentsConfiguration; }
    inline bool AttachmentsConfigurationHasBeenSet() const { return m_attachmentsConfigurationHasBeenSet; }
    inline void SetAttachmentsConfiguration(const AttachmentsConfiguration& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = value; }
    inline void SetAttachmentsConfiguration(AttachmentsConfiguration&& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithAttachmentsConfiguration(const AttachmentsConfiguration& value) { SetAttachmentsConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithAttachmentsConfiguration(AttachmentsConfiguration&& value) { SetAttachmentsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow end users to create and use Amazon Q Apps in the web
     * experience.</p>
     */
    inline const QAppsConfiguration& GetQAppsConfiguration() const{ return m_qAppsConfiguration; }
    inline bool QAppsConfigurationHasBeenSet() const { return m_qAppsConfigurationHasBeenSet; }
    inline void SetQAppsConfiguration(const QAppsConfiguration& value) { m_qAppsConfigurationHasBeenSet = true; m_qAppsConfiguration = value; }
    inline void SetQAppsConfiguration(QAppsConfiguration&& value) { m_qAppsConfigurationHasBeenSet = true; m_qAppsConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithQAppsConfiguration(const QAppsConfiguration& value) { SetQAppsConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithQAppsConfiguration(QAppsConfiguration&& value) { SetQAppsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about chat response personalization. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/personalizing-chat-responses.html">Personalizing
     * chat responses</a> </p>
     */
    inline const PersonalizationConfiguration& GetPersonalizationConfiguration() const{ return m_personalizationConfiguration; }
    inline bool PersonalizationConfigurationHasBeenSet() const { return m_personalizationConfigurationHasBeenSet; }
    inline void SetPersonalizationConfiguration(const PersonalizationConfiguration& value) { m_personalizationConfigurationHasBeenSet = true; m_personalizationConfiguration = value; }
    inline void SetPersonalizationConfiguration(PersonalizationConfiguration&& value) { m_personalizationConfigurationHasBeenSet = true; m_personalizationConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithPersonalizationConfiguration(const PersonalizationConfiguration& value) { SetPersonalizationConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithPersonalizationConfiguration(PersonalizationConfiguration&& value) { SetPersonalizationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight configuration for an Amazon Q Business application that
     * uses QuickSight for authentication. This configuration is required if your
     * application uses QuickSight as the identity provider. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/create-quicksight-integrated-application.html">Creating
     * an Amazon QuickSight integrated application</a>.</p>
     */
    inline const QuickSightConfiguration& GetQuickSightConfiguration() const{ return m_quickSightConfiguration; }
    inline bool QuickSightConfigurationHasBeenSet() const { return m_quickSightConfigurationHasBeenSet; }
    inline void SetQuickSightConfiguration(const QuickSightConfiguration& value) { m_quickSightConfigurationHasBeenSet = true; m_quickSightConfiguration = value; }
    inline void SetQuickSightConfiguration(QuickSightConfiguration&& value) { m_quickSightConfigurationHasBeenSet = true; m_quickSightConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithQuickSightConfiguration(const QuickSightConfiguration& value) { SetQuickSightConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithQuickSightConfiguration(QuickSightConfiguration&& value) { SetQuickSightConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_iamIdentityProviderArn;
    bool m_iamIdentityProviderArnHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIdsForOIDC;
    bool m_clientIdsForOIDCHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    AttachmentsConfiguration m_attachmentsConfiguration;
    bool m_attachmentsConfigurationHasBeenSet = false;

    QAppsConfiguration m_qAppsConfiguration;
    bool m_qAppsConfigurationHasBeenSet = false;

    PersonalizationConfiguration m_personalizationConfiguration;
    bool m_personalizationConfigurationHasBeenSet = false;

    QuickSightConfiguration m_quickSightConfiguration;
    bool m_quickSightConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
