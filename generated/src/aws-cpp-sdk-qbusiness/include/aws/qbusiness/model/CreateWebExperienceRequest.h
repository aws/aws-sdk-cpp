﻿/**
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
     * <p>The Amazon Resource Name (ARN) of the service role attached to your web
     * experience.</p>
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

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
