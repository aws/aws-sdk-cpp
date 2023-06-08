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
   * <p>Parameters that are required to generate, translate, or verify PIN
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/PinData">AWS
   * API Reference</a></p>
   */
  class PinData
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinData();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinData(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The PIN offset value.</p>
     */
    inline const Aws::String& GetPinOffset() const{ return m_pinOffset; }

    /**
     * <p>The PIN offset value.</p>
     */
    inline bool PinOffsetHasBeenSet() const { return m_pinOffsetHasBeenSet; }

    /**
     * <p>The PIN offset value.</p>
     */
    inline void SetPinOffset(const Aws::String& value) { m_pinOffsetHasBeenSet = true; m_pinOffset = value; }

    /**
     * <p>The PIN offset value.</p>
     */
    inline void SetPinOffset(Aws::String&& value) { m_pinOffsetHasBeenSet = true; m_pinOffset = std::move(value); }

    /**
     * <p>The PIN offset value.</p>
     */
    inline void SetPinOffset(const char* value) { m_pinOffsetHasBeenSet = true; m_pinOffset.assign(value); }

    /**
     * <p>The PIN offset value.</p>
     */
    inline PinData& WithPinOffset(const Aws::String& value) { SetPinOffset(value); return *this;}

    /**
     * <p>The PIN offset value.</p>
     */
    inline PinData& WithPinOffset(Aws::String&& value) { SetPinOffset(std::move(value)); return *this;}

    /**
     * <p>The PIN offset value.</p>
     */
    inline PinData& WithPinOffset(const char* value) { SetPinOffset(value); return *this;}


    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline const Aws::String& GetVerificationValue() const{ return m_verificationValue; }

    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline bool VerificationValueHasBeenSet() const { return m_verificationValueHasBeenSet; }

    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline void SetVerificationValue(const Aws::String& value) { m_verificationValueHasBeenSet = true; m_verificationValue = value; }

    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline void SetVerificationValue(Aws::String&& value) { m_verificationValueHasBeenSet = true; m_verificationValue = std::move(value); }

    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline void SetVerificationValue(const char* value) { m_verificationValueHasBeenSet = true; m_verificationValue.assign(value); }

    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline PinData& WithVerificationValue(const Aws::String& value) { SetVerificationValue(value); return *this;}

    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline PinData& WithVerificationValue(Aws::String&& value) { SetVerificationValue(std::move(value)); return *this;}

    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline PinData& WithVerificationValue(const char* value) { SetVerificationValue(value); return *this;}

  private:

    Aws::String m_pinOffset;
    bool m_pinOffsetHasBeenSet = false;

    Aws::String m_verificationValue;
    bool m_verificationValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
