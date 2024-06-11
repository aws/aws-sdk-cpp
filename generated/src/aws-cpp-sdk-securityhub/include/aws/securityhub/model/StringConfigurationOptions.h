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
    AWS_SECURITYHUB_API StringConfigurationOptions();
    AWS_SECURITYHUB_API StringConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StringConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Security Hub default value for a control parameter that is a string.
     * </p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline StringConfigurationOptions& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline StringConfigurationOptions& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline StringConfigurationOptions& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * control parameter string. </p>
     */
    inline const Aws::String& GetRe2Expression() const{ return m_re2Expression; }
    inline bool Re2ExpressionHasBeenSet() const { return m_re2ExpressionHasBeenSet; }
    inline void SetRe2Expression(const Aws::String& value) { m_re2ExpressionHasBeenSet = true; m_re2Expression = value; }
    inline void SetRe2Expression(Aws::String&& value) { m_re2ExpressionHasBeenSet = true; m_re2Expression = std::move(value); }
    inline void SetRe2Expression(const char* value) { m_re2ExpressionHasBeenSet = true; m_re2Expression.assign(value); }
    inline StringConfigurationOptions& WithRe2Expression(const Aws::String& value) { SetRe2Expression(value); return *this;}
    inline StringConfigurationOptions& WithRe2Expression(Aws::String&& value) { SetRe2Expression(std::move(value)); return *this;}
    inline StringConfigurationOptions& WithRe2Expression(const char* value) { SetRe2Expression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline const Aws::String& GetExpressionDescription() const{ return m_expressionDescription; }
    inline bool ExpressionDescriptionHasBeenSet() const { return m_expressionDescriptionHasBeenSet; }
    inline void SetExpressionDescription(const Aws::String& value) { m_expressionDescriptionHasBeenSet = true; m_expressionDescription = value; }
    inline void SetExpressionDescription(Aws::String&& value) { m_expressionDescriptionHasBeenSet = true; m_expressionDescription = std::move(value); }
    inline void SetExpressionDescription(const char* value) { m_expressionDescriptionHasBeenSet = true; m_expressionDescription.assign(value); }
    inline StringConfigurationOptions& WithExpressionDescription(const Aws::String& value) { SetExpressionDescription(value); return *this;}
    inline StringConfigurationOptions& WithExpressionDescription(Aws::String&& value) { SetExpressionDescription(std::move(value)); return *this;}
    inline StringConfigurationOptions& WithExpressionDescription(const char* value) { SetExpressionDescription(value); return *this;}
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
