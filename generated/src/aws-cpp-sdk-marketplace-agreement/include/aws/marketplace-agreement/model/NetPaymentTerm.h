/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

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
 * <p>Defines the net payment due period for the agreement, specifying when payment
 * is due after an invoice is issued.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/NetPaymentTerm">AWS
 * API Reference</a></p>
 */
class NetPaymentTerm {
 public:
  AWS_AGREEMENTSERVICE_API NetPaymentTerm() = default;
  AWS_AGREEMENTSERVICE_API NetPaymentTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API NetPaymentTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Type of the term being updated.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  NetPaymentTerm& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the term.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  NetPaymentTerm& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration after an invoice is issued within which the payment is due. The
   * duration is represented in the ISO 8601 format (for example, <code>P30D</code>
   * for 30 days or <code>P60D</code> for 60 days).</p>
   */
  inline const Aws::String& GetPaymentDuePeriod() const { return m_paymentDuePeriod; }
  inline bool PaymentDuePeriodHasBeenSet() const { return m_paymentDuePeriodHasBeenSet; }
  template <typename PaymentDuePeriodT = Aws::String>
  void SetPaymentDuePeriod(PaymentDuePeriodT&& value) {
    m_paymentDuePeriodHasBeenSet = true;
    m_paymentDuePeriod = std::forward<PaymentDuePeriodT>(value);
  }
  template <typename PaymentDuePeriodT = Aws::String>
  NetPaymentTerm& WithPaymentDuePeriod(PaymentDuePeriodT&& value) {
    SetPaymentDuePeriod(std::forward<PaymentDuePeriodT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  Aws::String m_id;

  Aws::String m_paymentDuePeriod;
  bool m_typeHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_paymentDuePeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
