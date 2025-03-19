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
    AWS_SERVICECATALOG_API ParameterConstraints() = default;
    AWS_SERVICECATALOG_API ParameterConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ParameterConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    ParameterConstraints& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    template<typename AllowedValuesT = Aws::String>
    ParameterConstraints& AddAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A regular expression that represents the patterns that allow for
     * <code>String</code> types. The pattern must match the entire parameter value
     * provided.</p>
     */
    inline const Aws::String& GetAllowedPattern() const { return m_allowedPattern; }
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }
    template<typename AllowedPatternT = Aws::String>
    void SetAllowedPattern(AllowedPatternT&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::forward<AllowedPatternT>(value); }
    template<typename AllowedPatternT = Aws::String>
    ParameterConstraints& WithAllowedPattern(AllowedPatternT&& value) { SetAllowedPattern(std::forward<AllowedPatternT>(value)); return *this;}
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
    inline const Aws::String& GetConstraintDescription() const { return m_constraintDescription; }
    inline bool ConstraintDescriptionHasBeenSet() const { return m_constraintDescriptionHasBeenSet; }
    template<typename ConstraintDescriptionT = Aws::String>
    void SetConstraintDescription(ConstraintDescriptionT&& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = std::forward<ConstraintDescriptionT>(value); }
    template<typename ConstraintDescriptionT = Aws::String>
    ParameterConstraints& WithConstraintDescription(ConstraintDescriptionT&& value) { SetConstraintDescription(std::forward<ConstraintDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value that determines the largest number of characters you want to
     * allow for <code>String</code> types. </p>
     */
    inline const Aws::String& GetMaxLength() const { return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    template<typename MaxLengthT = Aws::String>
    void SetMaxLength(MaxLengthT&& value) { m_maxLengthHasBeenSet = true; m_maxLength = std::forward<MaxLengthT>(value); }
    template<typename MaxLengthT = Aws::String>
    ParameterConstraints& WithMaxLength(MaxLengthT&& value) { SetMaxLength(std::forward<MaxLengthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value that determines the smallest number of characters you want
     * to allow for <code>String</code> types.</p>
     */
    inline const Aws::String& GetMinLength() const { return m_minLength; }
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
    template<typename MinLengthT = Aws::String>
    void SetMinLength(MinLengthT&& value) { m_minLengthHasBeenSet = true; m_minLength = std::forward<MinLengthT>(value); }
    template<typename MinLengthT = Aws::String>
    ParameterConstraints& WithMinLength(MinLengthT&& value) { SetMinLength(std::forward<MinLengthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value that determines the largest numeric value you want to allow
     * for <code>Number</code> types.</p>
     */
    inline const Aws::String& GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    template<typename MaxValueT = Aws::String>
    void SetMaxValue(MaxValueT&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::forward<MaxValueT>(value); }
    template<typename MaxValueT = Aws::String>
    ParameterConstraints& WithMaxValue(MaxValueT&& value) { SetMaxValue(std::forward<MaxValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value that determines the smallest numeric value you want to allow
     * for <code>Number</code> types. </p>
     */
    inline const Aws::String& GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    template<typename MinValueT = Aws::String>
    void SetMinValue(MinValueT&& value) { m_minValueHasBeenSet = true; m_minValue = std::forward<MinValueT>(value); }
    template<typename MinValueT = Aws::String>
    ParameterConstraints& WithMinValue(MinValueT&& value) { SetMinValue(std::forward<MinValueT>(value)); return *this;}
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
