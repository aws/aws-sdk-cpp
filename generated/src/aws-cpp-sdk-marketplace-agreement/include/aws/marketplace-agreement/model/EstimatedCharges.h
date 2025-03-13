/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Estimated cost of the agreement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/EstimatedCharges">AWS
   * API Reference</a></p>
   */
  class EstimatedCharges
  {
  public:
    AWS_AGREEMENTSERVICE_API EstimatedCharges() = default;
    AWS_AGREEMENTSERVICE_API EstimatedCharges(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API EstimatedCharges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total known amount customer has to pay across the lifecycle of the
     * agreement.</p>  <p>This is the total contract value if accepted terms
     * contain <code>ConfigurableUpfrontPricingTerm</code> or
     * <code>FixedUpfrontPricingTerm</code>. In the case of pure contract pricing, this
     * will be the total value of the contract. In the case of contracts with
     * consumption pricing, this will only include the committed value and not include
     * any overages that occur.</p> <p>If the accepted terms contain
     * <code>PaymentScheduleTerm</code>, it will be the total payment schedule amount.
     * This occurs when flexible payment schedule is used, and is the sum of all
     * invoice charges in the payment schedule.</p> <p>In case a customer has amended
     * an agreement, by purchasing more units of any dimension, this will include both
     * the original cost as well as the added cost incurred due to addition of new
     * units. </p> <p>This is <code>0</code> if the accepted terms contain
     * <code>UsageBasedPricingTerm</code> without
     * <code>ConfigurableUpfrontPricingTerm</code> or
     * <code>RecurringPaymentTerm</code>. This occurs for usage-based pricing (such as
     * SaaS metered or AMI/container hourly or monthly), because the exact usage is not
     * known upfront.</p> 
     */
    inline const Aws::String& GetAgreementValue() const { return m_agreementValue; }
    inline bool AgreementValueHasBeenSet() const { return m_agreementValueHasBeenSet; }
    template<typename AgreementValueT = Aws::String>
    void SetAgreementValue(AgreementValueT&& value) { m_agreementValueHasBeenSet = true; m_agreementValue = std::forward<AgreementValueT>(value); }
    template<typename AgreementValueT = Aws::String>
    EstimatedCharges& WithAgreementValue(AgreementValueT&& value) { SetAgreementValue(std::forward<AgreementValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the currency code for the charge.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    EstimatedCharges& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementValue;
    bool m_agreementValueHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
