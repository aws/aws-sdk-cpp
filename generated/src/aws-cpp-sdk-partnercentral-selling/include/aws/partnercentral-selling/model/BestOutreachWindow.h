/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/DayOfWeek.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>A single recommended outreach window for one day, expressed in Coordinated
 * Universal Time (UTC).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/BestOutreachWindow">AWS
 * API Reference</a></p>
 */
class BestOutreachWindow {
 public:
  AWS_PARTNERCENTRALSELLING_API BestOutreachWindow() = default;
  AWS_PARTNERCENTRALSELLING_API BestOutreachWindow(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API BestOutreachWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The day of the week that this outreach window applies to. Valid values are
   * <code>MONDAY</code>, <code>TUESDAY</code>, <code>WEDNESDAY</code>,
   * <code>THURSDAY</code>, <code>FRIDAY</code>, <code>SATURDAY</code>, and
   * <code>SUNDAY</code>.</p>
   */
  inline DayOfWeek GetDay() const { return m_day; }
  inline bool DayHasBeenSet() const { return m_dayHasBeenSet; }
  inline void SetDay(DayOfWeek value) {
    m_dayHasBeenSet = true;
    m_day = value;
  }
  inline BestOutreachWindow& WithDay(DayOfWeek value) {
    SetDay(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inclusive start of the outreach window, in Coordinated Universal Time
   * (UTC), in 24-hour <code>HH:mm</code> format.</p>
   */
  inline const Aws::String& GetStartTimeUtc() const { return m_startTimeUtc; }
  inline bool StartTimeUtcHasBeenSet() const { return m_startTimeUtcHasBeenSet; }
  template <typename StartTimeUtcT = Aws::String>
  void SetStartTimeUtc(StartTimeUtcT&& value) {
    m_startTimeUtcHasBeenSet = true;
    m_startTimeUtc = std::forward<StartTimeUtcT>(value);
  }
  template <typename StartTimeUtcT = Aws::String>
  BestOutreachWindow& WithStartTimeUtc(StartTimeUtcT&& value) {
    SetStartTimeUtc(std::forward<StartTimeUtcT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusive end of the outreach window, in Coordinated Universal Time
   * (UTC), in 24-hour <code>HH:mm</code> format.</p>
   */
  inline const Aws::String& GetEndTimeUtc() const { return m_endTimeUtc; }
  inline bool EndTimeUtcHasBeenSet() const { return m_endTimeUtcHasBeenSet; }
  template <typename EndTimeUtcT = Aws::String>
  void SetEndTimeUtc(EndTimeUtcT&& value) {
    m_endTimeUtcHasBeenSet = true;
    m_endTimeUtc = std::forward<EndTimeUtcT>(value);
  }
  template <typename EndTimeUtcT = Aws::String>
  BestOutreachWindow& WithEndTimeUtc(EndTimeUtcT&& value) {
    SetEndTimeUtc(std::forward<EndTimeUtcT>(value));
    return *this;
  }
  ///@}
 private:
  DayOfWeek m_day{DayOfWeek::NOT_SET};

  Aws::String m_startTimeUtc;

  Aws::String m_endTimeUtc;
  bool m_dayHasBeenSet = false;
  bool m_startTimeUtcHasBeenSet = false;
  bool m_endTimeUtcHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
