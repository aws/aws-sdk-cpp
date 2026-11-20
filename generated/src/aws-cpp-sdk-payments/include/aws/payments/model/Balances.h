/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/CurrencyAmount.h>

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
 * <p>How much of the record's <code>amount</code> is outstanding, processing,
 * settled, and canceled. The four balances add up to <code>amount</code>. Each
 * balance is in the currency of <code>amount</code>, and a balance with nothing in
 * it is 0.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/Balances">AWS
 * API Reference</a></p>
 */
class Balances {
 public:
  AWS_PAYMENTS_API Balances() = default;
  AWS_PAYMENTS_API Balances(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Balances& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The part of the amount that isn't settled and has no settlement in progress.
   * For an invoice, this is what remains to pay. For a credit memo, this is the
   * credit that isn't yet applied. This balance doesn't include
   * <code>processing</code>.</p>
   */
  inline const CurrencyAmount& GetOutstanding() const { return m_outstanding; }
  inline bool OutstandingHasBeenSet() const { return m_outstandingHasBeenSet; }
  template <typename OutstandingT = CurrencyAmount>
  void SetOutstanding(OutstandingT&& value) {
    m_outstandingHasBeenSet = true;
    m_outstanding = std::forward<OutstandingT>(value);
  }
  template <typename OutstandingT = CurrencyAmount>
  Balances& WithOutstanding(OutstandingT&& value) {
    SetOutstanding(std::forward<OutstandingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The part of the amount with a settlement in progress, for example a payment
   * that's submitted but not yet confirmed. It moves to <code>settled</code> when
   * the settlement completes, and back to <code>outstanding</code> when the
   * settlement fails. This balance is more than 0 only when the <code>status</code>
   * is <code>PROCESSING</code>.</p>
   */
  inline const CurrencyAmount& GetProcessing() const { return m_processing; }
  inline bool ProcessingHasBeenSet() const { return m_processingHasBeenSet; }
  template <typename ProcessingT = CurrencyAmount>
  void SetProcessing(ProcessingT&& value) {
    m_processingHasBeenSet = true;
    m_processing = std::forward<ProcessingT>(value);
  }
  template <typename ProcessingT = CurrencyAmount>
  Balances& WithProcessing(ProcessingT&& value) {
    SetProcessing(std::forward<ProcessingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The part of the amount that is settled. For an invoice, this is the amount
   * paid or covered by credit memos. For a credit memo, this is the amount applied
   * to invoices. This balance is 0 when nothing is settled yet.</p>
   */
  inline const CurrencyAmount& GetSettled() const { return m_settled; }
  inline bool SettledHasBeenSet() const { return m_settledHasBeenSet; }
  template <typename SettledT = CurrencyAmount>
  void SetSettled(SettledT&& value) {
    m_settledHasBeenSet = true;
    m_settled = std::forward<SettledT>(value);
  }
  template <typename SettledT = CurrencyAmount>
  Balances& WithSettled(SettledT&& value) {
    SetSettled(std::forward<SettledT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The part of the amount that was canceled and isn't settled, for example when
   * an invoice is voided. When a partly settled record is canceled, it keeps its
   * <code>settled</code> balance, and the rest of the amount moves to
   * <code>canceled</code>. This balance is more than 0 only when the
   * <code>status</code> is <code>CANCELED</code>.</p>
   */
  inline const CurrencyAmount& GetCanceled() const { return m_canceled; }
  inline bool CanceledHasBeenSet() const { return m_canceledHasBeenSet; }
  template <typename CanceledT = CurrencyAmount>
  void SetCanceled(CanceledT&& value) {
    m_canceledHasBeenSet = true;
    m_canceled = std::forward<CanceledT>(value);
  }
  template <typename CanceledT = CurrencyAmount>
  Balances& WithCanceled(CanceledT&& value) {
    SetCanceled(std::forward<CanceledT>(value));
    return *this;
  }
  ///@}
 private:
  CurrencyAmount m_outstanding;

  CurrencyAmount m_processing;

  CurrencyAmount m_settled;

  CurrencyAmount m_canceled;
  bool m_outstandingHasBeenSet = false;
  bool m_processingHasBeenSet = false;
  bool m_settledHasBeenSet = false;
  bool m_canceledHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
