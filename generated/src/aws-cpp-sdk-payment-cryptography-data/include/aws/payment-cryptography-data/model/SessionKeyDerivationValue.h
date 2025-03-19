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
   * <p>Parameters to derive session key value using a MAC EMV
   * algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/SessionKeyDerivationValue">AWS
   * API Reference</a></p>
   */
  class SessionKeyDerivationValue
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivationValue() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cryptogram provided by the terminal during transaction processing.</p>
     */
    inline const Aws::String& GetApplicationCryptogram() const { return m_applicationCryptogram; }
    inline bool ApplicationCryptogramHasBeenSet() const { return m_applicationCryptogramHasBeenSet; }
    template<typename ApplicationCryptogramT = Aws::String>
    void SetApplicationCryptogram(ApplicationCryptogramT&& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = std::forward<ApplicationCryptogramT>(value); }
    template<typename ApplicationCryptogramT = Aws::String>
    SessionKeyDerivationValue& WithApplicationCryptogram(ApplicationCryptogramT&& value) { SetApplicationCryptogram(std::forward<ApplicationCryptogramT>(value)); return *this;}
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
    SessionKeyDerivationValue& WithApplicationTransactionCounter(ApplicationTransactionCounterT&& value) { SetApplicationTransactionCounter(std::forward<ApplicationTransactionCounterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationCryptogram;
    bool m_applicationCryptogramHasBeenSet = false;

    Aws::String m_applicationTransactionCounter;
    bool m_applicationTransactionCounterHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
