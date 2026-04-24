/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Provider.h>
#include <aws/securityagent/model/ProviderType.h>

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
 * <p>Summary information about an integration</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IntegrationSummary">AWS
 * API Reference</a></p>
 */
class IntegrationSummary {
 public:
  AWS_SECURITYAGENT_API IntegrationSummary() = default;
  AWS_SECURITYAGENT_API IntegrationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IntegrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the integration</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  IntegrationSummary& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Installation identifier from the provider</p>
   */
  inline const Aws::String& GetInstallationId() const { return m_installationId; }
  inline bool InstallationIdHasBeenSet() const { return m_installationIdHasBeenSet; }
  template <typename InstallationIdT = Aws::String>
  void SetInstallationId(InstallationIdT&& value) {
    m_installationIdHasBeenSet = true;
    m_installationId = std::forward<InstallationIdT>(value);
  }
  template <typename InstallationIdT = Aws::String>
  IntegrationSummary& WithInstallationId(InstallationIdT&& value) {
    SetInstallationId(std::forward<InstallationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provider type</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline IntegrationSummary& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of provider integration</p>
   */
  inline ProviderType GetProviderType() const { return m_providerType; }
  inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
  inline void SetProviderType(ProviderType value) {
    m_providerTypeHasBeenSet = true;
    m_providerType = value;
  }
  inline IntegrationSummary& WithProviderType(ProviderType value) {
    SetProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Display name for the integration</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  IntegrationSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_installationId;

  Provider m_provider{Provider::NOT_SET};

  ProviderType m_providerType{ProviderType::NOT_SET};

  Aws::String m_displayName;
  bool m_integrationIdHasBeenSet = false;
  bool m_installationIdHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_providerTypeHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
