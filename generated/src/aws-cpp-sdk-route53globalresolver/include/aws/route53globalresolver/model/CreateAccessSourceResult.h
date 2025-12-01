/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/CRResourceStatus.h>
#include <aws/route53globalresolver/model/DnsProtocol.h>
#include <aws/route53globalresolver/model/IpAddressType.h>

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
class CreateAccessSourceResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API CreateAccessSourceResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API CreateAccessSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API CreateAccessSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the access source.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateAccessSourceResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address or CIDR range that is allowed to send DNS queries to the Route
   * 53 Global Resolver.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  CreateAccessSourceResult& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the access source was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateAccessSourceResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the access source.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateAccessSourceResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for this access source (IPv4 or IPv6).</p>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline CreateAccessSourceResult& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the access source.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAccessSourceResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DNS view associated with this access source.</p>
   */
  inline const Aws::String& GetDnsViewId() const { return m_dnsViewId; }
  template <typename DnsViewIdT = Aws::String>
  void SetDnsViewId(DnsViewIdT&& value) {
    m_dnsViewIdHasBeenSet = true;
    m_dnsViewId = std::forward<DnsViewIdT>(value);
  }
  template <typename DnsViewIdT = Aws::String>
  CreateAccessSourceResult& WithDnsViewId(DnsViewIdT&& value) {
    SetDnsViewId(std::forward<DnsViewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS protocol that is permitted for this access source (Do53, DoT, or
   * DoH).</p>
   */
  inline DnsProtocol GetProtocol() const { return m_protocol; }
  inline void SetProtocol(DnsProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline CreateAccessSourceResult& WithProtocol(DnsProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operational status of the access source.</p>
   */
  inline CRResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(CRResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateAccessSourceResult& WithStatus(CRResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the access source was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateAccessSourceResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  CreateAccessSourceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_cidr;
  bool m_cidrHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
  bool m_ipAddressTypeHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_dnsViewId;
  bool m_dnsViewIdHasBeenSet = false;

  DnsProtocol m_protocol{DnsProtocol::NOT_SET};
  bool m_protocolHasBeenSet = false;

  CRResourceStatus m_status{CRResourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
