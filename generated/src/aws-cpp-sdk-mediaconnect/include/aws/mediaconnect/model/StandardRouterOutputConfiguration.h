/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterOutputProtocol.h>
#include <aws/mediaconnect/model/RouterOutputProtocolConfiguration.h>

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
 * <p>The configuration settings for a standard router output, including the
 * protocol, protocol-specific configuration, network interface, and availability
 * zone.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardRouterOutputConfiguration">AWS
 * API Reference</a></p>
 */
class StandardRouterOutputConfiguration {
 public:
  AWS_MEDIACONNECT_API StandardRouterOutputConfiguration() = default;
  AWS_MEDIACONNECT_API StandardRouterOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardRouterOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the network interface associated with the
   * standard router output.</p>
   */
  inline const Aws::String& GetNetworkInterfaceArn() const { return m_networkInterfaceArn; }
  inline bool NetworkInterfaceArnHasBeenSet() const { return m_networkInterfaceArnHasBeenSet; }
  template <typename NetworkInterfaceArnT = Aws::String>
  void SetNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    m_networkInterfaceArnHasBeenSet = true;
    m_networkInterfaceArn = std::forward<NetworkInterfaceArnT>(value);
  }
  template <typename NetworkInterfaceArnT = Aws::String>
  StandardRouterOutputConfiguration& WithNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    SetNetworkInterfaceArn(std::forward<NetworkInterfaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the protocol used by the standard router
   * output.</p>
   */
  inline const RouterOutputProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
  inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
  template <typename ProtocolConfigurationT = RouterOutputProtocolConfiguration>
  void SetProtocolConfiguration(ProtocolConfigurationT&& value) {
    m_protocolConfigurationHasBeenSet = true;
    m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value);
  }
  template <typename ProtocolConfigurationT = RouterOutputProtocolConfiguration>
  StandardRouterOutputConfiguration& WithProtocolConfiguration(ProtocolConfigurationT&& value) {
    SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used by the standard router output.</p>
   */
  inline RouterOutputProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(RouterOutputProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline StandardRouterOutputConfiguration& WithProtocol(RouterOutputProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkInterfaceArn;
  bool m_networkInterfaceArnHasBeenSet = false;

  RouterOutputProtocolConfiguration m_protocolConfiguration;
  bool m_protocolConfigurationHasBeenSet = false;

  RouterOutputProtocol m_protocol{RouterOutputProtocol::NOT_SET};
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
