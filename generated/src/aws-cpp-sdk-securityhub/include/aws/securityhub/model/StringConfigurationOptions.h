/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The options for customizing a security control parameter that is a string.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StringConfigurationOptions">AWS
   * API Reference</a></p>
   */
  class StringConfigurationOptions
  {
  public:
    AWS_SECURITYHUB_API StringConfigurationOptions() = default;
    AWS_SECURITYHUB_API StringConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StringConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Security Hub default value for a control parameter that is a string.
     * </p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    StringConfigurationOptions& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * control parameter string. </p>
     */
    inline const Aws::String& GetRe2Expression() const { return m_re2Expression; }
    inline bool Re2ExpressionHasBeenSet() const { return m_re2ExpressionHasBeenSet; }
    template<typename Re2ExpressionT = Aws::String>
    void SetRe2Expression(Re2ExpressionT&& value) { m_re2ExpressionHasBeenSet = true; m_re2Expression = std::forward<Re2ExpressionT>(value); }
    template<typename Re2ExpressionT = Aws::String>
    StringConfigurationOptions& WithRe2Expression(Re2ExpressionT&& value) { SetRe2Expression(std::forward<Re2ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline const Aws::String& GetExpressionDescription() const { return m_expressionDescription; }
    inline bool ExpressionDescriptionHasBeenSet() const { return m_expressionDescriptionHasBeenSet; }
    template<typename ExpressionDescriptionT = Aws::String>
    void SetExpressionDescription(ExpressionDescriptionT&& value) { m_expressionDescriptionHasBeenSet = true; m_expressionDescription = std::forward<ExpressionDescriptionT>(value); }
    template<typename ExpressionDescriptionT = Aws::String>
    StringConfigurationOptions& WithExpressionDescription(ExpressionDescriptionT&& value) { SetExpressionDescription(std::forward<ExpressionDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_re2Expression;
    bool m_re2ExpressionHasBeenSet = false;

    Aws::String m_expressionDescription;
    bool m_expressionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
