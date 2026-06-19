/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/PrivateConnectionStatus.h>
#include <aws/securityagent/model/PrivateConnectionType.h>
#include <aws/securityagent/model/ResourceConfigDnsResolution.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
class DeletePrivateConnectionResult {
 public:
  AWS_SECURITYAGENT_API DeletePrivateConnectionResult() = default;
  AWS_SECURITYAGENT_API DeletePrivateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API DeletePrivateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the private connection.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DeletePrivateConnectionResult& WithName(NameT&& value) {
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
  inline void SetType(PrivateConnectionType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DeletePrivateConnectionResult& WithType(PrivateConnectionType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the private connection.</p>
   */
  inline PrivateConnectionStatus GetStatus() const { return m_status; }
  inline void SetStatus(PrivateConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeletePrivateConnectionResult& WithStatus(PrivateConnectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier or ARN of the VPC Lattice resource gateway.</p>
   */
  inline const Aws::String& GetResourceGatewayId() const { return m_resourceGatewayId; }
  template <typename ResourceGatewayIdT = Aws::String>
  void SetResourceGatewayId(ResourceGatewayIdT&& value) {
    m_resourceGatewayIdHasBeenSet = true;
    m_resourceGatewayId = std::forward<ResourceGatewayIdT>(value);
  }
  template <typename ResourceGatewayIdT = Aws::String>
  DeletePrivateConnectionResult& WithResourceGatewayId(ResourceGatewayIdT&& value) {
    SetResourceGatewayId(std::forward<ResourceGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address or DNS name of the target resource.</p>
   */
  inline const Aws::String& GetHostAddress() const { return m_hostAddress; }
  template <typename HostAddressT = Aws::String>
  void SetHostAddress(HostAddressT&& value) {
    m_hostAddressHasBeenSet = true;
    m_hostAddress = std::forward<HostAddressT>(value);
  }
  template <typename HostAddressT = Aws::String>
  DeletePrivateConnectionResult& WithHostAddress(HostAddressT&& value) {
    SetHostAddress(std::forward<HostAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the VPC the resource gateway is created in.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  DeletePrivateConnectionResult& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier or ARN of the VPC Lattice resource configuration.</p>
   */
  inline const Aws::String& GetResourceConfigurationId() const { return m_resourceConfigurationId; }
  template <typename ResourceConfigurationIdT = Aws::String>
  void SetResourceConfigurationId(ResourceConfigurationIdT&& value) {
    m_resourceConfigurationIdHasBeenSet = true;
    m_resourceConfigurationId = std::forward<ResourceConfigurationIdT>(value);
  }
  template <typename ResourceConfigurationIdT = Aws::String>
  DeletePrivateConnectionResult& WithResourceConfigurationId(ResourceConfigurationIdT&& value) {
    SetResourceConfigurationId(std::forward<ResourceConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the connection's certificate expires, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCertificateExpiryTime() const { return m_certificateExpiryTime; }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  void SetCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    m_certificateExpiryTimeHasBeenSet = true;
    m_certificateExpiryTime = std::forward<CertificateExpiryTimeT>(value);
  }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  DeletePrivateConnectionResult& WithCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    SetCertificateExpiryTime(std::forward<CertificateExpiryTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS resolution mode for the resource gateway.</p>
   */
  inline ResourceConfigDnsResolution GetDnsResolution() const { return m_dnsResolution; }
  inline void SetDnsResolution(ResourceConfigDnsResolution value) {
    m_dnsResolutionHasBeenSet = true;
    m_dnsResolution = value;
  }
  inline DeletePrivateConnectionResult& WithDnsResolution(ResourceConfigDnsResolution value) {
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
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  DeletePrivateConnectionResult& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags attached to the private connection.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DeletePrivateConnectionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DeletePrivateConnectionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  DeletePrivateConnectionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

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

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
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
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
