/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>A description of each select option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SelectOptionDescription">AWS
   * API Reference</a></p>
   */
  class SelectOptionDescription
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SelectOptionDescription();
    AWS_PINPOINTSMSVOICEV2_API SelectOptionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SelectOptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the option.</p>
     */
    inline const Aws::String& GetOption() const{ return m_option; }

    /**
     * <p>The value of the option.</p>
     */
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }

    /**
     * <p>The value of the option.</p>
     */
    inline void SetOption(const Aws::String& value) { m_optionHasBeenSet = true; m_option = value; }

    /**
     * <p>The value of the option.</p>
     */
    inline void SetOption(Aws::String&& value) { m_optionHasBeenSet = true; m_option = std::move(value); }

    /**
     * <p>The value of the option.</p>
     */
    inline void SetOption(const char* value) { m_optionHasBeenSet = true; m_option.assign(value); }

    /**
     * <p>The value of the option.</p>
     */
    inline SelectOptionDescription& WithOption(const Aws::String& value) { SetOption(value); return *this;}

    /**
     * <p>The value of the option.</p>
     */
    inline SelectOptionDescription& WithOption(Aws::String&& value) { SetOption(std::move(value)); return *this;}

    /**
     * <p>The value of the option.</p>
     */
    inline SelectOptionDescription& WithOption(const char* value) { SetOption(value); return *this;}


    /**
     * <p>The title of the select option.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the select option.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the select option.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the select option.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the select option.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the select option.</p>
     */
    inline SelectOptionDescription& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the select option.</p>
     */
    inline SelectOptionDescription& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the select option.</p>
     */
    inline SelectOptionDescription& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A description of the option meaning.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the option meaning.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the option meaning.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the option meaning.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the option meaning.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the option meaning.</p>
     */
    inline SelectOptionDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the option meaning.</p>
     */
    inline SelectOptionDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the option meaning.</p>
     */
    inline SelectOptionDescription& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_option;
    bool m_optionHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
