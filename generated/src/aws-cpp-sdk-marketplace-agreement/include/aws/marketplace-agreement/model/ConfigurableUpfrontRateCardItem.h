/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/Constraints.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/Selector.h>
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
   * <p>Within the prepaid payment model defined under
   * <code>ConfigurableUpfrontPricingTerm</code>, the <code>RateCardItem</code>
   * defines all the various rate cards (including pricing and dimensions) that have
   * been proposed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ConfigurableUpfrontRateCardItem">AWS
   * API Reference</a></p>
   */
  class ConfigurableUpfrontRateCardItem
  {
  public:
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontRateCardItem();
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontRateCardItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontRateCardItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines limits on how the term can be configured by acceptors.</p>
     */
    inline const Constraints& GetConstraints() const{ return m_constraints; }
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
    inline void SetConstraints(const Constraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }
    inline void SetConstraints(Constraints&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }
    inline ConfigurableUpfrontRateCardItem& WithConstraints(const Constraints& value) { SetConstraints(value); return *this;}
    inline ConfigurableUpfrontRateCardItem& WithConstraints(Constraints&& value) { SetConstraints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the per unit rates for product dimensions.</p>
     */
    inline const Aws::Vector<RateCardItem>& GetRateCard() const{ return m_rateCard; }
    inline bool RateCardHasBeenSet() const { return m_rateCardHasBeenSet; }
    inline void SetRateCard(const Aws::Vector<RateCardItem>& value) { m_rateCardHasBeenSet = true; m_rateCard = value; }
    inline void SetRateCard(Aws::Vector<RateCardItem>&& value) { m_rateCardHasBeenSet = true; m_rateCard = std::move(value); }
    inline ConfigurableUpfrontRateCardItem& WithRateCard(const Aws::Vector<RateCardItem>& value) { SetRateCard(value); return *this;}
    inline ConfigurableUpfrontRateCardItem& WithRateCard(Aws::Vector<RateCardItem>&& value) { SetRateCard(std::move(value)); return *this;}
    inline ConfigurableUpfrontRateCardItem& AddRateCard(const RateCardItem& value) { m_rateCardHasBeenSet = true; m_rateCard.push_back(value); return *this; }
    inline ConfigurableUpfrontRateCardItem& AddRateCard(RateCardItem&& value) { m_rateCardHasBeenSet = true; m_rateCard.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Differentiates between the mutually exclusive rate cards in the same pricing
     * term to be selected by the buyer.</p>
     */
    inline const Selector& GetSelector() const{ return m_selector; }
    inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }
    inline void SetSelector(const Selector& value) { m_selectorHasBeenSet = true; m_selector = value; }
    inline void SetSelector(Selector&& value) { m_selectorHasBeenSet = true; m_selector = std::move(value); }
    inline ConfigurableUpfrontRateCardItem& WithSelector(const Selector& value) { SetSelector(value); return *this;}
    inline ConfigurableUpfrontRateCardItem& WithSelector(Selector&& value) { SetSelector(std::move(value)); return *this;}
    ///@}
  private:

    Constraints m_constraints;
    bool m_constraintsHasBeenSet = false;

    Aws::Vector<RateCardItem> m_rateCard;
    bool m_rateCardHasBeenSet = false;

    Selector m_selector;
    bool m_selectorHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
