/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/DukptDerivationType.h>
#include <aws/payment-cryptography-data/model/DukptKeyVariant.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Parameters required for DUKPT MAC generation and verification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/MacAlgorithmDukpt">AWS
   * API Reference</a></p>
   */
  class MacAlgorithmDukpt
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmDukpt();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmDukpt(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmDukpt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key type derived using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code>.</p>
     */
    inline const DukptDerivationType& GetDukptDerivationType() const{ return m_dukptDerivationType; }

    /**
     * <p>The key type derived using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code>.</p>
     */
    inline bool DukptDerivationTypeHasBeenSet() const { return m_dukptDerivationTypeHasBeenSet; }

    /**
     * <p>The key type derived using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code>.</p>
     */
    inline void SetDukptDerivationType(const DukptDerivationType& value) { m_dukptDerivationTypeHasBeenSet = true; m_dukptDerivationType = value; }

    /**
     * <p>The key type derived using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code>.</p>
     */
    inline void SetDukptDerivationType(DukptDerivationType&& value) { m_dukptDerivationTypeHasBeenSet = true; m_dukptDerivationType = std::move(value); }

    /**
     * <p>The key type derived using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code>.</p>
     */
    inline MacAlgorithmDukpt& WithDukptDerivationType(const DukptDerivationType& value) { SetDukptDerivationType(value); return *this;}

    /**
     * <p>The key type derived using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code>.</p>
     */
    inline MacAlgorithmDukpt& WithDukptDerivationType(DukptDerivationType&& value) { SetDukptDerivationType(std::move(value)); return *this;}


    /**
     * <p>The type of use of DUKPT, which can be MAC generation, MAC verification, or
     * both.</p>
     */
    inline const DukptKeyVariant& GetDukptKeyVariant() const{ return m_dukptKeyVariant; }

    /**
     * <p>The type of use of DUKPT, which can be MAC generation, MAC verification, or
     * both.</p>
     */
    inline bool DukptKeyVariantHasBeenSet() const { return m_dukptKeyVariantHasBeenSet; }

    /**
     * <p>The type of use of DUKPT, which can be MAC generation, MAC verification, or
     * both.</p>
     */
    inline void SetDukptKeyVariant(const DukptKeyVariant& value) { m_dukptKeyVariantHasBeenSet = true; m_dukptKeyVariant = value; }

    /**
     * <p>The type of use of DUKPT, which can be MAC generation, MAC verification, or
     * both.</p>
     */
    inline void SetDukptKeyVariant(DukptKeyVariant&& value) { m_dukptKeyVariantHasBeenSet = true; m_dukptKeyVariant = std::move(value); }

    /**
     * <p>The type of use of DUKPT, which can be MAC generation, MAC verification, or
     * both.</p>
     */
    inline MacAlgorithmDukpt& WithDukptKeyVariant(const DukptKeyVariant& value) { SetDukptKeyVariant(value); return *this;}

    /**
     * <p>The type of use of DUKPT, which can be MAC generation, MAC verification, or
     * both.</p>
     */
    inline MacAlgorithmDukpt& WithDukptKeyVariant(DukptKeyVariant&& value) { SetDukptKeyVariant(std::move(value)); return *this;}


    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline const Aws::String& GetKeySerialNumber() const{ return m_keySerialNumber; }

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline bool KeySerialNumberHasBeenSet() const { return m_keySerialNumberHasBeenSet; }

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline void SetKeySerialNumber(const Aws::String& value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber = value; }

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline void SetKeySerialNumber(Aws::String&& value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber = std::move(value); }

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline void SetKeySerialNumber(const char* value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber.assign(value); }

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline MacAlgorithmDukpt& WithKeySerialNumber(const Aws::String& value) { SetKeySerialNumber(value); return *this;}

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline MacAlgorithmDukpt& WithKeySerialNumber(Aws::String&& value) { SetKeySerialNumber(std::move(value)); return *this;}

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline MacAlgorithmDukpt& WithKeySerialNumber(const char* value) { SetKeySerialNumber(value); return *this;}

  private:

    DukptDerivationType m_dukptDerivationType;
    bool m_dukptDerivationTypeHasBeenSet = false;

    DukptKeyVariant m_dukptKeyVariant;
    bool m_dukptKeyVariantHasBeenSet = false;

    Aws::String m_keySerialNumber;
    bool m_keySerialNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
