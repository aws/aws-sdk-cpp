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


    ///@{
    /**
     * <p>The value of the option.</p>
     */
    inline const Aws::String& GetOption() const{ return m_option; }
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }
    inline void SetOption(const Aws::String& value) { m_optionHasBeenSet = true; m_option = value; }
    inline void SetOption(Aws::String&& value) { m_optionHasBeenSet = true; m_option = std::move(value); }
    inline void SetOption(const char* value) { m_optionHasBeenSet = true; m_option.assign(value); }
    inline SelectOptionDescription& WithOption(const Aws::String& value) { SetOption(value); return *this;}
    inline SelectOptionDescription& WithOption(Aws::String&& value) { SetOption(std::move(value)); return *this;}
    inline SelectOptionDescription& WithOption(const char* value) { SetOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the select option.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline SelectOptionDescription& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline SelectOptionDescription& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline SelectOptionDescription& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the option meaning.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SelectOptionDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SelectOptionDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SelectOptionDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
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
