/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Filter criteria for integrations</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IntegrationFilter">AWS
 * API Reference</a></p>
 */
class IntegrationFilter {
 public:
  AWS_SECURITYAGENT_API IntegrationFilter() = default;
  AWS_SECURITYAGENT_API IntegrationFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IntegrationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by provider</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline IntegrationFilter& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by provider type</p>
   */
  inline ProviderType GetProviderType() const { return m_providerType; }
  inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
  inline void SetProviderType(ProviderType value) {
    m_providerTypeHasBeenSet = true;
    m_providerType = value;
  }
  inline IntegrationFilter& WithProviderType(ProviderType value) {
    SetProviderType(value);
    return *this;
  }
  ///@}
 private:
  Provider m_provider{Provider::NOT_SET};

  ProviderType m_providerType{ProviderType::NOT_SET};
  bool m_providerHasBeenSet = false;
  bool m_providerTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
