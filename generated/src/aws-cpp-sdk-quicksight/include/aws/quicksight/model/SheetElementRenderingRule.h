/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SheetElementConfigurationOverrides.h>
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
   * <p>The rendering rules of a sheet that uses a free-form layout.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetElementRenderingRule">AWS
   * API Reference</a></p>
   */
  class SheetElementRenderingRule
  {
  public:
    AWS_QUICKSIGHT_API SheetElementRenderingRule() = default;
    AWS_QUICKSIGHT_API SheetElementRenderingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetElementRenderingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    SheetElementRenderingRule& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The override configuration of the rendering rules of a sheet.</p>
     */
    inline const SheetElementConfigurationOverrides& GetConfigurationOverrides() const { return m_configurationOverrides; }
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }
    template<typename ConfigurationOverridesT = SheetElementConfigurationOverrides>
    void SetConfigurationOverrides(ConfigurationOverridesT&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::forward<ConfigurationOverridesT>(value); }
    template<typename ConfigurationOverridesT = SheetElementConfigurationOverrides>
    SheetElementRenderingRule& WithConfigurationOverrides(ConfigurationOverridesT&& value) { SetConfigurationOverrides(std::forward<ConfigurationOverridesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    SheetElementConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
