﻿/**
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
   * <p>Parameters that are required for tranlation between ISO9564 PIN format 0,3,4
   * tranlation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/TranslationPinDataIsoFormat034">AWS
   * API Reference</a></p>
   */
  class TranslationPinDataIsoFormat034
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationPinDataIsoFormat034() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationPinDataIsoFormat034(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationPinDataIsoFormat034& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TranslationPinDataIsoFormat034& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
