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
 * <p>The instruction that guides how the Orchestration AI Agent works with a
 * collaborator agent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MultiAgentInstruction">AWS
 * API Reference</a></p>
 */
class MultiAgentInstruction {
 public:
  AWS_QCONNECT_API MultiAgentInstruction() = default;
  AWS_QCONNECT_API MultiAgentInstruction(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API MultiAgentInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The natural-language instruction that tells the Orchestration AI Agent when
   * and how to engage the collaborator agent.</p>
   */
  inline const Aws::String& GetInstruction() const { return m_instruction; }
  inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
  template <typename InstructionT = Aws::String>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = Aws::String>
  MultiAgentInstruction& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Example interactions that illustrate when the Orchestration AI Agent should
   * engage the collaborator agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExamples() const { return m_examples; }
  inline bool ExamplesHasBeenSet() const { return m_examplesHasBeenSet; }
  template <typename ExamplesT = Aws::Vector<Aws::String>>
  void SetExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples = std::forward<ExamplesT>(value);
  }
  template <typename ExamplesT = Aws::Vector<Aws::String>>
  MultiAgentInstruction& WithExamples(ExamplesT&& value) {
    SetExamples(std::forward<ExamplesT>(value));
    return *this;
  }
  template <typename ExamplesT = Aws::String>
  MultiAgentInstruction& AddExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples.emplace_back(std::forward<ExamplesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instruction;

  Aws::Vector<Aws::String> m_examples;
  bool m_instructionHasBeenSet = false;
  bool m_examplesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
