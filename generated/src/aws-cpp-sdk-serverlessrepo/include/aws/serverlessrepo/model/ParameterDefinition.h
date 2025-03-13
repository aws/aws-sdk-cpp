/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>Parameters supported by the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ParameterDefinition">AWS
   * API Reference</a></p>
   */
  class ParameterDefinition
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterDefinition() = default;
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline const Aws::String& GetAllowedPattern() const { return m_allowedPattern; }
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }
    template<typename AllowedPatternT = Aws::String>
    void SetAllowedPattern(AllowedPatternT&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::forward<AllowedPatternT>(value); }
    template<typename AllowedPatternT = Aws::String>
    ParameterDefinition& WithAllowedPattern(AllowedPatternT&& value) { SetAllowedPattern(std::forward<AllowedPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    ParameterDefinition& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    template<typename AllowedValuesT = Aws::String>
    ParameterDefinition& AddAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline const Aws::String& GetConstraintDescription() const { return m_constraintDescription; }
    inline bool ConstraintDescriptionHasBeenSet() const { return m_constraintDescriptionHasBeenSet; }
    template<typename ConstraintDescriptionT = Aws::String>
    void SetConstraintDescription(ConstraintDescriptionT&& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = std::forward<ConstraintDescriptionT>(value); }
    template<typename ConstraintDescriptionT = Aws::String>
    ParameterDefinition& WithConstraintDescription(ConstraintDescriptionT&& value) { SetConstraintDescription(std::forward<ConstraintDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    ParameterDefinition& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ParameterDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value that determines the largest number of characters that you
     * want to allow for String types.</p>
     */
    inline int GetMaxLength() const { return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline ParameterDefinition& WithMaxLength(int value) { SetMaxLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value that determines the largest numeric value that you want to
     * allow for Number types.</p>
     */
    inline int GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline ParameterDefinition& WithMaxValue(int value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value that determines the smallest number of characters that you
     * want to allow for String types.</p>
     */
    inline int GetMinLength() const { return m_minLength; }
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
    inline void SetMinLength(int value) { m_minLengthHasBeenSet = true; m_minLength = value; }
    inline ParameterDefinition& WithMinLength(int value) { SetMinLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value that determines the smallest numeric value that you want to
     * allow for Number types.</p>
     */
    inline int GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline ParameterDefinition& WithMinValue(int value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ParameterDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to mask the parameter value whenever anyone makes a call that
     * describes the stack. If you set the
 value to true, the parameter value is
     * masked with asterisks (*****).</p>
     */
    inline bool GetNoEcho() const { return m_noEcho; }
    inline bool NoEchoHasBeenSet() const { return m_noEchoHasBeenSet; }
    inline void SetNoEcho(bool value) { m_noEchoHasBeenSet = true; m_noEcho = value; }
    inline ParameterDefinition& WithNoEcho(bool value) { SetNoEcho(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferencedByResources() const { return m_referencedByResources; }
    inline bool ReferencedByResourcesHasBeenSet() const { return m_referencedByResourcesHasBeenSet; }
    template<typename ReferencedByResourcesT = Aws::Vector<Aws::String>>
    void SetReferencedByResources(ReferencedByResourcesT&& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources = std::forward<ReferencedByResourcesT>(value); }
    template<typename ReferencedByResourcesT = Aws::Vector<Aws::String>>
    ParameterDefinition& WithReferencedByResources(ReferencedByResourcesT&& value) { SetReferencedByResources(std::forward<ReferencedByResourcesT>(value)); return *this;}
    template<typename ReferencedByResourcesT = Aws::String>
    ParameterDefinition& AddReferencedByResources(ReferencedByResourcesT&& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources.emplace_back(std::forward<ReferencedByResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ParameterDefinition& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_constraintDescription;
    bool m_constraintDescriptionHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_maxLength{0};
    bool m_maxLengthHasBeenSet = false;

    int m_maxValue{0};
    bool m_maxValueHasBeenSet = false;

    int m_minLength{0};
    bool m_minLengthHasBeenSet = false;

    int m_minValue{0};
    bool m_minValueHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_noEcho{false};
    bool m_noEchoHasBeenSet = false;

    Aws::Vector<Aws::String> m_referencedByResources;
    bool m_referencedByResourcesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
