/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Pillar.h>

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
 * <p>Item configuration for a specific Well-Architected Tool Framework
 * pillar.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PillarItem">AWS
 * API Reference</a></p>
 */
class PillarItem {
 public:
  AWS_WELLARCHITECTED_API PillarItem() = default;
  AWS_WELLARCHITECTED_API PillarItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API PillarItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pillar this item configuration applies to.</p>
   */
  inline Pillar GetPillar() const { return m_pillar; }
  inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
  inline void SetPillar(Pillar value) {
    m_pillarHasBeenSet = true;
    m_pillar = value;
  }
  inline PillarItem& WithPillar(Pillar value) {
    SetPillar(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of item IDs to process for this pillar, such as best practice IDs,
   * Amazon Web Services service names, or resource ARNs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
  inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
  template <typename IdsT = Aws::Vector<Aws::String>>
  void SetIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids = std::forward<IdsT>(value);
  }
  template <typename IdsT = Aws::Vector<Aws::String>>
  PillarItem& WithIds(IdsT&& value) {
    SetIds(std::forward<IdsT>(value));
    return *this;
  }
  template <typename IdsT = Aws::String>
  PillarItem& AddIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids.emplace_back(std::forward<IdsT>(value));
    return *this;
  }
  ///@}
 private:
  Pillar m_pillar{Pillar::NOT_SET};

  Aws::Vector<Aws::String> m_ids;
  bool m_pillarHasBeenSet = false;
  bool m_idsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
