/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ManagedResourceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>Configuration for Amazon Web Services Security Token Service (STS) access
 * from the ODB network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/StsAccess">AWS API
 * Reference</a></p>
 */
class StsAccess {
 public:
  AWS_ODB_API StsAccess() = default;
  AWS_ODB_API StsAccess(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API StsAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the Amazon Web Services Security Token Service (STS)
   * access configuration.</p>
   */
  inline ManagedResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ManagedResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StsAccess& WithStatus(ManagedResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 addresses allowed for Amazon Web Services Security Token Service
   * (STS) access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const { return m_ipv4Addresses; }
  inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  void SetIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses = std::forward<Ipv4AddressesT>(value);
  }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  StsAccess& WithIpv4Addresses(Ipv4AddressesT&& value) {
    SetIpv4Addresses(std::forward<Ipv4AddressesT>(value));
    return *this;
  }
  template <typename Ipv4AddressesT = Aws::String>
  StsAccess& AddIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses.emplace_back(std::forward<Ipv4AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain name for Amazon Web Services Security Token Service (STS) access
   * configuration.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  StsAccess& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Security Token Service (STS) policy document that
   * defines permissions for token service usage.</p>
   */
  inline const Aws::String& GetStsPolicyDocument() const { return m_stsPolicyDocument; }
  inline bool StsPolicyDocumentHasBeenSet() const { return m_stsPolicyDocumentHasBeenSet; }
  template <typename StsPolicyDocumentT = Aws::String>
  void SetStsPolicyDocument(StsPolicyDocumentT&& value) {
    m_stsPolicyDocumentHasBeenSet = true;
    m_stsPolicyDocument = std::forward<StsPolicyDocumentT>(value);
  }
  template <typename StsPolicyDocumentT = Aws::String>
  StsAccess& WithStsPolicyDocument(StsPolicyDocumentT&& value) {
    SetStsPolicyDocument(std::forward<StsPolicyDocumentT>(value));
    return *this;
  }
  ///@}
 private:
  ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};

  Aws::Vector<Aws::String> m_ipv4Addresses;

  Aws::String m_domainName;

  Aws::String m_stsPolicyDocument;
  bool m_statusHasBeenSet = false;
  bool m_ipv4AddressesHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_stsPolicyDocumentHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
