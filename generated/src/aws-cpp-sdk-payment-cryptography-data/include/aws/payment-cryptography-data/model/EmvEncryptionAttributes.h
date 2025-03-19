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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvEncryptionAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The EMV derivation mode to use for ICC master key derivation as per EMV
     * version 4.3 book 2.</p>
     */
    inline EmvMajorKeyDerivationMode GetMajorKeyDerivationMode() const { return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(EmvMajorKeyDerivationMode value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline EmvEncryptionAttributes& WithMajorKeyDerivationMode(EmvMajorKeyDerivationMode value) { SetMajorKeyDerivationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const { return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    template<typename PrimaryAccountNumberT = Aws::String>
    void SetPrimaryAccountNumber(PrimaryAccountNumberT&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::forward<PrimaryAccountNumberT>(value); }
    template<typename PrimaryAccountNumberT = Aws::String>
    EmvEncryptionAttributes& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN). Typically 00 is used, if no value is provided by
     * the terminal.</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const { return m_panSequenceNumber; }
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }
    template<typename PanSequenceNumberT = Aws::String>
    void SetPanSequenceNumber(PanSequenceNumberT&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::forward<PanSequenceNumberT>(value); }
    template<typename PanSequenceNumberT = Aws::String>
    EmvEncryptionAttributes& WithPanSequenceNumber(PanSequenceNumberT&& value) { SetPanSequenceNumber(std::forward<PanSequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The derivation value used to derive the ICC session key. It is typically the
     * application transaction counter value padded with zeros or previous ARQC value
     * padded with zeros as per EMV version 4.3 book 2.</p>
     */
    inline const Aws::String& GetSessionDerivationData() const { return m_sessionDerivationData; }
    inline bool SessionDerivationDataHasBeenSet() const { return m_sessionDerivationDataHasBeenSet; }
    template<typename SessionDerivationDataT = Aws::String>
    void SetSessionDerivationData(SessionDerivationDataT&& value) { m_sessionDerivationDataHasBeenSet = true; m_sessionDerivationData = std::forward<SessionDerivationDataT>(value); }
    template<typename SessionDerivationDataT = Aws::String>
    EmvEncryptionAttributes& WithSessionDerivationData(SessionDerivationDataT&& value) { SetSessionDerivationData(std::forward<SessionDerivationDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline EmvEncryptionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(EmvEncryptionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline EmvEncryptionAttributes& WithMode(EmvEncryptionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline const Aws::String& GetInitializationVector() const { return m_initializationVector; }
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }
    template<typename InitializationVectorT = Aws::String>
    void SetInitializationVector(InitializationVectorT&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::forward<InitializationVectorT>(value); }
    template<typename InitializationVectorT = Aws::String>
    EmvEncryptionAttributes& WithInitializationVector(InitializationVectorT&& value) { SetInitializationVector(std::forward<InitializationVectorT>(value)); return *this;}
    ///@}
  private:

    EmvMajorKeyDerivationMode m_majorKeyDerivationMode{EmvMajorKeyDerivationMode::NOT_SET};
    bool m_majorKeyDerivationModeHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_sessionDerivationData;
    bool m_sessionDerivationDataHasBeenSet = false;

    EmvEncryptionMode m_mode{EmvEncryptionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
