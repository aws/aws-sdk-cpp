/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AppliedAttachmentsConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/EncryptionConfiguration.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/ApplicationStatus.h>
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


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>Settings for whether end users can upload files directly during chat.</p>
     */
    inline const AppliedAttachmentsConfiguration& GetAttachmentsConfiguration() const{ return m_attachmentsConfiguration; }

    /**
     * <p>Settings for whether end users can upload files directly during chat.</p>
     */
    inline void SetAttachmentsConfiguration(const AppliedAttachmentsConfiguration& value) { m_attachmentsConfiguration = value; }

    /**
     * <p>Settings for whether end users can upload files directly during chat.</p>
     */
    inline void SetAttachmentsConfiguration(AppliedAttachmentsConfiguration&& value) { m_attachmentsConfiguration = std::move(value); }

    /**
     * <p>Settings for whether end users can upload files directly during chat.</p>
     */
    inline GetApplicationResult& WithAttachmentsConfiguration(const AppliedAttachmentsConfiguration& value) { SetAttachmentsConfiguration(value); return *this;}

    /**
     * <p>Settings for whether end users can upload files directly during chat.</p>
     */
    inline GetApplicationResult& WithAttachmentsConfiguration(AppliedAttachmentsConfiguration&& value) { SetAttachmentsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline GetApplicationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline GetApplicationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the Amazon Q application.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the Amazon Q application.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name of the Amazon Q application.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name of the Amazon Q application.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services KMS key that is used to encrypt
     * your data. Amazon Q doesn't support asymmetric keys.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>The identifier of the Amazon Web Services KMS key that is used to encrypt
     * your data. Amazon Q doesn't support asymmetric keys.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfiguration = value; }

    /**
     * <p>The identifier of the Amazon Web Services KMS key that is used to encrypt
     * your data. Amazon Q doesn't support asymmetric keys.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfiguration = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services KMS key that is used to encrypt
     * your data. Amazon Q doesn't support asymmetric keys.</p>
     */
    inline GetApplicationResult& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services KMS key that is used to encrypt
     * your data. Amazon Q doesn't support asymmetric keys.</p>
     */
    inline GetApplicationResult& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_error = value; }

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_error = std::move(value); }

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline GetApplicationResult& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>If the <code>Status</code> field is set to <code>ERROR</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the synchronization to fail.</p>
     */
    inline GetApplicationResult& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline GetApplicationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline GetApplicationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM with permissions to access your
     * CloudWatch logs and metrics.</p>
     */
    inline GetApplicationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the Amazon Q application.</p>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon Q application.</p>
     */
    inline void SetStatus(const ApplicationStatus& value) { m_status = value; }

    /**
     * <p>The status of the Amazon Q application.</p>
     */
    inline void SetStatus(ApplicationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon Q application.</p>
     */
    inline GetApplicationResult& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline GetApplicationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline GetApplicationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationArn;

    Aws::String m_applicationId;

    AppliedAttachmentsConfiguration m_attachmentsConfiguration;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_displayName;

    EncryptionConfiguration m_encryptionConfiguration;

    ErrorDetail m_error;

    Aws::String m_roleArn;

    ApplicationStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
