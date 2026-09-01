/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/PaymentScheduleTermTemplate.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Defines how a specific type of term changes each time the agreement renews.
 * Exactly one of the following fields is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/TermTemplate">AWS
 * API Reference</a></p>
 */
class TermTemplate {
 public:
  AWS_AGREEMENTSERVICE_API TermTemplate() = default;
  AWS_AGREEMENTSERVICE_API TermTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API TermTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Defines the payment schedule that is applied to the renewed agreement.</p>
   */
  inline const PaymentScheduleTermTemplate& GetPaymentScheduleTermTemplate() const { return m_paymentScheduleTermTemplate; }
  inline bool PaymentScheduleTermTemplateHasBeenSet() const { return m_paymentScheduleTermTemplateHasBeenSet; }
  template <typename PaymentScheduleTermTemplateT = PaymentScheduleTermTemplate>
  void SetPaymentScheduleTermTemplate(PaymentScheduleTermTemplateT&& value) {
    m_paymentScheduleTermTemplateHasBeenSet = true;
    m_paymentScheduleTermTemplate = std::forward<PaymentScheduleTermTemplateT>(value);
  }
  template <typename PaymentScheduleTermTemplateT = PaymentScheduleTermTemplate>
  TermTemplate& WithPaymentScheduleTermTemplate(PaymentScheduleTermTemplateT&& value) {
    SetPaymentScheduleTermTemplate(std::forward<PaymentScheduleTermTemplateT>(value));
    return *this;
  }
  ///@}
 private:
  PaymentScheduleTermTemplate m_paymentScheduleTermTemplate;
  bool m_paymentScheduleTermTemplateHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
