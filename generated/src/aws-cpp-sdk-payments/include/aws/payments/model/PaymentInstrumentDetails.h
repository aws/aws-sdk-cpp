/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/Card.h>
#include <aws/payments/model/CnBankRedirect.h>
#include <aws/payments/model/InNetBanking.h>
#include <aws/payments/model/SepaBankAccount.h>
#include <aws/payments/model/UkBacsBankAccount.h>
#include <aws/payments/model/Upi.h>
#include <aws/payments/model/UsAchBankAccount.h>

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
 * <p>The details that are specific to a payment instrument's payment
 * method.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/PaymentInstrumentDetails">AWS
 * API Reference</a></p>
 */
class PaymentInstrumentDetails {
 public:
  AWS_PAYMENTS_API PaymentInstrumentDetails() = default;
  AWS_PAYMENTS_API PaymentInstrumentDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API PaymentInstrumentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The details of a card payment instrument.</p>
   */
  inline const Card& GetCard() const { return m_card; }
  inline bool CardHasBeenSet() const { return m_cardHasBeenSet; }
  template <typename CardT = Card>
  void SetCard(CardT&& value) {
    m_cardHasBeenSet = true;
    m_card = std::forward<CardT>(value);
  }
  template <typename CardT = Card>
  PaymentInstrumentDetails& WithCard(CardT&& value) {
    SetCard(std::forward<CardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of a bank account that is debited over Automated Clearing House
   * (ACH).</p>
   */
  inline const UsAchBankAccount& GetUsAchBankAccount() const { return m_usAchBankAccount; }
  inline bool UsAchBankAccountHasBeenSet() const { return m_usAchBankAccountHasBeenSet; }
  template <typename UsAchBankAccountT = UsAchBankAccount>
  void SetUsAchBankAccount(UsAchBankAccountT&& value) {
    m_usAchBankAccountHasBeenSet = true;
    m_usAchBankAccount = std::forward<UsAchBankAccountT>(value);
  }
  template <typename UsAchBankAccountT = UsAchBankAccount>
  PaymentInstrumentDetails& WithUsAchBankAccount(UsAchBankAccountT&& value) {
    SetUsAchBankAccount(std::forward<UsAchBankAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of a bank account that is debited over Single Euro Payments Area
   * (SEPA) Direct Debit.</p>
   */
  inline const SepaBankAccount& GetSepaBankAccount() const { return m_sepaBankAccount; }
  inline bool SepaBankAccountHasBeenSet() const { return m_sepaBankAccountHasBeenSet; }
  template <typename SepaBankAccountT = SepaBankAccount>
  void SetSepaBankAccount(SepaBankAccountT&& value) {
    m_sepaBankAccountHasBeenSet = true;
    m_sepaBankAccount = std::forward<SepaBankAccountT>(value);
  }
  template <typename SepaBankAccountT = SepaBankAccount>
  PaymentInstrumentDetails& WithSepaBankAccount(SepaBankAccountT&& value) {
    SetSepaBankAccount(std::forward<SepaBankAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of a bank account that is debited over Bacs Direct Debit.</p>
   */
  inline const UkBacsBankAccount& GetUkBacsBankAccount() const { return m_ukBacsBankAccount; }
  inline bool UkBacsBankAccountHasBeenSet() const { return m_ukBacsBankAccountHasBeenSet; }
  template <typename UkBacsBankAccountT = UkBacsBankAccount>
  void SetUkBacsBankAccount(UkBacsBankAccountT&& value) {
    m_ukBacsBankAccountHasBeenSet = true;
    m_ukBacsBankAccount = std::forward<UkBacsBankAccountT>(value);
  }
  template <typename UkBacsBankAccountT = UkBacsBankAccount>
  PaymentInstrumentDetails& WithUkBacsBankAccount(UkBacsBankAccountT&& value) {
    SetUkBacsBankAccount(std::forward<UkBacsBankAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of an India net banking instrument.</p>
   */
  inline const InNetBanking& GetInNetBanking() const { return m_inNetBanking; }
  inline bool InNetBankingHasBeenSet() const { return m_inNetBankingHasBeenSet; }
  template <typename InNetBankingT = InNetBanking>
  void SetInNetBanking(InNetBankingT&& value) {
    m_inNetBankingHasBeenSet = true;
    m_inNetBanking = std::forward<InNetBankingT>(value);
  }
  template <typename InNetBankingT = InNetBanking>
  PaymentInstrumentDetails& WithInNetBanking(InNetBankingT&& value) {
    SetInNetBanking(std::forward<InNetBankingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of a China bank redirect instrument.</p>
   */
  inline const CnBankRedirect& GetCnBankRedirect() const { return m_cnBankRedirect; }
  inline bool CnBankRedirectHasBeenSet() const { return m_cnBankRedirectHasBeenSet; }
  template <typename CnBankRedirectT = CnBankRedirect>
  void SetCnBankRedirect(CnBankRedirectT&& value) {
    m_cnBankRedirectHasBeenSet = true;
    m_cnBankRedirect = std::forward<CnBankRedirectT>(value);
  }
  template <typename CnBankRedirectT = CnBankRedirect>
  PaymentInstrumentDetails& WithCnBankRedirect(CnBankRedirectT&& value) {
    SetCnBankRedirect(std::forward<CnBankRedirectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of a Unified Payments Interface (UPI) instrument.</p>
   */
  inline const Upi& GetUpi() const { return m_upi; }
  inline bool UpiHasBeenSet() const { return m_upiHasBeenSet; }
  template <typename UpiT = Upi>
  void SetUpi(UpiT&& value) {
    m_upiHasBeenSet = true;
    m_upi = std::forward<UpiT>(value);
  }
  template <typename UpiT = Upi>
  PaymentInstrumentDetails& WithUpi(UpiT&& value) {
    SetUpi(std::forward<UpiT>(value));
    return *this;
  }
  ///@}
 private:
  Card m_card;

  UsAchBankAccount m_usAchBankAccount;

  SepaBankAccount m_sepaBankAccount;

  UkBacsBankAccount m_ukBacsBankAccount;

  InNetBanking m_inNetBanking;

  CnBankRedirect m_cnBankRedirect;

  Upi m_upi;
  bool m_cardHasBeenSet = false;
  bool m_usAchBankAccountHasBeenSet = false;
  bool m_sepaBankAccountHasBeenSet = false;
  bool m_ukBacsBankAccountHasBeenSet = false;
  bool m_inNetBankingHasBeenSet = false;
  bool m_cnBankRedirectHasBeenSet = false;
  bool m_upiHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
