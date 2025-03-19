/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/IdentityType.h>
#include <aws/qbusiness/model/ApplicationStatus.h>
#include <aws/qbusiness/model/EncryptionConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/AppliedAttachmentsConfiguration.h>
#include <aws/qbusiness/model/QAppsConfiguration.h>
#include <aws/qbusiness/model/PersonalizationConfiguration.h>
#include <aws/qbusiness/model/AutoSubscriptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/QuickSightConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{
  class GetApplicationResult
  {
  public:
    AWS_QBUSINESS_API GetApplicationResult() = default;
    AWS_QBUSINESS_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetApplicationResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetApplicationResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    GetApplicationResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type being used by a Amazon Q Business application.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline GetApplicationResult& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an identity provider being used by an
     * Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIamIdentityProviderArn() const { return m_iamIdentityProviderArn; }
    template<typename IamIdentityProviderArnT = Aws::String>
    void SetIamIdentityProviderArn(IamIdentityProviderArnT&& value) { m_iamIdentityProviderArnHasBeenSet = true; m_iamIdentityProviderArn = std::forward<IamIdentityProviderArnT>(value); }
    template<typename IamIdentityProviderArnT = Aws::String>
    GetApplicationResult& WithIamIdentityProviderArn(IamIdentityProviderArnT&& value) { SetIamIdentityProviderArn(std::forward<IamIdentityProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS IAM Identity Center instance
     * attached to your Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const { return m_identityCenterApplicationArn; }
    template<typename IdentityCenterApplicationArnT = Aws::String>
    void SetIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = std::forward<IdentityCenterApplicationArnT>(value); }
    template<typename IdentityCenterApplicationArnT = Aws::String>
    GetApplicationResult& WithIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) { SetIdentityCenterApplicationArn(std::forward<IdentityCenterApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetApplicationResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Q Business application.</p>
     */
    inline ApplicationStatus GetStatus() const { return m_status; }
    inline void SetStatus(ApplicationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetApplicationResult& WithStatus(ApplicationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetApplicationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services KMS key that is used to encrypt
     * your data. Amazon Q Business doesn't support asymmetric keys.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    GetApplicationResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetApplicationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetApplicationResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline const ErrorDetail& GetError() const { return m_error; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    GetApplicationResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for whether end users can upload files directly during chat.</p>
     */
    inline const AppliedAttachmentsConfiguration& GetAttachmentsConfiguration() const { return m_attachmentsConfiguration; }
    template<typename AttachmentsConfigurationT = AppliedAttachmentsConfiguration>
    void SetAttachmentsConfiguration(AttachmentsConfigurationT&& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = std::forward<AttachmentsConfigurationT>(value); }
    template<typename AttachmentsConfigurationT = AppliedAttachmentsConfiguration>
    GetApplicationResult& WithAttachmentsConfiguration(AttachmentsConfigurationT&& value) { SetAttachmentsConfiguration(std::forward<AttachmentsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for whether end users can create and use Amazon Q Apps in the web
     * experience.</p>
     */
    inline const QAppsConfiguration& GetQAppsConfiguration() const { return m_qAppsConfiguration; }
    template<typename QAppsConfigurationT = QAppsConfiguration>
    void SetQAppsConfiguration(QAppsConfigurationT&& value) { m_qAppsConfigurationHasBeenSet = true; m_qAppsConfiguration = std::forward<QAppsConfigurationT>(value); }
    template<typename QAppsConfigurationT = QAppsConfiguration>
    GetApplicationResult& WithQAppsConfiguration(QAppsConfigurationT&& value) { SetQAppsConfiguration(std::forward<QAppsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about chat response personalization. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/personalizing-chat-responses.html">Personalizing
     * chat responses</a>.</p>
     */
    inline const PersonalizationConfiguration& GetPersonalizationConfiguration() const { return m_personalizationConfiguration; }
    template<typename PersonalizationConfigurationT = PersonalizationConfiguration>
    void SetPersonalizationConfiguration(PersonalizationConfigurationT&& value) { m_personalizationConfigurationHasBeenSet = true; m_personalizationConfiguration = std::forward<PersonalizationConfigurationT>(value); }
    template<typename PersonalizationConfigurationT = PersonalizationConfiguration>
    GetApplicationResult& WithPersonalizationConfiguration(PersonalizationConfigurationT&& value) { SetPersonalizationConfiguration(std::forward<PersonalizationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for auto-subscription behavior for this application. This is only
     * applicable to SAML and OIDC applications.</p>
     */
    inline const AutoSubscriptionConfiguration& GetAutoSubscriptionConfiguration() const { return m_autoSubscriptionConfiguration; }
    template<typename AutoSubscriptionConfigurationT = AutoSubscriptionConfiguration>
    void SetAutoSubscriptionConfiguration(AutoSubscriptionConfigurationT&& value) { m_autoSubscriptionConfigurationHasBeenSet = true; m_autoSubscriptionConfiguration = std::forward<AutoSubscriptionConfigurationT>(value); }
    template<typename AutoSubscriptionConfigurationT = AutoSubscriptionConfiguration>
    GetApplicationResult& WithAutoSubscriptionConfiguration(AutoSubscriptionConfigurationT&& value) { SetAutoSubscriptionConfiguration(std::forward<AutoSubscriptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC client ID for a Amazon Q Business application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIdsForOIDC() const { return m_clientIdsForOIDC; }
    template<typename ClientIdsForOIDCT = Aws::Vector<Aws::String>>
    void SetClientIdsForOIDC(ClientIdsForOIDCT&& value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC = std::forward<ClientIdsForOIDCT>(value); }
    template<typename ClientIdsForOIDCT = Aws::Vector<Aws::String>>
    GetApplicationResult& WithClientIdsForOIDC(ClientIdsForOIDCT&& value) { SetClientIdsForOIDC(std::forward<ClientIdsForOIDCT>(value)); return *this;}
    template<typename ClientIdsForOIDCT = Aws::String>
    GetApplicationResult& AddClientIdsForOIDC(ClientIdsForOIDCT&& value) { m_clientIdsForOIDCHasBeenSet = true; m_clientIdsForOIDC.emplace_back(std::forward<ClientIdsForOIDCT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight authentication configuration for the Amazon Q Business
     * application.</p>
     */
    inline const QuickSightConfiguration& GetQuickSightConfiguration() const { return m_quickSightConfiguration; }
    template<typename QuickSightConfigurationT = QuickSightConfiguration>
    void SetQuickSightConfiguration(QuickSightConfigurationT&& value) { m_quickSightConfigurationHasBeenSet = true; m_quickSightConfiguration = std::forward<QuickSightConfigurationT>(value); }
    template<typename QuickSightConfigurationT = QuickSightConfiguration>
    GetApplicationResult& WithQuickSightConfiguration(QuickSightConfigurationT&& value) { SetQuickSightConfiguration(std::forward<QuickSightConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    IdentityType m_identityType{IdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_iamIdentityProviderArn;
    bool m_iamIdentityProviderArnHasBeenSet = false;

    Aws::String m_identityCenterApplicationArn;
    bool m_identityCenterApplicationArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ApplicationStatus m_status{ApplicationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    AppliedAttachmentsConfiguration m_attachmentsConfiguration;
    bool m_attachmentsConfigurationHasBeenSet = false;

    QAppsConfiguration m_qAppsConfiguration;
    bool m_qAppsConfigurationHasBeenSet = false;

    PersonalizationConfiguration m_personalizationConfiguration;
    bool m_personalizationConfigurationHasBeenSet = false;

    AutoSubscriptionConfiguration m_autoSubscriptionConfiguration;
    bool m_autoSubscriptionConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIdsForOIDC;
    bool m_clientIdsForOIDCHasBeenSet = false;

    QuickSightConfiguration m_quickSightConfiguration;
    bool m_quickSightConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
