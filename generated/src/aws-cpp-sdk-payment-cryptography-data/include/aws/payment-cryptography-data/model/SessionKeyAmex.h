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
   * <p>Parameters to derive session key for an Amex payment card.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/SessionKeyAmex">AWS
   * API Reference</a></p>
   */
  class SessionKeyAmex
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyAmex();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyAmex(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyAmex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const{ return m_panSequenceNumber; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(const Aws::String& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = value; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(Aws::String&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::move(value); }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(const char* value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber.assign(value); }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline SessionKeyAmex& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline SessionKeyAmex& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline SessionKeyAmex& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}


    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }

    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }

    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }

    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }

    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }

    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline SessionKeyAmex& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}

    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline SessionKeyAmex& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}

    /**
     * <p>The Primary Account Number (PAN) of the cardholder. A PAN is a unique
     * identifier for a payment credit or debit card and associates the card to a
     * specific account holder.</p>
     */
    inline SessionKeyAmex& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}

  private:

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
