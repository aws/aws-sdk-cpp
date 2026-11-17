/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/CoreNetworkEndpointDnsIpInputItem.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class CreateCoreNetworkEndpointRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API CreateCoreNetworkEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCoreNetworkEndpoint"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that ensures the request is idempotent.
   * Making the same request multiple times with the same <code>clientToken</code>
   * produces the same result every time.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCoreNetworkEndpointRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Cloud WAN core
   * network to connect to this endpoint.</p>
   */
  inline const Aws::String& GetCoreNetworkArn() const { return m_coreNetworkArn; }
  inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
  template <typename CoreNetworkArnT = Aws::String>
  void SetCoreNetworkArn(CoreNetworkArnT&& value) {
    m_coreNetworkArnHasBeenSet = true;
    m_coreNetworkArn = std::forward<CoreNetworkArnT>(value);
  }
  template <typename CoreNetworkArnT = Aws::String>
  CreateCoreNetworkEndpointRequest& WithCoreNetworkArn(CoreNetworkArnT&& value) {
    SetCoreNetworkArn(std::forward<CoreNetworkArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Route 53 Global Resolver to associate with this core network
   * endpoint.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  inline bool GlobalResolverIdHasBeenSet() const { return m_globalResolverIdHasBeenSet; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  CreateCoreNetworkEndpointRequest& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP addresses that the core network endpoint uses to resolve DNS queries
   * within the Amazon Web Services Cloud WAN core network.</p>
   */
  inline const Aws::Vector<CoreNetworkEndpointDnsIpInputItem>& GetIpAddresses() const { return m_ipAddresses; }
  inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
  template <typename IpAddressesT = Aws::Vector<CoreNetworkEndpointDnsIpInputItem>>
  void SetIpAddresses(IpAddressesT&& value) {
    m_ipAddressesHasBeenSet = true;
    m_ipAddresses = std::forward<IpAddressesT>(value);
  }
  template <typename IpAddressesT = Aws::Vector<CoreNetworkEndpointDnsIpInputItem>>
  CreateCoreNetworkEndpointRequest& WithIpAddresses(IpAddressesT&& value) {
    SetIpAddresses(std::forward<IpAddressesT>(value));
    return *this;
  }
  template <typename IpAddressesT = CoreNetworkEndpointDnsIpInputItem>
  CreateCoreNetworkEndpointRequest& AddIpAddresses(IpAddressesT&& value) {
    m_ipAddressesHasBeenSet = true;
    m_ipAddresses.emplace_back(std::forward<IpAddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the core network endpoint.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateCoreNetworkEndpointRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of user-defined keys and optional values that you can use to
   * categorize and organize the core network endpoint.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateCoreNetworkEndpointRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateCoreNetworkEndpointRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_coreNetworkArn;

  Aws::String m_globalResolverId;

  Aws::Vector<CoreNetworkEndpointDnsIpInputItem> m_ipAddresses;

  Aws::String m_name;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_coreNetworkArnHasBeenSet = false;
  bool m_globalResolverIdHasBeenSet = false;
  bool m_ipAddressesHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
