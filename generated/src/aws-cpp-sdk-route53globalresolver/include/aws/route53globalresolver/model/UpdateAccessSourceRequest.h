/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/DnsProtocol.h>
#include <aws/route53globalresolver/model/IpAddressType.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class UpdateAccessSourceRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateAccessSourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessSource"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the access source to update.</p>
   */
  inline const Aws::String& GetAccessSourceId() const { return m_accessSourceId; }
  inline bool AccessSourceIdHasBeenSet() const { return m_accessSourceIdHasBeenSet; }
  template <typename AccessSourceIdT = Aws::String>
  void SetAccessSourceId(AccessSourceIdT&& value) {
    m_accessSourceIdHasBeenSet = true;
    m_accessSourceId = std::forward<AccessSourceIdT>(value);
  }
  template <typename AccessSourceIdT = Aws::String>
  UpdateAccessSourceRequest& WithAccessSourceId(AccessSourceIdT&& value) {
    SetAccessSourceId(std::forward<AccessSourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CIDR block for the access source.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  UpdateAccessSourceRequest& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for the access source.</p>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline UpdateAccessSourceRequest& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the access source.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateAccessSourceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol for the access source.</p>
   */
  inline DnsProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(DnsProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline UpdateAccessSourceRequest& WithProtocol(DnsProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessSourceId;
  bool m_accessSourceIdHasBeenSet = false;

  Aws::String m_cidr;
  bool m_cidrHasBeenSet = false;

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
  bool m_ipAddressTypeHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  DnsProtocol m_protocol{DnsProtocol::NOT_SET};
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
