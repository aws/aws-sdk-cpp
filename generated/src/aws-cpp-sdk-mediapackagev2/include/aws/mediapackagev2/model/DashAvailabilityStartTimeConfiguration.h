/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mediapackagev2 {
namespace Model {

/**
 * <p>The configuration for the DASH <code>availabilityStartTime</code> attribute
 * of the Media Presentation Description (MPD). Use this configuration to set a
 * custom availability start time for your DASH manifest.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashAvailabilityStartTimeConfiguration">AWS
 * API Reference</a></p>
 */
class DashAvailabilityStartTimeConfiguration {
 public:
  AWS_MEDIAPACKAGEV2_API DashAvailabilityStartTimeConfiguration() = default;
  AWS_MEDIAPACKAGEV2_API DashAvailabilityStartTimeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API DashAvailabilityStartTimeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The fixed availability start time for the DASH manifest, in ISO 8601
   * date-time format. The value must have hourly granularity, meaning that the
   * minutes, seconds, and fractional seconds must be zero. The value must be on or
   * after <code>2024-01-01T00:00:00Z</code> and must be at least 14 days before the
   * current time.</p>
   */
  inline const Aws::Utils::DateTime& GetFixedAvailabilityStartTime() const { return m_fixedAvailabilityStartTime; }
  inline bool FixedAvailabilityStartTimeHasBeenSet() const { return m_fixedAvailabilityStartTimeHasBeenSet; }
  template <typename FixedAvailabilityStartTimeT = Aws::Utils::DateTime>
  void SetFixedAvailabilityStartTime(FixedAvailabilityStartTimeT&& value) {
    m_fixedAvailabilityStartTimeHasBeenSet = true;
    m_fixedAvailabilityStartTime = std::forward<FixedAvailabilityStartTimeT>(value);
  }
  template <typename FixedAvailabilityStartTimeT = Aws::Utils::DateTime>
  DashAvailabilityStartTimeConfiguration& WithFixedAvailabilityStartTime(FixedAvailabilityStartTimeT&& value) {
    SetFixedAvailabilityStartTime(std::forward<FixedAvailabilityStartTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_fixedAvailabilityStartTime{};
  bool m_fixedAvailabilityStartTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
