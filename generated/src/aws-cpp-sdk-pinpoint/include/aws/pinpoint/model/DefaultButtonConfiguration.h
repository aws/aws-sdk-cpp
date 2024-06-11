/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ButtonAction.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Default button configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DefaultButtonConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultButtonConfiguration
  {
  public:
    AWS_PINPOINT_API DefaultButtonConfiguration();
    AWS_PINPOINT_API DefaultButtonConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API DefaultButtonConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The background color of the button.</p>
     */
    inline const Aws::String& GetBackgroundColor() const{ return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    inline void SetBackgroundColor(const Aws::String& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }
    inline void SetBackgroundColor(Aws::String&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }
    inline void SetBackgroundColor(const char* value) { m_backgroundColorHasBeenSet = true; m_backgroundColor.assign(value); }
    inline DefaultButtonConfiguration& WithBackgroundColor(const Aws::String& value) { SetBackgroundColor(value); return *this;}
    inline DefaultButtonConfiguration& WithBackgroundColor(Aws::String&& value) { SetBackgroundColor(std::move(value)); return *this;}
    inline DefaultButtonConfiguration& WithBackgroundColor(const char* value) { SetBackgroundColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The border radius of the button.</p>
     */
    inline int GetBorderRadius() const{ return m_borderRadius; }
    inline bool BorderRadiusHasBeenSet() const { return m_borderRadiusHasBeenSet; }
    inline void SetBorderRadius(int value) { m_borderRadiusHasBeenSet = true; m_borderRadius = value; }
    inline DefaultButtonConfiguration& WithBorderRadius(int value) { SetBorderRadius(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Action triggered by the button.</p>
     */
    inline const ButtonAction& GetButtonAction() const{ return m_buttonAction; }
    inline bool ButtonActionHasBeenSet() const { return m_buttonActionHasBeenSet; }
    inline void SetButtonAction(const ButtonAction& value) { m_buttonActionHasBeenSet = true; m_buttonAction = value; }
    inline void SetButtonAction(ButtonAction&& value) { m_buttonActionHasBeenSet = true; m_buttonAction = std::move(value); }
    inline DefaultButtonConfiguration& WithButtonAction(const ButtonAction& value) { SetButtonAction(value); return *this;}
    inline DefaultButtonConfiguration& WithButtonAction(ButtonAction&& value) { SetButtonAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Button destination.</p>
     */
    inline const Aws::String& GetLink() const{ return m_link; }
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
    inline void SetLink(const Aws::String& value) { m_linkHasBeenSet = true; m_link = value; }
    inline void SetLink(Aws::String&& value) { m_linkHasBeenSet = true; m_link = std::move(value); }
    inline void SetLink(const char* value) { m_linkHasBeenSet = true; m_link.assign(value); }
    inline DefaultButtonConfiguration& WithLink(const Aws::String& value) { SetLink(value); return *this;}
    inline DefaultButtonConfiguration& WithLink(Aws::String&& value) { SetLink(std::move(value)); return *this;}
    inline DefaultButtonConfiguration& WithLink(const char* value) { SetLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Button text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline DefaultButtonConfiguration& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline DefaultButtonConfiguration& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline DefaultButtonConfiguration& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text color of the button.</p>
     */
    inline const Aws::String& GetTextColor() const{ return m_textColor; }
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
    inline void SetTextColor(const Aws::String& value) { m_textColorHasBeenSet = true; m_textColor = value; }
    inline void SetTextColor(Aws::String&& value) { m_textColorHasBeenSet = true; m_textColor = std::move(value); }
    inline void SetTextColor(const char* value) { m_textColorHasBeenSet = true; m_textColor.assign(value); }
    inline DefaultButtonConfiguration& WithTextColor(const Aws::String& value) { SetTextColor(value); return *this;}
    inline DefaultButtonConfiguration& WithTextColor(Aws::String&& value) { SetTextColor(std::move(value)); return *this;}
    inline DefaultButtonConfiguration& WithTextColor(const char* value) { SetTextColor(value); return *this;}
    ///@}
  private:

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_borderRadius;
    bool m_borderRadiusHasBeenSet = false;

    ButtonAction m_buttonAction;
    bool m_buttonActionHasBeenSet = false;

    Aws::String m_link;
    bool m_linkHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_textColor;
    bool m_textColorHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
