/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AzureProviderConfiguration.h>

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
 * <p>The cloud provider configuration for creating a connector. This is a union
 * type that currently supports Azure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CspmProviderConfiguration">AWS
 * API Reference</a></p>
 */
class CspmProviderConfiguration {
 public:
  AWS_SECURITYHUB_API CspmProviderConfiguration() = default;
  AWS_SECURITYHUB_API CspmProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API CspmProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure provider configuration.</p>
   */
  inline const AzureProviderConfiguration& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureProviderConfiguration>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureProviderConfiguration>
  CspmProviderConfiguration& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}
 private:
  AzureProviderConfiguration m_azure;
  bool m_azureHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
