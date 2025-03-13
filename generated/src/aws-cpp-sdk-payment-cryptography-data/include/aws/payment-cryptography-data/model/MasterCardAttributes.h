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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MasterCardAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MasterCardAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MasterCardAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method to use when deriving the master key for the payment card.</p>
     */
    inline MajorKeyDerivationMode GetMajorKeyDerivationMode() const { return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline MasterCardAttributes& WithMajorKeyDerivationMode(MajorKeyDerivationMode value) { SetMajorKeyDerivationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN) of the cardholder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const { return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    template<typename PrimaryAccountNumberT = Aws::String>
    void SetPrimaryAccountNumber(PrimaryAccountNumberT&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::forward<PrimaryAccountNumberT>(value); }
    template<typename PrimaryAccountNumberT = Aws::String>
    MasterCardAttributes& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN). Typically 00 is used, if no value is provided by
     * the terminal.</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const { return m_panSequenceNumber; }
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }
    template<typename PanSequenceNumberT = Aws::String>
    void SetPanSequenceNumber(PanSequenceNumberT&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::forward<PanSequenceNumberT>(value); }
    template<typename PanSequenceNumberT = Aws::String>
    MasterCardAttributes& WithPanSequenceNumber(PanSequenceNumberT&& value) { SetPanSequenceNumber(std::forward<PanSequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application cryptogram for the current transaction that is provided by
     * the terminal during transaction processing.</p>
     */
    inline const Aws::String& GetApplicationCryptogram() const { return m_applicationCryptogram; }
    inline bool ApplicationCryptogramHasBeenSet() const { return m_applicationCryptogramHasBeenSet; }
    template<typename ApplicationCryptogramT = Aws::String>
    void SetApplicationCryptogram(ApplicationCryptogramT&& value) { m_applicationCryptogramHasBeenSet = true; m_applicationCryptogram = std::forward<ApplicationCryptogramT>(value); }
    template<typename ApplicationCryptogramT = Aws::String>
    MasterCardAttributes& WithApplicationCryptogram(ApplicationCryptogramT&& value) { SetApplicationCryptogram(std::forward<ApplicationCryptogramT>(value)); return *this;}
    ///@}
  private:

    MajorKeyDerivationMode m_majorKeyDerivationMode{MajorKeyDerivationMode::NOT_SET};
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
