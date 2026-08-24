/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CaCertificateSource.h>

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
 * <p>A trust anchor used when validating a target endpoint's TLS
 * certificate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/TrustedCaCertificate">AWS
 * API Reference</a></p>
 */
class TrustedCaCertificate {
 public:
  AWS_SECURITYAGENT_API TrustedCaCertificate() = default;
  AWS_SECURITYAGENT_API TrustedCaCertificate(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API TrustedCaCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source that AWS Security Agent reads the certificate from.</p>
   */
  inline const CaCertificateSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = CaCertificateSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = CaCertificateSource>
  TrustedCaCertificate& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  CaCertificateSource m_source;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
