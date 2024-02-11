/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>

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
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VisaPin">AWS
   * API Reference</a></p>
   */
  class VisaPin
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPin();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPin(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline int GetPinVerificationKeyIndex() const{ return m_pinVerificationKeyIndex; }

    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline bool PinVerificationKeyIndexHasBeenSet() const { return m_pinVerificationKeyIndexHasBeenSet; }

    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline void SetPinVerificationKeyIndex(int value) { m_pinVerificationKeyIndexHasBeenSet = true; m_pinVerificationKeyIndex = value; }

    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline VisaPin& WithPinVerificationKeyIndex(int value) { SetPinVerificationKeyIndex(value); return *this;}

  private:

    int m_pinVerificationKeyIndex;
    bool m_pinVerificationKeyIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
