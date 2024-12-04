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
    AWS_SAGEMAKER_API DescribePartnerAppResult();
    AWS_SAGEMAKER_API DescribePartnerAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribePartnerAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the SageMaker Partner AI App that was described.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribePartnerAppResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribePartnerAppResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribePartnerAppResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribePartnerAppResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribePartnerAppResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribePartnerAppResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of SageMaker Partner AI App. Must be one of the following:
     * <code>lakera-guard</code>, <code>comet</code>,
     * <code>deepchecks-llm-evaluation</code>, or <code>fiddler</code>.</p>
     */
    inline const PartnerAppType& GetType() const{ return m_type; }
    inline void SetType(const PartnerAppType& value) { m_type = value; }
    inline void SetType(PartnerAppType&& value) { m_type = std::move(value); }
    inline DescribePartnerAppResult& WithType(const PartnerAppType& value) { SetType(value); return *this;}
    inline DescribePartnerAppResult& WithType(PartnerAppType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const PartnerAppStatus& value) { m_status = value; }
    inline void SetStatus(PartnerAppStatus&& value) { m_status = std::move(value); }
    inline DescribePartnerAppResult& WithStatus(const PartnerAppStatus& value) { SetStatus(value); return *this;}
    inline DescribePartnerAppResult& WithStatus(PartnerAppStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the SageMaker Partner AI App was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribePartnerAppResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribePartnerAppResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role associated with the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }
    inline DescribePartnerAppResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline DescribePartnerAppResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline DescribePartnerAppResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the SageMaker Partner AI App that the Application SDK uses to
     * support in-app calls for the user.</p>
     */
    inline const Aws::String& GetBaseUrl() const{ return m_baseUrl; }
    inline void SetBaseUrl(const Aws::String& value) { m_baseUrl = value; }
    inline void SetBaseUrl(Aws::String&& value) { m_baseUrl = std::move(value); }
    inline void SetBaseUrl(const char* value) { m_baseUrl.assign(value); }
    inline DescribePartnerAppResult& WithBaseUrl(const Aws::String& value) { SetBaseUrl(value); return *this;}
    inline DescribePartnerAppResult& WithBaseUrl(Aws::String&& value) { SetBaseUrl(std::move(value)); return *this;}
    inline DescribePartnerAppResult& WithBaseUrl(const char* value) { SetBaseUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maintenance configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppMaintenanceConfig& GetMaintenanceConfig() const{ return m_maintenanceConfig; }
    inline void SetMaintenanceConfig(const PartnerAppMaintenanceConfig& value) { m_maintenanceConfig = value; }
    inline void SetMaintenanceConfig(PartnerAppMaintenanceConfig&& value) { m_maintenanceConfig = std::move(value); }
    inline DescribePartnerAppResult& WithMaintenanceConfig(const PartnerAppMaintenanceConfig& value) { SetMaintenanceConfig(value); return *this;}
    inline DescribePartnerAppResult& WithMaintenanceConfig(PartnerAppMaintenanceConfig&& value) { SetMaintenanceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type and size of the cluster attached to the SageMaker Partner
     * AI App.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }
    inline void SetTier(const Aws::String& value) { m_tier = value; }
    inline void SetTier(Aws::String&& value) { m_tier = std::move(value); }
    inline void SetTier(const char* value) { m_tier.assign(value); }
    inline DescribePartnerAppResult& WithTier(const Aws::String& value) { SetTier(value); return *this;}
    inline DescribePartnerAppResult& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}
    inline DescribePartnerAppResult& WithTier(const char* value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline DescribePartnerAppResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline DescribePartnerAppResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline DescribePartnerAppResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppConfig& GetApplicationConfig() const{ return m_applicationConfig; }
    inline void SetApplicationConfig(const PartnerAppConfig& value) { m_applicationConfig = value; }
    inline void SetApplicationConfig(PartnerAppConfig&& value) { m_applicationConfig = std::move(value); }
    inline DescribePartnerAppResult& WithApplicationConfig(const PartnerAppConfig& value) { SetApplicationConfig(value); return *this;}
    inline DescribePartnerAppResult& WithApplicationConfig(PartnerAppConfig&& value) { SetApplicationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization type that users use to access the SageMaker Partner AI
     * App.</p>
     */
    inline const PartnerAppAuthType& GetAuthType() const{ return m_authType; }
    inline void SetAuthType(const PartnerAppAuthType& value) { m_authType = value; }
    inline void SetAuthType(PartnerAppAuthType&& value) { m_authType = std::move(value); }
    inline DescribePartnerAppResult& WithAuthType(const PartnerAppAuthType& value) { SetAuthType(value); return *this;}
    inline DescribePartnerAppResult& WithAuthType(PartnerAppAuthType&& value) { SetAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>TRUE</code>, the SageMaker Partner AI App sets the Amazon
     * Web Services IAM session name or the authenticated IAM user as the identity of
     * the SageMaker Partner AI App user.</p>
     */
    inline bool GetEnableIamSessionBasedIdentity() const{ return m_enableIamSessionBasedIdentity; }
    inline void SetEnableIamSessionBasedIdentity(bool value) { m_enableIamSessionBasedIdentity = value; }
    inline DescribePartnerAppResult& WithEnableIamSessionBasedIdentity(bool value) { SetEnableIamSessionBasedIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an error field object that contains the error code and the reason for
     * an operation failure.</p>
     */
    inline const ErrorInfo& GetError() const{ return m_error; }
    inline void SetError(const ErrorInfo& value) { m_error = value; }
    inline void SetError(ErrorInfo&& value) { m_error = std::move(value); }
    inline DescribePartnerAppResult& WithError(const ErrorInfo& value) { SetError(value); return *this;}
    inline DescribePartnerAppResult& WithError(ErrorInfo&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePartnerAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePartnerAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePartnerAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    PartnerAppType m_type;

    PartnerAppStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_executionRoleArn;

    Aws::String m_baseUrl;

    PartnerAppMaintenanceConfig m_maintenanceConfig;

    Aws::String m_tier;

    Aws::String m_version;

    PartnerAppConfig m_applicationConfig;

    PartnerAppAuthType m_authType;

    bool m_enableIamSessionBasedIdentity;

    ErrorInfo m_error;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
