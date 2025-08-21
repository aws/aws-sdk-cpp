/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-contacts/model/MonthlySetting.h>
#include <aws/ssm-contacts/model/WeeklySetting.h>
#include <aws/ssm-contacts/model/HandOffTime.h>
#include <aws/ssm-contacts/model/DayOfWeek.h>
#include <aws/ssm-contacts/model/CoverageTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Information about when an on-call rotation is in effect and how long the
   * rotation period lasts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/RecurrenceSettings">AWS
   * API Reference</a></p>
   */
  class RecurrenceSettings
  {
  public:
    AWS_SSMCONTACTS_API RecurrenceSettings() = default;
    AWS_SSMCONTACTS_API RecurrenceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API RecurrenceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline const Aws::Vector<MonthlySetting>& GetMonthlySettings() const { return m_monthlySettings; }
    inline bool MonthlySettingsHasBeenSet() const { return m_monthlySettingsHasBeenSet; }
    template<typename MonthlySettingsT = Aws::Vector<MonthlySetting>>
    void SetMonthlySettings(MonthlySettingsT&& value) { m_monthlySettingsHasBeenSet = true; m_monthlySettings = std::forward<MonthlySettingsT>(value); }
    template<typename MonthlySettingsT = Aws::Vector<MonthlySetting>>
    RecurrenceSettings& WithMonthlySettings(MonthlySettingsT&& value) { SetMonthlySettings(std::forward<MonthlySettingsT>(value)); return *this;}
    template<typename MonthlySettingsT = MonthlySetting>
    RecurrenceSettings& AddMonthlySettings(MonthlySettingsT&& value) { m_monthlySettingsHasBeenSet = true; m_monthlySettings.emplace_back(std::forward<MonthlySettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline const Aws::Vector<WeeklySetting>& GetWeeklySettings() const { return m_weeklySettings; }
    inline bool WeeklySettingsHasBeenSet() const { return m_weeklySettingsHasBeenSet; }
    template<typename WeeklySettingsT = Aws::Vector<WeeklySetting>>
    void SetWeeklySettings(WeeklySettingsT&& value) { m_weeklySettingsHasBeenSet = true; m_weeklySettings = std::forward<WeeklySettingsT>(value); }
    template<typename WeeklySettingsT = Aws::Vector<WeeklySetting>>
    RecurrenceSettings& WithWeeklySettings(WeeklySettingsT&& value) { SetWeeklySettings(std::forward<WeeklySettingsT>(value)); return *this;}
    template<typename WeeklySettingsT = WeeklySetting>
    RecurrenceSettings& AddWeeklySettings(WeeklySettingsT&& value) { m_weeklySettingsHasBeenSet = true; m_weeklySettings.emplace_back(std::forward<WeeklySettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline const Aws::Vector<HandOffTime>& GetDailySettings() const { return m_dailySettings; }
    inline bool DailySettingsHasBeenSet() const { return m_dailySettingsHasBeenSet; }
    template<typename DailySettingsT = Aws::Vector<HandOffTime>>
    void SetDailySettings(DailySettingsT&& value) { m_dailySettingsHasBeenSet = true; m_dailySettings = std::forward<DailySettingsT>(value); }
    template<typename DailySettingsT = Aws::Vector<HandOffTime>>
    RecurrenceSettings& WithDailySettings(DailySettingsT&& value) { SetDailySettings(std::forward<DailySettingsT>(value)); return *this;}
    template<typename DailySettingsT = HandOffTime>
    RecurrenceSettings& AddDailySettings(DailySettingsT&& value) { m_dailySettingsHasBeenSet = true; m_dailySettings.emplace_back(std::forward<DailySettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of contacts, or shift team members designated to be on call
     * concurrently during a shift. For example, in an on-call schedule that contains
     * ten contacts, a value of <code>2</code> designates that two of them are on call
     * at any given time.</p>
     */
    inline int GetNumberOfOnCalls() const { return m_numberOfOnCalls; }
    inline bool NumberOfOnCallsHasBeenSet() const { return m_numberOfOnCallsHasBeenSet; }
    inline void SetNumberOfOnCalls(int value) { m_numberOfOnCallsHasBeenSet = true; m_numberOfOnCalls = value; }
    inline RecurrenceSettings& WithNumberOfOnCalls(int value) { SetNumberOfOnCalls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the days of the week that the on-call rotation coverage
     * includes.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>>& GetShiftCoverages() const { return m_shiftCoverages; }
    inline bool ShiftCoveragesHasBeenSet() const { return m_shiftCoveragesHasBeenSet; }
    template<typename ShiftCoveragesT = Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>>>
    void SetShiftCoverages(ShiftCoveragesT&& value) { m_shiftCoveragesHasBeenSet = true; m_shiftCoverages = std::forward<ShiftCoveragesT>(value); }
    template<typename ShiftCoveragesT = Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>>>
    RecurrenceSettings& WithShiftCoverages(ShiftCoveragesT&& value) { SetShiftCoverages(std::forward<ShiftCoveragesT>(value)); return *this;}
    inline RecurrenceSettings& AddShiftCoverages(DayOfWeek key, Aws::Vector<CoverageTime> value) {
      m_shiftCoveragesHasBeenSet = true; m_shiftCoverages.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of days, weeks, or months a single rotation lasts.</p>
     */
    inline int GetRecurrenceMultiplier() const { return m_recurrenceMultiplier; }
    inline bool RecurrenceMultiplierHasBeenSet() const { return m_recurrenceMultiplierHasBeenSet; }
    inline void SetRecurrenceMultiplier(int value) { m_recurrenceMultiplierHasBeenSet = true; m_recurrenceMultiplier = value; }
    inline RecurrenceSettings& WithRecurrenceMultiplier(int value) { SetRecurrenceMultiplier(value); return *this;}
    ///@}
  private:

    Aws::Vector<MonthlySetting> m_monthlySettings;
    bool m_monthlySettingsHasBeenSet = false;

    Aws::Vector<WeeklySetting> m_weeklySettings;
    bool m_weeklySettingsHasBeenSet = false;

    Aws::Vector<HandOffTime> m_dailySettings;
    bool m_dailySettingsHasBeenSet = false;

    int m_numberOfOnCalls{0};
    bool m_numberOfOnCallsHasBeenSet = false;

    Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>> m_shiftCoverages;
    bool m_shiftCoveragesHasBeenSet = false;

    int m_recurrenceMultiplier{0};
    bool m_recurrenceMultiplierHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
