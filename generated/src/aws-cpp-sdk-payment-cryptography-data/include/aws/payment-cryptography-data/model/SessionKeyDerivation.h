/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/SessionKeyAmex.h>
#include <aws/payment-cryptography-data/model/SessionKeyEmv2000.h>
#include <aws/payment-cryptography-data/model/SessionKeyEmvCommon.h>
#include <aws/payment-cryptography-data/model/SessionKeyMastercard.h>
#include <aws/payment-cryptography-data/model/SessionKeyVisa.h>
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
   * <p>Parameters to derive a session key for Authorization Response Cryptogram
   * (ARQC) verification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/SessionKeyDerivation">AWS
   * API Reference</a></p>
   */
  class SessionKeyDerivation
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivation();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parameters to derive session key for an Amex payment card for ARQC
     * verification.</p>
     */
    inline const SessionKeyAmex& GetAmex() const{ return m_amex; }

    /**
     * <p>Parameters to derive session key for an Amex payment card for ARQC
     * verification.</p>
     */
    inline bool AmexHasBeenSet() const { return m_amexHasBeenSet; }

    /**
     * <p>Parameters to derive session key for an Amex payment card for ARQC
     * verification.</p>
     */
    inline void SetAmex(const SessionKeyAmex& value) { m_amexHasBeenSet = true; m_amex = value; }

    /**
     * <p>Parameters to derive session key for an Amex payment card for ARQC
     * verification.</p>
     */
    inline void SetAmex(SessionKeyAmex&& value) { m_amexHasBeenSet = true; m_amex = std::move(value); }

    /**
     * <p>Parameters to derive session key for an Amex payment card for ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithAmex(const SessionKeyAmex& value) { SetAmex(value); return *this;}

    /**
     * <p>Parameters to derive session key for an Amex payment card for ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithAmex(SessionKeyAmex&& value) { SetAmex(std::move(value)); return *this;}


    /**
     * <p>Parameters to derive session key for an Emv2000 payment card for ARQC
     * verification.</p>
     */
    inline const SessionKeyEmv2000& GetEmv2000() const{ return m_emv2000; }

    /**
     * <p>Parameters to derive session key for an Emv2000 payment card for ARQC
     * verification.</p>
     */
    inline bool Emv2000HasBeenSet() const { return m_emv2000HasBeenSet; }

    /**
     * <p>Parameters to derive session key for an Emv2000 payment card for ARQC
     * verification.</p>
     */
    inline void SetEmv2000(const SessionKeyEmv2000& value) { m_emv2000HasBeenSet = true; m_emv2000 = value; }

    /**
     * <p>Parameters to derive session key for an Emv2000 payment card for ARQC
     * verification.</p>
     */
    inline void SetEmv2000(SessionKeyEmv2000&& value) { m_emv2000HasBeenSet = true; m_emv2000 = std::move(value); }

    /**
     * <p>Parameters to derive session key for an Emv2000 payment card for ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithEmv2000(const SessionKeyEmv2000& value) { SetEmv2000(value); return *this;}

    /**
     * <p>Parameters to derive session key for an Emv2000 payment card for ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithEmv2000(SessionKeyEmv2000&& value) { SetEmv2000(std::move(value)); return *this;}


    /**
     * <p>Parameters to derive session key for an Emv common payment card for ARQC
     * verification.</p>
     */
    inline const SessionKeyEmvCommon& GetEmvCommon() const{ return m_emvCommon; }

    /**
     * <p>Parameters to derive session key for an Emv common payment card for ARQC
     * verification.</p>
     */
    inline bool EmvCommonHasBeenSet() const { return m_emvCommonHasBeenSet; }

    /**
     * <p>Parameters to derive session key for an Emv common payment card for ARQC
     * verification.</p>
     */
    inline void SetEmvCommon(const SessionKeyEmvCommon& value) { m_emvCommonHasBeenSet = true; m_emvCommon = value; }

    /**
     * <p>Parameters to derive session key for an Emv common payment card for ARQC
     * verification.</p>
     */
    inline void SetEmvCommon(SessionKeyEmvCommon&& value) { m_emvCommonHasBeenSet = true; m_emvCommon = std::move(value); }

    /**
     * <p>Parameters to derive session key for an Emv common payment card for ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithEmvCommon(const SessionKeyEmvCommon& value) { SetEmvCommon(value); return *this;}

    /**
     * <p>Parameters to derive session key for an Emv common payment card for ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithEmvCommon(SessionKeyEmvCommon&& value) { SetEmvCommon(std::move(value)); return *this;}


    /**
     * <p>Parameters to derive session key for a Mastercard payment card for ARQC
     * verification.</p>
     */
    inline const SessionKeyMastercard& GetMastercard() const{ return m_mastercard; }

    /**
     * <p>Parameters to derive session key for a Mastercard payment card for ARQC
     * verification.</p>
     */
    inline bool MastercardHasBeenSet() const { return m_mastercardHasBeenSet; }

    /**
     * <p>Parameters to derive session key for a Mastercard payment card for ARQC
     * verification.</p>
     */
    inline void SetMastercard(const SessionKeyMastercard& value) { m_mastercardHasBeenSet = true; m_mastercard = value; }

    /**
     * <p>Parameters to derive session key for a Mastercard payment card for ARQC
     * verification.</p>
     */
    inline void SetMastercard(SessionKeyMastercard&& value) { m_mastercardHasBeenSet = true; m_mastercard = std::move(value); }

    /**
     * <p>Parameters to derive session key for a Mastercard payment card for ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithMastercard(const SessionKeyMastercard& value) { SetMastercard(value); return *this;}

    /**
     * <p>Parameters to derive session key for a Mastercard payment card for ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithMastercard(SessionKeyMastercard&& value) { SetMastercard(std::move(value)); return *this;}


    /**
     * <p>Parameters to derive session key for a Visa payment cardfor ARQC
     * verification.</p>
     */
    inline const SessionKeyVisa& GetVisa() const{ return m_visa; }

    /**
     * <p>Parameters to derive session key for a Visa payment cardfor ARQC
     * verification.</p>
     */
    inline bool VisaHasBeenSet() const { return m_visaHasBeenSet; }

    /**
     * <p>Parameters to derive session key for a Visa payment cardfor ARQC
     * verification.</p>
     */
    inline void SetVisa(const SessionKeyVisa& value) { m_visaHasBeenSet = true; m_visa = value; }

    /**
     * <p>Parameters to derive session key for a Visa payment cardfor ARQC
     * verification.</p>
     */
    inline void SetVisa(SessionKeyVisa&& value) { m_visaHasBeenSet = true; m_visa = std::move(value); }

    /**
     * <p>Parameters to derive session key for a Visa payment cardfor ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithVisa(const SessionKeyVisa& value) { SetVisa(value); return *this;}

    /**
     * <p>Parameters to derive session key for a Visa payment cardfor ARQC
     * verification.</p>
     */
    inline SessionKeyDerivation& WithVisa(SessionKeyVisa&& value) { SetVisa(std::move(value)); return *this;}

  private:

    SessionKeyAmex m_amex;
    bool m_amexHasBeenSet = false;

    SessionKeyEmv2000 m_emv2000;
    bool m_emv2000HasBeenSet = false;

    SessionKeyEmvCommon m_emvCommon;
    bool m_emvCommonHasBeenSet = false;

    SessionKeyMastercard m_mastercard;
    bool m_mastercardHasBeenSet = false;

    SessionKeyVisa m_visa;
    bool m_visaHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
