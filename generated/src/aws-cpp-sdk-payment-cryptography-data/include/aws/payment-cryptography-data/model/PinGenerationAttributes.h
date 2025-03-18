/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/VisaPin.h>
#include <aws/payment-cryptography-data/model/VisaPinVerificationValue.h>
#include <aws/payment-cryptography-data/model/Ibm3624PinOffset.h>
#include <aws/payment-cryptography-data/model/Ibm3624NaturalPin.h>
#include <aws/payment-cryptography-data/model/Ibm3624RandomPin.h>
#include <aws/payment-cryptography-data/model/Ibm3624PinFromOffset.h>
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
   * <p>Parameters that are required for PIN data generation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/PinGenerationAttributes">AWS
   * API Reference</a></p>
   */
  class PinGenerationAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinGenerationAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinGenerationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinGenerationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline const VisaPin& GetVisaPin() const { return m_visaPin; }
    inline bool VisaPinHasBeenSet() const { return m_visaPinHasBeenSet; }
    template<typename VisaPinT = VisaPin>
    void SetVisaPin(VisaPinT&& value) { m_visaPinHasBeenSet = true; m_visaPin = std::forward<VisaPinT>(value); }
    template<typename VisaPinT = VisaPin>
    PinGenerationAttributes& WithVisaPin(VisaPinT&& value) { SetVisaPin(std::forward<VisaPinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate or verify Visa PIN Verification
     * Value (PVV).</p>
     */
    inline const VisaPinVerificationValue& GetVisaPinVerificationValue() const { return m_visaPinVerificationValue; }
    inline bool VisaPinVerificationValueHasBeenSet() const { return m_visaPinVerificationValueHasBeenSet; }
    template<typename VisaPinVerificationValueT = VisaPinVerificationValue>
    void SetVisaPinVerificationValue(VisaPinVerificationValueT&& value) { m_visaPinVerificationValueHasBeenSet = true; m_visaPinVerificationValue = std::forward<VisaPinVerificationValueT>(value); }
    template<typename VisaPinVerificationValueT = VisaPinVerificationValue>
    PinGenerationAttributes& WithVisaPinVerificationValue(VisaPinVerificationValueT&& value) { SetVisaPinVerificationValue(std::forward<VisaPinVerificationValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN offset
     * PIN.</p>
     */
    inline const Ibm3624PinOffset& GetIbm3624PinOffset() const { return m_ibm3624PinOffset; }
    inline bool Ibm3624PinOffsetHasBeenSet() const { return m_ibm3624PinOffsetHasBeenSet; }
    template<typename Ibm3624PinOffsetT = Ibm3624PinOffset>
    void SetIbm3624PinOffset(Ibm3624PinOffsetT&& value) { m_ibm3624PinOffsetHasBeenSet = true; m_ibm3624PinOffset = std::forward<Ibm3624PinOffsetT>(value); }
    template<typename Ibm3624PinOffsetT = Ibm3624PinOffset>
    PinGenerationAttributes& WithIbm3624PinOffset(Ibm3624PinOffsetT&& value) { SetIbm3624PinOffset(std::forward<Ibm3624PinOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate or verify Ibm3624 natural PIN.</p>
     */
    inline const Ibm3624NaturalPin& GetIbm3624NaturalPin() const { return m_ibm3624NaturalPin; }
    inline bool Ibm3624NaturalPinHasBeenSet() const { return m_ibm3624NaturalPinHasBeenSet; }
    template<typename Ibm3624NaturalPinT = Ibm3624NaturalPin>
    void SetIbm3624NaturalPin(Ibm3624NaturalPinT&& value) { m_ibm3624NaturalPinHasBeenSet = true; m_ibm3624NaturalPin = std::forward<Ibm3624NaturalPinT>(value); }
    template<typename Ibm3624NaturalPinT = Ibm3624NaturalPin>
    PinGenerationAttributes& WithIbm3624NaturalPin(Ibm3624NaturalPinT&& value) { SetIbm3624NaturalPin(std::forward<Ibm3624NaturalPinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate or verify Ibm3624 random PIN.</p>
     */
    inline const Ibm3624RandomPin& GetIbm3624RandomPin() const { return m_ibm3624RandomPin; }
    inline bool Ibm3624RandomPinHasBeenSet() const { return m_ibm3624RandomPinHasBeenSet; }
    template<typename Ibm3624RandomPinT = Ibm3624RandomPin>
    void SetIbm3624RandomPin(Ibm3624RandomPinT&& value) { m_ibm3624RandomPinHasBeenSet = true; m_ibm3624RandomPin = std::forward<Ibm3624RandomPinT>(value); }
    template<typename Ibm3624RandomPinT = Ibm3624RandomPin>
    PinGenerationAttributes& WithIbm3624RandomPin(Ibm3624RandomPinT&& value) { SetIbm3624RandomPin(std::forward<Ibm3624RandomPinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN from offset
     * PIN.</p>
     */
    inline const Ibm3624PinFromOffset& GetIbm3624PinFromOffset() const { return m_ibm3624PinFromOffset; }
    inline bool Ibm3624PinFromOffsetHasBeenSet() const { return m_ibm3624PinFromOffsetHasBeenSet; }
    template<typename Ibm3624PinFromOffsetT = Ibm3624PinFromOffset>
    void SetIbm3624PinFromOffset(Ibm3624PinFromOffsetT&& value) { m_ibm3624PinFromOffsetHasBeenSet = true; m_ibm3624PinFromOffset = std::forward<Ibm3624PinFromOffsetT>(value); }
    template<typename Ibm3624PinFromOffsetT = Ibm3624PinFromOffset>
    PinGenerationAttributes& WithIbm3624PinFromOffset(Ibm3624PinFromOffsetT&& value) { SetIbm3624PinFromOffset(std::forward<Ibm3624PinFromOffsetT>(value)); return *this;}
    ///@}
  private:

    VisaPin m_visaPin;
    bool m_visaPinHasBeenSet = false;

    VisaPinVerificationValue m_visaPinVerificationValue;
    bool m_visaPinVerificationValueHasBeenSet = false;

    Ibm3624PinOffset m_ibm3624PinOffset;
    bool m_ibm3624PinOffsetHasBeenSet = false;

    Ibm3624NaturalPin m_ibm3624NaturalPin;
    bool m_ibm3624NaturalPinHasBeenSet = false;

    Ibm3624RandomPin m_ibm3624RandomPin;
    bool m_ibm3624RandomPinHasBeenSet = false;

    Ibm3624PinFromOffset m_ibm3624PinFromOffset;
    bool m_ibm3624PinFromOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
