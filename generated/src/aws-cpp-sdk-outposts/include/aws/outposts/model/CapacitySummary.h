/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/QuoteCapacity.h>

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
 * <p>A summary of the capacity changes for a quote option.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CapacitySummary">AWS
 * API Reference</a></p>
 */
class CapacitySummary {
 public:
  AWS_OUTPOSTS_API CapacitySummary() = default;
  AWS_OUTPOSTS_API CapacitySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API CapacitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The existing capacities on the Outpost before the quote is fulfilled.</p>
   */
  inline const Aws::Vector<QuoteCapacity>& GetExistingCapacities() const { return m_existingCapacities; }
  inline bool ExistingCapacitiesHasBeenSet() const { return m_existingCapacitiesHasBeenSet; }
  template <typename ExistingCapacitiesT = Aws::Vector<QuoteCapacity>>
  void SetExistingCapacities(ExistingCapacitiesT&& value) {
    m_existingCapacitiesHasBeenSet = true;
    m_existingCapacities = std::forward<ExistingCapacitiesT>(value);
  }
  template <typename ExistingCapacitiesT = Aws::Vector<QuoteCapacity>>
  CapacitySummary& WithExistingCapacities(ExistingCapacitiesT&& value) {
    SetExistingCapacities(std::forward<ExistingCapacitiesT>(value));
    return *this;
  }
  template <typename ExistingCapacitiesT = QuoteCapacity>
  CapacitySummary& AddExistingCapacities(ExistingCapacitiesT&& value) {
    m_existingCapacitiesHasBeenSet = true;
    m_existingCapacities.emplace_back(std::forward<ExistingCapacitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final capacities on the Outpost after the quote is fulfilled.</p>
   */
  inline const Aws::Vector<QuoteCapacity>& GetFinalCapacities() const { return m_finalCapacities; }
  inline bool FinalCapacitiesHasBeenSet() const { return m_finalCapacitiesHasBeenSet; }
  template <typename FinalCapacitiesT = Aws::Vector<QuoteCapacity>>
  void SetFinalCapacities(FinalCapacitiesT&& value) {
    m_finalCapacitiesHasBeenSet = true;
    m_finalCapacities = std::forward<FinalCapacitiesT>(value);
  }
  template <typename FinalCapacitiesT = Aws::Vector<QuoteCapacity>>
  CapacitySummary& WithFinalCapacities(FinalCapacitiesT&& value) {
    SetFinalCapacities(std::forward<FinalCapacitiesT>(value));
    return *this;
  }
  template <typename FinalCapacitiesT = QuoteCapacity>
  CapacitySummary& AddFinalCapacities(FinalCapacitiesT&& value) {
    m_finalCapacitiesHasBeenSet = true;
    m_finalCapacities.emplace_back(std::forward<FinalCapacitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The change in capacity between the existing and final state.</p>
   */
  inline const Aws::Vector<QuoteCapacity>& GetCapacityChange() const { return m_capacityChange; }
  inline bool CapacityChangeHasBeenSet() const { return m_capacityChangeHasBeenSet; }
  template <typename CapacityChangeT = Aws::Vector<QuoteCapacity>>
  void SetCapacityChange(CapacityChangeT&& value) {
    m_capacityChangeHasBeenSet = true;
    m_capacityChange = std::forward<CapacityChangeT>(value);
  }
  template <typename CapacityChangeT = Aws::Vector<QuoteCapacity>>
  CapacitySummary& WithCapacityChange(CapacityChangeT&& value) {
    SetCapacityChange(std::forward<CapacityChangeT>(value));
    return *this;
  }
  template <typename CapacityChangeT = QuoteCapacity>
  CapacitySummary& AddCapacityChange(CapacityChangeT&& value) {
    m_capacityChangeHasBeenSet = true;
    m_capacityChange.emplace_back(std::forward<CapacityChangeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<QuoteCapacity> m_existingCapacities;

  Aws::Vector<QuoteCapacity> m_finalCapacities;

  Aws::Vector<QuoteCapacity> m_capacityChange;
  bool m_existingCapacitiesHasBeenSet = false;
  bool m_finalCapacitiesHasBeenSet = false;
  bool m_capacityChangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
