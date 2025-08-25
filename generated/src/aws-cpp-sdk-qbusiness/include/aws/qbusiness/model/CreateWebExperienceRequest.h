/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/WebExperienceSamplePromptsControlMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/IdentityProviderConfiguration.h>
#include <aws/qbusiness/model/BrowserExtensionConfiguration.h>
#include <aws/qbusiness/model/CustomizationConfiguration.h>
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
  class CreateWebExperienceRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateWebExperienceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebExperience"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreateWebExperienceRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title for your Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CreateWebExperienceRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subtitle to personalize your Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetSubtitle() const { return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    template<typename SubtitleT = Aws::String>
    void SetSubtitle(SubtitleT&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::forward<SubtitleT>(value); }
    template<typename SubtitleT = Aws::String>
    CreateWebExperienceRequest& WithSubtitle(SubtitleT&& value) { SetSubtitle(std::forward<SubtitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized welcome message for end users of an Amazon Q Business web
     * experience.</p>
     */
    inline const Aws::String& GetWelcomeMessage() const { return m_welcomeMessage; }
    inline bool WelcomeMessageHasBeenSet() const { return m_welcomeMessageHasBeenSet; }
    template<typename WelcomeMessageT = Aws::String>
    void SetWelcomeMessage(WelcomeMessageT&& value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage = std::forward<WelcomeMessageT>(value); }
    template<typename WelcomeMessageT = Aws::String>
    CreateWebExperienceRequest& WithWelcomeMessage(WelcomeMessageT&& value) { SetWelcomeMessage(std::forward<WelcomeMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline WebExperienceSamplePromptsControlMode GetSamplePromptsControlMode() const { return m_samplePromptsControlMode; }
    inline bool SamplePromptsControlModeHasBeenSet() const { return m_samplePromptsControlModeHasBeenSet; }
    inline void SetSamplePromptsControlMode(WebExperienceSamplePromptsControlMode value) { m_samplePromptsControlModeHasBeenSet = true; m_samplePromptsControlMode = value; }
    inline CreateWebExperienceRequest& WithSamplePromptsControlMode(WebExperienceSamplePromptsControlMode value) { SetSamplePromptsControlMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the website domain origins that are allowed to embed the Amazon Q
     * Business web experience. The <i>domain origin</i> refers to the base URL for
     * accessing a website including the protocol (<code>http/https</code>), the domain
     * name, and the port number (if specified). </p>  <p>You must only submit a
     * <i>base URL</i> and not a full path. For example,
     * <code>https://docs.aws.amazon.com</code>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetOrigins() const { return m_origins; }
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
    template<typename OriginsT = Aws::Vector<Aws::String>>
    void SetOrigins(OriginsT&& value) { m_originsHasBeenSet = true; m_origins = std::forward<OriginsT>(value); }
    template<typename OriginsT = Aws::Vector<Aws::String>>
    CreateWebExperienceRequest& WithOrigins(OriginsT&& value) { SetOrigins(std::forward<OriginsT>(value)); return *this;}
    template<typename OriginsT = Aws::String>
    CreateWebExperienceRequest& AddOrigins(OriginsT&& value) { m_originsHasBeenSet = true; m_origins.emplace_back(std::forward<OriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role attached to your web
     * experience.</p>  <p>The <code>roleArn</code> parameter is required when
     * your Amazon Q Business application is created with IAM Identity Center. It is
     * not required for SAML-based applications.</p> 
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateWebExperienceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q Business
     * web experience. You can also use tags to help control access to the web
     * experience. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateWebExperienceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWebExperienceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you provide to identify a request to create an Amazon Q Business web
     * experience. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateWebExperienceRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the identity provider (IdP) used to authenticate end users
     * of an Amazon Q Business web experience.</p>
     */
    inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const { return m_identityProviderConfiguration; }
    inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
    template<typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
    void SetIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) { m_identityProviderConfigurationHasBeenSet = true; m_identityProviderConfiguration = std::forward<IdentityProviderConfigurationT>(value); }
    template<typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
    CreateWebExperienceRequest& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) { SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The browser extension configuration for an Amazon Q Business web
     * experience.</p>  <p> For Amazon Q Business application using external
     * OIDC-compliant identity providers (IdPs). The IdP administrator must add the
     * browser extension sign-in redirect URLs to the IdP application. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/browser-extensions.html">Configure
     * external OIDC identity provider for your browser extensions.</a>. </p> 
     */
    inline const BrowserExtensionConfiguration& GetBrowserExtensionConfiguration() const { return m_browserExtensionConfiguration; }
    inline bool BrowserExtensionConfigurationHasBeenSet() const { return m_browserExtensionConfigurationHasBeenSet; }
    template<typename BrowserExtensionConfigurationT = BrowserExtensionConfiguration>
    void SetBrowserExtensionConfiguration(BrowserExtensionConfigurationT&& value) { m_browserExtensionConfigurationHasBeenSet = true; m_browserExtensionConfiguration = std::forward<BrowserExtensionConfigurationT>(value); }
    template<typename BrowserExtensionConfigurationT = BrowserExtensionConfiguration>
    CreateWebExperienceRequest& WithBrowserExtensionConfiguration(BrowserExtensionConfigurationT&& value) { SetBrowserExtensionConfiguration(std::forward<BrowserExtensionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the custom logo, favicon, font, and color used in the Amazon Q web
     * experience. </p>
     */
    inline const CustomizationConfiguration& GetCustomizationConfiguration() const { return m_customizationConfiguration; }
    inline bool CustomizationConfigurationHasBeenSet() const { return m_customizationConfigurationHasBeenSet; }
    template<typename CustomizationConfigurationT = CustomizationConfiguration>
    void SetCustomizationConfiguration(CustomizationConfigurationT&& value) { m_customizationConfigurationHasBeenSet = true; m_customizationConfiguration = std::forward<CustomizationConfigurationT>(value); }
    template<typename CustomizationConfigurationT = CustomizationConfiguration>
    CreateWebExperienceRequest& WithCustomizationConfiguration(CustomizationConfigurationT&& value) { SetCustomizationConfiguration(std::forward<CustomizationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    IdentityProviderConfiguration m_identityProviderConfiguration;
    bool m_identityProviderConfigurationHasBeenSet = false;

    BrowserExtensionConfiguration m_browserExtensionConfiguration;
    bool m_browserExtensionConfigurationHasBeenSet = false;

    CustomizationConfiguration m_customizationConfiguration;
    bool m_customizationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
