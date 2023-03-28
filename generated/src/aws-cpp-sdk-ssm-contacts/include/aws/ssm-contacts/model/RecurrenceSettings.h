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
    AWS_SSMCONTACTS_API RecurrenceSettings();
    AWS_SSMCONTACTS_API RecurrenceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API RecurrenceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline const Aws::Vector<MonthlySetting>& GetMonthlySettings() const{ return m_monthlySettings; }

    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline bool MonthlySettingsHasBeenSet() const { return m_monthlySettingsHasBeenSet; }

    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline void SetMonthlySettings(const Aws::Vector<MonthlySetting>& value) { m_monthlySettingsHasBeenSet = true; m_monthlySettings = value; }

    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline void SetMonthlySettings(Aws::Vector<MonthlySetting>&& value) { m_monthlySettingsHasBeenSet = true; m_monthlySettings = std::move(value); }

    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline RecurrenceSettings& WithMonthlySettings(const Aws::Vector<MonthlySetting>& value) { SetMonthlySettings(value); return *this;}

    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline RecurrenceSettings& WithMonthlySettings(Aws::Vector<MonthlySetting>&& value) { SetMonthlySettings(std::move(value)); return *this;}

    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline RecurrenceSettings& AddMonthlySettings(const MonthlySetting& value) { m_monthlySettingsHasBeenSet = true; m_monthlySettings.push_back(value); return *this; }

    /**
     * <p>Information about on-call rotations that recur monthly.</p>
     */
    inline RecurrenceSettings& AddMonthlySettings(MonthlySetting&& value) { m_monthlySettingsHasBeenSet = true; m_monthlySettings.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline const Aws::Vector<WeeklySetting>& GetWeeklySettings() const{ return m_weeklySettings; }

    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline bool WeeklySettingsHasBeenSet() const { return m_weeklySettingsHasBeenSet; }

    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline void SetWeeklySettings(const Aws::Vector<WeeklySetting>& value) { m_weeklySettingsHasBeenSet = true; m_weeklySettings = value; }

    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline void SetWeeklySettings(Aws::Vector<WeeklySetting>&& value) { m_weeklySettingsHasBeenSet = true; m_weeklySettings = std::move(value); }

    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline RecurrenceSettings& WithWeeklySettings(const Aws::Vector<WeeklySetting>& value) { SetWeeklySettings(value); return *this;}

    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline RecurrenceSettings& WithWeeklySettings(Aws::Vector<WeeklySetting>&& value) { SetWeeklySettings(std::move(value)); return *this;}

    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline RecurrenceSettings& AddWeeklySettings(const WeeklySetting& value) { m_weeklySettingsHasBeenSet = true; m_weeklySettings.push_back(value); return *this; }

    /**
     * <p>Information about on-call rotations that recur weekly.</p>
     */
    inline RecurrenceSettings& AddWeeklySettings(WeeklySetting&& value) { m_weeklySettingsHasBeenSet = true; m_weeklySettings.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline const Aws::Vector<HandOffTime>& GetDailySettings() const{ return m_dailySettings; }

    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline bool DailySettingsHasBeenSet() const { return m_dailySettingsHasBeenSet; }

    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline void SetDailySettings(const Aws::Vector<HandOffTime>& value) { m_dailySettingsHasBeenSet = true; m_dailySettings = value; }

    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline void SetDailySettings(Aws::Vector<HandOffTime>&& value) { m_dailySettingsHasBeenSet = true; m_dailySettings = std::move(value); }

    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline RecurrenceSettings& WithDailySettings(const Aws::Vector<HandOffTime>& value) { SetDailySettings(value); return *this;}

    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline RecurrenceSettings& WithDailySettings(Aws::Vector<HandOffTime>&& value) { SetDailySettings(std::move(value)); return *this;}

    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline RecurrenceSettings& AddDailySettings(const HandOffTime& value) { m_dailySettingsHasBeenSet = true; m_dailySettings.push_back(value); return *this; }

    /**
     * <p>Information about on-call rotations that recur daily.</p>
     */
    inline RecurrenceSettings& AddDailySettings(HandOffTime&& value) { m_dailySettingsHasBeenSet = true; m_dailySettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of contacts, or shift team members designated to be on call
     * concurrently during a shift. For example, in an on-call schedule containing ten
     * contacts, a value of <code>2</code> designates that two of them are on call at
     * any given time.</p>
     */
    inline int GetNumberOfOnCalls() const{ return m_numberOfOnCalls; }

    /**
     * <p>The number of contacts, or shift team members designated to be on call
     * concurrently during a shift. For example, in an on-call schedule containing ten
     * contacts, a value of <code>2</code> designates that two of them are on call at
     * any given time.</p>
     */
    inline bool NumberOfOnCallsHasBeenSet() const { return m_numberOfOnCallsHasBeenSet; }

    /**
     * <p>The number of contacts, or shift team members designated to be on call
     * concurrently during a shift. For example, in an on-call schedule containing ten
     * contacts, a value of <code>2</code> designates that two of them are on call at
     * any given time.</p>
     */
    inline void SetNumberOfOnCalls(int value) { m_numberOfOnCallsHasBeenSet = true; m_numberOfOnCalls = value; }

    /**
     * <p>The number of contacts, or shift team members designated to be on call
     * concurrently during a shift. For example, in an on-call schedule containing ten
     * contacts, a value of <code>2</code> designates that two of them are on call at
     * any given time.</p>
     */
    inline RecurrenceSettings& WithNumberOfOnCalls(int value) { SetNumberOfOnCalls(value); return *this;}


    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline const Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>>& GetShiftCoverages() const{ return m_shiftCoverages; }

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline bool ShiftCoveragesHasBeenSet() const { return m_shiftCoveragesHasBeenSet; }

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline void SetShiftCoverages(const Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>>& value) { m_shiftCoveragesHasBeenSet = true; m_shiftCoverages = value; }

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline void SetShiftCoverages(Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>>&& value) { m_shiftCoveragesHasBeenSet = true; m_shiftCoverages = std::move(value); }

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline RecurrenceSettings& WithShiftCoverages(const Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>>& value) { SetShiftCoverages(value); return *this;}

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline RecurrenceSettings& WithShiftCoverages(Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>>&& value) { SetShiftCoverages(std::move(value)); return *this;}

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline RecurrenceSettings& AddShiftCoverages(const DayOfWeek& key, const Aws::Vector<CoverageTime>& value) { m_shiftCoveragesHasBeenSet = true; m_shiftCoverages.emplace(key, value); return *this; }

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline RecurrenceSettings& AddShiftCoverages(DayOfWeek&& key, const Aws::Vector<CoverageTime>& value) { m_shiftCoveragesHasBeenSet = true; m_shiftCoverages.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline RecurrenceSettings& AddShiftCoverages(const DayOfWeek& key, Aws::Vector<CoverageTime>&& value) { m_shiftCoveragesHasBeenSet = true; m_shiftCoverages.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the days of the week included in on-call rotation
     * coverage.</p>
     */
    inline RecurrenceSettings& AddShiftCoverages(DayOfWeek&& key, Aws::Vector<CoverageTime>&& value) { m_shiftCoveragesHasBeenSet = true; m_shiftCoverages.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The number of days, weeks, or months a single rotation lasts.</p>
     */
    inline int GetRecurrenceMultiplier() const{ return m_recurrenceMultiplier; }

    /**
     * <p>The number of days, weeks, or months a single rotation lasts.</p>
     */
    inline bool RecurrenceMultiplierHasBeenSet() const { return m_recurrenceMultiplierHasBeenSet; }

    /**
     * <p>The number of days, weeks, or months a single rotation lasts.</p>
     */
    inline void SetRecurrenceMultiplier(int value) { m_recurrenceMultiplierHasBeenSet = true; m_recurrenceMultiplier = value; }

    /**
     * <p>The number of days, weeks, or months a single rotation lasts.</p>
     */
    inline RecurrenceSettings& WithRecurrenceMultiplier(int value) { SetRecurrenceMultiplier(value); return *this;}

  private:

    Aws::Vector<MonthlySetting> m_monthlySettings;
    bool m_monthlySettingsHasBeenSet = false;

    Aws::Vector<WeeklySetting> m_weeklySettings;
    bool m_weeklySettingsHasBeenSet = false;

    Aws::Vector<HandOffTime> m_dailySettings;
    bool m_dailySettingsHasBeenSet = false;

    int m_numberOfOnCalls;
    bool m_numberOfOnCallsHasBeenSet = false;

    Aws::Map<DayOfWeek, Aws::Vector<CoverageTime>> m_shiftCoverages;
    bool m_shiftCoveragesHasBeenSet = false;

    int m_recurrenceMultiplier;
    bool m_recurrenceMultiplierHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
