/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/UpdateIpAddressEntry.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class UpdateCoreNetworkEndpointRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateCoreNetworkEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCoreNetworkEndpoint"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the core network endpoint to update.</p>
   */
  inline const Aws::String& GetCoreNetworkEndpointId() const { return m_coreNetworkEndpointId; }
  inline bool CoreNetworkEndpointIdHasBeenSet() const { return m_coreNetworkEndpointIdHasBeenSet; }
  template <typename CoreNetworkEndpointIdT = Aws::String>
  void SetCoreNetworkEndpointId(CoreNetworkEndpointIdT&& value) {
    m_coreNetworkEndpointIdHasBeenSet = true;
    m_coreNetworkEndpointId = std::forward<CoreNetworkEndpointIdT>(value);
  }
  template <typename CoreNetworkEndpointIdT = Aws::String>
  UpdateCoreNetworkEndpointRequest& WithCoreNetworkEndpointId(CoreNetworkEndpointIdT&& value) {
    SetCoreNetworkEndpointId(std::forward<CoreNetworkEndpointIdT>(value));
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
  UpdateCoreNetworkEndpointRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address changes to apply to the core network endpoint. Use this
   * parameter to add or remove the IP addresses that the endpoint uses to resolve
   * DNS queries within the Amazon Web Services Cloud WAN core network.</p>
   */
  inline const Aws::Vector<UpdateIpAddressEntry>& GetUpdateIpAddresses() const { return m_updateIpAddresses; }
  inline bool UpdateIpAddressesHasBeenSet() const { return m_updateIpAddressesHasBeenSet; }
  template <typename UpdateIpAddressesT = Aws::Vector<UpdateIpAddressEntry>>
  void SetUpdateIpAddresses(UpdateIpAddressesT&& value) {
    m_updateIpAddressesHasBeenSet = true;
    m_updateIpAddresses = std::forward<UpdateIpAddressesT>(value);
  }
  template <typename UpdateIpAddressesT = Aws::Vector<UpdateIpAddressEntry>>
  UpdateCoreNetworkEndpointRequest& WithUpdateIpAddresses(UpdateIpAddressesT&& value) {
    SetUpdateIpAddresses(std::forward<UpdateIpAddressesT>(value));
    return *this;
  }
  template <typename UpdateIpAddressesT = UpdateIpAddressEntry>
  UpdateCoreNetworkEndpointRequest& AddUpdateIpAddresses(UpdateIpAddressesT&& value) {
    m_updateIpAddressesHasBeenSet = true;
    m_updateIpAddresses.emplace_back(std::forward<UpdateIpAddressesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_coreNetworkEndpointId;

  Aws::String m_name;

  Aws::Vector<UpdateIpAddressEntry> m_updateIpAddresses;
  bool m_coreNetworkEndpointIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_updateIpAddressesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
