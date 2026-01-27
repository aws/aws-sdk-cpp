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
 * Disabled Locking Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DisabledLockingSettings">AWS
 * API Reference</a></p>
 */
class DisabledLockingSettings {
 public:
  AWS_MEDIALIVE_API DisabledLockingSettings() = default;
  AWS_MEDIALIVE_API DisabledLockingSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API DisabledLockingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Optional. Only applies to CMAF Ingest Output Group and MediaPackage V2 Output
   * Group. Enter a value here to use a custom epoch, instead of the standard epoch
   * (which started at 1970-01-01T00:00:00 UTC). Specify the start time of the custom
   * epoch, in YYYY-MM-DDTHH:MM:SS in UTC. The time must be 2000-01-01T00:00:00 or
   * later. Always set the MM:SS portion to 00:00.
   */
  inline const Aws::String& GetCustomEpoch() const { return m_customEpoch; }
  inline bool CustomEpochHasBeenSet() const { return m_customEpochHasBeenSet; }
  template <typename CustomEpochT = Aws::String>
  void SetCustomEpoch(CustomEpochT&& value) {
    m_customEpochHasBeenSet = true;
    m_customEpoch = std::forward<CustomEpochT>(value);
  }
  template <typename CustomEpochT = Aws::String>
  DisabledLockingSettings& WithCustomEpoch(CustomEpochT&& value) {
    SetCustomEpoch(std::forward<CustomEpochT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_customEpoch;
  bool m_customEpochHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
