/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Describes a template parameter declaration for a customer managed permission.
 * Each declaration defines a named placeholder that can be used in the
 * permission's policy template.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/PermissionTemplateParameterDeclaration">AWS
 * API Reference</a></p>
 */
class PermissionTemplateParameterDeclaration {
 public:
  AWS_RAM_API PermissionTemplateParameterDeclaration() = default;
  AWS_RAM_API PermissionTemplateParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API PermissionTemplateParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the template parameter. This name is used as the placeholder in
   * the policy template using the syntax <code>@{parameterName}</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PermissionTemplateParameterDeclaration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the template parameter. This can be one of the following
   * values:</p> <ul> <li> <p> <code>STRING</code> – A single string value that is
   * substituted directly into the template.</p> </li> <li> <p>
   * <code>STRING_LIST</code> – One or more string values that expand to an array in
   * the rendered policy.</p> </li> </ul>
   */
  inline PermissionTemplateParameterType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PermissionTemplateParameterType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PermissionTemplateParameterDeclaration& WithType(PermissionTemplateParameterType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the template parameter that helps consumers understand what
   * value to provide.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PermissionTemplateParameterDeclaration& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  PermissionTemplateParameterType m_type{PermissionTemplateParameterType::NOT_SET};

  Aws::String m_description;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
