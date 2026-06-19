/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/PrivateConnectionStatus.h>
#include <aws/securityagent/model/PrivateConnectionType.h>
#include <aws/securityagent/model/ResourceConfigDnsResolution.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Summarizes a private connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/PrivateConnectionSummary">AWS
 * API Reference</a></p>
 */
class PrivateConnectionSummary {
 public:
  AWS_SECURITYAGENT_API PrivateConnectionSummary() = default;
  AWS_SECURITYAGENT_API PrivateConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API PrivateConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the private connection.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PrivateConnectionSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the private connection, indicating whether it is service-managed
   * or self-managed.</p>
   */
  inline PrivateConnectionType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PrivateConnectionType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PrivateConnectionSummary& WithType(PrivateConnectionType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the private connection.</p>
   */
  inline PrivateConnectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PrivateConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PrivateConnectionSummary& WithStatus(PrivateConnectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier or ARN of the VPC Lattice resource gateway.</p>
   */
  inline const Aws::String& GetResourceGatewayId() const { return m_resourceGatewayId; }
  inline bool ResourceGatewayIdHasBeenSet() const { return m_resourceGatewayIdHasBeenSet; }
  template <typename ResourceGatewayIdT = Aws::String>
  void SetResourceGatewayId(ResourceGatewayIdT&& value) {
    m_resourceGatewayIdHasBeenSet = true;
    m_resourceGatewayId = std::forward<ResourceGatewayIdT>(value);
  }
  template <typename ResourceGatewayIdT = Aws::String>
  PrivateConnectionSummary& WithResourceGatewayId(ResourceGatewayIdT&& value) {
    SetResourceGatewayId(std::forward<ResourceGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address or DNS name of the target resource.</p>
   */
  inline const Aws::String& GetHostAddress() const { return m_hostAddress; }
  inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }
  template <typename HostAddressT = Aws::String>
  void SetHostAddress(HostAddressT&& value) {
    m_hostAddressHasBeenSet = true;
    m_hostAddress = std::forward<HostAddressT>(value);
  }
  template <typename HostAddressT = Aws::String>
  PrivateConnectionSummary& WithHostAddress(HostAddressT&& value) {
    SetHostAddress(std::forward<HostAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the VPC the resource gateway is created in.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  PrivateConnectionSummary& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier or ARN of the VPC Lattice resource configuration.</p>
   */
  inline const Aws::String& GetResourceConfigurationId() const { return m_resourceConfigurationId; }
  inline bool ResourceConfigurationIdHasBeenSet() const { return m_resourceConfigurationIdHasBeenSet; }
  template <typename ResourceConfigurationIdT = Aws::String>
  void SetResourceConfigurationId(ResourceConfigurationIdT&& value) {
    m_resourceConfigurationIdHasBeenSet = true;
    m_resourceConfigurationId = std::forward<ResourceConfigurationIdT>(value);
  }
  template <typename ResourceConfigurationIdT = Aws::String>
  PrivateConnectionSummary& WithResourceConfigurationId(ResourceConfigurationIdT&& value) {
    SetResourceConfigurationId(std::forward<ResourceConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the connection's certificate expires, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCertificateExpiryTime() const { return m_certificateExpiryTime; }
  inline bool CertificateExpiryTimeHasBeenSet() const { return m_certificateExpiryTimeHasBeenSet; }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  void SetCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    m_certificateExpiryTimeHasBeenSet = true;
    m_certificateExpiryTime = std::forward<CertificateExpiryTimeT>(value);
  }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  PrivateConnectionSummary& WithCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    SetCertificateExpiryTime(std::forward<CertificateExpiryTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS resolution mode for the resource gateway.</p>
   */
  inline ResourceConfigDnsResolution GetDnsResolution() const { return m_dnsResolution; }
  inline bool DnsResolutionHasBeenSet() const { return m_dnsResolutionHasBeenSet; }
  inline void SetDnsResolution(ResourceConfigDnsResolution value) {
    m_dnsResolutionHasBeenSet = true;
    m_dnsResolution = value;
  }
  inline PrivateConnectionSummary& WithDnsResolution(ResourceConfigDnsResolution value) {
    SetDnsResolution(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing why the private connection entered a failed state, if
   * applicable.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  PrivateConnectionSummary& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags attached to the private connection.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PrivateConnectionSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PrivateConnectionSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  PrivateConnectionType m_type{PrivateConnectionType::NOT_SET};

  PrivateConnectionStatus m_status{PrivateConnectionStatus::NOT_SET};

  Aws::String m_resourceGatewayId;

  Aws::String m_hostAddress;

  Aws::String m_vpcId;

  Aws::String m_resourceConfigurationId;

  Aws::Utils::DateTime m_certificateExpiryTime{};

  ResourceConfigDnsResolution m_dnsResolution{ResourceConfigDnsResolution::NOT_SET};

  Aws::String m_failureMessage;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_resourceGatewayIdHasBeenSet = false;
  bool m_hostAddressHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_resourceConfigurationIdHasBeenSet = false;
  bool m_certificateExpiryTimeHasBeenSet = false;
  bool m_dnsResolutionHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
