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
   * <p>Card data parameters that are required to generate a Card Security Code
   * (CSC2) for an AMEX payment card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/AmexCardSecurityCodeVersion2">AWS
   * API Reference</a></p>
   */
  class AmexCardSecurityCodeVersion2
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexCardSecurityCodeVersion2() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexCardSecurityCodeVersion2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexCardSecurityCodeVersion2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline const Aws::String& GetCardExpiryDate() const { return m_cardExpiryDate; }
    inline bool CardExpiryDateHasBeenSet() const { return m_cardExpiryDateHasBeenSet; }
    template<typename CardExpiryDateT = Aws::String>
    void SetCardExpiryDate(CardExpiryDateT&& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = std::forward<CardExpiryDateT>(value); }
    template<typename CardExpiryDateT = Aws::String>
    AmexCardSecurityCodeVersion2& WithCardExpiryDate(CardExpiryDateT&& value) { SetCardExpiryDate(std::forward<CardExpiryDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service code of the AMEX payment card. This is different from the Card
     * Security Code (CSC).</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    AmexCardSecurityCodeVersion2& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cardExpiryDate;
    bool m_cardExpiryDateHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
