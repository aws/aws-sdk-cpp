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
    AWS_QUICKSIGHT_API SheetElementRenderingRule();
    AWS_QUICKSIGHT_API SheetElementRenderingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetElementRenderingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline SheetElementRenderingRule& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline SheetElementRenderingRule& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The expression of the rendering rules of a sheet.</p>
     */
    inline SheetElementRenderingRule& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The override configuration of the rendering rules of a sheet.</p>
     */
    inline const SheetElementConfigurationOverrides& GetConfigurationOverrides() const{ return m_configurationOverrides; }

    /**
     * <p>The override configuration of the rendering rules of a sheet.</p>
     */
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }

    /**
     * <p>The override configuration of the rendering rules of a sheet.</p>
     */
    inline void SetConfigurationOverrides(const SheetElementConfigurationOverrides& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = value; }

    /**
     * <p>The override configuration of the rendering rules of a sheet.</p>
     */
    inline void SetConfigurationOverrides(SheetElementConfigurationOverrides&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::move(value); }

    /**
     * <p>The override configuration of the rendering rules of a sheet.</p>
     */
    inline SheetElementRenderingRule& WithConfigurationOverrides(const SheetElementConfigurationOverrides& value) { SetConfigurationOverrides(value); return *this;}

    /**
     * <p>The override configuration of the rendering rules of a sheet.</p>
     */
    inline SheetElementRenderingRule& WithConfigurationOverrides(SheetElementConfigurationOverrides&& value) { SetConfigurationOverrides(std::move(value)); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    SheetElementConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
