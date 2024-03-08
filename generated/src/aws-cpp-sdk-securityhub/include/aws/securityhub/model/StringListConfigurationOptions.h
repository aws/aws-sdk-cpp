/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> The options for customizing a security control parameter that is a list of
   * strings. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StringListConfigurationOptions">AWS
   * API Reference</a></p>
   */
  class StringListConfigurationOptions
  {
  public:
    AWS_SECURITYHUB_API StringListConfigurationOptions();
    AWS_SECURITYHUB_API StringListConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StringListConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline void SetDefaultValue(const Aws::Vector<Aws::String>& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline void SetDefaultValue(Aws::Vector<Aws::String>&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline StringListConfigurationOptions& WithDefaultValue(const Aws::Vector<Aws::String>& value) { SetDefaultValue(value); return *this;}

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline StringListConfigurationOptions& WithDefaultValue(Aws::Vector<Aws::String>&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline StringListConfigurationOptions& AddDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline StringListConfigurationOptions& AddDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(std::move(value)); return *this; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * strings. </p>
     */
    inline StringListConfigurationOptions& AddDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }


    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * list of strings for a control parameter. </p>
     */
    inline const Aws::String& GetRe2Expression() const{ return m_re2Expression; }

    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * list of strings for a control parameter. </p>
     */
    inline bool Re2ExpressionHasBeenSet() const { return m_re2ExpressionHasBeenSet; }

    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * list of strings for a control parameter. </p>
     */
    inline void SetRe2Expression(const Aws::String& value) { m_re2ExpressionHasBeenSet = true; m_re2Expression = value; }

    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * list of strings for a control parameter. </p>
     */
    inline void SetRe2Expression(Aws::String&& value) { m_re2ExpressionHasBeenSet = true; m_re2Expression = std::move(value); }

    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * list of strings for a control parameter. </p>
     */
    inline void SetRe2Expression(const char* value) { m_re2ExpressionHasBeenSet = true; m_re2Expression.assign(value); }

    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * list of strings for a control parameter. </p>
     */
    inline StringListConfigurationOptions& WithRe2Expression(const Aws::String& value) { SetRe2Expression(value); return *this;}

    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * list of strings for a control parameter. </p>
     */
    inline StringListConfigurationOptions& WithRe2Expression(Aws::String&& value) { SetRe2Expression(std::move(value)); return *this;}

    /**
     * <p> An RE2 regular expression that Security Hub uses to validate a user-provided
     * list of strings for a control parameter. </p>
     */
    inline StringListConfigurationOptions& WithRe2Expression(const char* value) { SetRe2Expression(value); return *this;}


    /**
     * <p> The maximum number of list items that a string list control parameter can
     * accept. </p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p> The maximum number of list items that a string list control parameter can
     * accept. </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p> The maximum number of list items that a string list control parameter can
     * accept. </p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p> The maximum number of list items that a string list control parameter can
     * accept. </p>
     */
    inline StringListConfigurationOptions& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline const Aws::String& GetExpressionDescription() const{ return m_expressionDescription; }

    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline bool ExpressionDescriptionHasBeenSet() const { return m_expressionDescriptionHasBeenSet; }

    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline void SetExpressionDescription(const Aws::String& value) { m_expressionDescriptionHasBeenSet = true; m_expressionDescription = value; }

    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline void SetExpressionDescription(Aws::String&& value) { m_expressionDescriptionHasBeenSet = true; m_expressionDescription = std::move(value); }

    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline void SetExpressionDescription(const char* value) { m_expressionDescriptionHasBeenSet = true; m_expressionDescription.assign(value); }

    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline StringListConfigurationOptions& WithExpressionDescription(const Aws::String& value) { SetExpressionDescription(value); return *this;}

    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline StringListConfigurationOptions& WithExpressionDescription(Aws::String&& value) { SetExpressionDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the RE2 regular expression. </p>
     */
    inline StringListConfigurationOptions& WithExpressionDescription(const char* value) { SetExpressionDescription(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_re2Expression;
    bool m_re2ExpressionHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_expressionDescription;
    bool m_expressionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
