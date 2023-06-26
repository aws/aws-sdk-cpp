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
   * <p>Card data parameters that are required to verify Card Verification Value
   * (CVV2) for the payment card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CardVerificationValue2">AWS
   * API Reference</a></p>
   */
  class CardVerificationValue2
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationValue2();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationValue2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationValue2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline const Aws::String& GetCardExpiryDate() const{ return m_cardExpiryDate; }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline bool CardExpiryDateHasBeenSet() const { return m_cardExpiryDateHasBeenSet; }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline void SetCardExpiryDate(const Aws::String& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = value; }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline void SetCardExpiryDate(Aws::String&& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = std::move(value); }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline void SetCardExpiryDate(const char* value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate.assign(value); }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline CardVerificationValue2& WithCardExpiryDate(const Aws::String& value) { SetCardExpiryDate(value); return *this;}

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline CardVerificationValue2& WithCardExpiryDate(Aws::String&& value) { SetCardExpiryDate(std::move(value)); return *this;}

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline CardVerificationValue2& WithCardExpiryDate(const char* value) { SetCardExpiryDate(value); return *this;}

  private:

    Aws::String m_cardExpiryDate;
    bool m_cardExpiryDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
