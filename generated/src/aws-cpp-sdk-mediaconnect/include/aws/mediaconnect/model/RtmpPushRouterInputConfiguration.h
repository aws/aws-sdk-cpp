/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RtmpPushNamingConfiguration.h>
#include <aws/mediaconnect/model/RtmpPushNamingType.h>

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
 * <p>The configuration settings for a router input using the RTMP (Real-Time
 * Messaging Protocol) protocol.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtmpPushRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class RtmpPushRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API RtmpPushRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API RtmpPushRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtmpPushRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port number for the RTMP protocol. The only valid value is
   * <code>1935</code>.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline RtmpPushRouterInputConfiguration& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The naming type. If you specify it, it must match the naming
   * configuration.</p>
   */
  inline RtmpPushNamingType GetNamingType() const { return m_namingType; }
  inline bool NamingTypeHasBeenSet() const { return m_namingTypeHasBeenSet; }
  inline void SetNamingType(RtmpPushNamingType value) {
    m_namingTypeHasBeenSet = true;
    m_namingType = value;
  }
  inline RtmpPushRouterInputConfiguration& WithNamingType(RtmpPushNamingType value) {
    SetNamingType(value);
    return *this;
  }
  ///@}

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
  RtmpPushRouterInputConfiguration& WithNamingConfiguration(NamingConfigurationT&& value) {
    SetNamingConfiguration(std::forward<NamingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  int m_port{0};

  RtmpPushNamingType m_namingType{RtmpPushNamingType::NOT_SET};

  RtmpPushNamingConfiguration m_namingConfiguration;
  bool m_portHasBeenSet = false;
  bool m_namingTypeHasBeenSet = false;
  bool m_namingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
