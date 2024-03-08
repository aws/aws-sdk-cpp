/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/WebExperienceAuthConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/WebExperienceSamplePromptsControlMode.h>
#include <aws/qbusiness/model/WebExperienceStatus.h>
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
  class GetWebExperienceResult
  {
  public:
    AWS_QBUSINESS_API GetWebExperienceResult();
    AWS_QBUSINESS_API GetWebExperienceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetWebExperienceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the Amazon Q application linked to the web experience.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application linked to the web experience.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application linked to the web experience.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application linked to the web experience.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application linked to the web experience.</p>
     */
    inline GetWebExperienceResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application linked to the web experience.</p>
     */
    inline GetWebExperienceResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application linked to the web experience.</p>
     */
    inline GetWebExperienceResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The authentication configuration information for your Amazon Q web
     * experience.</p>
     */
    inline const WebExperienceAuthConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }

    /**
     * <p>The authentication configuration information for your Amazon Q web
     * experience.</p>
     */
    inline void SetAuthenticationConfiguration(const WebExperienceAuthConfiguration& value) { m_authenticationConfiguration = value; }

    /**
     * <p>The authentication configuration information for your Amazon Q web
     * experience.</p>
     */
    inline void SetAuthenticationConfiguration(WebExperienceAuthConfiguration&& value) { m_authenticationConfiguration = std::move(value); }

    /**
     * <p>The authentication configuration information for your Amazon Q web
     * experience.</p>
     */
    inline GetWebExperienceResult& WithAuthenticationConfiguration(const WebExperienceAuthConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}

    /**
     * <p>The authentication configuration information for your Amazon Q web
     * experience.</p>
     */
    inline GetWebExperienceResult& WithAuthenticationConfiguration(WebExperienceAuthConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline GetWebExperienceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the retriever was created.</p>
     */
    inline GetWebExperienceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The endpoint of your Amazon Q web experience.</p>
     */
    inline const Aws::String& GetDefaultEndpoint() const{ return m_defaultEndpoint; }

    /**
     * <p>The endpoint of your Amazon Q web experience.</p>
     */
    inline void SetDefaultEndpoint(const Aws::String& value) { m_defaultEndpoint = value; }

    /**
     * <p>The endpoint of your Amazon Q web experience.</p>
     */
    inline void SetDefaultEndpoint(Aws::String&& value) { m_defaultEndpoint = std::move(value); }

    /**
     * <p>The endpoint of your Amazon Q web experience.</p>
     */
    inline void SetDefaultEndpoint(const char* value) { m_defaultEndpoint.assign(value); }

    /**
     * <p>The endpoint of your Amazon Q web experience.</p>
     */
    inline GetWebExperienceResult& WithDefaultEndpoint(const Aws::String& value) { SetDefaultEndpoint(value); return *this;}

    /**
     * <p>The endpoint of your Amazon Q web experience.</p>
     */
    inline GetWebExperienceResult& WithDefaultEndpoint(Aws::String&& value) { SetDefaultEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of your Amazon Q web experience.</p>
     */
    inline GetWebExperienceResult& WithDefaultEndpoint(const char* value) { SetDefaultEndpoint(value); return *this;}


    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_error = value; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_error = std::move(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline GetWebExperienceResult& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline GetWebExperienceResult& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline const WebExperienceSamplePromptsControlMode& GetSamplePromptsControlMode() const{ return m_samplePromptsControlMode; }

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline void SetSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { m_samplePromptsControlMode = value; }

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline void SetSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { m_samplePromptsControlMode = std::move(value); }

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline GetWebExperienceResult& WithSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { SetSamplePromptsControlMode(value); return *this;}

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline GetWebExperienceResult& WithSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { SetSamplePromptsControlMode(std::move(value)); return *this;}


    /**
     * <p>The current status of the Amazon Q web experience. When the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail. </p>
     */
    inline const WebExperienceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Amazon Q web experience. When the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail. </p>
     */
    inline void SetStatus(const WebExperienceStatus& value) { m_status = value; }

    /**
     * <p>The current status of the Amazon Q web experience. When the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail. </p>
     */
    inline void SetStatus(WebExperienceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the Amazon Q web experience. When the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail. </p>
     */
    inline GetWebExperienceResult& WithStatus(const WebExperienceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Amazon Q web experience. When the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail. </p>
     */
    inline GetWebExperienceResult& WithStatus(WebExperienceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The subtitle for your Amazon Q web experience. </p>
     */
    inline const Aws::String& GetSubtitle() const{ return m_subtitle; }

    /**
     * <p>The subtitle for your Amazon Q web experience. </p>
     */
    inline void SetSubtitle(const Aws::String& value) { m_subtitle = value; }

    /**
     * <p>The subtitle for your Amazon Q web experience. </p>
     */
    inline void SetSubtitle(Aws::String&& value) { m_subtitle = std::move(value); }

    /**
     * <p>The subtitle for your Amazon Q web experience. </p>
     */
    inline void SetSubtitle(const char* value) { m_subtitle.assign(value); }

    /**
     * <p>The subtitle for your Amazon Q web experience. </p>
     */
    inline GetWebExperienceResult& WithSubtitle(const Aws::String& value) { SetSubtitle(value); return *this;}

    /**
     * <p>The subtitle for your Amazon Q web experience. </p>
     */
    inline GetWebExperienceResult& WithSubtitle(Aws::String&& value) { SetSubtitle(std::move(value)); return *this;}

    /**
     * <p>The subtitle for your Amazon Q web experience. </p>
     */
    inline GetWebExperienceResult& WithSubtitle(const char* value) { SetSubtitle(value); return *this;}


    /**
     * <p>The title for your Amazon Q web experience. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title for your Amazon Q web experience. </p>
     */
    inline void SetTitle(const Aws::String& value) { m_title = value; }

    /**
     * <p>The title for your Amazon Q web experience. </p>
     */
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }

    /**
     * <p>The title for your Amazon Q web experience. </p>
     */
    inline void SetTitle(const char* value) { m_title.assign(value); }

    /**
     * <p>The title for your Amazon Q web experience. </p>
     */
    inline GetWebExperienceResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title for your Amazon Q web experience. </p>
     */
    inline GetWebExperienceResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title for your Amazon Q web experience. </p>
     */
    inline GetWebExperienceResult& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The Unix timestamp when the data source connector was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp when the data source connector was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The Unix timestamp when the data source connector was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the data source connector was last updated.</p>
     */
    inline GetWebExperienceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the data source connector was last updated.</p>
     */
    inline GetWebExperienceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q web experience and required resources.</p>
     */
    inline const Aws::String& GetWebExperienceArn() const{ return m_webExperienceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q web experience and required resources.</p>
     */
    inline void SetWebExperienceArn(const Aws::String& value) { m_webExperienceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q web experience and required resources.</p>
     */
    inline void SetWebExperienceArn(Aws::String&& value) { m_webExperienceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q web experience and required resources.</p>
     */
    inline void SetWebExperienceArn(const char* value) { m_webExperienceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q web experience and required resources.</p>
     */
    inline GetWebExperienceResult& WithWebExperienceArn(const Aws::String& value) { SetWebExperienceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q web experience and required resources.</p>
     */
    inline GetWebExperienceResult& WithWebExperienceArn(Aws::String&& value) { SetWebExperienceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q web experience and required resources.</p>
     */
    inline GetWebExperienceResult& WithWebExperienceArn(const char* value) { SetWebExperienceArn(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const{ return m_webExperienceId; }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetWebExperienceId(const Aws::String& value) { m_webExperienceId = value; }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetWebExperienceId(Aws::String&& value) { m_webExperienceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetWebExperienceId(const char* value) { m_webExperienceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline GetWebExperienceResult& WithWebExperienceId(const Aws::String& value) { SetWebExperienceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline GetWebExperienceResult& WithWebExperienceId(Aws::String&& value) { SetWebExperienceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline GetWebExperienceResult& WithWebExperienceId(const char* value) { SetWebExperienceId(value); return *this;}


    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetWelcomeMessage() const{ return m_welcomeMessage; }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline void SetWelcomeMessage(const Aws::String& value) { m_welcomeMessage = value; }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline void SetWelcomeMessage(Aws::String&& value) { m_welcomeMessage = std::move(value); }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline void SetWelcomeMessage(const char* value) { m_welcomeMessage.assign(value); }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline GetWebExperienceResult& WithWelcomeMessage(const Aws::String& value) { SetWelcomeMessage(value); return *this;}

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline GetWebExperienceResult& WithWelcomeMessage(Aws::String&& value) { SetWelcomeMessage(std::move(value)); return *this;}

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline GetWebExperienceResult& WithWelcomeMessage(const char* value) { SetWelcomeMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWebExperienceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWebExperienceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWebExperienceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationId;

    WebExperienceAuthConfiguration m_authenticationConfiguration;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_defaultEndpoint;

    ErrorDetail m_error;

    WebExperienceSamplePromptsControlMode m_samplePromptsControlMode;

    WebExperienceStatus m_status;

    Aws::String m_subtitle;

    Aws::String m_title;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_webExperienceArn;

    Aws::String m_webExperienceId;

    Aws::String m_welcomeMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
