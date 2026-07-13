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
 * <p>The detailed Azure configuration for a connector.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AzureDetail">AWS
 * API Reference</a></p>
 */
class AzureDetail {
 public:
  AWS_SECURITYHUB_API AzureDetail() = default;
  AWS_SECURITYHUB_API AzureDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API AzureDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the AWS Config connector used to establish the connection to
   * Azure.</p>
   */
  inline const Aws::String& GetAWSConfigConnectorArn() const { return m_aWSConfigConnectorArn; }
  inline bool AWSConfigConnectorArnHasBeenSet() const { return m_aWSConfigConnectorArnHasBeenSet; }
  template <typename AWSConfigConnectorArnT = Aws::String>
  void SetAWSConfigConnectorArn(AWSConfigConnectorArnT&& value) {
    m_aWSConfigConnectorArnHasBeenSet = true;
    m_aWSConfigConnectorArn = std::forward<AWSConfigConnectorArnT>(value);
  }
  template <typename AWSConfigConnectorArnT = Aws::String>
  AzureDetail& WithAWSConfigConnectorArn(AWSConfigConnectorArnT&& value) {
    SetAWSConfigConnectorArn(std::forward<AWSConfigConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope configuration that defines which Azure resources are monitored.</p>
   */
  inline const AzureScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = AzureScopeConfiguration>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = AzureScopeConfiguration>
  AzureDetail& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Azure regions being monitored.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAzureRegions() const { return m_azureRegions; }
  inline bool AzureRegionsHasBeenSet() const { return m_azureRegionsHasBeenSet; }
  template <typename AzureRegionsT = Aws::Vector<Aws::String>>
  void SetAzureRegions(AzureRegionsT&& value) {
    m_azureRegionsHasBeenSet = true;
    m_azureRegions = std::forward<AzureRegionsT>(value);
  }
  template <typename AzureRegionsT = Aws::Vector<Aws::String>>
  AzureDetail& WithAzureRegions(AzureRegionsT&& value) {
    SetAzureRegions(std::forward<AzureRegionsT>(value));
    return *this;
  }
  template <typename AzureRegionsT = Aws::String>
  AzureDetail& AddAzureRegions(AzureRegionsT&& value) {
    m_azureRegionsHasBeenSet = true;
    m_azureRegions.emplace_back(std::forward<AzureRegionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aWSConfigConnectorArn;

  AzureScopeConfiguration m_scopeConfiguration;

  Aws::Vector<Aws::String> m_azureRegions;
  bool m_aWSConfigConnectorArnHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_azureRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
