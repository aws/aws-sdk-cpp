/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KbDayOfWeek.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The day on which the refresh runs. Specify one of the following:</p> <ul>
 * <li> <p> <code>DayOfWeek</code> – For a weekly schedule.</p> </li> <li> <p>
 * <code>DayOfMonth</code> – For a monthly schedule.</p> </li> </ul><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KnowledgeBaseScheduleRefreshOnEntity">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseScheduleRefreshOnEntity {
 public:
  AWS_QUICKSIGHT_API KnowledgeBaseScheduleRefreshOnEntity() = default;
  AWS_QUICKSIGHT_API KnowledgeBaseScheduleRefreshOnEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KnowledgeBaseScheduleRefreshOnEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The day of the week on which a weekly refresh runs.</p>
   */
  inline KbDayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
  inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
  inline void SetDayOfWeek(KbDayOfWeek value) {
    m_dayOfWeekHasBeenSet = true;
    m_dayOfWeek = value;
  }
  inline KnowledgeBaseScheduleRefreshOnEntity& WithDayOfWeek(KbDayOfWeek value) {
    SetDayOfWeek(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The day of the month on which a monthly refresh runs. Valid values
   * include:</p> <ul> <li> <p> <code>1</code> through <code>28</code> – The refresh
   * runs on that day of each month.</p> </li> <li> <p>
   * <code>LAST_DAY_OF_MONTH</code> – The refresh runs on the last day of each
   * month.</p> </li> </ul>
   */
  inline const Aws::String& GetDayOfMonth() const { return m_dayOfMonth; }
  inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
  template <typename DayOfMonthT = Aws::String>
  void SetDayOfMonth(DayOfMonthT&& value) {
    m_dayOfMonthHasBeenSet = true;
    m_dayOfMonth = std::forward<DayOfMonthT>(value);
  }
  template <typename DayOfMonthT = Aws::String>
  KnowledgeBaseScheduleRefreshOnEntity& WithDayOfMonth(DayOfMonthT&& value) {
    SetDayOfMonth(std::forward<DayOfMonthT>(value));
    return *this;
  }
  ///@}
 private:
  KbDayOfWeek m_dayOfWeek{KbDayOfWeek::NOT_SET};

  Aws::String m_dayOfMonth;
  bool m_dayOfWeekHasBeenSet = false;
  bool m_dayOfMonthHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
