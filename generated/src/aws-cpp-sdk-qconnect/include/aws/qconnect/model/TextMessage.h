/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIGuardrailAssessment.h>
#include <aws/qconnect/model/Citation.h>

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
 * <p>The message data in text type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/TextMessage">AWS
 * API Reference</a></p>
 */
class TextMessage {
 public:
  AWS_QCONNECT_API TextMessage() = default;
  AWS_QCONNECT_API TextMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API TextMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value of the message data in text type.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  TextMessage& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The citations associated with the text message.</p>
   */
  inline const Aws::Vector<Citation>& GetCitations() const { return m_citations; }
  inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
  template <typename CitationsT = Aws::Vector<Citation>>
  void SetCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations = std::forward<CitationsT>(value);
  }
  template <typename CitationsT = Aws::Vector<Citation>>
  TextMessage& WithCitations(CitationsT&& value) {
    SetCitations(std::forward<CitationsT>(value));
    return *this;
  }
  template <typename CitationsT = Citation>
  TextMessage& AddCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations.emplace_back(std::forward<CitationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI Guardrail assessment for the text message.</p>
   */
  inline const AIGuardrailAssessment& GetAiGuardrailAssessment() const { return m_aiGuardrailAssessment; }
  inline bool AiGuardrailAssessmentHasBeenSet() const { return m_aiGuardrailAssessmentHasBeenSet; }
  template <typename AiGuardrailAssessmentT = AIGuardrailAssessment>
  void SetAiGuardrailAssessment(AiGuardrailAssessmentT&& value) {
    m_aiGuardrailAssessmentHasBeenSet = true;
    m_aiGuardrailAssessment = std::forward<AiGuardrailAssessmentT>(value);
  }
  template <typename AiGuardrailAssessmentT = AIGuardrailAssessment>
  TextMessage& WithAiGuardrailAssessment(AiGuardrailAssessmentT&& value) {
    SetAiGuardrailAssessment(std::forward<AiGuardrailAssessmentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  Aws::Vector<Citation> m_citations;

  AIGuardrailAssessment m_aiGuardrailAssessment;
  bool m_valueHasBeenSet = false;
  bool m_citationsHasBeenSet = false;
  bool m_aiGuardrailAssessmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
