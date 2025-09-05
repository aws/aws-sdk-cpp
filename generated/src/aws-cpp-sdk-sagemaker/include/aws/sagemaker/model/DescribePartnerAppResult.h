/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PartnerAppType.h>
#include <aws/sagemaker/model/PartnerAppStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/PartnerAppMaintenanceConfig.h>
#include <aws/sagemaker/model/PartnerAppConfig.h>
#include <aws/sagemaker/model/PartnerAppAuthType.h>
#include <aws/sagemaker/model/ErrorInfo.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribePartnerAppResult
  {
  public:
    AWS_SAGEMAKER_API DescribePartnerAppResult() = default;
    AWS_SAGEMAKER_API DescribePartnerAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribePartnerAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the SageMaker Partner AI App that was described.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribePartnerAppResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribePartnerAppResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of SageMaker Partner AI App. Must be one of the following:
     * <code>lakera-guard</code>, <code>comet</code>,
     * <code>deepchecks-llm-evaluation</code>, or <code>fiddler</code>.</p>
     */
    inline PartnerAppType GetType() const { return m_type; }
    inline void SetType(PartnerAppType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribePartnerAppResult& WithType(PartnerAppType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SageMaker Partner AI App.</p> <ul> <li> <p>Creating:
     * SageMaker AI is creating the partner AI app. The partner AI app is not available
     * during creation.</p> </li> <li> <p>Updating: SageMaker AI is updating the
     * partner AI app. The partner AI app is not available when updating.</p> </li>
     * <li> <p>Deleting: SageMaker AI is deleting the partner AI app. The partner AI
     * app is not available during deletion.</p> </li> <li> <p>Available: The partner
     * AI app is provisioned and accessible.</p> </li> <li> <p>Failed: The partner AI
     * app is in a failed state and isn't available. SageMaker AI is investigating the
     * issue. For further guidance, contact Amazon Web Services Support.</p> </li> <li>
     * <p>UpdateFailed: The partner AI app couldn't be updated but is available.</p>
     * </li> <li> <p>Deleted: The partner AI app is permanently deleted and not
     * available.</p> </li> </ul>
     */
    inline PartnerAppStatus GetStatus() const { return m_status; }
    inline void SetStatus(PartnerAppStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribePartnerAppResult& WithStatus(PartnerAppStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the SageMaker Partner AI App was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribePartnerAppResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the SageMaker Partner AI App was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribePartnerAppResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role associated with the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    DescribePartnerAppResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the data at
     * rest associated with SageMaker Partner AI Apps.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DescribePartnerAppResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the SageMaker Partner AI App that the Application SDK uses to
     * support in-app calls for the user.</p>
     */
    inline const Aws::String& GetBaseUrl() const { return m_baseUrl; }
    template<typename BaseUrlT = Aws::String>
    void SetBaseUrl(BaseUrlT&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::forward<BaseUrlT>(value); }
    template<typename BaseUrlT = Aws::String>
    DescribePartnerAppResult& WithBaseUrl(BaseUrlT&& value) { SetBaseUrl(std::forward<BaseUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maintenance configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppMaintenanceConfig& GetMaintenanceConfig() const { return m_maintenanceConfig; }
    template<typename MaintenanceConfigT = PartnerAppMaintenanceConfig>
    void SetMaintenanceConfig(MaintenanceConfigT&& value) { m_maintenanceConfigHasBeenSet = true; m_maintenanceConfig = std::forward<MaintenanceConfigT>(value); }
    template<typename MaintenanceConfigT = PartnerAppMaintenanceConfig>
    DescribePartnerAppResult& WithMaintenanceConfig(MaintenanceConfigT&& value) { SetMaintenanceConfig(std::forward<MaintenanceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type and size of the cluster attached to the SageMaker Partner
     * AI App.</p>
     */
    inline const Aws::String& GetTier() const { return m_tier; }
    template<typename TierT = Aws::String>
    void SetTier(TierT&& value) { m_tierHasBeenSet = true; m_tier = std::forward<TierT>(value); }
    template<typename TierT = Aws::String>
    DescribePartnerAppResult& WithTier(TierT&& value) { SetTier(std::forward<TierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    DescribePartnerAppResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppConfig& GetApplicationConfig() const { return m_applicationConfig; }
    template<typename ApplicationConfigT = PartnerAppConfig>
    void SetApplicationConfig(ApplicationConfigT&& value) { m_applicationConfigHasBeenSet = true; m_applicationConfig = std::forward<ApplicationConfigT>(value); }
    template<typename ApplicationConfigT = PartnerAppConfig>
    DescribePartnerAppResult& WithApplicationConfig(ApplicationConfigT&& value) { SetApplicationConfig(std::forward<ApplicationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization type that users use to access the SageMaker Partner AI
     * App.</p>
     */
    inline PartnerAppAuthType GetAuthType() const { return m_authType; }
    inline void SetAuthType(PartnerAppAuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline DescribePartnerAppResult& WithAuthType(PartnerAppAuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>TRUE</code>, the SageMaker Partner AI App sets the Amazon
     * Web Services IAM session name or the authenticated IAM user as the identity of
     * the SageMaker Partner AI App user.</p>
     */
    inline bool GetEnableIamSessionBasedIdentity() const { return m_enableIamSessionBasedIdentity; }
    inline void SetEnableIamSessionBasedIdentity(bool value) { m_enableIamSessionBasedIdentityHasBeenSet = true; m_enableIamSessionBasedIdentity = value; }
    inline DescribePartnerAppResult& WithEnableIamSessionBasedIdentity(bool value) { SetEnableIamSessionBasedIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an error field object that contains the error code and the reason for
     * an operation failure.</p>
     */
    inline const ErrorInfo& GetError() const { return m_error; }
    template<typename ErrorT = ErrorInfo>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorInfo>
    DescribePartnerAppResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePartnerAppResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PartnerAppType m_type{PartnerAppType::NOT_SET};
    bool m_typeHasBeenSet = false;

    PartnerAppStatus m_status{PartnerAppStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    PartnerAppMaintenanceConfig m_maintenanceConfig;
    bool m_maintenanceConfigHasBeenSet = false;

    Aws::String m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    PartnerAppConfig m_applicationConfig;
    bool m_applicationConfigHasBeenSet = false;

    PartnerAppAuthType m_authType{PartnerAppAuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    bool m_enableIamSessionBasedIdentity{false};
    bool m_enableIamSessionBasedIdentityHasBeenSet = false;

    ErrorInfo m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
