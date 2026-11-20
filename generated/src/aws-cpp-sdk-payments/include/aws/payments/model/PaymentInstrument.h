/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/PaymentInstrumentDetails.h>
#include <aws/payments/model/PaymentInstrumentStatus.h>
#include <aws/payments/model/PaymentMethod.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>A payment instrument on your account, such as a card or a bank
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/PaymentInstrument">AWS
 * API Reference</a></p>
 */
class PaymentInstrument {
 public:
  AWS_PAYMENTS_API PaymentInstrument() = default;
  AWS_PAYMENTS_API PaymentInstrument(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API PaymentInstrument& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the instrument. To allow or deny
   * <code>GetPaymentInstrument</code> for this instrument, use the ARN in the
   * <code>Resource</code> element of an Amazon Web Services Identity and Access
   * Management (IAM) policy.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  PaymentInstrument& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment method of the instrument. The following values are valid:</p>
   * <ul> <li> <p> <code>CARD</code> – A credit or debit card.</p> </li> <li> <p>
   * <code>US_ACH_BANK_ACCOUNT</code> – A US bank account debited over Automated
   * Clearing House (ACH).</p> </li> <li> <p> <code>SEPA_BANK_ACCOUNT</code> – A bank
   * account debited over Single Euro Payments Area (SEPA) Direct Debit.</p> </li>
   * <li> <p> <code>UK_BACS_BANK_ACCOUNT</code> – A UK bank account debited over Bacs
   * Direct Debit.</p> </li> <li> <p> <code>IN_NET_BANKING</code> – India net
   * banking. You authorize each payment on your bank's website.</p> </li> <li> <p>
   * <code>CN_BANK_REDIRECT</code> – China bank redirect. You authorize each payment
   * on your bank's website.</p> </li> <li> <p> <code>UPI</code> – Unified Payments
   * Interface, the India real-time payment system.</p> </li> <li> <p>
   * <code>PIX</code> – Pix, the Brazilian Central Bank instant payment system.</p>
   * </li> <li> <p> <code>PAY_BY_INVOICE</code> – Pay by invoice. You pay each
   * invoice yourself, for example by bank transfer, instead of Amazon Web Services
   * collecting payment from a card or a bank account.</p> </li> </ul>
   */
  inline PaymentMethod GetPaymentMethod() const { return m_paymentMethod; }
  inline bool PaymentMethodHasBeenSet() const { return m_paymentMethodHasBeenSet; }
  inline void SetPaymentMethod(PaymentMethod value) {
    m_paymentMethodHasBeenSet = true;
    m_paymentMethod = value;
  }
  inline PaymentInstrument& WithPaymentMethod(PaymentMethod value) {
    SetPaymentMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the instrument. The following values are valid:</p>
   * <ul> <li> <p> <code>ACTIVE</code> – The instrument is set up, and Amazon Web
   * Services can use it for payments. <code>ACTIVE</code> doesn't confirm that the
   * instrument is verified or that a payment with it will succeed. You don't need to
   * take action.</p> </li> <li> <p> <code>INVALID</code> – Amazon Web Services can't
   * use the instrument for payments, for example because its Direct Debit or UPI
   * mandate is no longer valid. This status is permanent. The instrument doesn't
   * return to <code>ACTIVE</code>. To pay with this payment method again, add a new
   * payment instrument.</p> </li> <li> <p> <code>PENDING_SETUP</code> – The
   * instrument needs an action from you before Amazon Web Services can use it, such
   * as resuming a paused UPI mandate in your UPI app. Amazon Web Services doesn't
   * use the instrument for payments until you complete that action.</p> </li> <li>
   * <p> <code>SETUP_IN_PROGRESS</code> – You completed the setup steps, and setup of
   * the instrument is in progress, for example while a Direct Debit or UPI mandate
   * waits for confirmation. Amazon Web Services doesn't use the instrument for
   * payments until setup is complete. You don't need to take action.</p> </li> </ul>
   */
  inline PaymentInstrumentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PaymentInstrumentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PaymentInstrument& WithStatus(PaymentInstrumentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details that are specific to the instrument's payment method. This member
   * is absent for a payment method that has no additional details.</p>
   */
  inline const PaymentInstrumentDetails& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = PaymentInstrumentDetails>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = PaymentInstrumentDetails>
  PaymentInstrument& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when the instrument was registered.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PaymentInstrument& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when the instrument was last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PaymentInstrument& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  PaymentMethod m_paymentMethod{PaymentMethod::NOT_SET};

  PaymentInstrumentStatus m_status{PaymentInstrumentStatus::NOT_SET};

  PaymentInstrumentDetails m_details;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_arnHasBeenSet = false;
  bool m_paymentMethodHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
