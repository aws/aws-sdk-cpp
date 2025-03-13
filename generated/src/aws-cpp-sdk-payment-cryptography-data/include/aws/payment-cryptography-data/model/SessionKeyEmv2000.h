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
   * <p>Parameters to derive session key for an Emv2000 payment card for ARQC
   * verification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/SessionKeyEmv2000">AWS
   * API Reference</a></p>
   */
  class SessionKeyEmv2000
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyEmv2000() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyEmv2000(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyEmv2000& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const { return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    template<typename PrimaryAccountNumberT = Aws::String>
    void SetPrimaryAccountNumber(PrimaryAccountNumberT&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::forward<PrimaryAccountNumberT>(value); }
    template<typename PrimaryAccountNumberT = Aws::String>
    SessionKeyEmv2000& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
    ///@}

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
    SessionKeyEmv2000& WithPanSequenceNumber(PanSequenceNumberT&& value) { SetPanSequenceNumber(std::forward<PanSequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction counter that is provided by the terminal during transaction
     * processing.</p>
     */
    inline const Aws::String& GetApplicationTransactionCounter() const { return m_applicationTransactionCounter; }
    inline bool ApplicationTransactionCounterHasBeenSet() const { return m_applicationTransactionCounterHasBeenSet; }
    template<typename ApplicationTransactionCounterT = Aws::String>
    void SetApplicationTransactionCounter(ApplicationTransactionCounterT&& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = std::forward<ApplicationTransactionCounterT>(value); }
    template<typename ApplicationTransactionCounterT = Aws::String>
    SessionKeyEmv2000& WithApplicationTransactionCounter(ApplicationTransactionCounterT&& value) { SetApplicationTransactionCounter(std::forward<ApplicationTransactionCounterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_applicationTransactionCounter;
    bool m_applicationTransactionCounterHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
