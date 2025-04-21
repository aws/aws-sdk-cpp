/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/WebExperienceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/WebExperienceSamplePromptsControlMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/IdentityProviderConfiguration.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/BrowserExtensionConfiguration.h>
#include <aws/qbusiness/model/CustomizationConfiguration.h>
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
    AWS_QBUSINESS_API GetWebExperienceResult() = default;
    AWS_QBUSINESS_API GetWebExperienceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetWebExperienceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application linked to the web
     * experience.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetWebExperienceResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const { return m_webExperienceId; }
    template<typename WebExperienceIdT = Aws::String>
    void SetWebExperienceId(WebExperienceIdT&& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = std::forward<WebExperienceIdT>(value); }
    template<typename WebExperienceIdT = Aws::String>
    GetWebExperienceResult& WithWebExperienceId(WebExperienceIdT&& value) { SetWebExperienceId(std::forward<WebExperienceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role with the permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline const Aws::String& GetWebExperienceArn() const { return m_webExperienceArn; }
    template<typename WebExperienceArnT = Aws::String>
    void SetWebExperienceArn(WebExperienceArnT&& value) { m_webExperienceArnHasBeenSet = true; m_webExperienceArn = std::forward<WebExperienceArnT>(value); }
    template<typename WebExperienceArnT = Aws::String>
    GetWebExperienceResult& WithWebExperienceArn(WebExperienceArnT&& value) { SetWebExperienceArn(std::forward<WebExperienceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of your Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetDefaultEndpoint() const { return m_defaultEndpoint; }
    template<typename DefaultEndpointT = Aws::String>
    void SetDefaultEndpoint(DefaultEndpointT&& value) { m_defaultEndpointHasBeenSet = true; m_defaultEndpoint = std::forward<DefaultEndpointT>(value); }
    template<typename DefaultEndpointT = Aws::String>
    GetWebExperienceResult& WithDefaultEndpoint(DefaultEndpointT&& value) { SetDefaultEndpoint(std::forward<DefaultEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Amazon Q Business web experience. When the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail. </p>
     */
    inline WebExperienceStatus GetStatus() const { return m_status; }
    inline void SetStatus(WebExperienceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWebExperienceResult& WithStatus(WebExperienceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business web experience was last
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetWebExperienceResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business web experience was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetWebExperienceResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title for your Amazon Q Business web experience. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    GetWebExperienceResult& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle for your Amazon Q Business web experience. </p>
     */
    inline const Aws::String& GetSubtitle() const { return m_subtitle; }
    template<typename SubtitleT = Aws::String>
    void SetSubtitle(SubtitleT&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::forward<SubtitleT>(value); }
    template<typename SubtitleT = Aws::String>
    GetWebExperienceResult& WithSubtitle(SubtitleT&& value) { SetSubtitle(std::forward<SubtitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized welcome message for end users of an Amazon Q Business web
     * experience.</p>
     */
    inline const Aws::String& GetWelcomeMessage() const { return m_welcomeMessage; }
    template<typename WelcomeMessageT = Aws::String>
    void SetWelcomeMessage(WelcomeMessageT&& value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage = std::forward<WelcomeMessageT>(value); }
    template<typename WelcomeMessageT = Aws::String>
    GetWebExperienceResult& WithWelcomeMessage(WelcomeMessageT&& value) { SetWelcomeMessage(std::forward<WelcomeMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline WebExperienceSamplePromptsControlMode GetSamplePromptsControlMode() const { return m_samplePromptsControlMode; }
    inline void SetSamplePromptsControlMode(WebExperienceSamplePromptsControlMode value) { m_samplePromptsControlModeHasBeenSet = true; m_samplePromptsControlMode = value; }
    inline GetWebExperienceResult& WithSamplePromptsControlMode(WebExperienceSamplePromptsControlMode value) { SetSamplePromptsControlMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets the website domain origins that are allowed to embed the Amazon Q
     * Business web experience. The <i>domain origin</i> refers to the base URL for
     * accessing a website including the protocol (<code>http/https</code>), the domain
     * name, and the port number (if specified). </p>
     */
    inline const Aws::Vector<Aws::String>& GetOrigins() const { return m_origins; }
    template<typename OriginsT = Aws::Vector<Aws::String>>
    void SetOrigins(OriginsT&& value) { m_originsHasBeenSet = true; m_origins = std::forward<OriginsT>(value); }
    template<typename OriginsT = Aws::Vector<Aws::String>>
    GetWebExperienceResult& WithOrigins(OriginsT&& value) { SetOrigins(std::forward<OriginsT>(value)); return *this;}
    template<typename OriginsT = Aws::String>
    GetWebExperienceResult& AddOrigins(OriginsT&& value) { m_originsHasBeenSet = true; m_origins.emplace_back(std::forward<OriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the service role attached to your web
     * experience.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetWebExperienceResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the identity provider (IdP) used to authenticate end users
     * of an Amazon Q Business web experience.</p>
     */
    inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const { return m_identityProviderConfiguration; }
    template<typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
    void SetIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) { m_identityProviderConfigurationHasBeenSet = true; m_identityProviderConfiguration = std::forward<IdentityProviderConfigurationT>(value); }
    template<typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
    GetWebExperienceResult& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) { SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline const ErrorDetail& GetError() const { return m_error; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    GetWebExperienceResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The browser extension configuration for an Amazon Q Business web
     * experience.</p>
     */
    inline const BrowserExtensionConfiguration& GetBrowserExtensionConfiguration() const { return m_browserExtensionConfiguration; }
    template<typename BrowserExtensionConfigurationT = BrowserExtensionConfiguration>
    void SetBrowserExtensionConfiguration(BrowserExtensionConfigurationT&& value) { m_browserExtensionConfigurationHasBeenSet = true; m_browserExtensionConfiguration = std::forward<BrowserExtensionConfigurationT>(value); }
    template<typename BrowserExtensionConfigurationT = BrowserExtensionConfiguration>
    GetWebExperienceResult& WithBrowserExtensionConfiguration(BrowserExtensionConfigurationT&& value) { SetBrowserExtensionConfiguration(std::forward<BrowserExtensionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets the custom logo, favicon, font, and color used in the Amazon Q web
     * experience. </p>
     */
    inline const CustomizationConfiguration& GetCustomizationConfiguration() const { return m_customizationConfiguration; }
    template<typename CustomizationConfigurationT = CustomizationConfiguration>
    void SetCustomizationConfiguration(CustomizationConfigurationT&& value) { m_customizationConfigurationHasBeenSet = true; m_customizationConfiguration = std::forward<CustomizationConfigurationT>(value); }
    template<typename CustomizationConfigurationT = CustomizationConfiguration>
    GetWebExperienceResult& WithCustomizationConfiguration(CustomizationConfigurationT&& value) { SetCustomizationConfiguration(std::forward<CustomizationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWebExperienceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_webExperienceId;
    bool m_webExperienceIdHasBeenSet = false;

    Aws::String m_webExperienceArn;
    bool m_webExperienceArnHasBeenSet = false;

    Aws::String m_defaultEndpoint;
    bool m_defaultEndpointHasBeenSet = false;

    WebExperienceStatus m_status{WebExperienceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_subtitle;
    bool m_subtitleHasBeenSet = false;

    Aws::String m_welcomeMessage;
    bool m_welcomeMessageHasBeenSet = false;

    WebExperienceSamplePromptsControlMode m_samplePromptsControlMode{WebExperienceSamplePromptsControlMode::NOT_SET};
    bool m_samplePromptsControlModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_origins;
    bool m_originsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    IdentityProviderConfiguration m_identityProviderConfiguration;
    bool m_identityProviderConfigurationHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    BrowserExtensionConfiguration m_browserExtensionConfiguration;
    bool m_browserExtensionConfigurationHasBeenSet = false;

    CustomizationConfiguration m_customizationConfiguration;
    bool m_customizationConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
