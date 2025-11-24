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
 * <p>Configuration for Amazon Web Services Key Management Service (KMS) access
 * from the ODB network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/KmsAccess">AWS API
 * Reference</a></p>
 */
class KmsAccess {
 public:
  AWS_ODB_API KmsAccess() = default;
  AWS_ODB_API KmsAccess(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API KmsAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the KMS access configuration.</p>
   */
  inline ManagedResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ManagedResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline KmsAccess& WithStatus(ManagedResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 addresses allowed for KMS access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const { return m_ipv4Addresses; }
  inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  void SetIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses = std::forward<Ipv4AddressesT>(value);
  }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  KmsAccess& WithIpv4Addresses(Ipv4AddressesT&& value) {
    SetIpv4Addresses(std::forward<Ipv4AddressesT>(value));
    return *this;
  }
  template <typename Ipv4AddressesT = Aws::String>
  KmsAccess& AddIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses.emplace_back(std::forward<Ipv4AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain name for KMS access configuration.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  KmsAccess& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS policy document that defines permissions for key usage.</p>
   */
  inline const Aws::String& GetKmsPolicyDocument() const { return m_kmsPolicyDocument; }
  inline bool KmsPolicyDocumentHasBeenSet() const { return m_kmsPolicyDocumentHasBeenSet; }
  template <typename KmsPolicyDocumentT = Aws::String>
  void SetKmsPolicyDocument(KmsPolicyDocumentT&& value) {
    m_kmsPolicyDocumentHasBeenSet = true;
    m_kmsPolicyDocument = std::forward<KmsPolicyDocumentT>(value);
  }
  template <typename KmsPolicyDocumentT = Aws::String>
  KmsAccess& WithKmsPolicyDocument(KmsPolicyDocumentT&& value) {
    SetKmsPolicyDocument(std::forward<KmsPolicyDocumentT>(value));
    return *this;
  }
  ///@}
 private:
  ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Vector<Aws::String> m_ipv4Addresses;
  bool m_ipv4AddressesHasBeenSet = false;

  Aws::String m_domainName;
  bool m_domainNameHasBeenSet = false;

  Aws::String m_kmsPolicyDocument;
  bool m_kmsPolicyDocumentHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
