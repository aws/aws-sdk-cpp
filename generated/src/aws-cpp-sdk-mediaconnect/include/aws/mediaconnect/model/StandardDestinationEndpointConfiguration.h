/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/DestinationEndpointNetworkingType.h>
#include <aws/mediaconnect/model/DestinationEndpointProtocol.h>
#include <aws/mediaconnect/model/StandardDestinationEndpointNetworkingConfiguration.h>
#include <aws/mediaconnect/model/StandardDestinationEndpointProtocolConfiguration.h>

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
 * <p>The configuration settings for a standard destination endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardDestinationEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class StandardDestinationEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API StandardDestinationEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API StandardDestinationEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardDestinationEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the destination endpoint.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StandardDestinationEndpointConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The networking configuration for the destination endpoint, which determines
   * whether it is publicly accessible or in a virtual private cloud (VPC).</p>
   */
  inline const StandardDestinationEndpointNetworkingConfiguration& GetDestinationNetworkingConfiguration() const {
    return m_destinationNetworkingConfiguration;
  }
  inline bool DestinationNetworkingConfigurationHasBeenSet() const { return m_destinationNetworkingConfigurationHasBeenSet; }
  template <typename DestinationNetworkingConfigurationT = StandardDestinationEndpointNetworkingConfiguration>
  void SetDestinationNetworkingConfiguration(DestinationNetworkingConfigurationT&& value) {
    m_destinationNetworkingConfigurationHasBeenSet = true;
    m_destinationNetworkingConfiguration = std::forward<DestinationNetworkingConfigurationT>(value);
  }
  template <typename DestinationNetworkingConfigurationT = StandardDestinationEndpointNetworkingConfiguration>
  StandardDestinationEndpointConfiguration& WithDestinationNetworkingConfiguration(DestinationNetworkingConfigurationT&& value) {
    SetDestinationNetworkingConfiguration(std::forward<DestinationNetworkingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol configuration for the destination endpoint.</p>
   */
  inline const StandardDestinationEndpointProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
  inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
  template <typename ProtocolConfigurationT = StandardDestinationEndpointProtocolConfiguration>
  void SetProtocolConfiguration(ProtocolConfigurationT&& value) {
    m_protocolConfigurationHasBeenSet = true;
    m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value);
  }
  template <typename ProtocolConfigurationT = StandardDestinationEndpointProtocolConfiguration>
  StandardDestinationEndpointConfiguration& WithProtocolConfiguration(ProtocolConfigurationT&& value) {
    SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The networking type of the destination endpoint. Valid values include the
   * following:</p> <ul> <li> <p> <code>PUBLIC</code> – The destination endpoint is
   * publicly accessible.</p> </li> <li> <p> <code>VPC</code> – The destination
   * endpoint is in a virtual private cloud (VPC).</p> </li> </ul>
   */
  inline DestinationEndpointNetworkingType GetDestinationNetworkingType() const { return m_destinationNetworkingType; }
  inline bool DestinationNetworkingTypeHasBeenSet() const { return m_destinationNetworkingTypeHasBeenSet; }
  inline void SetDestinationNetworkingType(DestinationEndpointNetworkingType value) {
    m_destinationNetworkingTypeHasBeenSet = true;
    m_destinationNetworkingType = value;
  }
  inline StandardDestinationEndpointConfiguration& WithDestinationNetworkingType(DestinationEndpointNetworkingType value) {
    SetDestinationNetworkingType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used by the destination endpoint. Valid values include the
   * following:</p> <ul> <li> <p> <code>RTP</code> – Real-time Transport
   * Protocol.</p> </li> <li> <p> <code>RIST</code> – Reliable Internet Stream
   * Transport.</p> </li> <li> <p> <code>SRT_CALLER</code> – Secure Reliable
   * Transport (SRT) in caller mode.</p> </li> <li> <p> <code>SRT_LISTENER</code> –
   * Secure Reliable Transport (SRT) in listener mode.</p> </li> </ul>
   */
  inline DestinationEndpointProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(DestinationEndpointProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline StandardDestinationEndpointConfiguration& WithProtocol(DestinationEndpointProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  StandardDestinationEndpointNetworkingConfiguration m_destinationNetworkingConfiguration;

  StandardDestinationEndpointProtocolConfiguration m_protocolConfiguration;

  DestinationEndpointNetworkingType m_destinationNetworkingType{DestinationEndpointNetworkingType::NOT_SET};

  DestinationEndpointProtocol m_protocol{DestinationEndpointProtocol::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_destinationNetworkingConfigurationHasBeenSet = false;
  bool m_protocolConfigurationHasBeenSet = false;
  bool m_destinationNetworkingTypeHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
