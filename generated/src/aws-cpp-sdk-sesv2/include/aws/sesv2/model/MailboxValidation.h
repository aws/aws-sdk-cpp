/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/EmailAddressInsightsMailboxEvaluations.h>
#include <aws/sesv2/model/EmailAddressInsightsVerdict.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>Contains detailed validation information about an email
 * address.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MailboxValidation">AWS
 * API Reference</a></p>
 */
class MailboxValidation {
 public:
  AWS_SESV2_API MailboxValidation() = default;
  AWS_SESV2_API MailboxValidation(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API MailboxValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Overall validity assessment with a conﬁdence verdict.</p>
   */
  inline const EmailAddressInsightsVerdict& GetIsValid() const { return m_isValid; }
  inline bool IsValidHasBeenSet() const { return m_isValidHasBeenSet; }
  template <typename IsValidT = EmailAddressInsightsVerdict>
  void SetIsValid(IsValidT&& value) {
    m_isValidHasBeenSet = true;
    m_isValid = std::forward<IsValidT>(value);
  }
  template <typename IsValidT = EmailAddressInsightsVerdict>
  MailboxValidation& WithIsValid(IsValidT&& value) {
    SetIsValid(std::forward<IsValidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific validation checks performed on the email address.</p>
   */
  inline const EmailAddressInsightsMailboxEvaluations& GetEvaluations() const { return m_evaluations; }
  inline bool EvaluationsHasBeenSet() const { return m_evaluationsHasBeenSet; }
  template <typename EvaluationsT = EmailAddressInsightsMailboxEvaluations>
  void SetEvaluations(EvaluationsT&& value) {
    m_evaluationsHasBeenSet = true;
    m_evaluations = std::forward<EvaluationsT>(value);
  }
  template <typename EvaluationsT = EmailAddressInsightsMailboxEvaluations>
  MailboxValidation& WithEvaluations(EvaluationsT&& value) {
    SetEvaluations(std::forward<EvaluationsT>(value));
    return *this;
  }
  ///@}
 private:
  EmailAddressInsightsVerdict m_isValid;

  EmailAddressInsightsMailboxEvaluations m_evaluations;
  bool m_isValidHasBeenSet = false;
  bool m_evaluationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
