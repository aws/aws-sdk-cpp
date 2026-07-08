/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AzureScopeConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>The configuration for updating an Azure connector's scope and
 * regions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AzureUpdateConfiguration">AWS
 * API Reference</a></p>
 */
class AzureUpdateConfiguration {
 public:
  AWS_SECURITYHUB_API AzureUpdateConfiguration() = default;
  AWS_SECURITYHUB_API AzureUpdateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API AzureUpdateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated scope configuration.</p>
   */
  inline const AzureScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = AzureScopeConfiguration>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = AzureScopeConfiguration>
  AzureUpdateConfiguration& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of Azure regions to monitor.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAzureRegions() const { return m_azureRegions; }
  inline bool AzureRegionsHasBeenSet() const { return m_azureRegionsHasBeenSet; }
  template <typename AzureRegionsT = Aws::Vector<Aws::String>>
  void SetAzureRegions(AzureRegionsT&& value) {
    m_azureRegionsHasBeenSet = true;
    m_azureRegions = std::forward<AzureRegionsT>(value);
  }
  template <typename AzureRegionsT = Aws::Vector<Aws::String>>
  AzureUpdateConfiguration& WithAzureRegions(AzureRegionsT&& value) {
    SetAzureRegions(std::forward<AzureRegionsT>(value));
    return *this;
  }
  template <typename AzureRegionsT = Aws::String>
  AzureUpdateConfiguration& AddAzureRegions(AzureRegionsT&& value) {
    m_azureRegionsHasBeenSet = true;
    m_azureRegions.emplace_back(std::forward<AzureRegionsT>(value));
    return *this;
  }
  ///@}
 private:
  AzureScopeConfiguration m_scopeConfiguration;

  Aws::Vector<Aws::String> m_azureRegions;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_azureRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
