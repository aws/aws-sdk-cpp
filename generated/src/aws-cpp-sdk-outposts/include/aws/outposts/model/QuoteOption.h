/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/CapacitySummary.h>
#include <aws/outposts/model/PricingOption.h>
#include <aws/outposts/model/QuoteCapacity.h>
#include <aws/outposts/model/QuoteSpecification.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>A configuration and pricing option for a quote. Each option includes the
 * capacity breakdown, physical specifications for the racks or servers, and
 * pricing details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/QuoteOption">AWS
 * API Reference</a></p>
 */
class QuoteOption {
 public:
  AWS_OUTPOSTS_API QuoteOption() = default;
  AWS_OUTPOSTS_API QuoteOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API QuoteOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the quote option.</p>
   */
  inline const Aws::String& GetQuoteOptionIdentifier() const { return m_quoteOptionIdentifier; }
  inline bool QuoteOptionIdentifierHasBeenSet() const { return m_quoteOptionIdentifierHasBeenSet; }
  template <typename QuoteOptionIdentifierT = Aws::String>
  void SetQuoteOptionIdentifier(QuoteOptionIdentifierT&& value) {
    m_quoteOptionIdentifierHasBeenSet = true;
    m_quoteOptionIdentifier = std::forward<QuoteOptionIdentifierT>(value);
  }
  template <typename QuoteOptionIdentifierT = Aws::String>
  QuoteOption& WithQuoteOptionIdentifier(QuoteOptionIdentifierT&& value) {
    SetQuoteOptionIdentifier(std::forward<QuoteOptionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacities included in this quote option.</p>
   */
  inline const Aws::Vector<QuoteCapacity>& GetCapacities() const { return m_capacities; }
  inline bool CapacitiesHasBeenSet() const { return m_capacitiesHasBeenSet; }
  template <typename CapacitiesT = Aws::Vector<QuoteCapacity>>
  void SetCapacities(CapacitiesT&& value) {
    m_capacitiesHasBeenSet = true;
    m_capacities = std::forward<CapacitiesT>(value);
  }
  template <typename CapacitiesT = Aws::Vector<QuoteCapacity>>
  QuoteOption& WithCapacities(CapacitiesT&& value) {
    SetCapacities(std::forward<CapacitiesT>(value));
    return *this;
  }
  template <typename CapacitiesT = QuoteCapacity>
  QuoteOption& AddCapacities(CapacitiesT&& value) {
    m_capacitiesHasBeenSet = true;
    m_capacities.emplace_back(std::forward<CapacitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the existing, final, and changed capacity for this quote
   * option.</p>
   */
  inline const CapacitySummary& GetCapacitySummary() const { return m_capacitySummary; }
  inline bool CapacitySummaryHasBeenSet() const { return m_capacitySummaryHasBeenSet; }
  template <typename CapacitySummaryT = CapacitySummary>
  void SetCapacitySummary(CapacitySummaryT&& value) {
    m_capacitySummaryHasBeenSet = true;
    m_capacitySummary = std::forward<CapacitySummaryT>(value);
  }
  template <typename CapacitySummaryT = CapacitySummary>
  QuoteOption& WithCapacitySummary(CapacitySummaryT&& value) {
    SetCapacitySummary(std::forward<CapacitySummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The physical specifications for the racks or servers in this quote
   * option.</p>
   */
  inline const Aws::Vector<QuoteSpecification>& GetSpecifications() const { return m_specifications; }
  inline bool SpecificationsHasBeenSet() const { return m_specificationsHasBeenSet; }
  template <typename SpecificationsT = Aws::Vector<QuoteSpecification>>
  void SetSpecifications(SpecificationsT&& value) {
    m_specificationsHasBeenSet = true;
    m_specifications = std::forward<SpecificationsT>(value);
  }
  template <typename SpecificationsT = Aws::Vector<QuoteSpecification>>
  QuoteOption& WithSpecifications(SpecificationsT&& value) {
    SetSpecifications(std::forward<SpecificationsT>(value));
    return *this;
  }
  template <typename SpecificationsT = QuoteSpecification>
  QuoteOption& AddSpecifications(SpecificationsT&& value) {
    m_specificationsHasBeenSet = true;
    m_specifications.emplace_back(std::forward<SpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing options for this quote option.</p>
   */
  inline const Aws::Vector<PricingOption>& GetPricingOptions() const { return m_pricingOptions; }
  inline bool PricingOptionsHasBeenSet() const { return m_pricingOptionsHasBeenSet; }
  template <typename PricingOptionsT = Aws::Vector<PricingOption>>
  void SetPricingOptions(PricingOptionsT&& value) {
    m_pricingOptionsHasBeenSet = true;
    m_pricingOptions = std::forward<PricingOptionsT>(value);
  }
  template <typename PricingOptionsT = Aws::Vector<PricingOption>>
  QuoteOption& WithPricingOptions(PricingOptionsT&& value) {
    SetPricingOptions(std::forward<PricingOptionsT>(value));
    return *this;
  }
  template <typename PricingOptionsT = PricingOption>
  QuoteOption& AddPricingOptions(PricingOptionsT&& value) {
    m_pricingOptionsHasBeenSet = true;
    m_pricingOptions.emplace_back(std::forward<PricingOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_quoteOptionIdentifier;

  Aws::Vector<QuoteCapacity> m_capacities;

  CapacitySummary m_capacitySummary;

  Aws::Vector<QuoteSpecification> m_specifications;

  Aws::Vector<PricingOption> m_pricingOptions;
  bool m_quoteOptionIdentifierHasBeenSet = false;
  bool m_capacitiesHasBeenSet = false;
  bool m_capacitySummaryHasBeenSet = false;
  bool m_specificationsHasBeenSet = false;
  bool m_pricingOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
