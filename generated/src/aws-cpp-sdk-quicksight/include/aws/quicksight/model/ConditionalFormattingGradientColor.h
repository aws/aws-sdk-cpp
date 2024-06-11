/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GradientColor.h>
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
   * <p>Formatting configuration for gradient color.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConditionalFormattingGradientColor">AWS
   * API Reference</a></p>
   */
  class ConditionalFormattingGradientColor
  {
  public:
    AWS_QUICKSIGHT_API ConditionalFormattingGradientColor();
    AWS_QUICKSIGHT_API ConditionalFormattingGradientColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingGradientColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expression that determines the formatting configuration for gradient
     * color.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline ConditionalFormattingGradientColor& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline ConditionalFormattingGradientColor& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline ConditionalFormattingGradientColor& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the color.</p>
     */
    inline const GradientColor& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const GradientColor& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(GradientColor&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline ConditionalFormattingGradientColor& WithColor(const GradientColor& value) { SetColor(value); return *this;}
    inline ConditionalFormattingGradientColor& WithColor(GradientColor&& value) { SetColor(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    GradientColor m_color;
    bool m_colorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
