/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/AutomaticRtmpPushNamingConfiguration.h>
#include <aws/mediaconnect/model/ManualRtmpPushNamingConfiguration.h>

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
 * <p>The configuration settings for the RTMP (Real-Time Messaging Protocol)
 * application and stream names.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtmpPushNamingConfiguration">AWS
 * API Reference</a></p>
 */
class RtmpPushNamingConfiguration {
 public:
  AWS_MEDIACONNECT_API RtmpPushNamingConfiguration() = default;
  AWS_MEDIACONNECT_API RtmpPushNamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtmpPushNamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The naming configuration where you specify the application and stream
   * names.</p>
   */
  inline const ManualRtmpPushNamingConfiguration& GetManual() const { return m_manual; }
  inline bool ManualHasBeenSet() const { return m_manualHasBeenSet; }
  template <typename ManualT = ManualRtmpPushNamingConfiguration>
  void SetManual(ManualT&& value) {
    m_manualHasBeenSet = true;
    m_manual = std::forward<ManualT>(value);
  }
  template <typename ManualT = ManualRtmpPushNamingConfiguration>
  RtmpPushNamingConfiguration& WithManual(ManualT&& value) {
    SetManual(std::forward<ManualT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The naming configuration where MediaConnect generates the application and
   * stream names.</p>
   */
  inline const AutomaticRtmpPushNamingConfiguration& GetAutomatic() const { return m_automatic; }
  inline bool AutomaticHasBeenSet() const { return m_automaticHasBeenSet; }
  template <typename AutomaticT = AutomaticRtmpPushNamingConfiguration>
  void SetAutomatic(AutomaticT&& value) {
    m_automaticHasBeenSet = true;
    m_automatic = std::forward<AutomaticT>(value);
  }
  template <typename AutomaticT = AutomaticRtmpPushNamingConfiguration>
  RtmpPushNamingConfiguration& WithAutomatic(AutomaticT&& value) {
    SetAutomatic(std::forward<AutomaticT>(value));
    return *this;
  }
  ///@}
 private:
  ManualRtmpPushNamingConfiguration m_manual;

  AutomaticRtmpPushNamingConfiguration m_automatic;
  bool m_manualHasBeenSet = false;
  bool m_automaticHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
