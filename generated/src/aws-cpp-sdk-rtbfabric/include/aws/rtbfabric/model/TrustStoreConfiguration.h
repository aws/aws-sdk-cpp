/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes the configuration of a trust store.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/TrustStoreConfiguration">AWS
 * API Reference</a></p>
 */
class TrustStoreConfiguration {
 public:
  AWS_RTBFABRIC_API TrustStoreConfiguration() = default;
  AWS_RTBFABRIC_API TrustStoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API TrustStoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The certificate authority certificate.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCertificateAuthorityCertificates() const { return m_certificateAuthorityCertificates; }
  inline bool CertificateAuthorityCertificatesHasBeenSet() const { return m_certificateAuthorityCertificatesHasBeenSet; }
  template <typename CertificateAuthorityCertificatesT = Aws::Vector<Aws::String>>
  void SetCertificateAuthorityCertificates(CertificateAuthorityCertificatesT&& value) {
    m_certificateAuthorityCertificatesHasBeenSet = true;
    m_certificateAuthorityCertificates = std::forward<CertificateAuthorityCertificatesT>(value);
  }
  template <typename CertificateAuthorityCertificatesT = Aws::Vector<Aws::String>>
  TrustStoreConfiguration& WithCertificateAuthorityCertificates(CertificateAuthorityCertificatesT&& value) {
    SetCertificateAuthorityCertificates(std::forward<CertificateAuthorityCertificatesT>(value));
    return *this;
  }
  template <typename CertificateAuthorityCertificatesT = Aws::String>
  TrustStoreConfiguration& AddCertificateAuthorityCertificates(CertificateAuthorityCertificatesT&& value) {
    m_certificateAuthorityCertificatesHasBeenSet = true;
    m_certificateAuthorityCertificates.emplace_back(std::forward<CertificateAuthorityCertificatesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_certificateAuthorityCertificates;
  bool m_certificateAuthorityCertificatesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
