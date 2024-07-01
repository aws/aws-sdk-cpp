/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/MajorKeyDerivationMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/SessionKeyDerivationMode.h>
#include <aws/payment-cryptography-data/model/SessionKeyDerivationValue.h>
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
   * <p>Parameters that are required for EMV MAC generation and
   * verification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/MacAlgorithmEmv">AWS
   * API Reference</a></p>
   */
  class MacAlgorithmEmv
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmEmv();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmEmv(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmEmv& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method to use when deriving the master key for EMV MAC generation or
     * verification.</p>
     */
    inline const MajorKeyDerivationMode& GetMajorKeyDerivationMode() const{ return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = std::move(value); }
    inline MacAlgorithmEmv& WithMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { SetMajorKeyDerivationMode(value); return *this;}
    inline MacAlgorithmEmv& WithMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { SetMajorKeyDerivationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }
    inline MacAlgorithmEmv& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}
    inline MacAlgorithmEmv& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}
    inline MacAlgorithmEmv& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const{ return m_panSequenceNumber; }
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }
    inline void SetPanSequenceNumber(const Aws::String& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = value; }
    inline void SetPanSequenceNumber(Aws::String&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::move(value); }
    inline void SetPanSequenceNumber(const char* value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber.assign(value); }
    inline MacAlgorithmEmv& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}
    inline MacAlgorithmEmv& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}
    inline MacAlgorithmEmv& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method of deriving a session key for EMV MAC generation or
     * verification.</p>
     */
    inline const SessionKeyDerivationMode& GetSessionKeyDerivationMode() const{ return m_sessionKeyDerivationMode; }
    inline bool SessionKeyDerivationModeHasBeenSet() const { return m_sessionKeyDerivationModeHasBeenSet; }
    inline void SetSessionKeyDerivationMode(const SessionKeyDerivationMode& value) { m_sessionKeyDerivationModeHasBeenSet = true; m_sessionKeyDerivationMode = value; }
    inline void SetSessionKeyDerivationMode(SessionKeyDerivationMode&& value) { m_sessionKeyDerivationModeHasBeenSet = true; m_sessionKeyDerivationMode = std::move(value); }
    inline MacAlgorithmEmv& WithSessionKeyDerivationMode(const SessionKeyDerivationMode& value) { SetSessionKeyDerivationMode(value); return *this;}
    inline MacAlgorithmEmv& WithSessionKeyDerivationMode(SessionKeyDerivationMode&& value) { SetSessionKeyDerivationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate session key for EMV generation and
     * verification.</p>
     */
    inline const SessionKeyDerivationValue& GetSessionKeyDerivationValue() const{ return m_sessionKeyDerivationValue; }
    inline bool SessionKeyDerivationValueHasBeenSet() const { return m_sessionKeyDerivationValueHasBeenSet; }
    inline void SetSessionKeyDerivationValue(const SessionKeyDerivationValue& value) { m_sessionKeyDerivationValueHasBeenSet = true; m_sessionKeyDerivationValue = value; }
    inline void SetSessionKeyDerivationValue(SessionKeyDerivationValue&& value) { m_sessionKeyDerivationValueHasBeenSet = true; m_sessionKeyDerivationValue = std::move(value); }
    inline MacAlgorithmEmv& WithSessionKeyDerivationValue(const SessionKeyDerivationValue& value) { SetSessionKeyDerivationValue(value); return *this;}
    inline MacAlgorithmEmv& WithSessionKeyDerivationValue(SessionKeyDerivationValue&& value) { SetSessionKeyDerivationValue(std::move(value)); return *this;}
    ///@}
  private:

    MajorKeyDerivationMode m_majorKeyDerivationMode;
    bool m_majorKeyDerivationModeHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    SessionKeyDerivationMode m_sessionKeyDerivationMode;
    bool m_sessionKeyDerivationModeHasBeenSet = false;

    SessionKeyDerivationValue m_sessionKeyDerivationValue;
    bool m_sessionKeyDerivationValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
