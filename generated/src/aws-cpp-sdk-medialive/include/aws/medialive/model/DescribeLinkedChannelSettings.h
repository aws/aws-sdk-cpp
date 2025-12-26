/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/DescribeFollowerChannelSettings.h>
#include <aws/medialive/model/DescribePrimaryChannelSettings.h>

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
 * Linked channel configuration details<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeLinkedChannelSettings">AWS
 * API Reference</a></p>
 */
class DescribeLinkedChannelSettings {
 public:
  AWS_MEDIALIVE_API DescribeLinkedChannelSettings() = default;
  AWS_MEDIALIVE_API DescribeLinkedChannelSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API DescribeLinkedChannelSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const DescribeFollowerChannelSettings& GetFollowerChannelSettings() const { return m_followerChannelSettings; }
  inline bool FollowerChannelSettingsHasBeenSet() const { return m_followerChannelSettingsHasBeenSet; }
  template <typename FollowerChannelSettingsT = DescribeFollowerChannelSettings>
  void SetFollowerChannelSettings(FollowerChannelSettingsT&& value) {
    m_followerChannelSettingsHasBeenSet = true;
    m_followerChannelSettings = std::forward<FollowerChannelSettingsT>(value);
  }
  template <typename FollowerChannelSettingsT = DescribeFollowerChannelSettings>
  DescribeLinkedChannelSettings& WithFollowerChannelSettings(FollowerChannelSettingsT&& value) {
    SetFollowerChannelSettings(std::forward<FollowerChannelSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DescribePrimaryChannelSettings& GetPrimaryChannelSettings() const { return m_primaryChannelSettings; }
  inline bool PrimaryChannelSettingsHasBeenSet() const { return m_primaryChannelSettingsHasBeenSet; }
  template <typename PrimaryChannelSettingsT = DescribePrimaryChannelSettings>
  void SetPrimaryChannelSettings(PrimaryChannelSettingsT&& value) {
    m_primaryChannelSettingsHasBeenSet = true;
    m_primaryChannelSettings = std::forward<PrimaryChannelSettingsT>(value);
  }
  template <typename PrimaryChannelSettingsT = DescribePrimaryChannelSettings>
  DescribeLinkedChannelSettings& WithPrimaryChannelSettings(PrimaryChannelSettingsT&& value) {
    SetPrimaryChannelSettings(std::forward<PrimaryChannelSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  DescribeFollowerChannelSettings m_followerChannelSettings;

  DescribePrimaryChannelSettings m_primaryChannelSettings;
  bool m_followerChannelSettingsHasBeenSet = false;
  bool m_primaryChannelSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
