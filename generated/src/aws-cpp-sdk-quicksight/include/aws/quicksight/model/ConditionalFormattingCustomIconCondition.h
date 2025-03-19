/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ConditionalFormattingCustomIconOptions.h>
#include <aws/quicksight/model/ConditionalFormattingIconDisplayConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Determines the custom condition for an icon set.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConditionalFormattingCustomIconCondition">AWS
   * API Reference</a></p>
   */
  class ConditionalFormattingCustomIconCondition
  {
  public:
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconCondition() = default;
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expression that determines the condition of the icon set.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    ConditionalFormattingCustomIconCondition& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom icon options for an icon set.</p>
     */
    inline const ConditionalFormattingCustomIconOptions& GetIconOptions() const { return m_iconOptions; }
    inline bool IconOptionsHasBeenSet() const { return m_iconOptionsHasBeenSet; }
    template<typename IconOptionsT = ConditionalFormattingCustomIconOptions>
    void SetIconOptions(IconOptionsT&& value) { m_iconOptionsHasBeenSet = true; m_iconOptions = std::forward<IconOptionsT>(value); }
    template<typename IconOptionsT = ConditionalFormattingCustomIconOptions>
    ConditionalFormattingCustomIconCondition& WithIconOptions(IconOptionsT&& value) { SetIconOptions(std::forward<IconOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the color of the icon.</p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    ConditionalFormattingCustomIconCondition& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the icon display configuration.</p>
     */
    inline const ConditionalFormattingIconDisplayConfiguration& GetDisplayConfiguration() const { return m_displayConfiguration; }
    inline bool DisplayConfigurationHasBeenSet() const { return m_displayConfigurationHasBeenSet; }
    template<typename DisplayConfigurationT = ConditionalFormattingIconDisplayConfiguration>
    void SetDisplayConfiguration(DisplayConfigurationT&& value) { m_displayConfigurationHasBeenSet = true; m_displayConfiguration = std::forward<DisplayConfigurationT>(value); }
    template<typename DisplayConfigurationT = ConditionalFormattingIconDisplayConfiguration>
    ConditionalFormattingCustomIconCondition& WithDisplayConfiguration(DisplayConfigurationT&& value) { SetDisplayConfiguration(std::forward<DisplayConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    ConditionalFormattingCustomIconOptions m_iconOptions;
    bool m_iconOptionsHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    ConditionalFormattingIconDisplayConfiguration m_displayConfiguration;
    bool m_displayConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
