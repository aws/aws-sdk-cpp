/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/RateCardItem.h>
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
   * <p>Within the pay-as-you-go model defined under
   * <code>UsageBasedPricingTerm</code>, the <code>UsageBasedRateCardItem</code>
   * defines an individual rate for a product dimension.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/UsageBasedRateCardItem">AWS
   * API Reference</a></p>
   */
  class UsageBasedRateCardItem
  {
  public:
    AWS_AGREEMENTSERVICE_API UsageBasedRateCardItem();
    AWS_AGREEMENTSERVICE_API UsageBasedRateCardItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API UsageBasedRateCardItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the per unit rates for product dimensions.</p>
     */
    inline const Aws::Vector<RateCardItem>& GetRateCard() const{ return m_rateCard; }
    inline bool RateCardHasBeenSet() const { return m_rateCardHasBeenSet; }
    inline void SetRateCard(const Aws::Vector<RateCardItem>& value) { m_rateCardHasBeenSet = true; m_rateCard = value; }
    inline void SetRateCard(Aws::Vector<RateCardItem>&& value) { m_rateCardHasBeenSet = true; m_rateCard = std::move(value); }
    inline UsageBasedRateCardItem& WithRateCard(const Aws::Vector<RateCardItem>& value) { SetRateCard(value); return *this;}
    inline UsageBasedRateCardItem& WithRateCard(Aws::Vector<RateCardItem>&& value) { SetRateCard(std::move(value)); return *this;}
    inline UsageBasedRateCardItem& AddRateCard(const RateCardItem& value) { m_rateCardHasBeenSet = true; m_rateCard.push_back(value); return *this; }
    inline UsageBasedRateCardItem& AddRateCard(RateCardItem&& value) { m_rateCardHasBeenSet = true; m_rateCard.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RateCardItem> m_rateCard;
    bool m_rateCardHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
