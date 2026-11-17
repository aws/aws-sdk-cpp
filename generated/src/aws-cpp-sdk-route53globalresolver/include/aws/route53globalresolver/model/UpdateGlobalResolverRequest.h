/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/GlobalResolverIpAddressType.h>
#include <aws/route53globalresolver/model/PublicIpStatus.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class UpdateGlobalResolverRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateGlobalResolverRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalResolver"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Global Resolver.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  inline bool GlobalResolverIdHasBeenSet() const { return m_globalResolverIdHasBeenSet; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  UpdateGlobalResolverRequest& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Global Resolver.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateGlobalResolverRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Regions in which the users' Global Resolver query
   * resolution logs will be propagated.</p>
   */
  inline const Aws::String& GetObservabilityRegion() const { return m_observabilityRegion; }
  inline bool ObservabilityRegionHasBeenSet() const { return m_observabilityRegionHasBeenSet; }
  template <typename ObservabilityRegionT = Aws::String>
  void SetObservabilityRegion(ObservabilityRegionT&& value) {
    m_observabilityRegionHasBeenSet = true;
    m_observabilityRegion = std::forward<ObservabilityRegionT>(value);
  }
  template <typename ObservabilityRegionT = Aws::String>
  UpdateGlobalResolverRequest& WithObservabilityRegion(ObservabilityRegionT&& value) {
    SetObservabilityRegion(std::forward<ObservabilityRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the Global Resolver.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateGlobalResolverRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for the Global Resolver. Valid values are IPV4 or
   * DUAL_STACK for both IPv4 and IPv6 support.</p>
   */
  inline GlobalResolverIpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(GlobalResolverIpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline UpdateGlobalResolverRequest& WithIpAddressType(GlobalResolverIpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the public IP connectivity to configure for the Route 53 Global
   * Resolver. Public IP addresses let DNS clients send queries to the resolver over
   * the internet. Valid values are the following:</p> <ul> <li> <p>
   * <code>ENABLED_RESERVED</code> - Public IP connectivity is enabled, and the
   * global anycast public IP addresses are reserved for the Route 53 Global
   * Resolver.</p> </li> <li> <p> <code>DISABLED_RESERVED</code> - Public IP
   * connectivity is disabled, and the global anycast public IP addresses remain
   * reserved for the Route 53 Global Resolver.</p> </li> <li> <p>
   * <code>DISABLED_RELEASED</code> - Public IP connectivity is disabled, and the
   * global anycast public IP addresses are released.</p> </li> </ul>
   */
  inline PublicIpStatus GetPublicIpStatus() const { return m_publicIpStatus; }
  inline bool PublicIpStatusHasBeenSet() const { return m_publicIpStatusHasBeenSet; }
  inline void SetPublicIpStatus(PublicIpStatus value) {
    m_publicIpStatusHasBeenSet = true;
    m_publicIpStatus = value;
  }
  inline UpdateGlobalResolverRequest& WithPublicIpStatus(PublicIpStatus value) {
    SetPublicIpStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Web Services Regions where the Global Resolver will
   * operate. The resolver will be distributed across these Regions to provide global
   * availability and low-latency DNS resolution.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  UpdateGlobalResolverRequest& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  UpdateGlobalResolverRequest& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_globalResolverId;

  Aws::String m_name;

  Aws::String m_observabilityRegion;

  Aws::String m_description;

  GlobalResolverIpAddressType m_ipAddressType{GlobalResolverIpAddressType::NOT_SET};

  PublicIpStatus m_publicIpStatus{PublicIpStatus::NOT_SET};

  Aws::Vector<Aws::String> m_regions;
  bool m_globalResolverIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_observabilityRegionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
  bool m_publicIpStatusHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
