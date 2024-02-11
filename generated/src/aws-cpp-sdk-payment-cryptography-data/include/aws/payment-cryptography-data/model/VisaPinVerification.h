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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerification();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerification(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerification& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline VisaPinVerification& WithPinVerificationKeyIndex(int value) { SetPinVerificationKeyIndex(value); return *this;}


    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline const Aws::String& GetVerificationValue() const{ return m_verificationValue; }

    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline bool VerificationValueHasBeenSet() const { return m_verificationValueHasBeenSet; }

    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline void SetVerificationValue(const Aws::String& value) { m_verificationValueHasBeenSet = true; m_verificationValue = value; }

    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline void SetVerificationValue(Aws::String&& value) { m_verificationValueHasBeenSet = true; m_verificationValue = std::move(value); }

    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline void SetVerificationValue(const char* value) { m_verificationValueHasBeenSet = true; m_verificationValue.assign(value); }

    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline VisaPinVerification& WithVerificationValue(const Aws::String& value) { SetVerificationValue(value); return *this;}

    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline VisaPinVerification& WithVerificationValue(Aws::String&& value) { SetVerificationValue(std::move(value)); return *this;}

    /**
     * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
     * Value).</p>
     */
    inline VisaPinVerification& WithVerificationValue(const char* value) { SetVerificationValue(value); return *this;}

  private:

    int m_pinVerificationKeyIndex;
    bool m_pinVerificationKeyIndexHasBeenSet = false;

    Aws::String m_verificationValue;
    bool m_verificationValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
