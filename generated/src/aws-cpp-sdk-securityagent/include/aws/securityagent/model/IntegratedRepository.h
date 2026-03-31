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
 * <p>Information about an integrated repository</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IntegratedRepository">AWS
 * API Reference</a></p>
 */
class IntegratedRepository {
 public:
  AWS_SECURITYAGENT_API IntegratedRepository() = default;
  AWS_SECURITYAGENT_API IntegratedRepository(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IntegratedRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Integration identifier</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  IntegratedRepository& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>External provider resource identifier, e.g., Github repository identifier</p>
   */
  inline const Aws::String& GetProviderResourceId() const { return m_providerResourceId; }
  inline bool ProviderResourceIdHasBeenSet() const { return m_providerResourceIdHasBeenSet; }
  template <typename ProviderResourceIdT = Aws::String>
  void SetProviderResourceId(ProviderResourceIdT&& value) {
    m_providerResourceIdHasBeenSet = true;
    m_providerResourceId = std::forward<ProviderResourceIdT>(value);
  }
  template <typename ProviderResourceIdT = Aws::String>
  IntegratedRepository& WithProviderResourceId(ProviderResourceIdT&& value) {
    SetProviderResourceId(std::forward<ProviderResourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_providerResourceId;
  bool m_integrationIdHasBeenSet = false;
  bool m_providerResourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
