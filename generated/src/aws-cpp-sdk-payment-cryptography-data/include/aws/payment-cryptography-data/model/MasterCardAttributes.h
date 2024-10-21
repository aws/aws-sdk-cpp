/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/MajorKeyDerivationMode.h>
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
   * <p>Parameters to derive the confidentiality and integrity keys for a Mastercard
   * payment card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/MasterCardAttributes">AWS
   * API Reference</a></p>
   */
  class MasterCardAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MasterCardAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MasterCardAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MasterCardAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method to use when deriving the master key for the payment card.</p>
     */
    inline const MajorKeyDerivationMode& GetMajorKeyDerivationMode() const{ return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = std::move(value); }
    inline MasterCardAttributes& WithMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { SetMajorKeyDerivationMode(value); return *this;}
    inline MasterCardAttributes& WithMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { SetMajorKeyDerivationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN) of the cardholder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }
    inline MasterCardAttributes& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}
    inline MasterCardAttributes& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}
    inline MasterCardAttributes& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN). Typically 00 is used, if no value is provided by
     * the terminal.</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const{ return m_panSequenceNumber; }
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }
    inline void SetPanSequenceNumber(const Aws::String& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = value; }
    inline void SetPanSequenceNumber(Aws::String&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::move(value); }
    inline void SetPanSequenceNumber(const char* value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber.assign(value); }
    inline MasterCardAttributes& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}
    inline MasterCardAttributes& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}
    inline MasterCardAttributes& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application cryptogram for the current transaction that is provided by
     * the terminal during transaction processing.</p>
     */
    inline const Aws::String& GetApplicationCryptogram() const{ return m_applicationCryptogram; }
    inline bool ApplicationCryptogramHasBeenSet() const { return m_applicationCryptogramHasBeenSet; }
    inline void SetApplicationCryptogram(const Aws::String& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = value; }
    inline void SetApplicationCryptogram(Aws::String&& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = std::move(value); }
    inline void SetApplicationCryptogram(const char* value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram.assign(value); }
    inline MasterCardAttributes& WithApplicationCryptogram(const Aws::String& value) { SetApplicationCryptogram(value); return *this;}
    inline MasterCardAttributes& WithApplicationCryptogram(Aws::String&& value) { SetApplicationCryptogram(std::move(value)); return *this;}
    inline MasterCardAttributes& WithApplicationCryptogram(const char* value) { SetApplicationCryptogram(value); return *this;}
    ///@}
  private:

    MajorKeyDerivationMode m_majorKeyDerivationMode;
    bool m_majorKeyDerivationModeHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_applicationCryptogram;
    bool m_applicationCryptogramHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
