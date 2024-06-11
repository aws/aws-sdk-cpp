﻿/**
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
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconCondition();
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expression that determines the condition of the icon set.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline ConditionalFormattingCustomIconCondition& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline ConditionalFormattingCustomIconCondition& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline ConditionalFormattingCustomIconCondition& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom icon options for an icon set.</p>
     */
    inline const ConditionalFormattingCustomIconOptions& GetIconOptions() const{ return m_iconOptions; }
    inline bool IconOptionsHasBeenSet() const { return m_iconOptionsHasBeenSet; }
    inline void SetIconOptions(const ConditionalFormattingCustomIconOptions& value) { m_iconOptionsHasBeenSet = true; m_iconOptions = value; }
    inline void SetIconOptions(ConditionalFormattingCustomIconOptions&& value) { m_iconOptionsHasBeenSet = true; m_iconOptions = std::move(value); }
    inline ConditionalFormattingCustomIconCondition& WithIconOptions(const ConditionalFormattingCustomIconOptions& value) { SetIconOptions(value); return *this;}
    inline ConditionalFormattingCustomIconCondition& WithIconOptions(ConditionalFormattingCustomIconOptions&& value) { SetIconOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the color of the icon.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline ConditionalFormattingCustomIconCondition& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline ConditionalFormattingCustomIconCondition& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline ConditionalFormattingCustomIconCondition& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the icon display configuration.</p>
     */
    inline const ConditionalFormattingIconDisplayConfiguration& GetDisplayConfiguration() const{ return m_displayConfiguration; }
    inline bool DisplayConfigurationHasBeenSet() const { return m_displayConfigurationHasBeenSet; }
    inline void SetDisplayConfiguration(const ConditionalFormattingIconDisplayConfiguration& value) { m_displayConfigurationHasBeenSet = true; m_displayConfiguration = value; }
    inline void SetDisplayConfiguration(ConditionalFormattingIconDisplayConfiguration&& value) { m_displayConfigurationHasBeenSet = true; m_displayConfiguration = std::move(value); }
    inline ConditionalFormattingCustomIconCondition& WithDisplayConfiguration(const ConditionalFormattingIconDisplayConfiguration& value) { SetDisplayConfiguration(value); return *this;}
    inline ConditionalFormattingCustomIconCondition& WithDisplayConfiguration(ConditionalFormattingIconDisplayConfiguration&& value) { SetDisplayConfiguration(std::move(value)); return *this;}
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
