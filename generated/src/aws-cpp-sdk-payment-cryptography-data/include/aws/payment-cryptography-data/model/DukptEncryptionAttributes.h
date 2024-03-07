/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/DukptDerivationType.h>
#include <aws/payment-cryptography-data/model/DukptKeyVariant.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/DukptEncryptionMode.h>
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
   * <p>Parameters that are required to encrypt plaintext data using
   * DUKPT.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DukptEncryptionAttributes">AWS
   * API Reference</a></p>
   */
  class DukptEncryptionAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptEncryptionAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key type encrypted using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code> </p>
     */
    inline const DukptDerivationType& GetDukptKeyDerivationType() const{ return m_dukptKeyDerivationType; }

    /**
     * <p>The key type encrypted using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code> </p>
     */
    inline bool DukptKeyDerivationTypeHasBeenSet() const { return m_dukptKeyDerivationTypeHasBeenSet; }

    /**
     * <p>The key type encrypted using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code> </p>
     */
    inline void SetDukptKeyDerivationType(const DukptDerivationType& value) { m_dukptKeyDerivationTypeHasBeenSet = true; m_dukptKeyDerivationType = value; }

    /**
     * <p>The key type encrypted using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code> </p>
     */
    inline void SetDukptKeyDerivationType(DukptDerivationType&& value) { m_dukptKeyDerivationTypeHasBeenSet = true; m_dukptKeyDerivationType = std::move(value); }

    /**
     * <p>The key type encrypted using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code> </p>
     */
    inline DukptEncryptionAttributes& WithDukptKeyDerivationType(const DukptDerivationType& value) { SetDukptKeyDerivationType(value); return *this;}

    /**
     * <p>The key type encrypted using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code> </p>
     */
    inline DukptEncryptionAttributes& WithDukptKeyDerivationType(DukptDerivationType&& value) { SetDukptKeyDerivationType(std::move(value)); return *this;}


    /**
     * <p>The type of use of DUKPT, which can be incoming data decryption, outgoing
     * data encryption, or both.</p>
     */
    inline const DukptKeyVariant& GetDukptKeyVariant() const{ return m_dukptKeyVariant; }

    /**
     * <p>The type of use of DUKPT, which can be incoming data decryption, outgoing
     * data encryption, or both.</p>
     */
    inline bool DukptKeyVariantHasBeenSet() const { return m_dukptKeyVariantHasBeenSet; }

    /**
     * <p>The type of use of DUKPT, which can be incoming data decryption, outgoing
     * data encryption, or both.</p>
     */
    inline void SetDukptKeyVariant(const DukptKeyVariant& value) { m_dukptKeyVariantHasBeenSet = true; m_dukptKeyVariant = value; }

    /**
     * <p>The type of use of DUKPT, which can be incoming data decryption, outgoing
     * data encryption, or both.</p>
     */
    inline void SetDukptKeyVariant(DukptKeyVariant&& value) { m_dukptKeyVariantHasBeenSet = true; m_dukptKeyVariant = std::move(value); }

    /**
     * <p>The type of use of DUKPT, which can be incoming data decryption, outgoing
     * data encryption, or both.</p>
     */
    inline DukptEncryptionAttributes& WithDukptKeyVariant(const DukptKeyVariant& value) { SetDukptKeyVariant(value); return *this;}

    /**
     * <p>The type of use of DUKPT, which can be incoming data decryption, outgoing
     * data encryption, or both.</p>
     */
    inline DukptEncryptionAttributes& WithDukptKeyVariant(DukptKeyVariant&& value) { SetDukptKeyVariant(std::move(value)); return *this;}


    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline const Aws::String& GetInitializationVector() const{ return m_initializationVector; }

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline void SetInitializationVector(const Aws::String& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = value; }

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline void SetInitializationVector(Aws::String&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::move(value); }

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline void SetInitializationVector(const char* value) { m_initializationVectorHasBeenSet = true; m_initializationVector.assign(value); }

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline DukptEncryptionAttributes& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline DukptEncryptionAttributes& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline DukptEncryptionAttributes& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}


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
    inline DukptEncryptionAttributes& WithKeySerialNumber(const Aws::String& value) { SetKeySerialNumber(value); return *this;}

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline DukptEncryptionAttributes& WithKeySerialNumber(Aws::String&& value) { SetKeySerialNumber(std::move(value)); return *this;}

    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline DukptEncryptionAttributes& WithKeySerialNumber(const char* value) { SetKeySerialNumber(value); return *this;}


    /**
     * <p>The block cipher method to use for encryption.</p> <p>The default is CBC.</p>
     */
    inline const DukptEncryptionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The block cipher method to use for encryption.</p> <p>The default is CBC.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The block cipher method to use for encryption.</p> <p>The default is CBC.</p>
     */
    inline void SetMode(const DukptEncryptionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The block cipher method to use for encryption.</p> <p>The default is CBC.</p>
     */
    inline void SetMode(DukptEncryptionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The block cipher method to use for encryption.</p> <p>The default is CBC.</p>
     */
    inline DukptEncryptionAttributes& WithMode(const DukptEncryptionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The block cipher method to use for encryption.</p> <p>The default is CBC.</p>
     */
    inline DukptEncryptionAttributes& WithMode(DukptEncryptionMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    DukptDerivationType m_dukptKeyDerivationType;
    bool m_dukptKeyDerivationTypeHasBeenSet = false;

    DukptKeyVariant m_dukptKeyVariant;
    bool m_dukptKeyVariantHasBeenSet = false;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;

    Aws::String m_keySerialNumber;
    bool m_keySerialNumberHasBeenSet = false;

    DukptEncryptionMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
