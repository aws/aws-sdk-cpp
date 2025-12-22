/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Contains the count of guest users for a specific billing period, used for
 * tracking historical guest user activity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GuestUserHistoryCount">AWS
 * API Reference</a></p>
 */
class GuestUserHistoryCount {
 public:
  AWS_WICKR_API GuestUserHistoryCount() = default;
  AWS_WICKR_API GuestUserHistoryCount(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API GuestUserHistoryCount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The month and billing period in YYYY_MM format (e.g., '2024_01').</p>
   */
  inline const Aws::String& GetMonth() const { return m_month; }
  inline bool MonthHasBeenSet() const { return m_monthHasBeenSet; }
  template <typename MonthT = Aws::String>
  void SetMonth(MonthT&& value) {
    m_monthHasBeenSet = true;
    m_month = std::forward<MonthT>(value);
  }
  template <typename MonthT = Aws::String>
  GuestUserHistoryCount& WithMonth(MonthT&& value) {
    SetMonth(std::forward<MonthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of guest users who have communicated with your Wickr network
   * during this billing period.</p>
   */
  inline const Aws::String& GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  template <typename CountT = Aws::String>
  void SetCount(CountT&& value) {
    m_countHasBeenSet = true;
    m_count = std::forward<CountT>(value);
  }
  template <typename CountT = Aws::String>
  GuestUserHistoryCount& WithCount(CountT&& value) {
    SetCount(std::forward<CountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_month;

  Aws::String m_count;
  bool m_monthHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
