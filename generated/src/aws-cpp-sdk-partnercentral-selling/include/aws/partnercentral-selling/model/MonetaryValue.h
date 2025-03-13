/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/CurrencyCode.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Specifies payments details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/MonetaryValue">AWS
   * API Reference</a></p>
   */
  class MonetaryValue
  {
  public:
    AWS_PARTNERCENTRALSELLING_API MonetaryValue() = default;
    AWS_PARTNERCENTRALSELLING_API MonetaryValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API MonetaryValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the payment amount.</p>
     */
    inline const Aws::String& GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    template<typename AmountT = Aws::String>
    void SetAmount(AmountT&& value) { m_amountHasBeenSet = true; m_amount = std::forward<AmountT>(value); }
    template<typename AmountT = Aws::String>
    MonetaryValue& WithAmount(AmountT&& value) { SetAmount(std::forward<AmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the payment currency.</p>
     */
    inline CurrencyCode GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCode value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline MonetaryValue& WithCurrencyCode(CurrencyCode value) { SetCurrencyCode(value); return *this;}
    ///@}
  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    CurrencyCode m_currencyCode{CurrencyCode::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
