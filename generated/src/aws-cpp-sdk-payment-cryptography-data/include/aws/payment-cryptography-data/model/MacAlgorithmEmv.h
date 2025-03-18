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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmEmv() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmEmv(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAlgorithmEmv& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method to use when deriving the master key for EMV MAC generation or
     * verification.</p>
     */
    inline MajorKeyDerivationMode GetMajorKeyDerivationMode() const { return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline MacAlgorithmEmv& WithMajorKeyDerivationMode(MajorKeyDerivationMode value) { SetMajorKeyDerivationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card and associates the card to a specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const { return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    template<typename PrimaryAccountNumberT = Aws::String>
    void SetPrimaryAccountNumber(PrimaryAccountNumberT&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::forward<PrimaryAccountNumberT>(value); }
    template<typename PrimaryAccountNumberT = Aws::String>
    MacAlgorithmEmv& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
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
    MacAlgorithmEmv& WithPanSequenceNumber(PanSequenceNumberT&& value) { SetPanSequenceNumber(std::forward<PanSequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method of deriving a session key for EMV MAC generation or
     * verification.</p>
     */
    inline SessionKeyDerivationMode GetSessionKeyDerivationMode() const { return m_sessionKeyDerivationMode; }
    inline bool SessionKeyDerivationModeHasBeenSet() const { return m_sessionKeyDerivationModeHasBeenSet; }
    inline void SetSessionKeyDerivationMode(SessionKeyDerivationMode value) { m_sessionKeyDerivationModeHasBeenSet = true; m_sessionKeyDerivationMode = value; }
    inline MacAlgorithmEmv& WithSessionKeyDerivationMode(SessionKeyDerivationMode value) { SetSessionKeyDerivationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required to generate session key for EMV generation and
     * verification.</p>
     */
    inline const SessionKeyDerivationValue& GetSessionKeyDerivationValue() const { return m_sessionKeyDerivationValue; }
    inline bool SessionKeyDerivationValueHasBeenSet() const { return m_sessionKeyDerivationValueHasBeenSet; }
    template<typename SessionKeyDerivationValueT = SessionKeyDerivationValue>
    void SetSessionKeyDerivationValue(SessionKeyDerivationValueT&& value) { m_sessionKeyDerivationValueHasBeenSet = true; m_sessionKeyDerivationValue = std::forward<SessionKeyDerivationValueT>(value); }
    template<typename SessionKeyDerivationValueT = SessionKeyDerivationValue>
    MacAlgorithmEmv& WithSessionKeyDerivationValue(SessionKeyDerivationValueT&& value) { SetSessionKeyDerivationValue(std::forward<SessionKeyDerivationValueT>(value)); return *this;}
    ///@}
  private:

    MajorKeyDerivationMode m_majorKeyDerivationMode{MajorKeyDerivationMode::NOT_SET};
    bool m_majorKeyDerivationModeHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    SessionKeyDerivationMode m_sessionKeyDerivationMode{SessionKeyDerivationMode::NOT_SET};
    bool m_sessionKeyDerivationModeHasBeenSet = false;

    SessionKeyDerivationValue m_sessionKeyDerivationValue;
    bool m_sessionKeyDerivationValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
