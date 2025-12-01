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
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {

/**
 * <p>Summary information about a global resolver.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GlobalResolversItem">AWS
 * API Reference</a></p>
 */
class GlobalResolversItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API GlobalResolversItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API GlobalResolversItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API GlobalResolversItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the global resolver.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GlobalResolversItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the global resolver.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GlobalResolversItem& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique string that identifies the request and ensures idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  GlobalResolversItem& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS name of the global resolver.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  GlobalResolversItem& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where observability data is collected for the global
   * resolver.</p>
   */
  inline const Aws::String& GetObservabilityRegion() const { return m_observabilityRegion; }
  inline bool ObservabilityRegionHasBeenSet() const { return m_observabilityRegionHasBeenSet; }
  template <typename ObservabilityRegionT = Aws::String>
  void SetObservabilityRegion(ObservabilityRegionT&& value) {
    m_observabilityRegionHasBeenSet = true;
    m_observabilityRegion = std::forward<ObservabilityRegionT>(value);
  }
  template <typename ObservabilityRegionT = Aws::String>
  GlobalResolversItem& WithObservabilityRegion(ObservabilityRegionT&& value) {
    SetObservabilityRegion(std::forward<ObservabilityRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the global resolver.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GlobalResolversItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the global resolver.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GlobalResolversItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Regions where the global resolver is deployed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  GlobalResolversItem& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  GlobalResolversItem& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the global resolver was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GlobalResolversItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the global resolver was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GlobalResolversItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the global resolver.</p>
   */
  inline CRResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CRResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GlobalResolversItem& WithStatus(CRResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 addresses assigned to the global resolver.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const { return m_ipv4Addresses; }
  inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  void SetIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses = std::forward<Ipv4AddressesT>(value);
  }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  GlobalResolversItem& WithIpv4Addresses(Ipv4AddressesT&& value) {
    SetIpv4Addresses(std::forward<Ipv4AddressesT>(value));
    return *this;
  }
  template <typename Ipv4AddressesT = Aws::String>
  GlobalResolversItem& AddIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses.emplace_back(std::forward<Ipv4AddressesT>(value));
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
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
