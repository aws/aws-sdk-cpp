/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ParameterType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Describes a parameter accepted by a test template.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestTemplateParameter">AWS
 * API Reference</a></p>
 */
class TestTemplateParameter {
 public:
  AWS_RESILIENCEHUBV2_API TestTemplateParameter() = default;
  AWS_RESILIENCEHUBV2_API TestTemplateParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestTemplateParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the parameter.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TestTemplateParameter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the parameter.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TestTemplateParameter& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the parameter.</p>
   */
  inline ParameterType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ParameterType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline TestTemplateParameter& WithType(ParameterType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the parameter is required.</p>
   */
  inline bool GetRequired() const { return m_required; }
  inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
  inline void SetRequired(bool value) {
    m_requiredHasBeenSet = true;
    m_required = value;
  }
  inline TestTemplateParameter& WithRequired(bool value) {
    SetRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default value of the parameter.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  TestTemplateParameter& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of values the parameter accepts.</p>
   */
  inline int GetMaxValues() const { return m_maxValues; }
  inline bool MaxValuesHasBeenSet() const { return m_maxValuesHasBeenSet; }
  inline void SetMaxValues(int value) {
    m_maxValuesHasBeenSet = true;
    m_maxValues = value;
  }
  inline TestTemplateParameter& WithMaxValues(int value) {
    SetMaxValues(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  ParameterType m_type{ParameterType::NOT_SET};

  bool m_required{false};

  Aws::String m_defaultValue;

  int m_maxValues{0};
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_requiredHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_maxValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
