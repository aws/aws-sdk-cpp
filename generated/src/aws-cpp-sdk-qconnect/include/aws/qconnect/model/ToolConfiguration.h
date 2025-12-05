/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/Annotation.h>
#include <aws/qconnect/model/ToolInstruction.h>
#include <aws/qconnect/model/ToolOutputFilter.h>
#include <aws/qconnect/model/ToolOverrideInputValue.h>
#include <aws/qconnect/model/ToolType.h>
#include <aws/qconnect/model/UserInteractionConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Configuration settings for a tool used by AI Agents.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ToolConfiguration">AWS
 * API Reference</a></p>
 */
class ToolConfiguration {
 public:
  AWS_QCONNECT_API ToolConfiguration() = default;
  AWS_QCONNECT_API ToolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ToolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the tool.</p>
   */
  inline const Aws::String& GetToolName() const { return m_toolName; }
  inline bool ToolNameHasBeenSet() const { return m_toolNameHasBeenSet; }
  template <typename ToolNameT = Aws::String>
  void SetToolName(ToolNameT&& value) {
    m_toolNameHasBeenSet = true;
    m_toolName = std::forward<ToolNameT>(value);
  }
  template <typename ToolNameT = Aws::String>
  ToolConfiguration& WithToolName(ToolNameT&& value) {
    SetToolName(std::forward<ToolNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the tool.</p>
   */
  inline ToolType GetToolType() const { return m_toolType; }
  inline bool ToolTypeHasBeenSet() const { return m_toolTypeHasBeenSet; }
  inline void SetToolType(ToolType value) {
    m_toolTypeHasBeenSet = true;
    m_toolType = value;
  }
  inline ToolConfiguration& WithToolType(ToolType value) {
    SetToolType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the tool configuration.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  ToolConfiguration& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the tool, for example toolName from Model Context Provider
   * server.</p>
   */
  inline const Aws::String& GetToolId() const { return m_toolId; }
  inline bool ToolIdHasBeenSet() const { return m_toolIdHasBeenSet; }
  template <typename ToolIdT = Aws::String>
  void SetToolId(ToolIdT&& value) {
    m_toolIdHasBeenSet = true;
    m_toolId = std::forward<ToolIdT>(value);
  }
  template <typename ToolIdT = Aws::String>
  ToolConfiguration& WithToolId(ToolIdT&& value) {
    SetToolId(std::forward<ToolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the tool configuration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ToolConfiguration& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions for using the tool.</p>
   */
  inline const ToolInstruction& GetInstruction() const { return m_instruction; }
  inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
  template <typename InstructionT = ToolInstruction>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = ToolInstruction>
  ToolConfiguration& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Override input values for the tool configuration.</p>
   */
  inline const Aws::Vector<ToolOverrideInputValue>& GetOverrideInputValues() const { return m_overrideInputValues; }
  inline bool OverrideInputValuesHasBeenSet() const { return m_overrideInputValuesHasBeenSet; }
  template <typename OverrideInputValuesT = Aws::Vector<ToolOverrideInputValue>>
  void SetOverrideInputValues(OverrideInputValuesT&& value) {
    m_overrideInputValuesHasBeenSet = true;
    m_overrideInputValues = std::forward<OverrideInputValuesT>(value);
  }
  template <typename OverrideInputValuesT = Aws::Vector<ToolOverrideInputValue>>
  ToolConfiguration& WithOverrideInputValues(OverrideInputValuesT&& value) {
    SetOverrideInputValues(std::forward<OverrideInputValuesT>(value));
    return *this;
  }
  template <typename OverrideInputValuesT = ToolOverrideInputValue>
  ToolConfiguration& AddOverrideInputValues(OverrideInputValuesT&& value) {
    m_overrideInputValuesHasBeenSet = true;
    m_overrideInputValues.emplace_back(std::forward<OverrideInputValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output filters applies to the tool result.</p>
   */
  inline const Aws::Vector<ToolOutputFilter>& GetOutputFilters() const { return m_outputFilters; }
  inline bool OutputFiltersHasBeenSet() const { return m_outputFiltersHasBeenSet; }
  template <typename OutputFiltersT = Aws::Vector<ToolOutputFilter>>
  void SetOutputFilters(OutputFiltersT&& value) {
    m_outputFiltersHasBeenSet = true;
    m_outputFilters = std::forward<OutputFiltersT>(value);
  }
  template <typename OutputFiltersT = Aws::Vector<ToolOutputFilter>>
  ToolConfiguration& WithOutputFilters(OutputFiltersT&& value) {
    SetOutputFilters(std::forward<OutputFiltersT>(value));
    return *this;
  }
  template <typename OutputFiltersT = ToolOutputFilter>
  ToolConfiguration& AddOutputFilters(OutputFiltersT&& value) {
    m_outputFiltersHasBeenSet = true;
    m_outputFilters.emplace_back(std::forward<OutputFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input schema for the tool configuration.</p>
   */
  inline Aws::Utils::DocumentView GetInputSchema() const { return m_inputSchema; }
  inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
  template <typename InputSchemaT = Aws::Utils::Document>
  void SetInputSchema(InputSchemaT&& value) {
    m_inputSchemaHasBeenSet = true;
    m_inputSchema = std::forward<InputSchemaT>(value);
  }
  template <typename InputSchemaT = Aws::Utils::Document>
  ToolConfiguration& WithInputSchema(InputSchemaT&& value) {
    SetInputSchema(std::forward<InputSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output schema for the tool configuration.</p>
   */
  inline Aws::Utils::DocumentView GetOutputSchema() const { return m_outputSchema; }
  inline bool OutputSchemaHasBeenSet() const { return m_outputSchemaHasBeenSet; }
  template <typename OutputSchemaT = Aws::Utils::Document>
  void SetOutputSchema(OutputSchemaT&& value) {
    m_outputSchemaHasBeenSet = true;
    m_outputSchema = std::forward<OutputSchemaT>(value);
  }
  template <typename OutputSchemaT = Aws::Utils::Document>
  ToolConfiguration& WithOutputSchema(OutputSchemaT&& value) {
    SetOutputSchema(std::forward<OutputSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Annotations for the tool configuration.</p>
   */
  inline const Annotation& GetAnnotations() const { return m_annotations; }
  inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
  template <typename AnnotationsT = Annotation>
  void SetAnnotations(AnnotationsT&& value) {
    m_annotationsHasBeenSet = true;
    m_annotations = std::forward<AnnotationsT>(value);
  }
  template <typename AnnotationsT = Annotation>
  ToolConfiguration& WithAnnotations(AnnotationsT&& value) {
    SetAnnotations(std::forward<AnnotationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for user interaction with the tool.</p>
   */
  inline const UserInteractionConfiguration& GetUserInteractionConfiguration() const { return m_userInteractionConfiguration; }
  inline bool UserInteractionConfigurationHasBeenSet() const { return m_userInteractionConfigurationHasBeenSet; }
  template <typename UserInteractionConfigurationT = UserInteractionConfiguration>
  void SetUserInteractionConfiguration(UserInteractionConfigurationT&& value) {
    m_userInteractionConfigurationHasBeenSet = true;
    m_userInteractionConfiguration = std::forward<UserInteractionConfigurationT>(value);
  }
  template <typename UserInteractionConfigurationT = UserInteractionConfiguration>
  ToolConfiguration& WithUserInteractionConfiguration(UserInteractionConfigurationT&& value) {
    SetUserInteractionConfiguration(std::forward<UserInteractionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolName;

  ToolType m_toolType{ToolType::NOT_SET};

  Aws::String m_title;

  Aws::String m_toolId;

  Aws::String m_description;

  ToolInstruction m_instruction;

  Aws::Vector<ToolOverrideInputValue> m_overrideInputValues;

  Aws::Vector<ToolOutputFilter> m_outputFilters;

  Aws::Utils::Document m_inputSchema;

  Aws::Utils::Document m_outputSchema;

  Annotation m_annotations;

  UserInteractionConfiguration m_userInteractionConfiguration;
  bool m_toolNameHasBeenSet = false;
  bool m_toolTypeHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_toolIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_instructionHasBeenSet = false;
  bool m_overrideInputValuesHasBeenSet = false;
  bool m_outputFiltersHasBeenSet = false;
  bool m_inputSchemaHasBeenSet = false;
  bool m_outputSchemaHasBeenSet = false;
  bool m_annotationsHasBeenSet = false;
  bool m_userInteractionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
