/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RtmpPushNamingConfiguration.h>

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
 * <p>The settings for the RTMP (Real-Time Messaging Protocol)
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SetRtmpPushSourceSettings">AWS
 * API Reference</a></p>
 */
class SetRtmpPushSourceSettings {
 public:
  AWS_MEDIACONNECT_API SetRtmpPushSourceSettings() = default;
  AWS_MEDIACONNECT_API SetRtmpPushSourceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SetRtmpPushSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration settings for the application and stream names.</p>
   */
  inline const RtmpPushNamingConfiguration& GetNamingConfiguration() const { return m_namingConfiguration; }
  inline bool NamingConfigurationHasBeenSet() const { return m_namingConfigurationHasBeenSet; }
  template <typename NamingConfigurationT = RtmpPushNamingConfiguration>
  void SetNamingConfiguration(NamingConfigurationT&& value) {
    m_namingConfigurationHasBeenSet = true;
    m_namingConfiguration = std::forward<NamingConfigurationT>(value);
  }
  template <typename NamingConfigurationT = RtmpPushNamingConfiguration>
  SetRtmpPushSourceSettings& WithNamingConfiguration(NamingConfigurationT&& value) {
    SetNamingConfiguration(std::forward<NamingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  RtmpPushNamingConfiguration m_namingConfiguration;
  bool m_namingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
