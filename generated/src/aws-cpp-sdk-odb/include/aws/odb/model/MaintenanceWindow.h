/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/PatchingModeType.h>
#include <aws/odb/model/PreferenceType.h>
#include <aws/odb/model/DayOfWeek.h>
#include <aws/odb/model/Month.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>The scheduling details for the maintenance window. Patching and system
   * updates take place during the maintenance window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/MaintenanceWindow">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindow
  {
  public:
    AWS_ODB_API MaintenanceWindow() = default;
    AWS_ODB_API MaintenanceWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API MaintenanceWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom action timeout in minutes for the maintenance window.</p>
     */
    inline int GetCustomActionTimeoutInMins() const { return m_customActionTimeoutInMins; }
    inline bool CustomActionTimeoutInMinsHasBeenSet() const { return m_customActionTimeoutInMinsHasBeenSet; }
    inline void SetCustomActionTimeoutInMins(int value) { m_customActionTimeoutInMinsHasBeenSet = true; m_customActionTimeoutInMins = value; }
    inline MaintenanceWindow& WithCustomActionTimeoutInMins(int value) { SetCustomActionTimeoutInMins(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The days of the week when maintenance can be performed.</p>
     */
    inline const Aws::Vector<DayOfWeek>& GetDaysOfWeek() const { return m_daysOfWeek; }
    inline bool DaysOfWeekHasBeenSet() const { return m_daysOfWeekHasBeenSet; }
    template<typename DaysOfWeekT = Aws::Vector<DayOfWeek>>
    void SetDaysOfWeek(DaysOfWeekT&& value) { m_daysOfWeekHasBeenSet = true; m_daysOfWeek = std::forward<DaysOfWeekT>(value); }
    template<typename DaysOfWeekT = Aws::Vector<DayOfWeek>>
    MaintenanceWindow& WithDaysOfWeek(DaysOfWeekT&& value) { SetDaysOfWeek(std::forward<DaysOfWeekT>(value)); return *this;}
    template<typename DaysOfWeekT = DayOfWeek>
    MaintenanceWindow& AddDaysOfWeek(DaysOfWeekT&& value) { m_daysOfWeekHasBeenSet = true; m_daysOfWeek.emplace_back(std::forward<DaysOfWeekT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The hours of the day when maintenance can be performed.</p>
     */
    inline const Aws::Vector<int>& GetHoursOfDay() const { return m_hoursOfDay; }
    inline bool HoursOfDayHasBeenSet() const { return m_hoursOfDayHasBeenSet; }
    template<typename HoursOfDayT = Aws::Vector<int>>
    void SetHoursOfDay(HoursOfDayT&& value) { m_hoursOfDayHasBeenSet = true; m_hoursOfDay = std::forward<HoursOfDayT>(value); }
    template<typename HoursOfDayT = Aws::Vector<int>>
    MaintenanceWindow& WithHoursOfDay(HoursOfDayT&& value) { SetHoursOfDay(std::forward<HoursOfDayT>(value)); return *this;}
    inline MaintenanceWindow& AddHoursOfDay(int value) { m_hoursOfDayHasBeenSet = true; m_hoursOfDay.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether custom action timeout is enabled for the maintenance
     * window.</p>
     */
    inline bool GetIsCustomActionTimeoutEnabled() const { return m_isCustomActionTimeoutEnabled; }
    inline bool IsCustomActionTimeoutEnabledHasBeenSet() const { return m_isCustomActionTimeoutEnabledHasBeenSet; }
    inline void SetIsCustomActionTimeoutEnabled(bool value) { m_isCustomActionTimeoutEnabledHasBeenSet = true; m_isCustomActionTimeoutEnabled = value; }
    inline MaintenanceWindow& WithIsCustomActionTimeoutEnabled(bool value) { SetIsCustomActionTimeoutEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lead time in weeks before the maintenance window.</p>
     */
    inline int GetLeadTimeInWeeks() const { return m_leadTimeInWeeks; }
    inline bool LeadTimeInWeeksHasBeenSet() const { return m_leadTimeInWeeksHasBeenSet; }
    inline void SetLeadTimeInWeeks(int value) { m_leadTimeInWeeksHasBeenSet = true; m_leadTimeInWeeks = value; }
    inline MaintenanceWindow& WithLeadTimeInWeeks(int value) { SetLeadTimeInWeeks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The months when maintenance can be performed.</p>
     */
    inline const Aws::Vector<Month>& GetMonths() const { return m_months; }
    inline bool MonthsHasBeenSet() const { return m_monthsHasBeenSet; }
    template<typename MonthsT = Aws::Vector<Month>>
    void SetMonths(MonthsT&& value) { m_monthsHasBeenSet = true; m_months = std::forward<MonthsT>(value); }
    template<typename MonthsT = Aws::Vector<Month>>
    MaintenanceWindow& WithMonths(MonthsT&& value) { SetMonths(std::forward<MonthsT>(value)); return *this;}
    template<typename MonthsT = Month>
    MaintenanceWindow& AddMonths(MonthsT&& value) { m_monthsHasBeenSet = true; m_months.emplace_back(std::forward<MonthsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The patching mode for the maintenance window.</p>
     */
    inline PatchingModeType GetPatchingMode() const { return m_patchingMode; }
    inline bool PatchingModeHasBeenSet() const { return m_patchingModeHasBeenSet; }
    inline void SetPatchingMode(PatchingModeType value) { m_patchingModeHasBeenSet = true; m_patchingMode = value; }
    inline MaintenanceWindow& WithPatchingMode(PatchingModeType value) { SetPatchingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preference for the maintenance window scheduling.</p>
     */
    inline PreferenceType GetPreference() const { return m_preference; }
    inline bool PreferenceHasBeenSet() const { return m_preferenceHasBeenSet; }
    inline void SetPreference(PreferenceType value) { m_preferenceHasBeenSet = true; m_preference = value; }
    inline MaintenanceWindow& WithPreference(PreferenceType value) { SetPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to skip release updates during maintenance.</p>
     */
    inline bool GetSkipRu() const { return m_skipRu; }
    inline bool SkipRuHasBeenSet() const { return m_skipRuHasBeenSet; }
    inline void SetSkipRu(bool value) { m_skipRuHasBeenSet = true; m_skipRu = value; }
    inline MaintenanceWindow& WithSkipRu(bool value) { SetSkipRu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weeks of the month when maintenance can be performed.</p>
     */
    inline const Aws::Vector<int>& GetWeeksOfMonth() const { return m_weeksOfMonth; }
    inline bool WeeksOfMonthHasBeenSet() const { return m_weeksOfMonthHasBeenSet; }
    template<typename WeeksOfMonthT = Aws::Vector<int>>
    void SetWeeksOfMonth(WeeksOfMonthT&& value) { m_weeksOfMonthHasBeenSet = true; m_weeksOfMonth = std::forward<WeeksOfMonthT>(value); }
    template<typename WeeksOfMonthT = Aws::Vector<int>>
    MaintenanceWindow& WithWeeksOfMonth(WeeksOfMonthT&& value) { SetWeeksOfMonth(std::forward<WeeksOfMonthT>(value)); return *this;}
    inline MaintenanceWindow& AddWeeksOfMonth(int value) { m_weeksOfMonthHasBeenSet = true; m_weeksOfMonth.push_back(value); return *this; }
    ///@}
  private:

    int m_customActionTimeoutInMins{0};
    bool m_customActionTimeoutInMinsHasBeenSet = false;

    Aws::Vector<DayOfWeek> m_daysOfWeek;
    bool m_daysOfWeekHasBeenSet = false;

    Aws::Vector<int> m_hoursOfDay;
    bool m_hoursOfDayHasBeenSet = false;

    bool m_isCustomActionTimeoutEnabled{false};
    bool m_isCustomActionTimeoutEnabledHasBeenSet = false;

    int m_leadTimeInWeeks{0};
    bool m_leadTimeInWeeksHasBeenSet = false;

    Aws::Vector<Month> m_months;
    bool m_monthsHasBeenSet = false;

    PatchingModeType m_patchingMode{PatchingModeType::NOT_SET};
    bool m_patchingModeHasBeenSet = false;

    PreferenceType m_preference{PreferenceType::NOT_SET};
    bool m_preferenceHasBeenSet = false;

    bool m_skipRu{false};
    bool m_skipRuHasBeenSet = false;

    Aws::Vector<int> m_weeksOfMonth;
    bool m_weeksOfMonthHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
