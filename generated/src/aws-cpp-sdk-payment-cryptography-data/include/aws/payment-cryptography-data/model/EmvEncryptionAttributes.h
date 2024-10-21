/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/EmvMajorKeyDerivationMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>The EMV derivation mode to use for ICC master key derivation as per EMV
     * version 4.3 book 2.</p>
     */
    inline const EmvMajorKeyDerivationMode& GetMajorKeyDerivationMode() const{ return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(const EmvMajorKeyDerivationMode& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline void SetMajorKeyDerivationMode(EmvMajorKeyDerivationMode&& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = std::move(value); }
    inline EmvEncryptionAttributes& WithMajorKeyDerivationMode(const EmvMajorKeyDerivationMode& value) { SetMajorKeyDerivationMode(value); return *this;}
    inline EmvEncryptionAttributes& WithMajorKeyDerivationMode(EmvMajorKeyDerivationMode&& value) { SetMajorKeyDerivationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }
    inline EmvEncryptionAttributes& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}
    inline EmvEncryptionAttributes& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}
    inline EmvEncryptionAttributes& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN). Typically 00 is used, if no value is provided by
     * the terminal.</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const{ return m_panSequenceNumber; }
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }
    inline void SetPanSequenceNumber(const Aws::String& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = value; }
    inline void SetPanSequenceNumber(Aws::String&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::move(value); }
    inline void SetPanSequenceNumber(const char* value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber.assign(value); }
    inline EmvEncryptionAttributes& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}
    inline EmvEncryptionAttributes& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}
    inline EmvEncryptionAttributes& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline const Aws::String& GetSessionDerivationData() const{ return m_sessionDerivationData; }
    inline bool SessionDerivationDataHasBeenSet() const { return m_sessionDerivationDataHasBeenSet; }
    inline void SetSessionDerivationData(const Aws::String& value) { m_sessionDerivationDataHasBeenSet = true; m_sessionDerivationData = value; }
    inline void SetSessionDerivationData(Aws::String&& value) { m_sessionDerivationDataHasBeenSet = true; m_sessionDerivationData = std::move(value); }
    inline void SetSessionDerivationData(const char* value) { m_sessionDerivationDataHasBeenSet = true; m_sessionDerivationData.assign(value); }
    inline EmvEncryptionAttributes& WithSessionDerivationData(const Aws::String& value) { SetSessionDerivationData(value); return *this;}
    inline EmvEncryptionAttributes& WithSessionDerivationData(Aws::String&& value) { SetSessionDerivationData(std::move(value)); return *this;}
    inline EmvEncryptionAttributes& WithSessionDerivationData(const char* value) { SetSessionDerivationData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline const EmvEncryptionMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const EmvEncryptionMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(EmvEncryptionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline EmvEncryptionAttributes& WithMode(const EmvEncryptionMode& value) { SetMode(value); return *this;}
    inline EmvEncryptionAttributes& WithMode(EmvEncryptionMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline const Aws::String& GetInitializationVector() const{ return m_initializationVector; }
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }
    inline void SetInitializationVector(const Aws::String& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = value; }
    inline void SetInitializationVector(Aws::String&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::move(value); }
    inline void SetInitializationVector(const char* value) { m_initializationVectorHasBeenSet = true; m_initializationVector.assign(value); }
    inline EmvEncryptionAttributes& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}
    inline EmvEncryptionAttributes& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}
    inline EmvEncryptionAttributes& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}
    ///@}
  private:

    EmvMajorKeyDerivationMode m_majorKeyDerivationMode;
    bool m_majorKeyDerivationModeHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_sessionDerivationData;
    bool m_sessionDerivationDataHasBeenSet = false;

    EmvEncryptionMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
