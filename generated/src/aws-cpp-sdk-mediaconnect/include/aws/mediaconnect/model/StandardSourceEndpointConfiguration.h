/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SourceEndpointNetworkingType.h>
#include <aws/mediaconnect/model/SourceEndpointProtocol.h>
#include <aws/mediaconnect/model/StandardSourceEndpointNetworkingConfiguration.h>
#include <aws/mediaconnect/model/StandardSourceEndpointProtocolConfiguration.h>

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
 * <p>The configuration settings for a standard source endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardSourceEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class StandardSourceEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API StandardSourceEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API StandardSourceEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardSourceEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the source endpoint.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StandardSourceEndpointConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The networking configuration for the source endpoint, which determines
   * whether it is publicly accessible or in a virtual private cloud (VPC).</p>
   */
  inline const StandardSourceEndpointNetworkingConfiguration& GetSourceNetworkingConfiguration() const {
    return m_sourceNetworkingConfiguration;
  }
  inline bool SourceNetworkingConfigurationHasBeenSet() const { return m_sourceNetworkingConfigurationHasBeenSet; }
  template <typename SourceNetworkingConfigurationT = StandardSourceEndpointNetworkingConfiguration>
  void SetSourceNetworkingConfiguration(SourceNetworkingConfigurationT&& value) {
    m_sourceNetworkingConfigurationHasBeenSet = true;
    m_sourceNetworkingConfiguration = std::forward<SourceNetworkingConfigurationT>(value);
  }
  template <typename SourceNetworkingConfigurationT = StandardSourceEndpointNetworkingConfiguration>
  StandardSourceEndpointConfiguration& WithSourceNetworkingConfiguration(SourceNetworkingConfigurationT&& value) {
    SetSourceNetworkingConfiguration(std::forward<SourceNetworkingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol configuration for the source endpoint.</p>
   */
  inline const StandardSourceEndpointProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
  inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
  template <typename ProtocolConfigurationT = StandardSourceEndpointProtocolConfiguration>
  void SetProtocolConfiguration(ProtocolConfigurationT&& value) {
    m_protocolConfigurationHasBeenSet = true;
    m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value);
  }
  template <typename ProtocolConfigurationT = StandardSourceEndpointProtocolConfiguration>
  StandardSourceEndpointConfiguration& WithProtocolConfiguration(ProtocolConfigurationT&& value) {
    SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The networking type of the source endpoint. Valid values include the
   * following:</p> <ul> <li> <p> <code>PUBLIC</code> – The source endpoint is
   * publicly accessible.</p> </li> <li> <p> <code>VPC</code> – The source endpoint
   * is in a virtual private cloud (VPC).</p> </li> </ul>
   */
  inline SourceEndpointNetworkingType GetSourceNetworkingType() const { return m_sourceNetworkingType; }
  inline bool SourceNetworkingTypeHasBeenSet() const { return m_sourceNetworkingTypeHasBeenSet; }
  inline void SetSourceNetworkingType(SourceEndpointNetworkingType value) {
    m_sourceNetworkingTypeHasBeenSet = true;
    m_sourceNetworkingType = value;
  }
  inline StandardSourceEndpointConfiguration& WithSourceNetworkingType(SourceEndpointNetworkingType value) {
    SetSourceNetworkingType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used by the source endpoint. Valid values include the
   * following:</p> <ul> <li> <p> <code>RTP</code> – Real-time Transport
   * Protocol.</p> </li> <li> <p> <code>RIST</code> – Reliable Internet Stream
   * Transport.</p> </li> <li> <p> <code>SRT_CALLER</code> – Secure Reliable
   * Transport (SRT) in caller mode.</p> </li> <li> <p> <code>SRT_LISTENER</code> –
   * Secure Reliable Transport (SRT) in listener mode.</p> </li> </ul>
   */
  inline SourceEndpointProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(SourceEndpointProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline StandardSourceEndpointConfiguration& WithProtocol(SourceEndpointProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  StandardSourceEndpointNetworkingConfiguration m_sourceNetworkingConfiguration;

  StandardSourceEndpointProtocolConfiguration m_protocolConfiguration;

  SourceEndpointNetworkingType m_sourceNetworkingType{SourceEndpointNetworkingType::NOT_SET};

  SourceEndpointProtocol m_protocol{SourceEndpointProtocol::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_sourceNetworkingConfigurationHasBeenSet = false;
  bool m_protocolConfigurationHasBeenSet = false;
  bool m_sourceNetworkingTypeHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
