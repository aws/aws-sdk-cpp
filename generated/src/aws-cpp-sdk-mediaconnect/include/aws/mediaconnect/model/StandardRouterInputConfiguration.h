/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputProtocol.h>
#include <aws/mediaconnect/model/RouterInputProtocolConfiguration.h>

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
 * <p>The configuration settings for a standard router input, including the
 * protocol, protocol-specific configuration, network interface, and availability
 * zone.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class StandardRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API StandardRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API StandardRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the network interface associated with the
   * standard router input.</p>
   */
  inline const Aws::String& GetNetworkInterfaceArn() const { return m_networkInterfaceArn; }
  inline bool NetworkInterfaceArnHasBeenSet() const { return m_networkInterfaceArnHasBeenSet; }
  template <typename NetworkInterfaceArnT = Aws::String>
  void SetNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    m_networkInterfaceArnHasBeenSet = true;
    m_networkInterfaceArn = std::forward<NetworkInterfaceArnT>(value);
  }
  template <typename NetworkInterfaceArnT = Aws::String>
  StandardRouterInputConfiguration& WithNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    SetNetworkInterfaceArn(std::forward<NetworkInterfaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the protocol used by the standard router
   * input.</p>
   */
  inline const RouterInputProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
  inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
  template <typename ProtocolConfigurationT = RouterInputProtocolConfiguration>
  void SetProtocolConfiguration(ProtocolConfigurationT&& value) {
    m_protocolConfigurationHasBeenSet = true;
    m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value);
  }
  template <typename ProtocolConfigurationT = RouterInputProtocolConfiguration>
  StandardRouterInputConfiguration& WithProtocolConfiguration(ProtocolConfigurationT&& value) {
    SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used by the standard router input.</p>
   */
  inline RouterInputProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(RouterInputProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline StandardRouterInputConfiguration& WithProtocol(RouterInputProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkInterfaceArn;
  bool m_networkInterfaceArnHasBeenSet = false;

  RouterInputProtocolConfiguration m_protocolConfiguration;
  bool m_protocolConfigurationHasBeenSet = false;

  RouterInputProtocol m_protocol{RouterInputProtocol::NOT_SET};
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
