/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/CRResourceStatus.h>
#include <aws/route53globalresolver/model/CoreNetworkEndpointDnsIpItem.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {

/**
 * <p>Summary information about a core network endpoint. Route 53 Global Resolver
 * returns one of these items for each endpoint in the response to a
 * <code>ListCoreNetworkEndpoints</code> request. Each item describes the
 * endpoint's identifiers, the Global Resolver and Cloud WAN core network that it
 * connects, its DNS IP addresses, and its current status.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/CoreNetworkEndpointsItem">AWS
 * API Reference</a></p>
 */
class CoreNetworkEndpointsItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API CoreNetworkEndpointsItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API CoreNetworkEndpointsItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API CoreNetworkEndpointsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the core network endpoint.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CoreNetworkEndpointsItem& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Regions in which the core network endpoint is
   * available.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailableRegions() const { return m_availableRegions; }
  inline bool AvailableRegionsHasBeenSet() const { return m_availableRegionsHasBeenSet; }
  template <typename AvailableRegionsT = Aws::Vector<Aws::String>>
  void SetAvailableRegions(AvailableRegionsT&& value) {
    m_availableRegionsHasBeenSet = true;
    m_availableRegions = std::forward<AvailableRegionsT>(value);
  }
  template <typename AvailableRegionsT = Aws::Vector<Aws::String>>
  CoreNetworkEndpointsItem& WithAvailableRegions(AvailableRegionsT&& value) {
    SetAvailableRegions(std::forward<AvailableRegionsT>(value));
    return *this;
  }
  template <typename AvailableRegionsT = Aws::String>
  CoreNetworkEndpointsItem& AddAvailableRegions(AvailableRegionsT&& value) {
    m_availableRegionsHasBeenSet = true;
    m_availableRegions.emplace_back(std::forward<AvailableRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Cloud WAN core network that the
   * endpoint connects to.</p>
   */
  inline const Aws::String& GetCoreNetworkArn() const { return m_coreNetworkArn; }
  inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
  template <typename CoreNetworkArnT = Aws::String>
  void SetCoreNetworkArn(CoreNetworkArnT&& value) {
    m_coreNetworkArnHasBeenSet = true;
    m_coreNetworkArn = std::forward<CoreNetworkArnT>(value);
  }
  template <typename CoreNetworkArnT = Aws::String>
  CoreNetworkEndpointsItem& WithCoreNetworkArn(CoreNetworkArnT&& value) {
    SetCoreNetworkArn(std::forward<CoreNetworkArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the core network endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CoreNetworkEndpointsItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Route 53 Global Resolver that the core network endpoint
   * is associated with.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  inline bool GlobalResolverIdHasBeenSet() const { return m_globalResolverIdHasBeenSet; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  CoreNetworkEndpointsItem& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the core network endpoint.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CoreNetworkEndpointsItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS IP addresses that the core network endpoint uses to receive DNS
   * queries.</p>
   */
  inline const Aws::Vector<CoreNetworkEndpointDnsIpItem>& GetIpAddresses() const { return m_ipAddresses; }
  inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
  template <typename IpAddressesT = Aws::Vector<CoreNetworkEndpointDnsIpItem>>
  void SetIpAddresses(IpAddressesT&& value) {
    m_ipAddressesHasBeenSet = true;
    m_ipAddresses = std::forward<IpAddressesT>(value);
  }
  template <typename IpAddressesT = Aws::Vector<CoreNetworkEndpointDnsIpItem>>
  CoreNetworkEndpointsItem& WithIpAddresses(IpAddressesT&& value) {
    SetIpAddresses(std::forward<IpAddressesT>(value));
    return *this;
  }
  template <typename IpAddressesT = CoreNetworkEndpointDnsIpItem>
  CoreNetworkEndpointsItem& AddIpAddresses(IpAddressesT&& value) {
    m_ipAddressesHasBeenSet = true;
    m_ipAddresses.emplace_back(std::forward<IpAddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the core network endpoint.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CoreNetworkEndpointsItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the core network endpoint.</p>
   */
  inline CRResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CRResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CoreNetworkEndpointsItem& WithStatus(CRResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the core network endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CoreNetworkEndpointsItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::Vector<Aws::String> m_availableRegions;

  Aws::String m_coreNetworkArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_globalResolverId;

  Aws::String m_id;

  Aws::Vector<CoreNetworkEndpointDnsIpItem> m_ipAddresses;

  Aws::String m_name;

  CRResourceStatus m_status{CRResourceStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_arnHasBeenSet = false;
  bool m_availableRegionsHasBeenSet = false;
  bool m_coreNetworkArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_globalResolverIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_ipAddressesHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
