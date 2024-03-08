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


    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>A token you provide to identify a request to create an Amazon Q web
     * experience. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token you provide to identify a request to create an Amazon Q web
     * experience. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token you provide to identify a request to create an Amazon Q web
     * experience. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token you provide to identify a request to create an Amazon Q web
     * experience. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token you provide to identify a request to create an Amazon Q web
     * experience. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token you provide to identify a request to create an Amazon Q web
     * experience. </p>
     */
    inline CreateWebExperienceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token you provide to identify a request to create an Amazon Q web
     * experience. </p>
     */
    inline CreateWebExperienceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token you provide to identify a request to create an Amazon Q web
     * experience. </p>
     */
    inline CreateWebExperienceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline const WebExperienceSamplePromptsControlMode& GetSamplePromptsControlMode() const{ return m_samplePromptsControlMode; }

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline bool SamplePromptsControlModeHasBeenSet() const { return m_samplePromptsControlModeHasBeenSet; }

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline void SetSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { m_samplePromptsControlModeHasBeenSet = true; m_samplePromptsControlMode = value; }

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline void SetSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { m_samplePromptsControlModeHasBeenSet = true; m_samplePromptsControlMode = std::move(value); }

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline CreateWebExperienceRequest& WithSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { SetSamplePromptsControlMode(value); return *this;}

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline CreateWebExperienceRequest& WithSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { SetSamplePromptsControlMode(std::move(value)); return *this;}


    /**
     * <p>A subtitle to personalize your Amazon Q web experience.</p>
     */
    inline const Aws::String& GetSubtitle() const{ return m_subtitle; }

    /**
     * <p>A subtitle to personalize your Amazon Q web experience.</p>
     */
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }

    /**
     * <p>A subtitle to personalize your Amazon Q web experience.</p>
     */
    inline void SetSubtitle(const Aws::String& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }

    /**
     * <p>A subtitle to personalize your Amazon Q web experience.</p>
     */
    inline void SetSubtitle(Aws::String&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }

    /**
     * <p>A subtitle to personalize your Amazon Q web experience.</p>
     */
    inline void SetSubtitle(const char* value) { m_subtitleHasBeenSet = true; m_subtitle.assign(value); }

    /**
     * <p>A subtitle to personalize your Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithSubtitle(const Aws::String& value) { SetSubtitle(value); return *this;}

    /**
     * <p>A subtitle to personalize your Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithSubtitle(Aws::String&& value) { SetSubtitle(std::move(value)); return *this;}

    /**
     * <p>A subtitle to personalize your Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithSubtitle(const char* value) { SetSubtitle(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q web
     * experience. You can also use tags to help control access to the web experience.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q web
     * experience. You can also use tags to help control access to the web experience.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q web
     * experience. You can also use tags to help control access to the web experience.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q web
     * experience. You can also use tags to help control access to the web experience.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q web
     * experience. You can also use tags to help control access to the web experience.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateWebExperienceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q web
     * experience. You can also use tags to help control access to the web experience.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateWebExperienceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q web
     * experience. You can also use tags to help control access to the web experience.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateWebExperienceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q web
     * experience. You can also use tags to help control access to the web experience.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateWebExperienceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The title for your Amazon Q web experience.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title for your Amazon Q web experience.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title for your Amazon Q web experience.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title for your Amazon Q web experience.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title for your Amazon Q web experience.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title for your Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title for your Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title for your Amazon Q web experience.</p>
     */
    inline CreateWebExperienceRequest& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetWelcomeMessage() const{ return m_welcomeMessage; }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline bool WelcomeMessageHasBeenSet() const { return m_welcomeMessageHasBeenSet; }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline void SetWelcomeMessage(const Aws::String& value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage = value; }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline void SetWelcomeMessage(Aws::String&& value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage = std::move(value); }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline void SetWelcomeMessage(const char* value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage.assign(value); }

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline CreateWebExperienceRequest& WithWelcomeMessage(const Aws::String& value) { SetWelcomeMessage(value); return *this;}

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline CreateWebExperienceRequest& WithWelcomeMessage(Aws::String&& value) { SetWelcomeMessage(std::move(value)); return *this;}

    /**
     * <p>The customized welcome message for end users of an Amazon Q web
     * experience.</p>
     */
    inline CreateWebExperienceRequest& WithWelcomeMessage(const char* value) { SetWelcomeMessage(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    WebExperienceSamplePromptsControlMode m_samplePromptsControlMode;
    bool m_samplePromptsControlModeHasBeenSet = false;

    Aws::String m_subtitle;
    bool m_subtitleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_welcomeMessage;
    bool m_welcomeMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
