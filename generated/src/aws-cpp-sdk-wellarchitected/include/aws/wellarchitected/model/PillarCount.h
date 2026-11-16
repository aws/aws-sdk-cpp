/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Pair of a Well-Architected pillar and the number of recommendations
 * attributed to it in a CoverageSummary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PillarCount">AWS
 * API Reference</a></p>
 */
class PillarCount {
 public:
  AWS_WELLARCHITECTED_API PillarCount() = default;
  AWS_WELLARCHITECTED_API PillarCount(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API PillarCount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Well-Architected pillar this count is attributed to.</p>
   */
  inline Pillar GetPillar() const { return m_pillar; }
  inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
  inline void SetPillar(Pillar value) {
    m_pillarHasBeenSet = true;
    m_pillar = value;
  }
  inline PillarCount& WithPillar(Pillar value) {
    SetPillar(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Non-negative count of recommendations in the report that are attributed to
   * this pillar.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline PillarCount& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  Pillar m_pillar{Pillar::NOT_SET};

  long long m_count{0};
  bool m_pillarHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
