/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FollowerChannelSettings.h>
#include <aws/medialive/model/PrimaryChannelSettings.h>

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
 * Configuration for linked channel relationships<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/LinkedChannelSettings">AWS
 * API Reference</a></p>
 */
class LinkedChannelSettings {
 public:
  AWS_MEDIALIVE_API LinkedChannelSettings() = default;
  AWS_MEDIALIVE_API LinkedChannelSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API LinkedChannelSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const FollowerChannelSettings& GetFollowerChannelSettings() const { return m_followerChannelSettings; }
  inline bool FollowerChannelSettingsHasBeenSet() const { return m_followerChannelSettingsHasBeenSet; }
  template <typename FollowerChannelSettingsT = FollowerChannelSettings>
  void SetFollowerChannelSettings(FollowerChannelSettingsT&& value) {
    m_followerChannelSettingsHasBeenSet = true;
    m_followerChannelSettings = std::forward<FollowerChannelSettingsT>(value);
  }
  template <typename FollowerChannelSettingsT = FollowerChannelSettings>
  LinkedChannelSettings& WithFollowerChannelSettings(FollowerChannelSettingsT&& value) {
    SetFollowerChannelSettings(std::forward<FollowerChannelSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PrimaryChannelSettings& GetPrimaryChannelSettings() const { return m_primaryChannelSettings; }
  inline bool PrimaryChannelSettingsHasBeenSet() const { return m_primaryChannelSettingsHasBeenSet; }
  template <typename PrimaryChannelSettingsT = PrimaryChannelSettings>
  void SetPrimaryChannelSettings(PrimaryChannelSettingsT&& value) {
    m_primaryChannelSettingsHasBeenSet = true;
    m_primaryChannelSettings = std::forward<PrimaryChannelSettingsT>(value);
  }
  template <typename PrimaryChannelSettingsT = PrimaryChannelSettings>
  LinkedChannelSettings& WithPrimaryChannelSettings(PrimaryChannelSettingsT&& value) {
    SetPrimaryChannelSettings(std::forward<PrimaryChannelSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  FollowerChannelSettings m_followerChannelSettings;

  PrimaryChannelSettings m_primaryChannelSettings;
  bool m_followerChannelSettingsHasBeenSet = false;
  bool m_primaryChannelSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
