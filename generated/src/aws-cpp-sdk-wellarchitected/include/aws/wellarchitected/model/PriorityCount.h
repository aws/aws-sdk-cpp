/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Priority.h>

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
 * <p>Pair of a recommendation Priority and the number of recommendations
 * attributed to it in a CoverageSummary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PriorityCount">AWS
 * API Reference</a></p>
 */
class PriorityCount {
 public:
  AWS_WELLARCHITECTED_API PriorityCount() = default;
  AWS_WELLARCHITECTED_API PriorityCount(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API PriorityCount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Priority this count is attributed to.</p>
   */
  inline Priority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(Priority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline PriorityCount& WithPriority(Priority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Non-negative count of recommendations in the report that are attributed to
   * this priority.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline PriorityCount& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  Priority m_priority{Priority::NOT_SET};

  long long m_count{0};
  bool m_priorityHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
