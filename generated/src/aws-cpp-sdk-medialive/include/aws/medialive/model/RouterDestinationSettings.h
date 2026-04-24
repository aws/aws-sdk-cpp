/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Placeholder documentation for RouterDestinationSettings<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RouterDestinationSettings">AWS
 * API Reference</a></p>
 */
class RouterDestinationSettings {
 public:
  AWS_MEDIALIVE_API RouterDestinationSettings() = default;
  AWS_MEDIALIVE_API RouterDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API RouterDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Availability Zone for this MediaConnect Router destination.
   */
  inline const Aws::String& GetAvailabilityZoneName() const { return m_availabilityZoneName; }
  inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }
  template <typename AvailabilityZoneNameT = Aws::String>
  void SetAvailabilityZoneName(AvailabilityZoneNameT&& value) {
    m_availabilityZoneNameHasBeenSet = true;
    m_availabilityZoneName = std::forward<AvailabilityZoneNameT>(value);
  }
  template <typename AvailabilityZoneNameT = Aws::String>
  RouterDestinationSettings& WithAvailabilityZoneName(AvailabilityZoneNameT&& value) {
    SetAvailabilityZoneName(std::forward<AvailabilityZoneNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_availabilityZoneName;
  bool m_availabilityZoneNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
