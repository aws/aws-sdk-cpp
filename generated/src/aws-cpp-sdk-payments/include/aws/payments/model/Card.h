/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/CardBrand.h>
#include <aws/payments/model/CardType.h>

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
 * <p>The details of a card payment instrument.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/Card">AWS API
 * Reference</a></p>
 */
class Card {
 public:
  AWS_PAYMENTS_API Card() = default;
  AWS_PAYMENTS_API Card(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Card& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The network the card runs on.</p>
   */
  inline CardBrand GetBrand() const { return m_brand; }
  inline bool BrandHasBeenSet() const { return m_brandHasBeenSet; }
  inline void SetBrand(CardBrand value) {
    m_brandHasBeenSet = true;
    m_brand = value;
  }
  inline Card& WithBrand(CardBrand value) {
    SetBrand(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last four digits of the card number.</p>
   */
  inline const Aws::String& GetLast4() const { return m_last4; }
  inline bool Last4HasBeenSet() const { return m_last4HasBeenSet; }
  template <typename Last4T = Aws::String>
  void SetLast4(Last4T&& value) {
    m_last4HasBeenSet = true;
    m_last4 = std::forward<Last4T>(value);
  }
  template <typename Last4T = Aws::String>
  Card& WithLast4(Last4T&& value) {
    SetLast4(std::forward<Last4T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calendar month that the card expires in.</p>
   */
  inline int GetExpirationMonth() const { return m_expirationMonth; }
  inline bool ExpirationMonthHasBeenSet() const { return m_expirationMonthHasBeenSet; }
  inline void SetExpirationMonth(int value) {
    m_expirationMonthHasBeenSet = true;
    m_expirationMonth = value;
  }
  inline Card& WithExpirationMonth(int value) {
    SetExpirationMonth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calendar year that the card expires in.</p>
   */
  inline int GetExpirationYear() const { return m_expirationYear; }
  inline bool ExpirationYearHasBeenSet() const { return m_expirationYearHasBeenSet; }
  inline void SetExpirationYear(int value) {
    m_expirationYearHasBeenSet = true;
    m_expirationYear = value;
  }
  inline Card& WithExpirationYear(int value) {
    SetExpirationYear(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the card is a credit card or a debit card.</p>
   */
  inline CardType GetCardType() const { return m_cardType; }
  inline bool CardTypeHasBeenSet() const { return m_cardTypeHasBeenSet; }
  inline void SetCardType(CardType value) {
    m_cardTypeHasBeenSet = true;
    m_cardType = value;
  }
  inline Card& WithCardType(CardType value) {
    SetCardType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bank that issued the card.</p>
   */
  inline const Aws::String& GetIssuingBank() const { return m_issuingBank; }
  inline bool IssuingBankHasBeenSet() const { return m_issuingBankHasBeenSet; }
  template <typename IssuingBankT = Aws::String>
  void SetIssuingBank(IssuingBankT&& value) {
    m_issuingBankHasBeenSet = true;
    m_issuingBank = std::forward<IssuingBankT>(value);
  }
  template <typename IssuingBankT = Aws::String>
  Card& WithIssuingBank(IssuingBankT&& value) {
    SetIssuingBank(std::forward<IssuingBankT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country of the bank that issued the card.</p>
   */
  inline const Aws::String& GetIssuerCountry() const { return m_issuerCountry; }
  inline bool IssuerCountryHasBeenSet() const { return m_issuerCountryHasBeenSet; }
  template <typename IssuerCountryT = Aws::String>
  void SetIssuerCountry(IssuerCountryT&& value) {
    m_issuerCountryHasBeenSet = true;
    m_issuerCountry = std::forward<IssuerCountryT>(value);
  }
  template <typename IssuerCountryT = Aws::String>
  Card& WithIssuerCountry(IssuerCountryT&& value) {
    SetIssuerCountry(std::forward<IssuerCountryT>(value));
    return *this;
  }
  ///@}
 private:
  CardBrand m_brand{CardBrand::NOT_SET};

  Aws::String m_last4;

  int m_expirationMonth{0};

  int m_expirationYear{0};

  CardType m_cardType{CardType::NOT_SET};

  Aws::String m_issuingBank;

  Aws::String m_issuerCountry;
  bool m_brandHasBeenSet = false;
  bool m_last4HasBeenSet = false;
  bool m_expirationMonthHasBeenSet = false;
  bool m_expirationYearHasBeenSet = false;
  bool m_cardTypeHasBeenSet = false;
  bool m_issuingBankHasBeenSet = false;
  bool m_issuerCountryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
