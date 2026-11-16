/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

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
 * <p>An inclusive time window used by Organizational Report filters. Both bounds
 * are optional, but at least one of from or to must be set when the structure is
 * present.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/TimeWindow">AWS
 * API Reference</a></p>
 */
class TimeWindow {
 public:
  AWS_WELLARCHITECTED_API TimeWindow() = default;
  AWS_WELLARCHITECTED_API TimeWindow(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API TimeWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Lower bound of the window (inclusive). Absent means no lower bound.</p>
   */
  inline const Aws::Utils::DateTime& GetFrom() const { return m_from; }
  inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
  template <typename FromT = Aws::Utils::DateTime>
  void SetFrom(FromT&& value) {
    m_fromHasBeenSet = true;
    m_from = std::forward<FromT>(value);
  }
  template <typename FromT = Aws::Utils::DateTime>
  TimeWindow& WithFrom(FromT&& value) {
    SetFrom(std::forward<FromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Upper bound of the window (inclusive). Absent means no upper bound.</p>
   */
  inline const Aws::Utils::DateTime& GetTo() const { return m_to; }
  inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
  template <typename ToT = Aws::Utils::DateTime>
  void SetTo(ToT&& value) {
    m_toHasBeenSet = true;
    m_to = std::forward<ToT>(value);
  }
  template <typename ToT = Aws::Utils::DateTime>
  TimeWindow& WithTo(ToT&& value) {
    SetTo(std::forward<ToT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_from{};

  Aws::Utils::DateTime m_to{};
  bool m_fromHasBeenSet = false;
  bool m_toHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
