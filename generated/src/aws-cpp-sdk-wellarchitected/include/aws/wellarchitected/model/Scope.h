/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Pillar.h>
#include <aws/wellarchitected/model/PillarItem.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>Defines the scope for recommendation generation, specifying which pillars and
 * goals to focus on.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Scope">AWS
 * API Reference</a></p>
 */
class Scope {
 public:
  AWS_WELLARCHITECTED_API Scope() = default;
  AWS_WELLARCHITECTED_API Scope(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Scope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Well-Architected Tool Framework pillars to include in the generation
   * scope.</p>
   */
  inline const Aws::Vector<Pillar>& GetPillars() const { return m_pillars; }
  inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
  template <typename PillarsT = Aws::Vector<Pillar>>
  void SetPillars(PillarsT&& value) {
    m_pillarsHasBeenSet = true;
    m_pillars = std::forward<PillarsT>(value);
  }
  template <typename PillarsT = Aws::Vector<Pillar>>
  Scope& WithPillars(PillarsT&& value) {
    SetPillars(std::forward<PillarsT>(value));
    return *this;
  }
  inline Scope& AddPillars(Pillar value) {
    m_pillarsHasBeenSet = true;
    m_pillars.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific goal IDs to focus on during recommendation generation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGoalIds() const { return m_goalIds; }
  inline bool GoalIdsHasBeenSet() const { return m_goalIdsHasBeenSet; }
  template <typename GoalIdsT = Aws::Vector<Aws::String>>
  void SetGoalIds(GoalIdsT&& value) {
    m_goalIdsHasBeenSet = true;
    m_goalIds = std::forward<GoalIdsT>(value);
  }
  template <typename GoalIdsT = Aws::Vector<Aws::String>>
  Scope& WithGoalIds(GoalIdsT&& value) {
    SetGoalIds(std::forward<GoalIdsT>(value));
    return *this;
  }
  template <typename GoalIdsT = Aws::String>
  Scope& AddGoalIds(GoalIdsT&& value) {
    m_goalIdsHasBeenSet = true;
    m_goalIds.emplace_back(std::forward<GoalIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional per-pillar item filtering configuration.</p>
   */
  inline const Aws::Vector<PillarItem>& GetItems() const { return m_items; }
  inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
  template <typename ItemsT = Aws::Vector<PillarItem>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<PillarItem>>
  Scope& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = PillarItem>
  Scope& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Pillar> m_pillars;

  Aws::Vector<Aws::String> m_goalIds;

  Aws::Vector<PillarItem> m_items;
  bool m_pillarsHasBeenSet = false;
  bool m_goalIdsHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
