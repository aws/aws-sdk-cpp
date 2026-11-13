/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/PermissionTemplateParameterType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RAM {
namespace Model {

/**
 * <p>Contains the declaration of a template parameter for a customer managed
 * permission. When returned in the context of a permission association, it also
 * includes the values assigned to that parameter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/PermissionTemplateParameter">AWS
 * API Reference</a></p>
 */
class PermissionTemplateParameter {
 public:
  AWS_RAM_API PermissionTemplateParameter() = default;
  AWS_RAM_API PermissionTemplateParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API PermissionTemplateParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the template parameter.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PermissionTemplateParameter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the template parameter. This can be one of the following
   * values:</p> <ul> <li> <p> <code>STRING</code> – A single string value.</p> </li>
   * <li> <p> <code>STRING_LIST</code> – One or more string values.</p> </li> </ul>
   */
  inline PermissionTemplateParameterType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PermissionTemplateParameterType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PermissionTemplateParameter& WithType(PermissionTemplateParameterType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the template parameter.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PermissionTemplateParameter& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values assigned to this template parameter in the context of a permission
   * association. This field is present only when the parameter has been assigned
   * values (for example, in the response from <a>ListPermissionAssociations</a> or
   * <a>ListResourceSharePermissions</a>).</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  PermissionTemplateParameter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  PermissionTemplateParameter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  PermissionTemplateParameterType m_type{PermissionTemplateParameterType::NOT_SET};

  Aws::String m_description;

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
