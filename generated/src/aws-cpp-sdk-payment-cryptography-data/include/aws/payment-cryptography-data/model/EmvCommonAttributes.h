/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/MajorKeyDerivationMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/EmvEncryptionMode.h>
#include <aws/payment-cryptography-data/model/PinBlockPaddingType.h>
#include <aws/payment-cryptography-data/model/PinBlockLengthPosition.h>
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
   * <p>Parameters to derive the confidentiality and integrity keys for an Emv common
   * payment card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/EmvCommonAttributes">AWS
   * API Reference</a></p>
   */
  class EmvCommonAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvCommonAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvCommonAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvCommonAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method to use when deriving the master key for the payment card.</p>
     */
    inline MajorKeyDerivationMode GetMajorKeyDerivationMode() const { return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline EmvCommonAttributes& WithMajorKeyDerivationMode(MajorKeyDerivationMode value) { SetMajorKeyDerivationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN) of the cardholder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const { return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    template<typename PrimaryAccountNumberT = Aws::String>
    void SetPrimaryAccountNumber(PrimaryAccountNumberT&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::forward<PrimaryAccountNumberT>(value); }
    template<typename PrimaryAccountNumberT = Aws::String>
    EmvCommonAttributes& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
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
    EmvCommonAttributes& WithPanSequenceNumber(PanSequenceNumberT&& value) { SetPanSequenceNumber(std::forward<PanSequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application cryptogram for the current transaction that is provided by
     * the terminal during transaction processing.</p>
     */
    inline const Aws::String& GetApplicationCryptogram() const { return m_applicationCryptogram; }
    inline bool ApplicationCryptogramHasBeenSet() const { return m_applicationCryptogramHasBeenSet; }
    template<typename ApplicationCryptogramT = Aws::String>
    void SetApplicationCryptogram(ApplicationCryptogramT&& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = std::forward<ApplicationCryptogramT>(value); }
    template<typename ApplicationCryptogramT = Aws::String>
    EmvCommonAttributes& WithApplicationCryptogram(ApplicationCryptogramT&& value) { SetApplicationCryptogram(std::forward<ApplicationCryptogramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline EmvEncryptionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(EmvEncryptionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline EmvCommonAttributes& WithMode(EmvEncryptionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The padding to be added to the PIN block prior to encryption.</p> <p>Padding
     * type should be <code>ISO_IEC_7816_4</code>, if
     * <code>PinBlockLengthPosition</code> is set to <code>FRONT_OF_PIN_BLOCK</code>.
     * No padding is required, if <code>PinBlockLengthPosition</code> is set to
     * <code>NONE</code>.</p>
     */
    inline PinBlockPaddingType GetPinBlockPaddingType() const { return m_pinBlockPaddingType; }
    inline bool PinBlockPaddingTypeHasBeenSet() const { return m_pinBlockPaddingTypeHasBeenSet; }
    inline void SetPinBlockPaddingType(PinBlockPaddingType value) { m_pinBlockPaddingTypeHasBeenSet = true; m_pinBlockPaddingType = value; }
    inline EmvCommonAttributes& WithPinBlockPaddingType(PinBlockPaddingType value) { SetPinBlockPaddingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if PIN block length should be added to front of the pin block. </p>
     * <p>If value is set to <code>FRONT_OF_PIN_BLOCK</code>, then PIN block padding
     * type should be <code>ISO_IEC_7816_4</code>.</p>
     */
    inline PinBlockLengthPosition GetPinBlockLengthPosition() const { return m_pinBlockLengthPosition; }
    inline bool PinBlockLengthPositionHasBeenSet() const { return m_pinBlockLengthPositionHasBeenSet; }
    inline void SetPinBlockLengthPosition(PinBlockLengthPosition value) { m_pinBlockLengthPositionHasBeenSet = true; m_pinBlockLengthPosition = value; }
    inline EmvCommonAttributes& WithPinBlockLengthPosition(PinBlockLengthPosition value) { SetPinBlockLengthPosition(value); return *this;}
    ///@}
  private:

    MajorKeyDerivationMode m_majorKeyDerivationMode{MajorKeyDerivationMode::NOT_SET};
    bool m_majorKeyDerivationModeHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_applicationCryptogram;
    bool m_applicationCryptogramHasBeenSet = false;

    EmvEncryptionMode m_mode{EmvEncryptionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    PinBlockPaddingType m_pinBlockPaddingType{PinBlockPaddingType::NOT_SET};
    bool m_pinBlockPaddingTypeHasBeenSet = false;

    PinBlockLengthPosition m_pinBlockLengthPosition{PinBlockLengthPosition::NOT_SET};
    bool m_pinBlockLengthPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
