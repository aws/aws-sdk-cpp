/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/WebExperienceSamplePromptsControlMode.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateWebExperienceRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateWebExperienceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebExperience"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Q Business application attached to the web
     * experience.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q Business application attached to the web
     * experience.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q Business application attached to the web
     * experience.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q Business application attached to the web
     * experience.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q Business application attached to the web
     * experience.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q Business application attached to the web
     * experience.</p>
     */
    inline UpdateWebExperienceRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business application attached to the web
     * experience.</p>
     */
    inline UpdateWebExperienceRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business application attached to the web
     * experience.</p>
     */
    inline UpdateWebExperienceRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const{ return m_webExperienceId; }

    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline bool WebExperienceIdHasBeenSet() const { return m_webExperienceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline void SetWebExperienceId(const Aws::String& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = value; }

    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline void SetWebExperienceId(Aws::String&& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline void SetWebExperienceId(const char* value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithWebExperienceId(const Aws::String& value) { SetWebExperienceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithWebExperienceId(Aws::String&& value) { SetWebExperienceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithWebExperienceId(const char* value) { SetWebExperienceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline UpdateWebExperienceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline UpdateWebExperienceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the
     * Amazon Q Business web experience and required resources.</p>
     */
    inline UpdateWebExperienceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The title of the Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the Amazon Q Business web experience.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the Amazon Q Business web experience.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the Amazon Q Business web experience.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the Amazon Q Business web experience.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The subtitle of the Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetSubtitle() const{ return m_subtitle; }

    /**
     * <p>The subtitle of the Amazon Q Business web experience.</p>
     */
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }

    /**
     * <p>The subtitle of the Amazon Q Business web experience.</p>
     */
    inline void SetSubtitle(const Aws::String& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }

    /**
     * <p>The subtitle of the Amazon Q Business web experience.</p>
     */
    inline void SetSubtitle(Aws::String&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }

    /**
     * <p>The subtitle of the Amazon Q Business web experience.</p>
     */
    inline void SetSubtitle(const char* value) { m_subtitleHasBeenSet = true; m_subtitle.assign(value); }

    /**
     * <p>The subtitle of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithSubtitle(const Aws::String& value) { SetSubtitle(value); return *this;}

    /**
     * <p>The subtitle of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithSubtitle(Aws::String&& value) { SetSubtitle(std::move(value)); return *this;}

    /**
     * <p>The subtitle of the Amazon Q Business web experience.</p>
     */
    inline UpdateWebExperienceRequest& WithSubtitle(const char* value) { SetSubtitle(value); return *this;}


    /**
     * <p>A customized welcome message for an end user in an Amazon Q Business web
     * experience.</p>
     */
    inline const Aws::String& GetWelcomeMessage() const{ return m_welcomeMessage; }

    /**
     * <p>A customized welcome message for an end user in an Amazon Q Business web
     * experience.</p>
     */
    inline bool WelcomeMessageHasBeenSet() const { return m_welcomeMessageHasBeenSet; }

    /**
     * <p>A customized welcome message for an end user in an Amazon Q Business web
     * experience.</p>
     */
    inline void SetWelcomeMessage(const Aws::String& value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage = value; }

    /**
     * <p>A customized welcome message for an end user in an Amazon Q Business web
     * experience.</p>
     */
    inline void SetWelcomeMessage(Aws::String&& value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage = std::move(value); }

    /**
     * <p>A customized welcome message for an end user in an Amazon Q Business web
     * experience.</p>
     */
    inline void SetWelcomeMessage(const char* value) { m_welcomeMessageHasBeenSet = true; m_welcomeMessage.assign(value); }

    /**
     * <p>A customized welcome message for an end user in an Amazon Q Business web
     * experience.</p>
     */
    inline UpdateWebExperienceRequest& WithWelcomeMessage(const Aws::String& value) { SetWelcomeMessage(value); return *this;}

    /**
     * <p>A customized welcome message for an end user in an Amazon Q Business web
     * experience.</p>
     */
    inline UpdateWebExperienceRequest& WithWelcomeMessage(Aws::String&& value) { SetWelcomeMessage(std::move(value)); return *this;}

    /**
     * <p>A customized welcome message for an end user in an Amazon Q Business web
     * experience.</p>
     */
    inline UpdateWebExperienceRequest& WithWelcomeMessage(const char* value) { SetWelcomeMessage(value); return *this;}


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
    inline UpdateWebExperienceRequest& WithSamplePromptsControlMode(const WebExperienceSamplePromptsControlMode& value) { SetSamplePromptsControlMode(value); return *this;}

    /**
     * <p>Determines whether sample prompts are enabled in the web experience for an
     * end user.</p>
     */
    inline UpdateWebExperienceRequest& WithSamplePromptsControlMode(WebExperienceSamplePromptsControlMode&& value) { SetSamplePromptsControlMode(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_webExperienceId;
    bool m_webExperienceIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_subtitle;
    bool m_subtitleHasBeenSet = false;

    Aws::String m_welcomeMessage;
    bool m_welcomeMessageHasBeenSet = false;

    WebExperienceSamplePromptsControlMode m_samplePromptsControlMode;
    bool m_samplePromptsControlModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
