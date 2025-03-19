/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a time-based instance's auto scaling schedule. The schedule
   * consists of a set of key-value pairs.</p> <ul> <li> <p>The key is the time
   * period (a UTC hour) and must be an integer from 0 - 23.</p> </li> <li> <p>The
   * value indicates whether the instance should be online or offline for the
   * specified period, and must be set to "on" or "off"</p> </li> </ul> <p>The
   * default setting for all time periods is off, so you use the following parameters
   * primarily to specify the online periods. You don't have to explicitly specify
   * offline periods unless you want to change an online period to an offline
   * period.</p> <p>The following example specifies that the instance should be
   * online for four hours, from UTC 1200 - 1600. It will be off for the remainder of
   * the day.</p> <p> <code> { "12":"on", "13":"on", "14":"on", "15":"on" } </code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/WeeklyAutoScalingSchedule">AWS
   * API Reference</a></p>
   */
  class WeeklyAutoScalingSchedule
  {
  public:
    AWS_OPSWORKS_API WeeklyAutoScalingSchedule() = default;
    AWS_OPSWORKS_API WeeklyAutoScalingSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API WeeklyAutoScalingSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schedule for Monday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMonday() const { return m_monday; }
    inline bool MondayHasBeenSet() const { return m_mondayHasBeenSet; }
    template<typename MondayT = Aws::Map<Aws::String, Aws::String>>
    void SetMonday(MondayT&& value) { m_mondayHasBeenSet = true; m_monday = std::forward<MondayT>(value); }
    template<typename MondayT = Aws::Map<Aws::String, Aws::String>>
    WeeklyAutoScalingSchedule& WithMonday(MondayT&& value) { SetMonday(std::forward<MondayT>(value)); return *this;}
    template<typename MondayKeyT = Aws::String, typename MondayValueT = Aws::String>
    WeeklyAutoScalingSchedule& AddMonday(MondayKeyT&& key, MondayValueT&& value) {
      m_mondayHasBeenSet = true; m_monday.emplace(std::forward<MondayKeyT>(key), std::forward<MondayValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTuesday() const { return m_tuesday; }
    inline bool TuesdayHasBeenSet() const { return m_tuesdayHasBeenSet; }
    template<typename TuesdayT = Aws::Map<Aws::String, Aws::String>>
    void SetTuesday(TuesdayT&& value) { m_tuesdayHasBeenSet = true; m_tuesday = std::forward<TuesdayT>(value); }
    template<typename TuesdayT = Aws::Map<Aws::String, Aws::String>>
    WeeklyAutoScalingSchedule& WithTuesday(TuesdayT&& value) { SetTuesday(std::forward<TuesdayT>(value)); return *this;}
    template<typename TuesdayKeyT = Aws::String, typename TuesdayValueT = Aws::String>
    WeeklyAutoScalingSchedule& AddTuesday(TuesdayKeyT&& key, TuesdayValueT&& value) {
      m_tuesdayHasBeenSet = true; m_tuesday.emplace(std::forward<TuesdayKeyT>(key), std::forward<TuesdayValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetWednesday() const { return m_wednesday; }
    inline bool WednesdayHasBeenSet() const { return m_wednesdayHasBeenSet; }
    template<typename WednesdayT = Aws::Map<Aws::String, Aws::String>>
    void SetWednesday(WednesdayT&& value) { m_wednesdayHasBeenSet = true; m_wednesday = std::forward<WednesdayT>(value); }
    template<typename WednesdayT = Aws::Map<Aws::String, Aws::String>>
    WeeklyAutoScalingSchedule& WithWednesday(WednesdayT&& value) { SetWednesday(std::forward<WednesdayT>(value)); return *this;}
    template<typename WednesdayKeyT = Aws::String, typename WednesdayValueT = Aws::String>
    WeeklyAutoScalingSchedule& AddWednesday(WednesdayKeyT&& key, WednesdayValueT&& value) {
      m_wednesdayHasBeenSet = true; m_wednesday.emplace(std::forward<WednesdayKeyT>(key), std::forward<WednesdayValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schedule for Thursday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetThursday() const { return m_thursday; }
    inline bool ThursdayHasBeenSet() const { return m_thursdayHasBeenSet; }
    template<typename ThursdayT = Aws::Map<Aws::String, Aws::String>>
    void SetThursday(ThursdayT&& value) { m_thursdayHasBeenSet = true; m_thursday = std::forward<ThursdayT>(value); }
    template<typename ThursdayT = Aws::Map<Aws::String, Aws::String>>
    WeeklyAutoScalingSchedule& WithThursday(ThursdayT&& value) { SetThursday(std::forward<ThursdayT>(value)); return *this;}
    template<typename ThursdayKeyT = Aws::String, typename ThursdayValueT = Aws::String>
    WeeklyAutoScalingSchedule& AddThursday(ThursdayKeyT&& key, ThursdayValueT&& value) {
      m_thursdayHasBeenSet = true; m_thursday.emplace(std::forward<ThursdayKeyT>(key), std::forward<ThursdayValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schedule for Friday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFriday() const { return m_friday; }
    inline bool FridayHasBeenSet() const { return m_fridayHasBeenSet; }
    template<typename FridayT = Aws::Map<Aws::String, Aws::String>>
    void SetFriday(FridayT&& value) { m_fridayHasBeenSet = true; m_friday = std::forward<FridayT>(value); }
    template<typename FridayT = Aws::Map<Aws::String, Aws::String>>
    WeeklyAutoScalingSchedule& WithFriday(FridayT&& value) { SetFriday(std::forward<FridayT>(value)); return *this;}
    template<typename FridayKeyT = Aws::String, typename FridayValueT = Aws::String>
    WeeklyAutoScalingSchedule& AddFriday(FridayKeyT&& key, FridayValueT&& value) {
      m_fridayHasBeenSet = true; m_friday.emplace(std::forward<FridayKeyT>(key), std::forward<FridayValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schedule for Saturday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSaturday() const { return m_saturday; }
    inline bool SaturdayHasBeenSet() const { return m_saturdayHasBeenSet; }
    template<typename SaturdayT = Aws::Map<Aws::String, Aws::String>>
    void SetSaturday(SaturdayT&& value) { m_saturdayHasBeenSet = true; m_saturday = std::forward<SaturdayT>(value); }
    template<typename SaturdayT = Aws::Map<Aws::String, Aws::String>>
    WeeklyAutoScalingSchedule& WithSaturday(SaturdayT&& value) { SetSaturday(std::forward<SaturdayT>(value)); return *this;}
    template<typename SaturdayKeyT = Aws::String, typename SaturdayValueT = Aws::String>
    WeeklyAutoScalingSchedule& AddSaturday(SaturdayKeyT&& key, SaturdayValueT&& value) {
      m_saturdayHasBeenSet = true; m_saturday.emplace(std::forward<SaturdayKeyT>(key), std::forward<SaturdayValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schedule for Sunday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSunday() const { return m_sunday; }
    inline bool SundayHasBeenSet() const { return m_sundayHasBeenSet; }
    template<typename SundayT = Aws::Map<Aws::String, Aws::String>>
    void SetSunday(SundayT&& value) { m_sundayHasBeenSet = true; m_sunday = std::forward<SundayT>(value); }
    template<typename SundayT = Aws::Map<Aws::String, Aws::String>>
    WeeklyAutoScalingSchedule& WithSunday(SundayT&& value) { SetSunday(std::forward<SundayT>(value)); return *this;}
    template<typename SundayKeyT = Aws::String, typename SundayValueT = Aws::String>
    WeeklyAutoScalingSchedule& AddSunday(SundayKeyT&& key, SundayValueT&& value) {
      m_sundayHasBeenSet = true; m_sunday.emplace(std::forward<SundayKeyT>(key), std::forward<SundayValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_monday;
    bool m_mondayHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tuesday;
    bool m_tuesdayHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_wednesday;
    bool m_wednesdayHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_thursday;
    bool m_thursdayHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_friday;
    bool m_fridayHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_saturday;
    bool m_saturdayHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sunday;
    bool m_sundayHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
