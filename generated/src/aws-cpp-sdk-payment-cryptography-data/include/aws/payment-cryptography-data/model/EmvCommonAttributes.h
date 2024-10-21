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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvCommonAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvCommonAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EmvCommonAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method to use when deriving the master key for the payment card.</p>
     */
    inline const MajorKeyDerivationMode& GetMajorKeyDerivationMode() const{ return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = std::move(value); }
    inline EmvCommonAttributes& WithMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { SetMajorKeyDerivationMode(value); return *this;}
    inline EmvCommonAttributes& WithMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { SetMajorKeyDerivationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN) of the cardholder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }
    inline EmvCommonAttributes& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}
    inline EmvCommonAttributes& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}
    inline EmvCommonAttributes& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}
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
    inline EmvCommonAttributes& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}
    inline EmvCommonAttributes& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}
    inline EmvCommonAttributes& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application cryptogram for the current transaction that is provided by
     * the terminal during transaction processing.</p>
     */
    inline const Aws::String& GetApplicationCryptogram() const{ return m_applicationCryptogram; }
    inline bool ApplicationCryptogramHasBeenSet() const { return m_applicationCryptogramHasBeenSet; }
    inline void SetApplicationCryptogram(const Aws::String& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = value; }
    inline void SetApplicationCryptogram(Aws::String&& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = std::move(value); }
    inline void SetApplicationCryptogram(const char* value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram.assign(value); }
    inline EmvCommonAttributes& WithApplicationCryptogram(const Aws::String& value) { SetApplicationCryptogram(value); return *this;}
    inline EmvCommonAttributes& WithApplicationCryptogram(Aws::String&& value) { SetApplicationCryptogram(std::move(value)); return *this;}
    inline EmvCommonAttributes& WithApplicationCryptogram(const char* value) { SetApplicationCryptogram(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline const EmvEncryptionMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const EmvEncryptionMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(EmvEncryptionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline EmvCommonAttributes& WithMode(const EmvEncryptionMode& value) { SetMode(value); return *this;}
    inline EmvCommonAttributes& WithMode(EmvEncryptionMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The padding to be added to the PIN block prior to encryption.</p> <p>Padding
     * type should be <code>ISO_IEC_7816_4</code>, if
     * <code>PinBlockLengthPosition</code> is set to <code>FRONT_OF_PIN_BLOCK</code>.
     * No padding is required, if <code>PinBlockLengthPosition</code> is set to
     * <code>NONE</code>.</p>
     */
    inline const PinBlockPaddingType& GetPinBlockPaddingType() const{ return m_pinBlockPaddingType; }
    inline bool PinBlockPaddingTypeHasBeenSet() const { return m_pinBlockPaddingTypeHasBeenSet; }
    inline void SetPinBlockPaddingType(const PinBlockPaddingType& value) { m_pinBlockPaddingTypeHasBeenSet = true; m_pinBlockPaddingType = value; }
    inline void SetPinBlockPaddingType(PinBlockPaddingType&& value) { m_pinBlockPaddingTypeHasBeenSet = true; m_pinBlockPaddingType = std::move(value); }
    inline EmvCommonAttributes& WithPinBlockPaddingType(const PinBlockPaddingType& value) { SetPinBlockPaddingType(value); return *this;}
    inline EmvCommonAttributes& WithPinBlockPaddingType(PinBlockPaddingType&& value) { SetPinBlockPaddingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if PIN block length should be added to front of the pin block. </p>
     * <p>If value is set to <code>FRONT_OF_PIN_BLOCK</code>, then PIN block padding
     * type should be <code>ISO_IEC_7816_4</code>.</p>
     */
    inline const PinBlockLengthPosition& GetPinBlockLengthPosition() const{ return m_pinBlockLengthPosition; }
    inline bool PinBlockLengthPositionHasBeenSet() const { return m_pinBlockLengthPositionHasBeenSet; }
    inline void SetPinBlockLengthPosition(const PinBlockLengthPosition& value) { m_pinBlockLengthPositionHasBeenSet = true; m_pinBlockLengthPosition = value; }
    inline void SetPinBlockLengthPosition(PinBlockLengthPosition&& value) { m_pinBlockLengthPositionHasBeenSet = true; m_pinBlockLengthPosition = std::move(value); }
    inline EmvCommonAttributes& WithPinBlockLengthPosition(const PinBlockLengthPosition& value) { SetPinBlockLengthPosition(value); return *this;}
    inline EmvCommonAttributes& WithPinBlockLengthPosition(PinBlockLengthPosition&& value) { SetPinBlockLengthPosition(std::move(value)); return *this;}
    ///@}
  private:

    MajorKeyDerivationMode m_majorKeyDerivationMode;
    bool m_majorKeyDerivationModeHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_applicationCryptogram;
    bool m_applicationCryptogramHasBeenSet = false;

    EmvEncryptionMode m_mode;
    bool m_modeHasBeenSet = false;

    PinBlockPaddingType m_pinBlockPaddingType;
    bool m_pinBlockPaddingTypeHasBeenSet = false;

    PinBlockLengthPosition m_pinBlockLengthPosition;
    bool m_pinBlockLengthPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
