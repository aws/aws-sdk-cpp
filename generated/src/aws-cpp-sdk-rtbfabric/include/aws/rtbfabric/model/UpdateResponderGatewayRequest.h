/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ClientRoutingPolicy.h>
#include <aws/rtbfabric/model/ListenerConfig.h>
#include <aws/rtbfabric/model/ManagedEndpointConfiguration.h>
#include <aws/rtbfabric/model/Protocol.h>
#include <aws/rtbfabric/model/TrustStoreConfiguration.h>

#include <utility>

namespace Aws {
namespace RTBFabric {
namespace Model {

/**
 */
class UpdateResponderGatewayRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API UpdateResponderGatewayRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateResponderGateway"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Domain name for the responder gateway. This operation does not change the
   * domain name of an existing gateway. To use a different domain name, delete the
   * gateway and create a new one.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  UpdateResponderGatewayRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Networking port to use. This operation does not change the port of an
   * existing gateway. To use a different port, delete the gateway and create a new
   * one.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline UpdateResponderGatewayRequest& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Networking protocol to use. This operation does not change the protocol of an
   * existing gateway. To use a different protocol, delete the gateway and create a
   * new one.</p>
   */
  inline Protocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(Protocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline UpdateResponderGatewayRequest& WithProtocol(Protocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The listener configuration for the responder gateway.</p>
   */
  inline const ListenerConfig& GetListenerConfig() const { return m_listenerConfig; }
  inline bool ListenerConfigHasBeenSet() const { return m_listenerConfigHasBeenSet; }
  template <typename ListenerConfigT = ListenerConfig>
  void SetListenerConfig(ListenerConfigT&& value) {
    m_listenerConfigHasBeenSet = true;
    m_listenerConfig = std::forward<ListenerConfigT>(value);
  }
  template <typename ListenerConfigT = ListenerConfig>
  UpdateResponderGatewayRequest& WithListenerConfig(ListenerConfigT&& value) {
    SetListenerConfig(std::forward<ListenerConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the trust store.</p>
   */
  inline const TrustStoreConfiguration& GetTrustStoreConfiguration() const { return m_trustStoreConfiguration; }
  inline bool TrustStoreConfigurationHasBeenSet() const { return m_trustStoreConfigurationHasBeenSet; }
  template <typename TrustStoreConfigurationT = TrustStoreConfiguration>
  void SetTrustStoreConfiguration(TrustStoreConfigurationT&& value) {
    m_trustStoreConfigurationHasBeenSet = true;
    m_trustStoreConfiguration = std::forward<TrustStoreConfigurationT>(value);
  }
  template <typename TrustStoreConfigurationT = TrustStoreConfiguration>
  UpdateResponderGatewayRequest& WithTrustStoreConfiguration(TrustStoreConfigurationT&& value) {
    SetTrustStoreConfiguration(std::forward<TrustStoreConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the managed endpoint.</p>
   */
  inline const ManagedEndpointConfiguration& GetManagedEndpointConfiguration() const { return m_managedEndpointConfiguration; }
  inline bool ManagedEndpointConfigurationHasBeenSet() const { return m_managedEndpointConfigurationHasBeenSet; }
  template <typename ManagedEndpointConfigurationT = ManagedEndpointConfiguration>
  void SetManagedEndpointConfiguration(ManagedEndpointConfigurationT&& value) {
    m_managedEndpointConfigurationHasBeenSet = true;
    m_managedEndpointConfiguration = std::forward<ManagedEndpointConfigurationT>(value);
  }
  template <typename ManagedEndpointConfigurationT = ManagedEndpointConfiguration>
  UpdateResponderGatewayRequest& WithManagedEndpointConfiguration(ManagedEndpointConfigurationT&& value) {
    SetManagedEndpointConfiguration(std::forward<ManagedEndpointConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. This lets you safely retry the request without
   * accidentally performing the same operation a second time. Passing the same value
   * to a later call to an operation requires that you also pass the same value for
   * all other parameters. We recommend that you use a <a
   * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
   * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
   * generates a random one for you.</p> <p>If you retry the operation with the same
   * <code>clientToken</code>, but with different parameters, the retry fails with an
   * <code>IdempotentParameterMismatch</code> error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateResponderGatewayRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  UpdateResponderGatewayRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description for the responder gateway.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateResponderGatewayRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client routing policy of the gateway. This policy controls which
   * Availability Zones RTB Fabric uses to reach the gateway for the requester
   * gateways that send traffic to it. Valid values are the following:</p> <ul> <li>
   * <p> <code>AVAILABILITY_ZONE_AFFINITY</code>: RTB Fabric routes each requester's
   * traffic to gateway capacity in the requester's own Availability Zone when the
   * gateway has capacity available there. Otherwise, RTB Fabric routes the traffic
   * to gateway capacity in the other Availability Zones of the gateway.</p> </li>
   * <li> <p> <code>ANY_AVAILABILITY_ZONE</code>: RTB Fabric routes each requester's
   * traffic to gateway capacity in every Availability Zone that the subnets of the
   * gateway span. The Availability Zone that the requester is in does not change
   * this.</p> </li> </ul> <p>If you don't specify a value, the gateway keeps its
   * current client routing policy. Changing the policy sets the gateway status to
   * <code>PENDING_UPDATE</code> until the change is complete. RTB Fabric does not
   * support partial Availability Zone affinity, so
   * <code>PARTIAL_AVAILABILITY_ZONE_AFFINITY</code> is not a valid value. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/rtb-fabric/latest/userguide/working-with-responder-gateways.html#configuring-availability-zone-affinity">Configuring
   * Availability Zone affinity</a> in the <i>Amazon Web Services RTB Fabric User
   * Guide</i>.</p>
   */
  inline ClientRoutingPolicy GetClientRoutingPolicy() const { return m_clientRoutingPolicy; }
  inline bool ClientRoutingPolicyHasBeenSet() const { return m_clientRoutingPolicyHasBeenSet; }
  inline void SetClientRoutingPolicy(ClientRoutingPolicy value) {
    m_clientRoutingPolicyHasBeenSet = true;
    m_clientRoutingPolicy = value;
  }
  inline UpdateResponderGatewayRequest& WithClientRoutingPolicy(ClientRoutingPolicy value) {
    SetClientRoutingPolicy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  int m_port{0};

  Protocol m_protocol{Protocol::NOT_SET};

  ListenerConfig m_listenerConfig;

  TrustStoreConfiguration m_trustStoreConfiguration;

  ManagedEndpointConfiguration m_managedEndpointConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_gatewayId;

  Aws::String m_description;

  ClientRoutingPolicy m_clientRoutingPolicy{ClientRoutingPolicy::NOT_SET};
  bool m_domainNameHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_listenerConfigHasBeenSet = false;
  bool m_trustStoreConfigurationHasBeenSet = false;
  bool m_managedEndpointConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_gatewayIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_clientRoutingPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
