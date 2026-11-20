/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TaxSettings {
namespace Model {

/**
 * <p>Additional tax information to specify for a TRN in Vietnam.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/VietnamAdditionalInfo">AWS
 * API Reference</a></p>
 */
class VietnamAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API VietnamAdditionalInfo() = default;
  AWS_TAXSETTINGS_API VietnamAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API VietnamAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The enterprise identification number for tax registration. Required when
   * <code>vatCreditMethod</code> is <code>true</code>; must not be specified when it
   * is <code>false</code>.</p>
   */
  inline const Aws::String& GetEnterpriseIdentificationNumber() const { return m_enterpriseIdentificationNumber; }
  inline bool EnterpriseIdentificationNumberHasBeenSet() const { return m_enterpriseIdentificationNumberHasBeenSet; }
  template <typename EnterpriseIdentificationNumberT = Aws::String>
  void SetEnterpriseIdentificationNumber(EnterpriseIdentificationNumberT&& value) {
    m_enterpriseIdentificationNumberHasBeenSet = true;
    m_enterpriseIdentificationNumber = std::forward<EnterpriseIdentificationNumberT>(value);
  }
  template <typename EnterpriseIdentificationNumberT = Aws::String>
  VietnamAdditionalInfo& WithEnterpriseIdentificationNumber(EnterpriseIdentificationNumberT&& value) {
    SetEnterpriseIdentificationNumber(std::forward<EnterpriseIdentificationNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The electronic transaction code number on the tax return document. Required
   * when <code>vatCreditMethod</code> is <code>true</code>; must not be specified
   * when it is <code>false</code>.</p>
   */
  inline const Aws::String& GetElectronicTransactionCodeNumber() const { return m_electronicTransactionCodeNumber; }
  inline bool ElectronicTransactionCodeNumberHasBeenSet() const { return m_electronicTransactionCodeNumberHasBeenSet; }
  template <typename ElectronicTransactionCodeNumberT = Aws::String>
  void SetElectronicTransactionCodeNumber(ElectronicTransactionCodeNumberT&& value) {
    m_electronicTransactionCodeNumberHasBeenSet = true;
    m_electronicTransactionCodeNumber = std::forward<ElectronicTransactionCodeNumberT>(value);
  }
  template <typename ElectronicTransactionCodeNumberT = Aws::String>
  VietnamAdditionalInfo& WithElectronicTransactionCodeNumber(ElectronicTransactionCodeNumberT&& value) {
    SetElectronicTransactionCodeNumber(std::forward<ElectronicTransactionCodeNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment voucher number on the tax return payment document. Required when
   * <code>vatCreditMethod</code> is <code>true</code>; must not be specified when it
   * is <code>false</code>.</p>
   */
  inline const Aws::String& GetPaymentVoucherNumber() const { return m_paymentVoucherNumber; }
  inline bool PaymentVoucherNumberHasBeenSet() const { return m_paymentVoucherNumberHasBeenSet; }
  template <typename PaymentVoucherNumberT = Aws::String>
  void SetPaymentVoucherNumber(PaymentVoucherNumberT&& value) {
    m_paymentVoucherNumberHasBeenSet = true;
    m_paymentVoucherNumber = std::forward<PaymentVoucherNumberT>(value);
  }
  template <typename PaymentVoucherNumberT = Aws::String>
  VietnamAdditionalInfo& WithPaymentVoucherNumber(PaymentVoucherNumberT&& value) {
    SetPaymentVoucherNumber(std::forward<PaymentVoucherNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date on the tax return payment document. Required when
   * <code>vatCreditMethod</code> is <code>true</code>; must not be specified when it
   * is <code>false</code>.</p>
   */
  inline const Aws::String& GetPaymentVoucherNumberDate() const { return m_paymentVoucherNumberDate; }
  inline bool PaymentVoucherNumberDateHasBeenSet() const { return m_paymentVoucherNumberDateHasBeenSet; }
  template <typename PaymentVoucherNumberDateT = Aws::String>
  void SetPaymentVoucherNumberDate(PaymentVoucherNumberDateT&& value) {
    m_paymentVoucherNumberDateHasBeenSet = true;
    m_paymentVoucherNumberDate = std::forward<PaymentVoucherNumberDateT>(value);
  }
  template <typename PaymentVoucherNumberDateT = Aws::String>
  VietnamAdditionalInfo& WithPaymentVoucherNumberDate(PaymentVoucherNumberDateT&& value) {
    SetPaymentVoucherNumberDate(std::forward<PaymentVoucherNumberDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether your business applies the VAT credit method in Vietnam. Specify
   * <code>true</code> for a business (sector <code>Business</code>) or
   * <code>false</code> for an individual (sector <code>Individual</code>).</p>
   */
  inline bool GetVatCreditMethod() const { return m_vatCreditMethod; }
  inline bool VatCreditMethodHasBeenSet() const { return m_vatCreditMethodHasBeenSet; }
  inline void SetVatCreditMethod(bool value) {
    m_vatCreditMethodHasBeenSet = true;
    m_vatCreditMethod = value;
  }
  inline VietnamAdditionalInfo& WithVatCreditMethod(bool value) {
    SetVatCreditMethod(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_enterpriseIdentificationNumber;

  Aws::String m_electronicTransactionCodeNumber;

  Aws::String m_paymentVoucherNumber;

  Aws::String m_paymentVoucherNumberDate;

  bool m_vatCreditMethod{false};
  bool m_enterpriseIdentificationNumberHasBeenSet = false;
  bool m_electronicTransactionCodeNumberHasBeenSet = false;
  bool m_paymentVoucherNumberHasBeenSet = false;
  bool m_paymentVoucherNumberDateHasBeenSet = false;
  bool m_vatCreditMethodHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
