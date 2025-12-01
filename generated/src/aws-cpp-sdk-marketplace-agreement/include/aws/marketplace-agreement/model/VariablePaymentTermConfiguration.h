/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/PaymentRequestApprovalStrategy.h>

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
 * <p>Additional parameters specified by the acceptor while accepting the variable
 * payment term.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/VariablePaymentTermConfiguration">AWS
 * API Reference</a></p>
 */
class VariablePaymentTermConfiguration {
 public:
  AWS_AGREEMENTSERVICE_API VariablePaymentTermConfiguration() = default;
  AWS_AGREEMENTSERVICE_API VariablePaymentTermConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API VariablePaymentTermConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Defines the strategy for approving payment requests. Values include
   * <code>AUTO_APPROVE_ON_EXPIRATION</code> and <code>WAIT_FOR_APPROVAL</code> </p>
   */
  inline PaymentRequestApprovalStrategy GetPaymentRequestApprovalStrategy() const { return m_paymentRequestApprovalStrategy; }
  inline bool PaymentRequestApprovalStrategyHasBeenSet() const { return m_paymentRequestApprovalStrategyHasBeenSet; }
  inline void SetPaymentRequestApprovalStrategy(PaymentRequestApprovalStrategy value) {
    m_paymentRequestApprovalStrategyHasBeenSet = true;
    m_paymentRequestApprovalStrategy = value;
  }
  inline VariablePaymentTermConfiguration& WithPaymentRequestApprovalStrategy(PaymentRequestApprovalStrategy value) {
    SetPaymentRequestApprovalStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the duration after which a payment request is automatically approved
   * if no further action is taken. This only applies when the payment request
   * approval strategy is set to <code>AUTO_APPROVE_ON_EXPIRATION</code>. The
   * duration is represented in the ISO_8601 format (e.g., P10D for 10 days).</p>
   */
  inline const Aws::String& GetExpirationDuration() const { return m_expirationDuration; }
  inline bool ExpirationDurationHasBeenSet() const { return m_expirationDurationHasBeenSet; }
  template <typename ExpirationDurationT = Aws::String>
  void SetExpirationDuration(ExpirationDurationT&& value) {
    m_expirationDurationHasBeenSet = true;
    m_expirationDuration = std::forward<ExpirationDurationT>(value);
  }
  template <typename ExpirationDurationT = Aws::String>
  VariablePaymentTermConfiguration& WithExpirationDuration(ExpirationDurationT&& value) {
    SetExpirationDuration(std::forward<ExpirationDurationT>(value));
    return *this;
  }
  ///@}
 private:
  PaymentRequestApprovalStrategy m_paymentRequestApprovalStrategy{PaymentRequestApprovalStrategy::NOT_SET};
  bool m_paymentRequestApprovalStrategyHasBeenSet = false;

  Aws::String m_expirationDuration;
  bool m_expirationDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
