/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/CRResourceStatus.h>
#include <aws/route53globalresolver/model/CoreNetworkEndpointDnsIpItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class UpdateCoreNetworkEndpointResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateCoreNetworkEndpointResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API UpdateCoreNetworkEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API UpdateCoreNetworkEndpointResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated core network endpoint.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateCoreNetworkEndpointResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Regions in which the updated core network endpoint is
   * available.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailableRegions() const { return m_availableRegions; }
  template <typename AvailableRegionsT = Aws::Vector<Aws::String>>
  void SetAvailableRegions(AvailableRegionsT&& value) {
    m_availableRegionsHasBeenSet = true;
    m_availableRegions = std::forward<AvailableRegionsT>(value);
  }
  template <typename AvailableRegionsT = Aws::Vector<Aws::String>>
  UpdateCoreNetworkEndpointResult& WithAvailableRegions(AvailableRegionsT&& value) {
    SetAvailableRegions(std::forward<AvailableRegionsT>(value));
    return *this;
  }
  template <typename AvailableRegionsT = Aws::String>
  UpdateCoreNetworkEndpointResult& AddAvailableRegions(AvailableRegionsT&& value) {
    m_availableRegionsHasBeenSet = true;
    m_availableRegions.emplace_back(std::forward<AvailableRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Cloud WAN core
   * network connected to the updated endpoint.</p>
   */
  inline const Aws::String& GetCoreNetworkArn() const { return m_coreNetworkArn; }
  template <typename CoreNetworkArnT = Aws::String>
  void SetCoreNetworkArn(CoreNetworkArnT&& value) {
    m_coreNetworkArnHasBeenSet = true;
    m_coreNetworkArn = std::forward<CoreNetworkArnT>(value);
  }
  template <typename CoreNetworkArnT = Aws::String>
  UpdateCoreNetworkEndpointResult& WithCoreNetworkArn(CoreNetworkArnT&& value) {
    SetCoreNetworkArn(std::forward<CoreNetworkArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the core network endpoint was originally created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateCoreNetworkEndpointResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Route 53 Global Resolver associated with the updated core
   * network endpoint.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  UpdateCoreNetworkEndpointResult& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the updated core network endpoint.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateCoreNetworkEndpointResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP addresses that the updated core network endpoint uses to resolve DNS
   * queries within the Amazon Web Services Cloud WAN core network.</p>
   */
  inline const Aws::Vector<CoreNetworkEndpointDnsIpItem>& GetIpAddresses() const { return m_ipAddresses; }
  template <typename IpAddressesT = Aws::Vector<CoreNetworkEndpointDnsIpItem>>
  void SetIpAddresses(IpAddressesT&& value) {
    m_ipAddressesHasBeenSet = true;
    m_ipAddresses = std::forward<IpAddressesT>(value);
  }
  template <typename IpAddressesT = Aws::Vector<CoreNetworkEndpointDnsIpItem>>
  UpdateCoreNetworkEndpointResult& WithIpAddresses(IpAddressesT&& value) {
    SetIpAddresses(std::forward<IpAddressesT>(value));
    return *this;
  }
  template <typename IpAddressesT = CoreNetworkEndpointDnsIpItem>
  UpdateCoreNetworkEndpointResult& AddIpAddresses(IpAddressesT&& value) {
    m_ipAddressesHasBeenSet = true;
    m_ipAddresses.emplace_back(std::forward<IpAddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the updated core network endpoint.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateCoreNetworkEndpointResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the updated core network endpoint.</p>
   */
  inline CRResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(CRResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateCoreNetworkEndpointResult& WithStatus(CRResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the core network endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateCoreNetworkEndpointResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateCoreNetworkEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

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

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
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
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
