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
class DeleteGlobalResolverResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DeleteGlobalResolverResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API DeleteGlobalResolverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API DeleteGlobalResolverResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the deleted Route 53 Global Resolver.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DeleteGlobalResolverResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the deleted Route 53 Global Resolver.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DeleteGlobalResolverResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique string that identifies the request and ensures idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DeleteGlobalResolverResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hostname that DNS clients used for TLS certificate validation when
   * connecting to the deleted Route 53 Global Resolver.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  DeleteGlobalResolverResult& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where observability data for the deleted Route 53 Global
   * Resolver was stored.</p>
   */
  inline const Aws::String& GetObservabilityRegion() const { return m_observabilityRegion; }
  template <typename ObservabilityRegionT = Aws::String>
  void SetObservabilityRegion(ObservabilityRegionT&& value) {
    m_observabilityRegionHasBeenSet = true;
    m_observabilityRegion = std::forward<ObservabilityRegionT>(value);
  }
  template <typename ObservabilityRegionT = Aws::String>
  DeleteGlobalResolverResult& WithObservabilityRegion(ObservabilityRegionT&& value) {
    SetObservabilityRegion(std::forward<ObservabilityRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deleted Route 53 Global Resolver.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DeleteGlobalResolverResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the deleted Route 53 Global Resolver.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DeleteGlobalResolverResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Regions where the deleted Route 53 Global Resolver was deployed and
   * operational.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  DeleteGlobalResolverResult& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  DeleteGlobalResolverResult& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Route 53 Global Resolver was originally
   * created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DeleteGlobalResolverResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Route 53 Global Resolver was last updated before
   * deletion.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DeleteGlobalResolverResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final status of the deleted Route 53 Global Resolver.</p>
   */
  inline CRResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(CRResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteGlobalResolverResult& WithStatus(CRResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The global anycast IPv4 addresses that were associated with the deleted Route
   * 53 Global Resolver.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const { return m_ipv4Addresses; }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  void SetIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses = std::forward<Ipv4AddressesT>(value);
  }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  DeleteGlobalResolverResult& WithIpv4Addresses(Ipv4AddressesT&& value) {
    SetIpv4Addresses(std::forward<Ipv4AddressesT>(value));
    return *this;
  }
  template <typename Ipv4AddressesT = Aws::String>
  DeleteGlobalResolverResult& AddIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses.emplace_back(std::forward<Ipv4AddressesT>(value));
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
  DeleteGlobalResolverResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_clientToken;
  bool m_clientTokenHasBeenSet = false;

  Aws::String m_dnsName;
  bool m_dnsNameHasBeenSet = false;

  Aws::String m_observabilityRegion;
  bool m_observabilityRegionHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::Vector<Aws::String> m_regions;
  bool m_regionsHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  CRResourceStatus m_status{CRResourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Vector<Aws::String> m_ipv4Addresses;
  bool m_ipv4AddressesHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
