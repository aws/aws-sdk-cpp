/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ToolInputSchema.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>Specification for a tool that acts can invoke, including its name,
 * description, and input schema.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ToolSpec">AWS
 * API Reference</a></p>
 */
class ToolSpec {
 public:
  AWS_NOVAACT_API ToolSpec() = default;
  AWS_NOVAACT_API ToolSpec(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API ToolSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique name of the tool that acts will use to invoke it.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ToolSpec& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of what the tool does and how it should be used.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ToolSpec& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON schema that defines the expected input format for the tool.</p>
   */
  inline const ToolInputSchema& GetInputSchema() const { return m_inputSchema; }
  inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
  template <typename InputSchemaT = ToolInputSchema>
  void SetInputSchema(InputSchemaT&& value) {
    m_inputSchemaHasBeenSet = true;
    m_inputSchema = std::forward<InputSchemaT>(value);
  }
  template <typename InputSchemaT = ToolInputSchema>
  ToolSpec& WithInputSchema(InputSchemaT&& value) {
    SetInputSchema(std::forward<InputSchemaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  ToolInputSchema m_inputSchema;
  bool m_inputSchemaHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
