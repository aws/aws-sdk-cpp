/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/VisaPinVerification.h>
#include <aws/payment-cryptography-data/model/Ibm3624PinVerification.h>
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
   * <p>Parameters that are required for PIN data verification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/PinVerificationAttributes">AWS
   * API Reference</a></p>
   */
  class PinVerificationAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinVerificationAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinVerificationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinVerificationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline const VisaPinVerification& GetVisaPin() const{ return m_visaPin; }
    inline bool VisaPinHasBeenSet() const { return m_visaPinHasBeenSet; }
    inline void SetVisaPin(const VisaPinVerification& value) { m_visaPinHasBeenSet = true; m_visaPin = value; }
    inline void SetVisaPin(VisaPinVerification&& value) { m_visaPinHasBeenSet = true; m_visaPin = std::move(value); }
    inline PinVerificationAttributes& WithVisaPin(const VisaPinVerification& value) { SetVisaPin(value); return *this;}
    inline PinVerificationAttributes& WithVisaPin(VisaPinVerification&& value) { SetVisaPin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN.</p>
     */
    inline const Ibm3624PinVerification& GetIbm3624Pin() const{ return m_ibm3624Pin; }
    inline bool Ibm3624PinHasBeenSet() const { return m_ibm3624PinHasBeenSet; }
    inline void SetIbm3624Pin(const Ibm3624PinVerification& value) { m_ibm3624PinHasBeenSet = true; m_ibm3624Pin = value; }
    inline void SetIbm3624Pin(Ibm3624PinVerification&& value) { m_ibm3624PinHasBeenSet = true; m_ibm3624Pin = std::move(value); }
    inline PinVerificationAttributes& WithIbm3624Pin(const Ibm3624PinVerification& value) { SetIbm3624Pin(value); return *this;}
    inline PinVerificationAttributes& WithIbm3624Pin(Ibm3624PinVerification&& value) { SetIbm3624Pin(std::move(value)); return *this;}
    ///@}
  private:

    VisaPinVerification m_visaPin;
    bool m_visaPinHasBeenSet = false;

    Ibm3624PinVerification m_ibm3624Pin;
    bool m_ibm3624PinHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
