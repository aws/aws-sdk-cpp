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
   * <p>Parameters that are required to generate or verify Dynamic Card Verification
   * Value (dCVV).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DynamicCardVerificationValue">AWS
   * API Reference</a></p>
   */
  class DynamicCardVerificationValue
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationValue() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const { return m_panSequenceNumber; }
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }
    template<typename PanSequenceNumberT = Aws::String>
    void SetPanSequenceNumber(PanSequenceNumberT&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::forward<PanSequenceNumberT>(value); }
    template<typename PanSequenceNumberT = Aws::String>
    DynamicCardVerificationValue& WithPanSequenceNumber(PanSequenceNumberT&& value) { SetPanSequenceNumber(std::forward<PanSequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline const Aws::String& GetCardExpiryDate() const { return m_cardExpiryDate; }
    inline bool CardExpiryDateHasBeenSet() const { return m_cardExpiryDateHasBeenSet; }
    template<typename CardExpiryDateT = Aws::String>
    void SetCardExpiryDate(CardExpiryDateT&& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = std::forward<CardExpiryDateT>(value); }
    template<typename CardExpiryDateT = Aws::String>
    DynamicCardVerificationValue& WithCardExpiryDate(CardExpiryDateT&& value) { SetCardExpiryDate(std::forward<CardExpiryDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    DynamicCardVerificationValue& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline const Aws::String& GetApplicationTransactionCounter() const { return m_applicationTransactionCounter; }
    inline bool ApplicationTransactionCounterHasBeenSet() const { return m_applicationTransactionCounterHasBeenSet; }
    template<typename ApplicationTransactionCounterT = Aws::String>
    void SetApplicationTransactionCounter(ApplicationTransactionCounterT&& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = std::forward<ApplicationTransactionCounterT>(value); }
    template<typename ApplicationTransactionCounterT = Aws::String>
    DynamicCardVerificationValue& WithApplicationTransactionCounter(ApplicationTransactionCounterT&& value) { SetApplicationTransactionCounter(std::forward<ApplicationTransactionCounterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_cardExpiryDate;
    bool m_cardExpiryDateHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_applicationTransactionCounter;
    bool m_applicationTransactionCounterHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
