/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

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
 * <p>Instructions for using a tool.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ToolInstruction">AWS
 * API Reference</a></p>
 */
class ToolInstruction {
 public:
  AWS_QCONNECT_API ToolInstruction() = default;
  AWS_QCONNECT_API ToolInstruction(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ToolInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instruction text for the tool.</p>
   */
  inline const Aws::String& GetInstruction() const { return m_instruction; }
  inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
  template <typename InstructionT = Aws::String>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = Aws::String>
  ToolInstruction& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Examples for using the tool.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExamples() const { return m_examples; }
  inline bool ExamplesHasBeenSet() const { return m_examplesHasBeenSet; }
  template <typename ExamplesT = Aws::Vector<Aws::String>>
  void SetExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples = std::forward<ExamplesT>(value);
  }
  template <typename ExamplesT = Aws::Vector<Aws::String>>
  ToolInstruction& WithExamples(ExamplesT&& value) {
    SetExamples(std::forward<ExamplesT>(value));
    return *this;
  }
  template <typename ExamplesT = Aws::String>
  ToolInstruction& AddExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples.emplace_back(std::forward<ExamplesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instruction;
  bool m_instructionHasBeenSet = false;

  Aws::Vector<Aws::String> m_examples;
  bool m_examplesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
