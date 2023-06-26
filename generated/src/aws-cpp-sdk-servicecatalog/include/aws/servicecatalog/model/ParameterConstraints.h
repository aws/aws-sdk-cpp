/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The constraints that the administrator has put on the
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ParameterConstraints">AWS
   * API Reference</a></p>
   */
  class ParameterConstraints
  {
  public:
    AWS_SERVICECATALOG_API ParameterConstraints();
    AWS_SERVICECATALOG_API ParameterConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ParameterConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }


    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }

    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }

    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }

    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }

    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }

    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline ParameterConstraints& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}

    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline ParameterConstraints& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}

    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline ParameterConstraints& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}


    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description, a parameter that has an allowed
     * pattern of <code>[A-Za-z0-9]+</code> displays the following error message when
     * the user specifies an invalid value:</p> <p> <code>Malformed input-Parameter
     * MyParameter must match pattern [A-Za-z0-9]+</code> </p> <p>By adding a
     * constraint description, such as must only contain letters (uppercase and
     * lowercase) and numbers, you can display the following customized error
     * message:</p> <p> <code>Malformed input-Parameter MyParameter must only contain
     * uppercase and lowercase letters and numbers.</code> </p>
     */
    inline const Aws::String& GetConstraintDescription() const{ return m_constraintDescription; }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description, a parameter that has an allowed
     * pattern of <code>[A-Za-z0-9]+</code> displays the following error message when
     * the user specifies an invalid value:</p> <p> <code>Malformed input-Parameter
     * MyParameter must match pattern [A-Za-z0-9]+</code> </p> <p>By adding a
     * constraint description, such as must only contain letters (uppercase and
     * lowercase) and numbers, you can display the following customized error
     * message:</p> <p> <code>Malformed input-Parameter MyParameter must only contain
     * uppercase and lowercase letters and numbers.</code> </p>
     */
    inline bool ConstraintDescriptionHasBeenSet() const { return m_constraintDescriptionHasBeenSet; }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description, a parameter that has an allowed
     * pattern of <code>[A-Za-z0-9]+</code> displays the following error message when
     * the user specifies an invalid value:</p> <p> <code>Malformed input-Parameter
     * MyParameter must match pattern [A-Za-z0-9]+</code> </p> <p>By adding a
     * constraint description, such as must only contain letters (uppercase and
     * lowercase) and numbers, you can display the following customized error
     * message:</p> <p> <code>Malformed input-Parameter MyParameter must only contain
     * uppercase and lowercase letters and numbers.</code> </p>
     */
    inline void SetConstraintDescription(const Aws::String& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = value; }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description, a parameter that has an allowed
     * pattern of <code>[A-Za-z0-9]+</code> displays the following error message when
     * the user specifies an invalid value:</p> <p> <code>Malformed input-Parameter
     * MyParameter must match pattern [A-Za-z0-9]+</code> </p> <p>By adding a
     * constraint description, such as must only contain letters (uppercase and
     * lowercase) and numbers, you can display the following customized error
     * message:</p> <p> <code>Malformed input-Parameter MyParameter must only contain
     * uppercase and lowercase letters and numbers.</code> </p>
     */
    inline void SetConstraintDescription(Aws::String&& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = std::move(value); }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description, a parameter that has an allowed
     * pattern of <code>[A-Za-z0-9]+</code> displays the following error message when
     * the user specifies an invalid value:</p> <p> <code>Malformed input-Parameter
     * MyParameter must match pattern [A-Za-z0-9]+</code> </p> <p>By adding a
     * constraint description, such as must only contain letters (uppercase and
     * lowercase) and numbers, you can display the following customized error
     * message:</p> <p> <code>Malformed input-Parameter MyParameter must only contain
     * uppercase and lowercase letters and numbers.</code> </p>
     */
    inline void SetConstraintDescription(const char* value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription.assign(value); }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description, a parameter that has an allowed
     * pattern of <code>[A-Za-z0-9]+</code> displays the following error message when
     * the user specifies an invalid value:</p> <p> <code>Malformed input-Parameter
     * MyParameter must match pattern [A-Za-z0-9]+</code> </p> <p>By adding a
     * constraint description, such as must only contain letters (uppercase and
     * lowercase) and numbers, you can display the following customized error
     * message:</p> <p> <code>Malformed input-Parameter MyParameter must only contain
     * uppercase and lowercase letters and numbers.</code> </p>
     */
    inline ParameterConstraints& WithConstraintDescription(const Aws::String& value) { SetConstraintDescription(value); return *this;}

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description, a parameter that has an allowed
     * pattern of <code>[A-Za-z0-9]+</code> displays the following error message when
     * the user specifies an invalid value:</p> <p> <code>Malformed input-Parameter
     * MyParameter must match pattern [A-Za-z0-9]+</code> </p> <p>By adding a
     * constraint description, such as must only contain letters (uppercase and
     * lowercase) and numbers, you can display the following customized error
     * message:</p> <p> <code>Malformed input-Parameter MyParameter must only contain
     * uppercase and lowercase letters and numbers.</code> </p>
     */
    inline ParameterConstraints& WithConstraintDescription(Aws::String&& value) { SetConstraintDescription(std::move(value)); return *this;}

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description, a parameter that has an allowed
     * pattern of <code>[A-Za-z0-9]+</code> displays the following error message when
     * the user specifies an invalid value:</p> <p> <code>Malformed input-Parameter
     * MyParameter must match pattern [A-Za-z0-9]+</code> </p> <p>By adding a
     * constraint description, such as must only contain letters (uppercase and
     * lowercase) and numbers, you can display the following customized error
     * message:</p> <p> <code>Malformed input-Parameter MyParameter must only contain
     * uppercase and lowercase letters and numbers.</code> </p>
     */
    inline ParameterConstraints& WithConstraintDescription(const char* value) { SetConstraintDescription(value); return *this;}


    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline const Aws::String& GetMaxLength() const{ return m_maxLength; }

    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }

    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline void SetMaxLength(const Aws::String& value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }

    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline void SetMaxLength(Aws::String&& value) { m_maxLengthHasBeenSet = true; m_maxLength = std::move(value); }

    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline void SetMaxLength(const char* value) { m_maxLengthHasBeenSet = true; m_maxLength.assign(value); }

    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline ParameterConstraints& WithMaxLength(const Aws::String& value) { SetMaxLength(value); return *this;}

    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline ParameterConstraints& WithMaxLength(Aws::String&& value) { SetMaxLength(std::move(value)); return *this;}

    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline ParameterConstraints& WithMaxLength(const char* value) { SetMaxLength(value); return *this;}


    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline const Aws::String& GetMinLength() const{ return m_minLength; }

    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }

    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline void SetMinLength(const Aws::String& value) { m_minLengthHasBeenSet = true; m_minLength = value; }

    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline void SetMinLength(Aws::String&& value) { m_minLengthHasBeenSet = true; m_minLength = std::move(value); }

    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline void SetMinLength(const char* value) { m_minLengthHasBeenSet = true; m_minLength.assign(value); }

    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline ParameterConstraints& WithMinLength(const Aws::String& value) { SetMinLength(value); return *this;}

    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline ParameterConstraints& WithMinLength(Aws::String&& value) { SetMinLength(std::move(value)); return *this;}

    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline ParameterConstraints& WithMinLength(const char* value) { SetMinLength(value); return *this;}


    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline const Aws::String& GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::move(value); }

    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline void SetMaxValue(const char* value) { m_maxValueHasBeenSet = true; m_maxValue.assign(value); }

    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline ParameterConstraints& WithMaxValue(const Aws::String& value) { SetMaxValue(value); return *this;}

    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline ParameterConstraints& WithMaxValue(Aws::String&& value) { SetMaxValue(std::move(value)); return *this;}

    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline ParameterConstraints& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}


    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }

    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = std::move(value); }

    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline void SetMinValue(const char* value) { m_minValueHasBeenSet = true; m_minValue.assign(value); }

    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline ParameterConstraints& WithMinValue(const Aws::String& value) { SetMinValue(value); return *this;}

    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline ParameterConstraints& WithMinValue(Aws::String&& value) { SetMinValue(std::move(value)); return *this;}

    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline ParameterConstraints& WithMinValue(const char* value) { SetMinValue(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet = false;

    Aws::String m_constraintDescription;
    bool m_constraintDescriptionHasBeenSet = false;

    Aws::String m_maxLength;
    bool m_maxLengthHasBeenSet = false;

    Aws::String m_minLength;
    bool m_minLengthHasBeenSet = false;

    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet = false;

    Aws::String m_minValue;
    bool m_minValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
