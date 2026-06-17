/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>The configuration for a self-managed private connection.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/SelfManagedInput">AWS
 * API Reference</a></p>
 */
class SelfManagedInput {
 public:
  AWS_SECURITYAGENT_API SelfManagedInput() = default;
  AWS_SECURITYAGENT_API SelfManagedInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API SelfManagedInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier or ARN of the resource configuration.</p>
   */
  inline const Aws::String& GetResourceConfigurationId() const { return m_resourceConfigurationId; }
  inline bool ResourceConfigurationIdHasBeenSet() const { return m_resourceConfigurationIdHasBeenSet; }
  template <typename ResourceConfigurationIdT = Aws::String>
  void SetResourceConfigurationId(ResourceConfigurationIdT&& value) {
    m_resourceConfigurationIdHasBeenSet = true;
    m_resourceConfigurationId = std::forward<ResourceConfigurationIdT>(value);
  }
  template <typename ResourceConfigurationIdT = Aws::String>
  SelfManagedInput& WithResourceConfigurationId(ResourceConfigurationIdT&& value) {
    SetResourceConfigurationId(std::forward<ResourceConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The certificate for the private connection.</p>
   */
  inline const Aws::String& GetCertificate() const { return m_certificate; }
  inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
  template <typename CertificateT = Aws::String>
  void SetCertificate(CertificateT&& value) {
    m_certificateHasBeenSet = true;
    m_certificate = std::forward<CertificateT>(value);
  }
  template <typename CertificateT = Aws::String>
  SelfManagedInput& WithCertificate(CertificateT&& value) {
    SetCertificate(std::forward<CertificateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceConfigurationId;

  Aws::String m_certificate;
  bool m_resourceConfigurationIdHasBeenSet = false;
  bool m_certificateHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
