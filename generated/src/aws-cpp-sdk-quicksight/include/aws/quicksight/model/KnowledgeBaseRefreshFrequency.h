/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KbRefreshInterval.h>
#include <aws/quicksight/model/KnowledgeBaseScheduleRefreshOnEntity.h>

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
 * <p>Specifies how often a knowledge base refresh schedule runs and, for weekly or
 * monthly schedules, which day the refresh runs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KnowledgeBaseRefreshFrequency">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseRefreshFrequency {
 public:
  AWS_QUICKSIGHT_API KnowledgeBaseRefreshFrequency() = default;
  AWS_QUICKSIGHT_API KnowledgeBaseRefreshFrequency(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KnowledgeBaseRefreshFrequency& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The interval at which the schedule refreshes the knowledge base. Valid values
   * include:</p> <ul> <li> <p> <code>DAILY</code> – The schedule refreshes the
   * knowledge base once each day.</p> </li> <li> <p> <code>WEEKLY</code> – The
   * schedule refreshes the knowledge base once each week, on the day that you
   * specify in <code>RefreshOnDay.DayOfWeek</code>.</p> </li> <li> <p>
   * <code>MONTHLY</code> – The schedule refreshes the knowledge base once each
   * month, on the day that you specify in <code>RefreshOnDay.DayOfMonth</code>.</p>
   * </li> <li> <p> <code>HOURLY</code> – The schedule refreshes the knowledge base
   * once each hour. Available only if your account is enabled for hourly refresh.
   * Otherwise, the request fails with an
   * <code>InvalidParameterValueException</code>.</p> </li> </ul> <p>For
   * <code>DAILY</code>, <code>WEEKLY</code>, and <code>MONTHLY</code> intervals, the
   * service chooses the time of day at which the refresh runs. You can't specify the
   * time of day.</p>
   */
  inline KbRefreshInterval GetInterval() const { return m_interval; }
  inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
  inline void SetInterval(KbRefreshInterval value) {
    m_intervalHasBeenSet = true;
    m_interval = value;
  }
  inline KnowledgeBaseRefreshFrequency& WithInterval(KbRefreshInterval value) {
    SetInterval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The day on which the refresh runs. This parameter is required for a
   * <code>WEEKLY</code> or <code>MONTHLY</code> interval: specify the day of the
   * week for <code>WEEKLY</code> or the day of the month for <code>MONTHLY</code>.
   * If you don't specify it for one of these intervals, the request fails. This
   * parameter isn't used for a <code>DAILY</code> or <code>HOURLY</code>
   * interval.</p>
   */
  inline const KnowledgeBaseScheduleRefreshOnEntity& GetRefreshOnDay() const { return m_refreshOnDay; }
  inline bool RefreshOnDayHasBeenSet() const { return m_refreshOnDayHasBeenSet; }
  template <typename RefreshOnDayT = KnowledgeBaseScheduleRefreshOnEntity>
  void SetRefreshOnDay(RefreshOnDayT&& value) {
    m_refreshOnDayHasBeenSet = true;
    m_refreshOnDay = std::forward<RefreshOnDayT>(value);
  }
  template <typename RefreshOnDayT = KnowledgeBaseScheduleRefreshOnEntity>
  KnowledgeBaseRefreshFrequency& WithRefreshOnDay(RefreshOnDayT&& value) {
    SetRefreshOnDay(std::forward<RefreshOnDayT>(value));
    return *this;
  }
  ///@}
 private:
  KbRefreshInterval m_interval{KbRefreshInterval::NOT_SET};

  KnowledgeBaseScheduleRefreshOnEntity m_refreshOnDay;
  bool m_intervalHasBeenSet = false;
  bool m_refreshOnDayHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
