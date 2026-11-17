/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>The configuration of a connector to Microsoft Azure.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureConnectorConfiguration">AWS
 * API Reference</a></p>
 */
class AzureConnectorConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API AzureConnectorConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API AzureConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Microsoft Entra ID tenant.</p>
   */
  inline const Aws::String& GetTenantIdentifier() const { return m_tenantIdentifier; }
  inline bool TenantIdentifierHasBeenSet() const { return m_tenantIdentifierHasBeenSet; }
  template <typename TenantIdentifierT = Aws::String>
  void SetTenantIdentifier(TenantIdentifierT&& value) {
    m_tenantIdentifierHasBeenSet = true;
    m_tenantIdentifier = std::forward<TenantIdentifierT>(value);
  }
  template <typename TenantIdentifierT = Aws::String>
  AzureConnectorConfiguration& WithTenantIdentifier(TenantIdentifierT&& value) {
    SetTenantIdentifier(std::forward<TenantIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The application (client) ID of the Azure app registration. The app
   * registration must have a federated identity credential that trusts the Amazon
   * Web Services OpenID Connect (OIDC) issuer for your account.</p>
   */
  inline const Aws::String& GetClientIdentifier() const { return m_clientIdentifier; }
  inline bool ClientIdentifierHasBeenSet() const { return m_clientIdentifierHasBeenSet; }
  template <typename ClientIdentifierT = Aws::String>
  void SetClientIdentifier(ClientIdentifierT&& value) {
    m_clientIdentifierHasBeenSet = true;
    m_clientIdentifier = std::forward<ClientIdentifierT>(value);
  }
  template <typename ClientIdentifierT = Aws::String>
  AzureConnectorConfiguration& WithClientIdentifier(ClientIdentifierT&& value) {
    SetClientIdentifier(std::forward<ClientIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tenantIdentifier;

  Aws::String m_clientIdentifier;
  bool m_tenantIdentifierHasBeenSet = false;
  bool m_clientIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
