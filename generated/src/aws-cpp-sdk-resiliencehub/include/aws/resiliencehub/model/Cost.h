/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/CostFrequency.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a cost object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/Cost">AWS
   * API Reference</a></p>
   */
  class Cost
  {
  public:
    AWS_RESILIENCEHUB_API Cost();
    AWS_RESILIENCEHUB_API Cost(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Cost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cost amount.</p>
     */
    inline double GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline Cost& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost currency, for example <code>USD</code>.</p>
     */
    inline const Aws::String& GetCurrency() const{ return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(const Aws::String& value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline void SetCurrency(Aws::String&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }
    inline void SetCurrency(const char* value) { m_currencyHasBeenSet = true; m_currency.assign(value); }
    inline Cost& WithCurrency(const Aws::String& value) { SetCurrency(value); return *this;}
    inline Cost& WithCurrency(Aws::String&& value) { SetCurrency(std::move(value)); return *this;}
    inline Cost& WithCurrency(const char* value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost frequency.</p>
     */
    inline const CostFrequency& GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(const CostFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline void SetFrequency(CostFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }
    inline Cost& WithFrequency(const CostFrequency& value) { SetFrequency(value); return *this;}
    inline Cost& WithFrequency(CostFrequency&& value) { SetFrequency(std::move(value)); return *this;}
    ///@}
  private:

    double m_amount;
    bool m_amountHasBeenSet = false;

    Aws::String m_currency;
    bool m_currencyHasBeenSet = false;

    CostFrequency m_frequency;
    bool m_frequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
