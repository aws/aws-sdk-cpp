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
    AWS_QBUSINESS_API CreateWebExperienceRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CreateWebExperienceRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateWebExperienceRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateWebExperienceRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title for your Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline CreateWebExperienceRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline CreateWebExperienceRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline CreateWebExperienceRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subtitle to personalize your Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetSubtitle() const{ return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    inline void SetSubtitle(const Aws::String& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }
    inline void SetSubtitle(Aws::String&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }
    inline void SetSubtitle(const char* value) { m_subtitleHasBeenSet = true; m_subtitle.assign(value); }
    inline CreateWebExperienceRequest& WithSubtitle(const Aws::String& value) { SetSubtitle(value); return *this;}
    inline CreateWebExperienceRequest& WithSubtitle(Aws::String&& value) { SetSubtitle(std::move(value)); return *this;}
    inline CreateWebExperienceRequest& WithSubtitle(const char* value) { SetSubtitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized welcome message for end users of an Amazon Q Business web
     * experience.</p>
     */
    inline const Aws::String& GetWelcomeMessage() const{ return m_welcomeMessage; }
    inline bool WelcomeMessageHasBeenSet() const { return m_welcomeMessageHasBeenSet; }
    inline void SetWelcomeMessage(const Aws::String& value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage = value; }
    inline void SetWelcomeMessage(Aws::String&& value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage = std::move(value); }
    inline void SetWelcomeMessage(const char* value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage.assign(value); }
    inline CreateWebExperienceRequest& WithWelcomeMessage(const Aws::String& value) { SetWelcomeMessage(value); return *this;}
    inline CreateWebExperienceRequest& WithWelcomeMessage(Aws::String&& value) { SetWelcomeMessage(std::move(value)); return *this;}
    inline CreateWebExperienceRequest& WithWelcomeMessage(const char* value) { SetWelcomeMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline const WebExperienceSamplePromptsControlMode& GetSamplePromptsControlMode() const{ return m_samplePromptsControlMode; }
    inline bool SamplePromptsControlModeHasBeenSet() const { return m_samplePromptsControlModeHasBeenSet; }
    inline void SetSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { m_samplePromptsControlModeHasBeenSet = true; m_samplePromptsControlMode = value; }
    inline void SetSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { m_samplePromptsControlModeHasBeenSet = true; m_samplePromptsControlMode = std::move(value); }
    inline CreateWebExperienceRequest& WithSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { SetSamplePromptsControlMode(value); return *this;}
    inline CreateWebExperienceRequest& WithSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { SetSamplePromptsControlMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the website domain origins that are allowed to embed the Amazon Q
     * Business web experience. <pre><code> The &lt;i&gt;domain origin&lt;/i&gt; refers
     * to the base URL for accessing a website including the protocol
     * (&lt;code&gt;http/https&lt;/code&gt;), the domain name, and the port number (if
     * specified). &lt;/p&gt; &lt;note&gt; &lt;p&gt;You must only submit a
     * &lt;i&gt;base URL&lt;/i&gt; and not a full path. For example,
     * &lt;code&gt;https://docs.aws.amazon.com&lt;/code&gt;.&lt;/p&gt; &lt;/note&gt;
     * </code></pre>
     */
    inline const Aws::Vector<Aws::String>& GetOrigins() const{ return m_origins; }
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
    inline void SetOrigins(const Aws::Vector<Aws::String>& value) { m_originsHasBeenSet = true; m_origins = value; }
    inline void SetOrigins(Aws::Vector<Aws::String>&& value) { m_originsHasBeenSet = true; m_origins = std::move(value); }
    inline CreateWebExperienceRequest& WithOrigins(const Aws::Vector<Aws::String>& value) { SetOrigins(value); return *this;}
    inline CreateWebExperienceRequest& WithOrigins(Aws::Vector<Aws::String>&& value) { SetOrigins(std::move(value)); return *this;}
    inline CreateWebExperienceRequest& AddOrigins(const Aws::String& value) { m_originsHasBeenSet = true; m_origins.push_back(value); return *this; }
    inline CreateWebExperienceRequest& AddOrigins(Aws::String&& value) { m_originsHasBeenSet = true; m_origins.push_back(std::move(value)); return *this; }
    inline CreateWebExperienceRequest& AddOrigins(const char* value) { m_originsHasBeenSet = true; m_origins.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role attached to your web
     * experience.</p>  <p>You must provide this value if you're using IAM
     * Identity Center to manage end user access to your application. If you're using
     * legacy identity management to manage user access, you don't need to provide this
     * value.</p> 
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateWebExperienceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateWebExperienceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateWebExperienceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q Business
     * web experience. You can also use tags to help control access to the web
     * experience. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWebExperienceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateWebExperienceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWebExperienceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateWebExperienceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you provide to identify a request to create an Amazon Q Business web
     * experience. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateWebExperienceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateWebExperienceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateWebExperienceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the identity provider (IdP) used to authenticate end users
     * of an Amazon Q Business web experience.</p>
     */
    inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const{ return m_identityProviderConfiguration; }
    inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
    inline void SetIdentityProviderConfiguration(const IdentityProviderConfiguration& value) { m_identityProviderConfigurationHasBeenSet = true; m_identityProviderConfiguration = value; }
    inline void SetIdentityProviderConfiguration(IdentityProviderConfiguration&& value) { m_identityProviderConfigurationHasBeenSet = true; m_identityProviderConfiguration = std::move(value); }
    inline CreateWebExperienceRequest& WithIdentityProviderConfiguration(const IdentityProviderConfiguration& value) { SetIdentityProviderConfiguration(value); return *this;}
    inline CreateWebExperienceRequest& WithIdentityProviderConfiguration(IdentityProviderConfiguration&& value) { SetIdentityProviderConfiguration(std::move(value)); return *this;}
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
    inline const BrowserExtensionConfiguration& GetBrowserExtensionConfiguration() const{ return m_browserExtensionConfiguration; }
    inline bool BrowserExtensionConfigurationHasBeenSet() const { return m_browserExtensionConfigurationHasBeenSet; }
    inline void SetBrowserExtensionConfiguration(const BrowserExtensionConfiguration& value) { m_browserExtensionConfigurationHasBeenSet = true; m_browserExtensionConfiguration = value; }
    inline void SetBrowserExtensionConfiguration(BrowserExtensionConfiguration&& value) { m_browserExtensionConfigurationHasBeenSet = true; m_browserExtensionConfiguration = std::move(value); }
    inline CreateWebExperienceRequest& WithBrowserExtensionConfiguration(const BrowserExtensionConfiguration& value) { SetBrowserExtensionConfiguration(value); return *this;}
    inline CreateWebExperienceRequest& WithBrowserExtensionConfiguration(BrowserExtensionConfiguration&& value) { SetBrowserExtensionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the custom logo, favicon, font, and color used in the Amazon Q web
     * experience. </p>
     */
    inline const CustomizationConfiguration& GetCustomizationConfiguration() const{ return m_customizationConfiguration; }
    inline bool CustomizationConfigurationHasBeenSet() const { return m_customizationConfigurationHasBeenSet; }
    inline void SetCustomizationConfiguration(const CustomizationConfiguration& value) { m_customizationConfigurationHasBeenSet = true; m_customizationConfiguration = value; }
    inline void SetCustomizationConfiguration(CustomizationConfiguration&& value) { m_customizationConfigurationHasBeenSet = true; m_customizationConfiguration = std::move(value); }
    inline CreateWebExperienceRequest& WithCustomizationConfiguration(const CustomizationConfiguration& value) { SetCustomizationConfiguration(value); return *this;}
    inline CreateWebExperienceRequest& WithCustomizationConfiguration(CustomizationConfiguration&& value) { SetCustomizationConfiguration(std::move(value)); return *this;}
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

    WebExperienceSamplePromptsControlMode m_samplePromptsControlMode;
    bool m_samplePromptsControlModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_origins;
    bool m_originsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
