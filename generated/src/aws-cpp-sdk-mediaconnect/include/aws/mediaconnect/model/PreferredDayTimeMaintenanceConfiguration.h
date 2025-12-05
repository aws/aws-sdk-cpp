/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Day.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>Configuration for preferred day and time maintenance settings.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PreferredDayTimeMaintenanceConfiguration">AWS
 * API Reference</a></p>
 */
class PreferredDayTimeMaintenanceConfiguration {
 public:
  AWS_MEDIACONNECT_API PreferredDayTimeMaintenanceConfiguration() = default;
  AWS_MEDIACONNECT_API PreferredDayTimeMaintenanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API PreferredDayTimeMaintenanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The preferred day for maintenance operations.</p>
   */
  inline Day GetDay() const { return m_day; }
  inline bool DayHasBeenSet() const { return m_dayHasBeenSet; }
  inline void SetDay(Day value) {
    m_dayHasBeenSet = true;
    m_day = value;
  }
  inline PreferredDayTimeMaintenanceConfiguration& WithDay(Day value) {
    SetDay(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preferred time for maintenance operations.</p>
   */
  inline const Aws::String& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::String>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::String>
  PreferredDayTimeMaintenanceConfiguration& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}
 private:
  Day m_day{Day::NOT_SET};

  Aws::String m_time;
  bool m_dayHasBeenSet = false;
  bool m_timeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
