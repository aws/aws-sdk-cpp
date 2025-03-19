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
    AWS_PINPOINT_API DefaultButtonConfiguration() = default;
    AWS_PINPOINT_API DefaultButtonConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API DefaultButtonConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The background color of the button.</p>
     */
    inline const Aws::String& GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    template<typename BackgroundColorT = Aws::String>
    void SetBackgroundColor(BackgroundColorT&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::forward<BackgroundColorT>(value); }
    template<typename BackgroundColorT = Aws::String>
    DefaultButtonConfiguration& WithBackgroundColor(BackgroundColorT&& value) { SetBackgroundColor(std::forward<BackgroundColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The border radius of the button.</p>
     */
    inline int GetBorderRadius() const { return m_borderRadius; }
    inline bool BorderRadiusHasBeenSet() const { return m_borderRadiusHasBeenSet; }
    inline void SetBorderRadius(int value) { m_borderRadiusHasBeenSet = true; m_borderRadius = value; }
    inline DefaultButtonConfiguration& WithBorderRadius(int value) { SetBorderRadius(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Action triggered by the button.</p>
     */
    inline ButtonAction GetButtonAction() const { return m_buttonAction; }
    inline bool ButtonActionHasBeenSet() const { return m_buttonActionHasBeenSet; }
    inline void SetButtonAction(ButtonAction value) { m_buttonActionHasBeenSet = true; m_buttonAction = value; }
    inline DefaultButtonConfiguration& WithButtonAction(ButtonAction value) { SetButtonAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Button destination.</p>
     */
    inline const Aws::String& GetLink() const { return m_link; }
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
    template<typename LinkT = Aws::String>
    void SetLink(LinkT&& value) { m_linkHasBeenSet = true; m_link = std::forward<LinkT>(value); }
    template<typename LinkT = Aws::String>
    DefaultButtonConfiguration& WithLink(LinkT&& value) { SetLink(std::forward<LinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Button text.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    DefaultButtonConfiguration& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text color of the button.</p>
     */
    inline const Aws::String& GetTextColor() const { return m_textColor; }
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
    template<typename TextColorT = Aws::String>
    void SetTextColor(TextColorT&& value) { m_textColorHasBeenSet = true; m_textColor = std::forward<TextColorT>(value); }
    template<typename TextColorT = Aws::String>
    DefaultButtonConfiguration& WithTextColor(TextColorT&& value) { SetTextColor(std::forward<TextColorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_borderRadius{0};
    bool m_borderRadiusHasBeenSet = false;

    ButtonAction m_buttonAction{ButtonAction::NOT_SET};
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
