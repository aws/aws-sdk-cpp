/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Parameters that are required to generate or verify Visa PIN.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VisaPinVerification">AWS
   * API Reference</a></p>
   */
  class VisaPinVerification
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerification() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerification(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline int GetPinVerificationKeyIndex() const { return m_pinVerificationKeyIndex; }
    inline bool PinVerificationKeyIndexHasBeenSet() const { return m_pinVerificationKeyIndexHasBeenSet; }
    inline void SetPinVerificationKeyIndex(int value) { m_pinVerificationKeyIndexHasBeenSet = true; m_pinVerificationKeyIndex = value; }
    inline VisaPinVerification& WithPinVerificationKeyIndex(int value) { SetPinVerificationKeyIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline const Aws::String& GetVerificationValue() const { return m_verificationValue; }
    inline bool VerificationValueHasBeenSet() const { return m_verificationValueHasBeenSet; }
    template<typename VerificationValueT = Aws::String>
    void SetVerificationValue(VerificationValueT&& value) { m_verificationValueHasBeenSet = true; m_verificationValue = std::forward<VerificationValueT>(value); }
    template<typename VerificationValueT = Aws::String>
    VisaPinVerification& WithVerificationValue(VerificationValueT&& value) { SetVerificationValue(std::forward<VerificationValueT>(value)); return *this;}
    ///@}
  private:

    int m_pinVerificationKeyIndex{0};
    bool m_pinVerificationKeyIndexHasBeenSet = false;

    Aws::String m_verificationValue;
    bool m_verificationValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
