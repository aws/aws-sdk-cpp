/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ClientRoutingPolicy.h>
#include <aws/rtbfabric/model/ListenerConfig.h>
#include <aws/rtbfabric/model/ManagedEndpointConfiguration.h>
#include <aws/rtbfabric/model/Protocol.h>
#include <aws/rtbfabric/model/TrustStoreConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>A requested responder gateway configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ResponderGatewayConfigParameters">AWS
 * API Reference</a></p>
 */
class ResponderGatewayConfigParameters {
 public:
  AWS_RTBFABRIC_API ResponderGatewayConfigParameters() = default;
  AWS_RTBFABRIC_API ResponderGatewayConfigParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API ResponderGatewayConfigParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The gateway's description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ResponderGatewayConfigParameters& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gateway's client routing policy.</p>
   */
  inline ClientRoutingPolicy GetClientRoutingPolicy() const { return m_clientRoutingPolicy; }
  inline bool ClientRoutingPolicyHasBeenSet() const { return m_clientRoutingPolicyHasBeenSet; }
  inline void SetClientRoutingPolicy(ClientRoutingPolicy value) {
    m_clientRoutingPolicyHasBeenSet = true;
    m_clientRoutingPolicy = value;
  }
  inline ResponderGatewayConfigParameters& WithClientRoutingPolicy(ClientRoutingPolicy value) {
    SetClientRoutingPolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gateway's domain name.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  ResponderGatewayConfigParameters& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The networking port.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ResponderGatewayConfigParameters& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The networking protocol.</p>
   */
  inline Protocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(Protocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline ResponderGatewayConfigParameters& WithProtocol(Protocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ListenerConfig& GetListenerConfig() const { return m_listenerConfig; }
  inline bool ListenerConfigHasBeenSet() const { return m_listenerConfigHasBeenSet; }
  template <typename ListenerConfigT = ListenerConfig>
  void SetListenerConfig(ListenerConfigT&& value) {
    m_listenerConfigHasBeenSet = true;
    m_listenerConfig = std::forward<ListenerConfigT>(value);
  }
  template <typename ListenerConfigT = ListenerConfig>
  ResponderGatewayConfigParameters& WithListenerConfig(ListenerConfigT&& value) {
    SetListenerConfig(std::forward<ListenerConfigT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const TrustStoreConfiguration& GetTrustStoreConfiguration() const { return m_trustStoreConfiguration; }
  inline bool TrustStoreConfigurationHasBeenSet() const { return m_trustStoreConfigurationHasBeenSet; }
  template <typename TrustStoreConfigurationT = TrustStoreConfiguration>
  void SetTrustStoreConfiguration(TrustStoreConfigurationT&& value) {
    m_trustStoreConfigurationHasBeenSet = true;
    m_trustStoreConfiguration = std::forward<TrustStoreConfigurationT>(value);
  }
  template <typename TrustStoreConfigurationT = TrustStoreConfiguration>
  ResponderGatewayConfigParameters& WithTrustStoreConfiguration(TrustStoreConfigurationT&& value) {
    SetTrustStoreConfiguration(std::forward<TrustStoreConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ManagedEndpointConfiguration& GetManagedEndpointConfiguration() const { return m_managedEndpointConfiguration; }
  inline bool ManagedEndpointConfigurationHasBeenSet() const { return m_managedEndpointConfigurationHasBeenSet; }
  template <typename ManagedEndpointConfigurationT = ManagedEndpointConfiguration>
  void SetManagedEndpointConfiguration(ManagedEndpointConfigurationT&& value) {
    m_managedEndpointConfigurationHasBeenSet = true;
    m_managedEndpointConfiguration = std::forward<ManagedEndpointConfigurationT>(value);
  }
  template <typename ManagedEndpointConfigurationT = ManagedEndpointConfiguration>
  ResponderGatewayConfigParameters& WithManagedEndpointConfiguration(ManagedEndpointConfigurationT&& value) {
    SetManagedEndpointConfiguration(std::forward<ManagedEndpointConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  ClientRoutingPolicy m_clientRoutingPolicy{ClientRoutingPolicy::NOT_SET};

  Aws::String m_domainName;

  int m_port{0};

  Protocol m_protocol{Protocol::NOT_SET};

  ListenerConfig m_listenerConfig;

  TrustStoreConfiguration m_trustStoreConfiguration;

  ManagedEndpointConfiguration m_managedEndpointConfiguration;
  bool m_descriptionHasBeenSet = false;
  bool m_clientRoutingPolicyHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_listenerConfigHasBeenSet = false;
  bool m_trustStoreConfigurationHasBeenSet = false;
  bool m_managedEndpointConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
