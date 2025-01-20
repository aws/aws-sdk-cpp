/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ExpectedCustomerSpendCurrencyCodeEnum.h>
#include <aws/partnercentral-selling/model/PaymentFrequency.h>
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
   * <p>Provides an estimate of the revenue that the partner is expected to generate
   * from the opportunity. This information helps partners assess the financial value
   * of the project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ExpectedCustomerSpend">AWS
   * API Reference</a></p>
   */
  class ExpectedCustomerSpend
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ExpectedCustomerSpend();
    AWS_PARTNERCENTRALSELLING_API ExpectedCustomerSpend(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ExpectedCustomerSpend& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the estimated monthly revenue that the partner expects to earn
     * from the opportunity. This helps in forecasting financial returns.</p>
     */
    inline const Aws::String& GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(const Aws::String& value) { m_amountHasBeenSet = true; m_amount = value; }
    inline void SetAmount(Aws::String&& value) { m_amountHasBeenSet = true; m_amount = std::move(value); }
    inline void SetAmount(const char* value) { m_amountHasBeenSet = true; m_amount.assign(value); }
    inline ExpectedCustomerSpend& WithAmount(const Aws::String& value) { SetAmount(value); return *this;}
    inline ExpectedCustomerSpend& WithAmount(Aws::String&& value) { SetAmount(std::move(value)); return *this;}
    inline ExpectedCustomerSpend& WithAmount(const char* value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the currency in which the revenue estimate is provided. This helps
     * in understanding the financial impact across different markets.</p>
     */
    inline const ExpectedCustomerSpendCurrencyCodeEnum& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const ExpectedCustomerSpendCurrencyCodeEnum& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(ExpectedCustomerSpendCurrencyCodeEnum&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline ExpectedCustomerSpend& WithCurrencyCode(const ExpectedCustomerSpendCurrencyCodeEnum& value) { SetCurrencyCode(value); return *this;}
    inline ExpectedCustomerSpend& WithCurrencyCode(ExpectedCustomerSpendCurrencyCodeEnum&& value) { SetCurrencyCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL providing additional information or context about the spend
     * estimation.</p>
     */
    inline const Aws::String& GetEstimationUrl() const{ return m_estimationUrl; }
    inline bool EstimationUrlHasBeenSet() const { return m_estimationUrlHasBeenSet; }
    inline void SetEstimationUrl(const Aws::String& value) { m_estimationUrlHasBeenSet = true; m_estimationUrl = value; }
    inline void SetEstimationUrl(Aws::String&& value) { m_estimationUrlHasBeenSet = true; m_estimationUrl = std::move(value); }
    inline void SetEstimationUrl(const char* value) { m_estimationUrlHasBeenSet = true; m_estimationUrl.assign(value); }
    inline ExpectedCustomerSpend& WithEstimationUrl(const Aws::String& value) { SetEstimationUrl(value); return *this;}
    inline ExpectedCustomerSpend& WithEstimationUrl(Aws::String&& value) { SetEstimationUrl(std::move(value)); return *this;}
    inline ExpectedCustomerSpend& WithEstimationUrl(const char* value) { SetEstimationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how frequently the customer is expected to spend the projected
     * amount. This can include values such as <code>Monthly</code>,
     * <code>Quarterly</code>, or <code>Annually</code>. The default value is
     * <code>Monthly</code>, representing recurring monthly spend.</p>
     */
    inline const PaymentFrequency& GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(const PaymentFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline void SetFrequency(PaymentFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }
    inline ExpectedCustomerSpend& WithFrequency(const PaymentFrequency& value) { SetFrequency(value); return *this;}
    inline ExpectedCustomerSpend& WithFrequency(PaymentFrequency&& value) { SetFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the partner company that is expected to generate
     * revenue from the opportunity. This field helps track the partner’s involvement
     * in the opportunity.</p>
     */
    inline const Aws::String& GetTargetCompany() const{ return m_targetCompany; }
    inline bool TargetCompanyHasBeenSet() const { return m_targetCompanyHasBeenSet; }
    inline void SetTargetCompany(const Aws::String& value) { m_targetCompanyHasBeenSet = true; m_targetCompany = value; }
    inline void SetTargetCompany(Aws::String&& value) { m_targetCompanyHasBeenSet = true; m_targetCompany = std::move(value); }
    inline void SetTargetCompany(const char* value) { m_targetCompanyHasBeenSet = true; m_targetCompany.assign(value); }
    inline ExpectedCustomerSpend& WithTargetCompany(const Aws::String& value) { SetTargetCompany(value); return *this;}
    inline ExpectedCustomerSpend& WithTargetCompany(Aws::String&& value) { SetTargetCompany(std::move(value)); return *this;}
    inline ExpectedCustomerSpend& WithTargetCompany(const char* value) { SetTargetCompany(value); return *this;}
    ///@}
  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    ExpectedCustomerSpendCurrencyCodeEnum m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_estimationUrl;
    bool m_estimationUrlHasBeenSet = false;

    PaymentFrequency m_frequency;
    bool m_frequencyHasBeenSet = false;

    Aws::String m_targetCompany;
    bool m_targetCompanyHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
