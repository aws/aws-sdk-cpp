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
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontRateCardItem() = default;
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontRateCardItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ConfigurableUpfrontRateCardItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines limits on how the term can be configured by acceptors.</p>
     */
    inline const Constraints& GetConstraints() const { return m_constraints; }
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
    template<typename ConstraintsT = Constraints>
    void SetConstraints(ConstraintsT&& value) { m_constraintsHasBeenSet = true; m_constraints = std::forward<ConstraintsT>(value); }
    template<typename ConstraintsT = Constraints>
    ConfigurableUpfrontRateCardItem& WithConstraints(ConstraintsT&& value) { SetConstraints(std::forward<ConstraintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the per unit rates for product dimensions.</p>
     */
    inline const Aws::Vector<RateCardItem>& GetRateCard() const { return m_rateCard; }
    inline bool RateCardHasBeenSet() const { return m_rateCardHasBeenSet; }
    template<typename RateCardT = Aws::Vector<RateCardItem>>
    void SetRateCard(RateCardT&& value) { m_rateCardHasBeenSet = true; m_rateCard = std::forward<RateCardT>(value); }
    template<typename RateCardT = Aws::Vector<RateCardItem>>
    ConfigurableUpfrontRateCardItem& WithRateCard(RateCardT&& value) { SetRateCard(std::forward<RateCardT>(value)); return *this;}
    template<typename RateCardT = RateCardItem>
    ConfigurableUpfrontRateCardItem& AddRateCard(RateCardT&& value) { m_rateCardHasBeenSet = true; m_rateCard.emplace_back(std::forward<RateCardT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Differentiates between the mutually exclusive rate cards in the same pricing
     * term to be selected by the buyer.</p>
     */
    inline const Selector& GetSelector() const { return m_selector; }
    inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }
    template<typename SelectorT = Selector>
    void SetSelector(SelectorT&& value) { m_selectorHasBeenSet = true; m_selector = std::forward<SelectorT>(value); }
    template<typename SelectorT = Selector>
    ConfigurableUpfrontRateCardItem& WithSelector(SelectorT&& value) { SetSelector(std::forward<SelectorT>(value)); return *this;}
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
