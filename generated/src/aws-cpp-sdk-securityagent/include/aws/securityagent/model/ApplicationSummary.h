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
 * <p>Application summary for list operations</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ApplicationSummary">AWS
 * API Reference</a></p>
 */
class ApplicationSummary {
 public:
  AWS_SECURITYAGENT_API ApplicationSummary() = default;
  AWS_SECURITYAGENT_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the application</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  ApplicationSummary& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the application, automatically assigned by the service</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  ApplicationSummary& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Domain where the application is available</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  ApplicationSummary& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Default KMS key identifier used to encrypt application data</p>
   */
  inline const Aws::String& GetDefaultKmsKeyId() const { return m_defaultKmsKeyId; }
  inline bool DefaultKmsKeyIdHasBeenSet() const { return m_defaultKmsKeyIdHasBeenSet; }
  template <typename DefaultKmsKeyIdT = Aws::String>
  void SetDefaultKmsKeyId(DefaultKmsKeyIdT&& value) {
    m_defaultKmsKeyIdHasBeenSet = true;
    m_defaultKmsKeyId = std::forward<DefaultKmsKeyIdT>(value);
  }
  template <typename DefaultKmsKeyIdT = Aws::String>
  ApplicationSummary& WithDefaultKmsKeyId(DefaultKmsKeyIdT&& value) {
    SetDefaultKmsKeyId(std::forward<DefaultKmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_applicationName;

  Aws::String m_domain;

  Aws::String m_defaultKmsKeyId;
  bool m_applicationIdHasBeenSet = false;
  bool m_applicationNameHasBeenSet = false;
  bool m_domainHasBeenSet = false;
  bool m_defaultKmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
