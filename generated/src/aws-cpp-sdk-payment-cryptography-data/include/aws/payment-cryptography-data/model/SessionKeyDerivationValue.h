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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivationValue();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cryptogram provided by the terminal during transaction processing.</p>
     */
    inline const Aws::String& GetApplicationCryptogram() const{ return m_applicationCryptogram; }
    inline bool ApplicationCryptogramHasBeenSet() const { return m_applicationCryptogramHasBeenSet; }
    inline void SetApplicationCryptogram(const Aws::String& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = value; }
    inline void SetApplicationCryptogram(Aws::String&& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = std::move(value); }
    inline void SetApplicationCryptogram(const char* value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram.assign(value); }
    inline SessionKeyDerivationValue& WithApplicationCryptogram(const Aws::String& value) { SetApplicationCryptogram(value); return *this;}
    inline SessionKeyDerivationValue& WithApplicationCryptogram(Aws::String&& value) { SetApplicationCryptogram(std::move(value)); return *this;}
    inline SessionKeyDerivationValue& WithApplicationCryptogram(const char* value) { SetApplicationCryptogram(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction counter that is provided by the terminal during transaction
     * processing.</p>
     */
    inline const Aws::String& GetApplicationTransactionCounter() const{ return m_applicationTransactionCounter; }
    inline bool ApplicationTransactionCounterHasBeenSet() const { return m_applicationTransactionCounterHasBeenSet; }
    inline void SetApplicationTransactionCounter(const Aws::String& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = value; }
    inline void SetApplicationTransactionCounter(Aws::String&& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = std::move(value); }
    inline void SetApplicationTransactionCounter(const char* value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter.assign(value); }
    inline SessionKeyDerivationValue& WithApplicationTransactionCounter(const Aws::String& value) { SetApplicationTransactionCounter(value); return *this;}
    inline SessionKeyDerivationValue& WithApplicationTransactionCounter(Aws::String&& value) { SetApplicationTransactionCounter(std::move(value)); return *this;}
    inline SessionKeyDerivationValue& WithApplicationTransactionCounter(const char* value) { SetApplicationTransactionCounter(value); return *this;}
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
