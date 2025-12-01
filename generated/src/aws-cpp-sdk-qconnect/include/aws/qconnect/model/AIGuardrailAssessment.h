/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>

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
 * <p>The assessment information from the AI Guardrail.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailAssessment">AWS
 * API Reference</a></p>
 */
class AIGuardrailAssessment {
 public:
  AWS_QCONNECT_API AIGuardrailAssessment() = default;
  AWS_QCONNECT_API AIGuardrailAssessment(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API AIGuardrailAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether the AI Guardrail blocked the content.</p>
   */
  inline bool GetBlocked() const { return m_blocked; }
  inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
  inline void SetBlocked(bool value) {
    m_blockedHasBeenSet = true;
    m_blocked = value;
  }
  inline AIGuardrailAssessment& WithBlocked(bool value) {
    SetBlocked(value);
    return *this;
  }
  ///@}
 private:
  bool m_blocked{false};
  bool m_blockedHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
