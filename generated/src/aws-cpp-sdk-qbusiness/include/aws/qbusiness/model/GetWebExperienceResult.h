﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/WebExperienceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/WebExperienceSamplePromptsControlMode.h>
#include <aws/qbusiness/model/ErrorDetail.h>
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


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application linked to the web
     * experience.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetWebExperienceResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetWebExperienceResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const{ return m_webExperienceId; }
    inline void SetWebExperienceId(const Aws::String& value) { m_webExperienceId = value; }
    inline void SetWebExperienceId(Aws::String&& value) { m_webExperienceId = std::move(value); }
    inline void SetWebExperienceId(const char* value) { m_webExperienceId.assign(value); }
    inline GetWebExperienceResult& WithWebExperienceId(const Aws::String& value) { SetWebExperienceId(value); return *this;}
    inline GetWebExperienceResult& WithWebExperienceId(Aws::String&& value) { SetWebExperienceId(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithWebExperienceId(const char* value) { SetWebExperienceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline const Aws::String& GetWebExperienceArn() const{ return m_webExperienceArn; }
    inline void SetWebExperienceArn(const Aws::String& value) { m_webExperienceArn = value; }
    inline void SetWebExperienceArn(Aws::String&& value) { m_webExperienceArn = std::move(value); }
    inline void SetWebExperienceArn(const char* value) { m_webExperienceArn.assign(value); }
    inline GetWebExperienceResult& WithWebExperienceArn(const Aws::String& value) { SetWebExperienceArn(value); return *this;}
    inline GetWebExperienceResult& WithWebExperienceArn(Aws::String&& value) { SetWebExperienceArn(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithWebExperienceArn(const char* value) { SetWebExperienceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of your Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetDefaultEndpoint() const{ return m_defaultEndpoint; }
    inline void SetDefaultEndpoint(const Aws::String& value) { m_defaultEndpoint = value; }
    inline void SetDefaultEndpoint(Aws::String&& value) { m_defaultEndpoint = std::move(value); }
    inline void SetDefaultEndpoint(const char* value) { m_defaultEndpoint.assign(value); }
    inline GetWebExperienceResult& WithDefaultEndpoint(const Aws::String& value) { SetDefaultEndpoint(value); return *this;}
    inline GetWebExperienceResult& WithDefaultEndpoint(Aws::String&& value) { SetDefaultEndpoint(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithDefaultEndpoint(const char* value) { SetDefaultEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Amazon Q Business web experience. When the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail. </p>
     */
    inline const WebExperienceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WebExperienceStatus& value) { m_status = value; }
    inline void SetStatus(WebExperienceStatus&& value) { m_status = std::move(value); }
    inline GetWebExperienceResult& WithStatus(const WebExperienceStatus& value) { SetStatus(value); return *this;}
    inline GetWebExperienceResult& WithStatus(WebExperienceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business web experience was last
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetWebExperienceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetWebExperienceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business web experience was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetWebExperienceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetWebExperienceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title for your Amazon Q Business web experience. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline void SetTitle(const Aws::String& value) { m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_title.assign(value); }
    inline GetWebExperienceResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline GetWebExperienceResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle for your Amazon Q Business web experience. </p>
     */
    inline const Aws::String& GetSubtitle() const{ return m_subtitle; }
    inline void SetSubtitle(const Aws::String& value) { m_subtitle = value; }
    inline void SetSubtitle(Aws::String&& value) { m_subtitle = std::move(value); }
    inline void SetSubtitle(const char* value) { m_subtitle.assign(value); }
    inline GetWebExperienceResult& WithSubtitle(const Aws::String& value) { SetSubtitle(value); return *this;}
    inline GetWebExperienceResult& WithSubtitle(Aws::String&& value) { SetSubtitle(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithSubtitle(const char* value) { SetSubtitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized welcome message for end users of an Amazon Q Business web
     * experience.</p>
     */
    inline const Aws::String& GetWelcomeMessage() const{ return m_welcomeMessage; }
    inline void SetWelcomeMessage(const Aws::String& value) { m_welcomeMessage = value; }
    inline void SetWelcomeMessage(Aws::String&& value) { m_welcomeMessage = std::move(value); }
    inline void SetWelcomeMessage(const char* value) { m_welcomeMessage.assign(value); }
    inline GetWebExperienceResult& WithWelcomeMessage(const Aws::String& value) { SetWelcomeMessage(value); return *this;}
    inline GetWebExperienceResult& WithWelcomeMessage(Aws::String&& value) { SetWelcomeMessage(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithWelcomeMessage(const char* value) { SetWelcomeMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline const WebExperienceSamplePromptsControlMode& GetSamplePromptsControlMode() const{ return m_samplePromptsControlMode; }
    inline void SetSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { m_samplePromptsControlMode = value; }
    inline void SetSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { m_samplePromptsControlMode = std::move(value); }
    inline GetWebExperienceResult& WithSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { SetSamplePromptsControlMode(value); return *this;}
    inline GetWebExperienceResult& WithSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { SetSamplePromptsControlMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the service role attached to your web
     * experience.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetWebExperienceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetWebExperienceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline void SetError(const ErrorDetail& value) { m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_error = std::move(value); }
    inline GetWebExperienceResult& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline GetWebExperienceResult& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWebExperienceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWebExperienceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWebExperienceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_webExperienceId;

    Aws::String m_webExperienceArn;

    Aws::String m_defaultEndpoint;

    WebExperienceStatus m_status;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_title;

    Aws::String m_subtitle;

    Aws::String m_welcomeMessage;

    WebExperienceSamplePromptsControlMode m_samplePromptsControlMode;

    Aws::String m_roleArn;

    ErrorDetail m_error;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
