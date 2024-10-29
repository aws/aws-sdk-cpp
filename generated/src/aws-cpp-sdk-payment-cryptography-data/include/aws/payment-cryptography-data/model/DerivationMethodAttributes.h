﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/EmvCommonAttributes.h>
#include <aws/payment-cryptography-data/model/AmexAttributes.h>
#include <aws/payment-cryptography-data/model/VisaAttributes.h>
#include <aws/payment-cryptography-data/model/Emv2000Attributes.h>
#include <aws/payment-cryptography-data/model/MasterCardAttributes.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Parameters to derive the payment card specific confidentiality and integrity
   * keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DerivationMethodAttributes">AWS
   * API Reference</a></p>
   */
  class DerivationMethodAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DerivationMethodAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DerivationMethodAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DerivationMethodAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters to derive the confidentiality and integrity keys for a payment
     * card using Emv common derivation method.</p>
     */
    inline const EmvCommonAttributes& GetEmvCommon() const{ return m_emvCommon; }
    inline bool EmvCommonHasBeenSet() const { return m_emvCommonHasBeenSet; }
    inline void SetEmvCommon(const EmvCommonAttributes& value) { m_emvCommonHasBeenSet = true; m_emvCommon = value; }
    inline void SetEmvCommon(EmvCommonAttributes&& value) { m_emvCommonHasBeenSet = true; m_emvCommon = std::move(value); }
    inline DerivationMethodAttributes& WithEmvCommon(const EmvCommonAttributes& value) { SetEmvCommon(value); return *this;}
    inline DerivationMethodAttributes& WithEmvCommon(EmvCommonAttributes&& value) { SetEmvCommon(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to derive the confidentiality and integrity keys for a payment
     * card using Amex derivation method.</p>
     */
    inline const AmexAttributes& GetAmex() const{ return m_amex; }
    inline bool AmexHasBeenSet() const { return m_amexHasBeenSet; }
    inline void SetAmex(const AmexAttributes& value) { m_amexHasBeenSet = true; m_amex = value; }
    inline void SetAmex(AmexAttributes&& value) { m_amexHasBeenSet = true; m_amex = std::move(value); }
    inline DerivationMethodAttributes& WithAmex(const AmexAttributes& value) { SetAmex(value); return *this;}
    inline DerivationMethodAttributes& WithAmex(AmexAttributes&& value) { SetAmex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to derive the confidentiality and integrity keys for a a payment
     * card using Visa derivation method.</p>
     */
    inline const VisaAttributes& GetVisa() const{ return m_visa; }
    inline bool VisaHasBeenSet() const { return m_visaHasBeenSet; }
    inline void SetVisa(const VisaAttributes& value) { m_visaHasBeenSet = true; m_visa = value; }
    inline void SetVisa(VisaAttributes&& value) { m_visaHasBeenSet = true; m_visa = std::move(value); }
    inline DerivationMethodAttributes& WithVisa(const VisaAttributes& value) { SetVisa(value); return *this;}
    inline DerivationMethodAttributes& WithVisa(VisaAttributes&& value) { SetVisa(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to derive the confidentiality and integrity keys for a payment
     * card using Emv2000 derivation method.</p>
     */
    inline const Emv2000Attributes& GetEmv2000() const{ return m_emv2000; }
    inline bool Emv2000HasBeenSet() const { return m_emv2000HasBeenSet; }
    inline void SetEmv2000(const Emv2000Attributes& value) { m_emv2000HasBeenSet = true; m_emv2000 = value; }
    inline void SetEmv2000(Emv2000Attributes&& value) { m_emv2000HasBeenSet = true; m_emv2000 = std::move(value); }
    inline DerivationMethodAttributes& WithEmv2000(const Emv2000Attributes& value) { SetEmv2000(value); return *this;}
    inline DerivationMethodAttributes& WithEmv2000(Emv2000Attributes&& value) { SetEmv2000(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to derive the confidentiality and integrity keys for a payment
     * card using Mastercard derivation method.</p>
     */
    inline const MasterCardAttributes& GetMastercard() const{ return m_mastercard; }
    inline bool MastercardHasBeenSet() const { return m_mastercardHasBeenSet; }
    inline void SetMastercard(const MasterCardAttributes& value) { m_mastercardHasBeenSet = true; m_mastercard = value; }
    inline void SetMastercard(MasterCardAttributes&& value) { m_mastercardHasBeenSet = true; m_mastercard = std::move(value); }
    inline DerivationMethodAttributes& WithMastercard(const MasterCardAttributes& value) { SetMastercard(value); return *this;}
    inline DerivationMethodAttributes& WithMastercard(MasterCardAttributes&& value) { SetMastercard(std::move(value)); return *this;}
    ///@}
  private:

    EmvCommonAttributes m_emvCommon;
    bool m_emvCommonHasBeenSet = false;

    AmexAttributes m_amex;
    bool m_amexHasBeenSet = false;

    VisaAttributes m_visa;
    bool m_visaHasBeenSet = false;

    Emv2000Attributes m_emv2000;
    bool m_emv2000HasBeenSet = false;

    MasterCardAttributes m_mastercard;
    bool m_mastercardHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
