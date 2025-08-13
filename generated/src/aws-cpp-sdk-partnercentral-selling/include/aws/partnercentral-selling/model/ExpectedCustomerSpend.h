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
    AWS_PARTNERCENTRALSELLING_API ExpectedCustomerSpend() = default;
    AWS_PARTNERCENTRALSELLING_API ExpectedCustomerSpend(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ExpectedCustomerSpend& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the estimated monthly revenue that the partner expects to earn
     * from the opportunity. This helps in forecasting financial returns.</p>
     */
    inline const Aws::String& GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    template<typename AmountT = Aws::String>
    void SetAmount(AmountT&& value) { m_amountHasBeenSet = true; m_amount = std::forward<AmountT>(value); }
    template<typename AmountT = Aws::String>
    ExpectedCustomerSpend& WithAmount(AmountT&& value) { SetAmount(std::forward<AmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the currency in which the revenue estimate is provided. This helps
     * in understanding the financial impact across different markets.</p>
     */
    inline ExpectedCustomerSpendCurrencyCodeEnum GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(ExpectedCustomerSpendCurrencyCodeEnum value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline ExpectedCustomerSpend& WithCurrencyCode(ExpectedCustomerSpendCurrencyCodeEnum value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how frequently the customer is expected to spend the projected
     * amount. Only the value <code>Monthly</code> is allowed for the
     * <code>Frequency</code> field, representing recurring monthly spend.</p>
     */
    inline PaymentFrequency GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(PaymentFrequency value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline ExpectedCustomerSpend& WithFrequency(PaymentFrequency value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the partner company that is expected to generate
     * revenue from the opportunity. This field helps track the partner’s involvement
     * in the opportunity. This field only accepts the value <code>AWS</code>. If any
     * other value is provided, the system will automatically set it to
     * <code>AWS</code>.</p>
     */
    inline const Aws::String& GetTargetCompany() const { return m_targetCompany; }
    inline bool TargetCompanyHasBeenSet() const { return m_targetCompanyHasBeenSet; }
    template<typename TargetCompanyT = Aws::String>
    void SetTargetCompany(TargetCompanyT&& value) { m_targetCompanyHasBeenSet = true; m_targetCompany = std::forward<TargetCompanyT>(value); }
    template<typename TargetCompanyT = Aws::String>
    ExpectedCustomerSpend& WithTargetCompany(TargetCompanyT&& value) { SetTargetCompany(std::forward<TargetCompanyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL providing additional information or context about the spend
     * estimation.</p>
     */
    inline const Aws::String& GetEstimationUrl() const { return m_estimationUrl; }
    inline bool EstimationUrlHasBeenSet() const { return m_estimationUrlHasBeenSet; }
    template<typename EstimationUrlT = Aws::String>
    void SetEstimationUrl(EstimationUrlT&& value) { m_estimationUrlHasBeenSet = true; m_estimationUrl = std::forward<EstimationUrlT>(value); }
    template<typename EstimationUrlT = Aws::String>
    ExpectedCustomerSpend& WithEstimationUrl(EstimationUrlT&& value) { SetEstimationUrl(std::forward<EstimationUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    ExpectedCustomerSpendCurrencyCodeEnum m_currencyCode{ExpectedCustomerSpendCurrencyCodeEnum::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    PaymentFrequency m_frequency{PaymentFrequency::NOT_SET};
    bool m_frequencyHasBeenSet = false;

    Aws::String m_targetCompany;
    bool m_targetCompanyHasBeenSet = false;

    Aws::String m_estimationUrl;
    bool m_estimationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
