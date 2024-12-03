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
    AWS_QBUSINESS_API GetApplicationResult();
    AWS_QBUSINESS_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetApplicationResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetApplicationResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetApplicationResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline GetApplicationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline GetApplicationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline GetApplicationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type being used by a Amazon Q Business application.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }
    inline void SetIdentityType(const IdentityType& value) { m_identityType = value; }
    inline void SetIdentityType(IdentityType&& value) { m_identityType = std::move(value); }
    inline GetApplicationResult& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}
    inline GetApplicationResult& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an identity provider being used by an
     * Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIamIdentityProviderArn() const{ return m_iamIdentityProviderArn; }
    inline void SetIamIdentityProviderArn(const Aws::String& value) { m_iamIdentityProviderArn = value; }
    inline void SetIamIdentityProviderArn(Aws::String&& value) { m_iamIdentityProviderArn = std::move(value); }
    inline void SetIamIdentityProviderArn(const char* value) { m_iamIdentityProviderArn.assign(value); }
    inline GetApplicationResult& WithIamIdentityProviderArn(const Aws::String& value) { SetIamIdentityProviderArn(value); return *this;}
    inline GetApplicationResult& WithIamIdentityProviderArn(Aws::String&& value) { SetIamIdentityProviderArn(std::move(value)); return *this;}
    inline GetApplicationResult& WithIamIdentityProviderArn(const char* value) { SetIamIdentityProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS IAM Identity Center instance
     * attached to your Amazon Q Business application.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const{ return m_identityCenterApplicationArn; }
    inline void SetIdentityCenterApplicationArn(const Aws::String& value) { m_identityCenterApplicationArn = value; }
    inline void SetIdentityCenterApplicationArn(Aws::String&& value) { m_identityCenterApplicationArn = std::move(value); }
    inline void SetIdentityCenterApplicationArn(const char* value) { m_identityCenterApplicationArn.assign(value); }
    inline GetApplicationResult& WithIdentityCenterApplicationArn(const Aws::String& value) { SetIdentityCenterApplicationArn(value); return *this;}
    inline GetApplicationResult& WithIdentityCenterApplicationArn(Aws::String&& value) { SetIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline GetApplicationResult& WithIdentityCenterApplicationArn(const char* value) { SetIdentityCenterApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetApplicationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetApplicationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetApplicationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Q Business application.</p>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ApplicationStatus& value) { m_status = value; }
    inline void SetStatus(ApplicationStatus&& value) { m_status = std::move(value); }
    inline GetApplicationResult& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}
    inline GetApplicationResult& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services KMS key that is used to encrypt
     * your data. Amazon Q Business doesn't support asymmetric keys.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfiguration = std::move(value); }
    inline GetApplicationResult& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline GetApplicationResult& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetApplicationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetApplicationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetApplicationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetApplicationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline void SetError(const ErrorDetail& value) { m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_error = std::move(value); }
    inline GetApplicationResult& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline GetApplicationResult& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for whether end users can upload files directly during chat.</p>
     */
    inline const AppliedAttachmentsConfiguration& GetAttachmentsConfiguration() const{ return m_attachmentsConfiguration; }
    inline void SetAttachmentsConfiguration(const AppliedAttachmentsConfiguration& value) { m_attachmentsConfiguration = value; }
    inline void SetAttachmentsConfiguration(AppliedAttachmentsConfiguration&& value) { m_attachmentsConfiguration = std::move(value); }
    inline GetApplicationResult& WithAttachmentsConfiguration(const AppliedAttachmentsConfiguration& value) { SetAttachmentsConfiguration(value); return *this;}
    inline GetApplicationResult& WithAttachmentsConfiguration(AppliedAttachmentsConfiguration&& value) { SetAttachmentsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for whether end users can create and use Amazon Q Apps in the web
     * experience.</p>
     */
    inline const QAppsConfiguration& GetQAppsConfiguration() const{ return m_qAppsConfiguration; }
    inline void SetQAppsConfiguration(const QAppsConfiguration& value) { m_qAppsConfiguration = value; }
    inline void SetQAppsConfiguration(QAppsConfiguration&& value) { m_qAppsConfiguration = std::move(value); }
    inline GetApplicationResult& WithQAppsConfiguration(const QAppsConfiguration& value) { SetQAppsConfiguration(value); return *this;}
    inline GetApplicationResult& WithQAppsConfiguration(QAppsConfiguration&& value) { SetQAppsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about chat response personalization. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/personalizing-chat-responses.html">Personalizing
     * chat responses</a>.</p>
     */
    inline const PersonalizationConfiguration& GetPersonalizationConfiguration() const{ return m_personalizationConfiguration; }
    inline void SetPersonalizationConfiguration(const PersonalizationConfiguration& value) { m_personalizationConfiguration = value; }
    inline void SetPersonalizationConfiguration(PersonalizationConfiguration&& value) { m_personalizationConfiguration = std::move(value); }
    inline GetApplicationResult& WithPersonalizationConfiguration(const PersonalizationConfiguration& value) { SetPersonalizationConfiguration(value); return *this;}
    inline GetApplicationResult& WithPersonalizationConfiguration(PersonalizationConfiguration&& value) { SetPersonalizationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for auto-subscription behavior for this application. This is only
     * applicable to SAML and OIDC applications.</p>
     */
    inline const AutoSubscriptionConfiguration& GetAutoSubscriptionConfiguration() const{ return m_autoSubscriptionConfiguration; }
    inline void SetAutoSubscriptionConfiguration(const AutoSubscriptionConfiguration& value) { m_autoSubscriptionConfiguration = value; }
    inline void SetAutoSubscriptionConfiguration(AutoSubscriptionConfiguration&& value) { m_autoSubscriptionConfiguration = std::move(value); }
    inline GetApplicationResult& WithAutoSubscriptionConfiguration(const AutoSubscriptionConfiguration& value) { SetAutoSubscriptionConfiguration(value); return *this;}
    inline GetApplicationResult& WithAutoSubscriptionConfiguration(AutoSubscriptionConfiguration&& value) { SetAutoSubscriptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC client ID for a Amazon Q Business application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIdsForOIDC() const{ return m_clientIdsForOIDC; }
    inline void SetClientIdsForOIDC(const Aws::Vector<Aws::String>& value) { m_clientIdsForOIDC = value; }
    inline void SetClientIdsForOIDC(Aws::Vector<Aws::String>&& value) { m_clientIdsForOIDC = std::move(value); }
    inline GetApplicationResult& WithClientIdsForOIDC(const Aws::Vector<Aws::String>& value) { SetClientIdsForOIDC(value); return *this;}
    inline GetApplicationResult& WithClientIdsForOIDC(Aws::Vector<Aws::String>&& value) { SetClientIdsForOIDC(std::move(value)); return *this;}
    inline GetApplicationResult& AddClientIdsForOIDC(const Aws::String& value) { m_clientIdsForOIDC.push_back(value); return *this; }
    inline GetApplicationResult& AddClientIdsForOIDC(Aws::String&& value) { m_clientIdsForOIDC.push_back(std::move(value)); return *this; }
    inline GetApplicationResult& AddClientIdsForOIDC(const char* value) { m_clientIdsForOIDC.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight authentication configuration for the Amazon Q Business
     * application.</p>
     */
    inline const QuickSightConfiguration& GetQuickSightConfiguration() const{ return m_quickSightConfiguration; }
    inline void SetQuickSightConfiguration(const QuickSightConfiguration& value) { m_quickSightConfiguration = value; }
    inline void SetQuickSightConfiguration(QuickSightConfiguration&& value) { m_quickSightConfiguration = std::move(value); }
    inline GetApplicationResult& WithQuickSightConfiguration(const QuickSightConfiguration& value) { SetQuickSightConfiguration(value); return *this;}
    inline GetApplicationResult& WithQuickSightConfiguration(QuickSightConfiguration&& value) { SetQuickSightConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_displayName;

    Aws::String m_applicationId;

    Aws::String m_applicationArn;

    IdentityType m_identityType;

    Aws::String m_iamIdentityProviderArn;

    Aws::String m_identityCenterApplicationArn;

    Aws::String m_roleArn;

    ApplicationStatus m_status;

    Aws::String m_description;

    EncryptionConfiguration m_encryptionConfiguration;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    ErrorDetail m_error;

    AppliedAttachmentsConfiguration m_attachmentsConfiguration;

    QAppsConfiguration m_qAppsConfiguration;

    PersonalizationConfiguration m_personalizationConfiguration;

    AutoSubscriptionConfiguration m_autoSubscriptionConfiguration;

    Aws::Vector<Aws::String> m_clientIdsForOIDC;

    QuickSightConfiguration m_quickSightConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
