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
    AWS_QBUSINESS_API CreateApplicationRequest() = default;

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
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateApplicationRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics. If this property is not specified,
     * Amazon Q Business will create a <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/using-service-linked-roles.html#slr-permissions">service
     * linked role (SLR)</a> and use it as the application's role.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateApplicationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type being used by a Amazon Q Business application.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline CreateApplicationRequest& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an identity provider being used by an
     * Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIamIdentityProviderArn() const { return m_iamIdentityProviderArn; }
    inline bool IamIdentityProviderArnHasBeenSet() const { return m_iamIdentityProviderArnHasBeenSet; }
    template<typename IamIdentityProviderArnT = Aws::String>
    void SetIamIdentityProviderArn(IamIdentityProviderArnT&& value) { m_iamIdentityProviderArnHasBeenSet = true; m_iamIdentityProviderArn = std::forward<IamIdentityProviderArnT>(value); }
    template<typename IamIdentityProviderArnT = Aws::String>
    CreateApplicationRequest& WithIamIdentityProviderArn(IamIdentityProviderArnT&& value) { SetIamIdentityProviderArn(std::forward<IamIdentityProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM Identity Center instance you are
     * either creating for—or connecting to—your Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value); }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    CreateApplicationRequest& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC client ID for a Amazon Q Business application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIdsForOIDC() const { return m_clientIdsForOIDC; }
    inline bool ClientIdsForOIDCHasBeenSet() const { return m_clientIdsForOIDCHasBeenSet; }
    template<typename ClientIdsForOIDCT = Aws::Vector<Aws::String>>
    void SetClientIdsForOIDC(ClientIdsForOIDCT&& value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC = std::forward<ClientIdsForOIDCT>(value); }
    template<typename ClientIdsForOIDCT = Aws::Vector<Aws::String>>
    CreateApplicationRequest& WithClientIdsForOIDC(ClientIdsForOIDCT&& value) { SetClientIdsForOIDC(std::forward<ClientIdsForOIDCT>(value)); return *this;}
    template<typename ClientIdsForOIDCT = Aws::String>
    CreateApplicationRequest& AddClientIdsForOIDC(ClientIdsForOIDCT&& value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC.emplace_back(std::forward<ClientIdsForOIDCT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Q Business application. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApplicationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key that is used to encrypt your data. Amazon Q
     * Business doesn't support asymmetric keys.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    CreateApplicationRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q Business
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateApplicationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateApplicationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * Business application.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateApplicationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline const AttachmentsConfiguration& GetAttachmentsConfiguration() const { return m_attachmentsConfiguration; }
    inline bool AttachmentsConfigurationHasBeenSet() const { return m_attachmentsConfigurationHasBeenSet; }
    template<typename AttachmentsConfigurationT = AttachmentsConfiguration>
    void SetAttachmentsConfiguration(AttachmentsConfigurationT&& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = std::forward<AttachmentsConfigurationT>(value); }
    template<typename AttachmentsConfigurationT = AttachmentsConfiguration>
    CreateApplicationRequest& WithAttachmentsConfiguration(AttachmentsConfigurationT&& value) { SetAttachmentsConfiguration(std::forward<AttachmentsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow end users to create and use Amazon Q Apps in the web
     * experience.</p>
     */
    inline const QAppsConfiguration& GetQAppsConfiguration() const { return m_qAppsConfiguration; }
    inline bool QAppsConfigurationHasBeenSet() const { return m_qAppsConfigurationHasBeenSet; }
    template<typename QAppsConfigurationT = QAppsConfiguration>
    void SetQAppsConfiguration(QAppsConfigurationT&& value) { m_qAppsConfigurationHasBeenSet = true; m_qAppsConfiguration = std::forward<QAppsConfigurationT>(value); }
    template<typename QAppsConfigurationT = QAppsConfiguration>
    CreateApplicationRequest& WithQAppsConfiguration(QAppsConfigurationT&& value) { SetQAppsConfiguration(std::forward<QAppsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about chat response personalization. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/personalizing-chat-responses.html">Personalizing
     * chat responses</a> </p>
     */
    inline const PersonalizationConfiguration& GetPersonalizationConfiguration() const { return m_personalizationConfiguration; }
    inline bool PersonalizationConfigurationHasBeenSet() const { return m_personalizationConfigurationHasBeenSet; }
    template<typename PersonalizationConfigurationT = PersonalizationConfiguration>
    void SetPersonalizationConfiguration(PersonalizationConfigurationT&& value) { m_personalizationConfigurationHasBeenSet = true; m_personalizationConfiguration = std::forward<PersonalizationConfigurationT>(value); }
    template<typename PersonalizationConfigurationT = PersonalizationConfiguration>
    CreateApplicationRequest& WithPersonalizationConfiguration(PersonalizationConfigurationT&& value) { SetPersonalizationConfiguration(std::forward<PersonalizationConfigurationT>(value)); return *this;}
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
    inline const QuickSightConfiguration& GetQuickSightConfiguration() const { return m_quickSightConfiguration; }
    inline bool QuickSightConfigurationHasBeenSet() const { return m_quickSightConfigurationHasBeenSet; }
    template<typename QuickSightConfigurationT = QuickSightConfiguration>
    void SetQuickSightConfiguration(QuickSightConfigurationT&& value) { m_quickSightConfigurationHasBeenSet = true; m_quickSightConfiguration = std::forward<QuickSightConfigurationT>(value); }
    template<typename QuickSightConfigurationT = QuickSightConfiguration>
    CreateApplicationRequest& WithQuickSightConfiguration(QuickSightConfigurationT&& value) { SetQuickSightConfiguration(std::forward<QuickSightConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    IdentityType m_identityType{IdentityType::NOT_SET};
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
