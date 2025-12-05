/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
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
   * <p>The domain name for the responder gateway.</p>
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
   * <p>The networking port to use.</p>
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
   * <p>The networking protocol to use.</p>
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
   * <p>The unique client token.</p>
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
 private:
  Aws::String m_domainName;

  int m_port{0};

  Protocol m_protocol{Protocol::NOT_SET};

  TrustStoreConfiguration m_trustStoreConfiguration;

  ManagedEndpointConfiguration m_managedEndpointConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_gatewayId;

  Aws::String m_description;
  bool m_domainNameHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_trustStoreConfigurationHasBeenSet = false;
  bool m_managedEndpointConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_gatewayIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
