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


    ///@{
    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline ParameterConstraints& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}
    inline ParameterConstraints& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline ParameterConstraints& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    inline ParameterConstraints& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }
    inline ParameterConstraints& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }
    inline ParameterConstraints& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}
    inline ParameterConstraints& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}
    inline ParameterConstraints& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}
    ///@}

    ///@{
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
    inline bool ConstraintDescriptionHasBeenSet() const { return m_constraintDescriptionHasBeenSet; }
    inline void SetConstraintDescription(const Aws::String& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = value; }
    inline void SetConstraintDescription(Aws::String&& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = std::move(value); }
    inline void SetConstraintDescription(const char* value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription.assign(value); }
    inline ParameterConstraints& WithConstraintDescription(const Aws::String& value) { SetConstraintDescription(value); return *this;}
    inline ParameterConstraints& WithConstraintDescription(Aws::String&& value) { SetConstraintDescription(std::move(value)); return *this;}
    inline ParameterConstraints& WithConstraintDescription(const char* value) { SetConstraintDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline const Aws::String& GetMaxLength() const{ return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(const Aws::String& value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline void SetMaxLength(Aws::String&& value) { m_maxLengthHasBeenSet = true; m_maxLength = std::move(value); }
    inline void SetMaxLength(const char* value) { m_maxLengthHasBeenSet = true; m_maxLength.assign(value); }
    inline ParameterConstraints& WithMaxLength(const Aws::String& value) { SetMaxLength(value); return *this;}
    inline ParameterConstraints& WithMaxLength(Aws::String&& value) { SetMaxLength(std::move(value)); return *this;}
    inline ParameterConstraints& WithMaxLength(const char* value) { SetMaxLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline const Aws::String& GetMinLength() const{ return m_minLength; }
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
    inline void SetMinLength(const Aws::String& value) { m_minLengthHasBeenSet = true; m_minLength = value; }
    inline void SetMinLength(Aws::String&& value) { m_minLengthHasBeenSet = true; m_minLength = std::move(value); }
    inline void SetMinLength(const char* value) { m_minLengthHasBeenSet = true; m_minLength.assign(value); }
    inline ParameterConstraints& WithMinLength(const Aws::String& value) { SetMinLength(value); return *this;}
    inline ParameterConstraints& WithMinLength(Aws::String&& value) { SetMinLength(std::move(value)); return *this;}
    inline ParameterConstraints& WithMinLength(const char* value) { SetMinLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline const Aws::String& GetMaxValue() const{ return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::move(value); }
    inline void SetMaxValue(const char* value) { m_maxValueHasBeenSet = true; m_maxValue.assign(value); }
    inline ParameterConstraints& WithMaxValue(const Aws::String& value) { SetMaxValue(value); return *this;}
    inline ParameterConstraints& WithMaxValue(Aws::String&& value) { SetMaxValue(std::move(value)); return *this;}
    inline ParameterConstraints& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = std::move(value); }
    inline void SetMinValue(const char* value) { m_minValueHasBeenSet = true; m_minValue.assign(value); }
    inline ParameterConstraints& WithMinValue(const Aws::String& value) { SetMinValue(value); return *this;}
    inline ParameterConstraints& WithMinValue(Aws::String&& value) { SetMinValue(std::move(value)); return *this;}
    inline ParameterConstraints& WithMinValue(const char* value) { SetMinValue(value); return *this;}
    ///@}
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
