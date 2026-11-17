/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AzureUpdateConfiguration.h>
#include <aws/securityhub/model/GcpUpdateConfiguration.h>

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
 * <p>The cloud provider configuration for updating a connector. This is a union
 * type that currently supports Azure and GCP.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CspmProviderUpdateConfiguration">AWS
 * API Reference</a></p>
 */
class CspmProviderUpdateConfiguration {
 public:
  AWS_SECURITYHUB_API CspmProviderUpdateConfiguration() = default;
  AWS_SECURITYHUB_API CspmProviderUpdateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API CspmProviderUpdateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure update configuration.</p>
   */
  inline const AzureUpdateConfiguration& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureUpdateConfiguration>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureUpdateConfiguration>
  CspmProviderUpdateConfiguration& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GCP update configuration.</p>
   */
  inline const GcpUpdateConfiguration& GetGCP() const { return m_gCP; }
  inline bool GCPHasBeenSet() const { return m_gCPHasBeenSet; }
  template <typename GCPT = GcpUpdateConfiguration>
  void SetGCP(GCPT&& value) {
    m_gCPHasBeenSet = true;
    m_gCP = std::forward<GCPT>(value);
  }
  template <typename GCPT = GcpUpdateConfiguration>
  CspmProviderUpdateConfiguration& WithGCP(GCPT&& value) {
    SetGCP(std::forward<GCPT>(value));
    return *this;
  }
  ///@}
 private:
  AzureUpdateConfiguration m_azure;

  GcpUpdateConfiguration m_gCP;
  bool m_azureHasBeenSet = false;
  bool m_gCPHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
