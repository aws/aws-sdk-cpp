/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>Additional tax information to specify for a TRN in Vietnam.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/VietnamAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class VietnamAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API VietnamAdditionalInfo();
    AWS_TAXSETTINGS_API VietnamAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API VietnamAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The electronic transaction code number on the tax return document.</p>
     */
    inline const Aws::String& GetElectronicTransactionCodeNumber() const{ return m_electronicTransactionCodeNumber; }
    inline bool ElectronicTransactionCodeNumberHasBeenSet() const { return m_electronicTransactionCodeNumberHasBeenSet; }
    inline void SetElectronicTransactionCodeNumber(const Aws::String& value) { m_electronicTransactionCodeNumberHasBeenSet = true; m_electronicTransactionCodeNumber = value; }
    inline void SetElectronicTransactionCodeNumber(Aws::String&& value) { m_electronicTransactionCodeNumberHasBeenSet = true; m_electronicTransactionCodeNumber = std::move(value); }
    inline void SetElectronicTransactionCodeNumber(const char* value) { m_electronicTransactionCodeNumberHasBeenSet = true; m_electronicTransactionCodeNumber.assign(value); }
    inline VietnamAdditionalInfo& WithElectronicTransactionCodeNumber(const Aws::String& value) { SetElectronicTransactionCodeNumber(value); return *this;}
    inline VietnamAdditionalInfo& WithElectronicTransactionCodeNumber(Aws::String&& value) { SetElectronicTransactionCodeNumber(std::move(value)); return *this;}
    inline VietnamAdditionalInfo& WithElectronicTransactionCodeNumber(const char* value) { SetElectronicTransactionCodeNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enterprise identification number for tax registration.</p>
     */
    inline const Aws::String& GetEnterpriseIdentificationNumber() const{ return m_enterpriseIdentificationNumber; }
    inline bool EnterpriseIdentificationNumberHasBeenSet() const { return m_enterpriseIdentificationNumberHasBeenSet; }
    inline void SetEnterpriseIdentificationNumber(const Aws::String& value) { m_enterpriseIdentificationNumberHasBeenSet = true; m_enterpriseIdentificationNumber = value; }
    inline void SetEnterpriseIdentificationNumber(Aws::String&& value) { m_enterpriseIdentificationNumberHasBeenSet = true; m_enterpriseIdentificationNumber = std::move(value); }
    inline void SetEnterpriseIdentificationNumber(const char* value) { m_enterpriseIdentificationNumberHasBeenSet = true; m_enterpriseIdentificationNumber.assign(value); }
    inline VietnamAdditionalInfo& WithEnterpriseIdentificationNumber(const Aws::String& value) { SetEnterpriseIdentificationNumber(value); return *this;}
    inline VietnamAdditionalInfo& WithEnterpriseIdentificationNumber(Aws::String&& value) { SetEnterpriseIdentificationNumber(std::move(value)); return *this;}
    inline VietnamAdditionalInfo& WithEnterpriseIdentificationNumber(const char* value) { SetEnterpriseIdentificationNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment voucher number on the tax return payment document.</p>
     */
    inline const Aws::String& GetPaymentVoucherNumber() const{ return m_paymentVoucherNumber; }
    inline bool PaymentVoucherNumberHasBeenSet() const { return m_paymentVoucherNumberHasBeenSet; }
    inline void SetPaymentVoucherNumber(const Aws::String& value) { m_paymentVoucherNumberHasBeenSet = true; m_paymentVoucherNumber = value; }
    inline void SetPaymentVoucherNumber(Aws::String&& value) { m_paymentVoucherNumberHasBeenSet = true; m_paymentVoucherNumber = std::move(value); }
    inline void SetPaymentVoucherNumber(const char* value) { m_paymentVoucherNumberHasBeenSet = true; m_paymentVoucherNumber.assign(value); }
    inline VietnamAdditionalInfo& WithPaymentVoucherNumber(const Aws::String& value) { SetPaymentVoucherNumber(value); return *this;}
    inline VietnamAdditionalInfo& WithPaymentVoucherNumber(Aws::String&& value) { SetPaymentVoucherNumber(std::move(value)); return *this;}
    inline VietnamAdditionalInfo& WithPaymentVoucherNumber(const char* value) { SetPaymentVoucherNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on the tax return payment document.</p>
     */
    inline const Aws::String& GetPaymentVoucherNumberDate() const{ return m_paymentVoucherNumberDate; }
    inline bool PaymentVoucherNumberDateHasBeenSet() const { return m_paymentVoucherNumberDateHasBeenSet; }
    inline void SetPaymentVoucherNumberDate(const Aws::String& value) { m_paymentVoucherNumberDateHasBeenSet = true; m_paymentVoucherNumberDate = value; }
    inline void SetPaymentVoucherNumberDate(Aws::String&& value) { m_paymentVoucherNumberDateHasBeenSet = true; m_paymentVoucherNumberDate = std::move(value); }
    inline void SetPaymentVoucherNumberDate(const char* value) { m_paymentVoucherNumberDateHasBeenSet = true; m_paymentVoucherNumberDate.assign(value); }
    inline VietnamAdditionalInfo& WithPaymentVoucherNumberDate(const Aws::String& value) { SetPaymentVoucherNumberDate(value); return *this;}
    inline VietnamAdditionalInfo& WithPaymentVoucherNumberDate(Aws::String&& value) { SetPaymentVoucherNumberDate(std::move(value)); return *this;}
    inline VietnamAdditionalInfo& WithPaymentVoucherNumberDate(const char* value) { SetPaymentVoucherNumberDate(value); return *this;}
    ///@}
  private:

    Aws::String m_electronicTransactionCodeNumber;
    bool m_electronicTransactionCodeNumberHasBeenSet = false;

    Aws::String m_enterpriseIdentificationNumber;
    bool m_enterpriseIdentificationNumberHasBeenSet = false;

    Aws::String m_paymentVoucherNumber;
    bool m_paymentVoucherNumberHasBeenSet = false;

    Aws::String m_paymentVoucherNumberDate;
    bool m_paymentVoucherNumberDateHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
