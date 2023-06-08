/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/Ibm3624NaturalPin.h>
#include <aws/payment-cryptography-data/model/Ibm3624PinFromOffset.h>
#include <aws/payment-cryptography-data/model/Ibm3624PinOffset.h>
#include <aws/payment-cryptography-data/model/Ibm3624RandomPin.h>
#include <aws/payment-cryptography-data/model/VisaPin.h>
#include <aws/payment-cryptography-data/model/VisaPinVerificationValue.h>
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinGenerationAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinGenerationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinGenerationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parameters that are required to generate or verify Ibm3624 natural PIN.</p>
     */
    inline const Ibm3624NaturalPin& GetIbm3624NaturalPin() const{ return m_ibm3624NaturalPin; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 natural PIN.</p>
     */
    inline bool Ibm3624NaturalPinHasBeenSet() const { return m_ibm3624NaturalPinHasBeenSet; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 natural PIN.</p>
     */
    inline void SetIbm3624NaturalPin(const Ibm3624NaturalPin& value) { m_ibm3624NaturalPinHasBeenSet = true; m_ibm3624NaturalPin = value; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 natural PIN.</p>
     */
    inline void SetIbm3624NaturalPin(Ibm3624NaturalPin&& value) { m_ibm3624NaturalPinHasBeenSet = true; m_ibm3624NaturalPin = std::move(value); }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 natural PIN.</p>
     */
    inline PinGenerationAttributes& WithIbm3624NaturalPin(const Ibm3624NaturalPin& value) { SetIbm3624NaturalPin(value); return *this;}

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 natural PIN.</p>
     */
    inline PinGenerationAttributes& WithIbm3624NaturalPin(Ibm3624NaturalPin&& value) { SetIbm3624NaturalPin(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN from offset
     * PIN.</p>
     */
    inline const Ibm3624PinFromOffset& GetIbm3624PinFromOffset() const{ return m_ibm3624PinFromOffset; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN from offset
     * PIN.</p>
     */
    inline bool Ibm3624PinFromOffsetHasBeenSet() const { return m_ibm3624PinFromOffsetHasBeenSet; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN from offset
     * PIN.</p>
     */
    inline void SetIbm3624PinFromOffset(const Ibm3624PinFromOffset& value) { m_ibm3624PinFromOffsetHasBeenSet = true; m_ibm3624PinFromOffset = value; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN from offset
     * PIN.</p>
     */
    inline void SetIbm3624PinFromOffset(Ibm3624PinFromOffset&& value) { m_ibm3624PinFromOffsetHasBeenSet = true; m_ibm3624PinFromOffset = std::move(value); }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN from offset
     * PIN.</p>
     */
    inline PinGenerationAttributes& WithIbm3624PinFromOffset(const Ibm3624PinFromOffset& value) { SetIbm3624PinFromOffset(value); return *this;}

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN from offset
     * PIN.</p>
     */
    inline PinGenerationAttributes& WithIbm3624PinFromOffset(Ibm3624PinFromOffset&& value) { SetIbm3624PinFromOffset(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN offset
     * PIN.</p>
     */
    inline const Ibm3624PinOffset& GetIbm3624PinOffset() const{ return m_ibm3624PinOffset; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN offset
     * PIN.</p>
     */
    inline bool Ibm3624PinOffsetHasBeenSet() const { return m_ibm3624PinOffsetHasBeenSet; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN offset
     * PIN.</p>
     */
    inline void SetIbm3624PinOffset(const Ibm3624PinOffset& value) { m_ibm3624PinOffsetHasBeenSet = true; m_ibm3624PinOffset = value; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN offset
     * PIN.</p>
     */
    inline void SetIbm3624PinOffset(Ibm3624PinOffset&& value) { m_ibm3624PinOffsetHasBeenSet = true; m_ibm3624PinOffset = std::move(value); }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN offset
     * PIN.</p>
     */
    inline PinGenerationAttributes& WithIbm3624PinOffset(const Ibm3624PinOffset& value) { SetIbm3624PinOffset(value); return *this;}

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN offset
     * PIN.</p>
     */
    inline PinGenerationAttributes& WithIbm3624PinOffset(Ibm3624PinOffset&& value) { SetIbm3624PinOffset(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required to generate or verify Ibm3624 random PIN.</p>
     */
    inline const Ibm3624RandomPin& GetIbm3624RandomPin() const{ return m_ibm3624RandomPin; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 random PIN.</p>
     */
    inline bool Ibm3624RandomPinHasBeenSet() const { return m_ibm3624RandomPinHasBeenSet; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 random PIN.</p>
     */
    inline void SetIbm3624RandomPin(const Ibm3624RandomPin& value) { m_ibm3624RandomPinHasBeenSet = true; m_ibm3624RandomPin = value; }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 random PIN.</p>
     */
    inline void SetIbm3624RandomPin(Ibm3624RandomPin&& value) { m_ibm3624RandomPinHasBeenSet = true; m_ibm3624RandomPin = std::move(value); }

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 random PIN.</p>
     */
    inline PinGenerationAttributes& WithIbm3624RandomPin(const Ibm3624RandomPin& value) { SetIbm3624RandomPin(value); return *this;}

    /**
     * <p>Parameters that are required to generate or verify Ibm3624 random PIN.</p>
     */
    inline PinGenerationAttributes& WithIbm3624RandomPin(Ibm3624RandomPin&& value) { SetIbm3624RandomPin(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline const VisaPin& GetVisaPin() const{ return m_visaPin; }

    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline bool VisaPinHasBeenSet() const { return m_visaPinHasBeenSet; }

    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline void SetVisaPin(const VisaPin& value) { m_visaPinHasBeenSet = true; m_visaPin = value; }

    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline void SetVisaPin(VisaPin&& value) { m_visaPinHasBeenSet = true; m_visaPin = std::move(value); }

    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline PinGenerationAttributes& WithVisaPin(const VisaPin& value) { SetVisaPin(value); return *this;}

    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline PinGenerationAttributes& WithVisaPin(VisaPin&& value) { SetVisaPin(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required to generate or verify Visa PIN Verification
     * Value (PVV).</p>
     */
    inline const VisaPinVerificationValue& GetVisaPinVerificationValue() const{ return m_visaPinVerificationValue; }

    /**
     * <p>Parameters that are required to generate or verify Visa PIN Verification
     * Value (PVV).</p>
     */
    inline bool VisaPinVerificationValueHasBeenSet() const { return m_visaPinVerificationValueHasBeenSet; }

    /**
     * <p>Parameters that are required to generate or verify Visa PIN Verification
     * Value (PVV).</p>
     */
    inline void SetVisaPinVerificationValue(const VisaPinVerificationValue& value) { m_visaPinVerificationValueHasBeenSet = true; m_visaPinVerificationValue = value; }

    /**
     * <p>Parameters that are required to generate or verify Visa PIN Verification
     * Value (PVV).</p>
     */
    inline void SetVisaPinVerificationValue(VisaPinVerificationValue&& value) { m_visaPinVerificationValueHasBeenSet = true; m_visaPinVerificationValue = std::move(value); }

    /**
     * <p>Parameters that are required to generate or verify Visa PIN Verification
     * Value (PVV).</p>
     */
    inline PinGenerationAttributes& WithVisaPinVerificationValue(const VisaPinVerificationValue& value) { SetVisaPinVerificationValue(value); return *this;}

    /**
     * <p>Parameters that are required to generate or verify Visa PIN Verification
     * Value (PVV).</p>
     */
    inline PinGenerationAttributes& WithVisaPinVerificationValue(VisaPinVerificationValue&& value) { SetVisaPinVerificationValue(std::move(value)); return *this;}

  private:

    Ibm3624NaturalPin m_ibm3624NaturalPin;
    bool m_ibm3624NaturalPinHasBeenSet = false;

    Ibm3624PinFromOffset m_ibm3624PinFromOffset;
    bool m_ibm3624PinFromOffsetHasBeenSet = false;

    Ibm3624PinOffset m_ibm3624PinOffset;
    bool m_ibm3624PinOffsetHasBeenSet = false;

    Ibm3624RandomPin m_ibm3624RandomPin;
    bool m_ibm3624RandomPinHasBeenSet = false;

    VisaPin m_visaPin;
    bool m_visaPinHasBeenSet = false;

    VisaPinVerificationValue m_visaPinVerificationValue;
    bool m_visaPinVerificationValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
