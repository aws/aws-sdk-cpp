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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinVerificationAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinVerificationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinVerificationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters that are required to generate or verify Visa PIN.</p>
     */
    inline const VisaPinVerification& GetVisaPin() const { return m_visaPin; }
    inline bool VisaPinHasBeenSet() const { return m_visaPinHasBeenSet; }
    template<typename VisaPinT = VisaPinVerification>
    void SetVisaPin(VisaPinT&& value) { m_visaPinHasBeenSet = true; m_visaPin = std::forward<VisaPinT>(value); }
    template<typename VisaPinT = VisaPinVerification>
    PinVerificationAttributes& WithVisaPin(VisaPinT&& value) { SetVisaPin(std::forward<VisaPinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate or verify Ibm3624 PIN.</p>
     */
    inline const Ibm3624PinVerification& GetIbm3624Pin() const { return m_ibm3624Pin; }
    inline bool Ibm3624PinHasBeenSet() const { return m_ibm3624PinHasBeenSet; }
    template<typename Ibm3624PinT = Ibm3624PinVerification>
    void SetIbm3624Pin(Ibm3624PinT&& value) { m_ibm3624PinHasBeenSet = true; m_ibm3624Pin = std::forward<Ibm3624PinT>(value); }
    template<typename Ibm3624PinT = Ibm3624PinVerification>
    PinVerificationAttributes& WithIbm3624Pin(Ibm3624PinT&& value) { SetIbm3624Pin(std::forward<Ibm3624PinT>(value)); return *this;}
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
