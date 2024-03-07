/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/EmvMajorKeyDerivationMode.h>
#include <aws/payment-cryptography-data/model/EmvEncryptionMode.h>
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
   * <p>Parameters for plaintext encryption using EMV keys.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/EmvEncryptionAttributes">AWS
   * API Reference</a></p>
   */
  class EmvEncryptionAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvEncryptionAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline EmvEncryptionAttributes& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline EmvEncryptionAttributes& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}

    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline EmvEncryptionAttributes& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}


    /**
     * <p>The EMV derivation mode to use for ICC master key derivation as per EMV
     * version 4.3 book 2.</p>
     */
    inline const EmvMajorKeyDerivationMode& GetMajorKeyDerivationMode() const{ return m_majorKeyDerivationMode; }

    /**
     * <p>The EMV derivation mode to use for ICC master key derivation as per EMV
     * version 4.3 book 2.</p>
     */
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }

    /**
     * <p>The EMV derivation mode to use for ICC master key derivation as per EMV
     * version 4.3 book 2.</p>
     */
    inline void SetMajorKeyDerivationMode(const EmvMajorKeyDerivationMode& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }

    /**
     * <p>The EMV derivation mode to use for ICC master key derivation as per EMV
     * version 4.3 book 2.</p>
     */
    inline void SetMajorKeyDerivationMode(EmvMajorKeyDerivationMode&& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = std::move(value); }

    /**
     * <p>The EMV derivation mode to use for ICC master key derivation as per EMV
     * version 4.3 book 2.</p>
     */
    inline EmvEncryptionAttributes& WithMajorKeyDerivationMode(const EmvMajorKeyDerivationMode& value) { SetMajorKeyDerivationMode(value); return *this;}

    /**
     * <p>The EMV derivation mode to use for ICC master key derivation as per EMV
     * version 4.3 book 2.</p>
     */
    inline EmvEncryptionAttributes& WithMajorKeyDerivationMode(EmvMajorKeyDerivationMode&& value) { SetMajorKeyDerivationMode(std::move(value)); return *this;}


    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline const EmvEncryptionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline void SetMode(const EmvEncryptionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline void SetMode(EmvEncryptionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline EmvEncryptionAttributes& WithMode(const EmvEncryptionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline EmvEncryptionAttributes& WithMode(EmvEncryptionMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const{ return m_panSequenceNumber; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(const Aws::String& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = value; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(Aws::String&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::move(value); }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(const char* value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber.assign(value); }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline EmvEncryptionAttributes& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline EmvEncryptionAttributes& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline EmvEncryptionAttributes& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}


    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline EmvEncryptionAttributes& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline EmvEncryptionAttributes& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline EmvEncryptionAttributes& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}


    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline const Aws::String& GetSessionDerivationData() const{ return m_sessionDerivationData; }

    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline bool SessionDerivationDataHasBeenSet() const { return m_sessionDerivationDataHasBeenSet; }

    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline void SetSessionDerivationData(const Aws::String& value) { m_sessionDerivationDataHasBeenSet = true; m_sessionDerivationData = value; }

    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline void SetSessionDerivationData(Aws::String&& value) { m_sessionDerivationDataHasBeenSet = true; m_sessionDerivationData = std::move(value); }

    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline void SetSessionDerivationData(const char* value) { m_sessionDerivationDataHasBeenSet = true; m_sessionDerivationData.assign(value); }

    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline EmvEncryptionAttributes& WithSessionDerivationData(const Aws::String& value) { SetSessionDerivationData(value); return *this;}

    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline EmvEncryptionAttributes& WithSessionDerivationData(Aws::String&& value) { SetSessionDerivationData(std::move(value)); return *this;}

    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline EmvEncryptionAttributes& WithSessionDerivationData(const char* value) { SetSessionDerivationData(value); return *this;}

  private:

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;

    EmvMajorKeyDerivationMode m_majorKeyDerivationMode;
    bool m_majorKeyDerivationModeHasBeenSet = false;

    EmvEncryptionMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_sessionDerivationData;
    bool m_sessionDerivationDataHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
