/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/GcpScopeConfiguration.h>

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
 * <p>The configuration for connecting to a GCP environment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GcpProviderConfiguration">AWS
 * API Reference</a></p>
 */
class GcpProviderConfiguration {
 public:
  AWS_SECURITYHUB_API GcpProviderConfiguration() = default;
  AWS_SECURITYHUB_API GcpProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API GcpProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the multi-cloud configuration connector used to establish the
   * connection to GCP.</p>
   */
  inline const Aws::String& GetAWSConfigConnectorArn() const { return m_aWSConfigConnectorArn; }
  inline bool AWSConfigConnectorArnHasBeenSet() const { return m_aWSConfigConnectorArnHasBeenSet; }
  template <typename AWSConfigConnectorArnT = Aws::String>
  void SetAWSConfigConnectorArn(AWSConfigConnectorArnT&& value) {
    m_aWSConfigConnectorArnHasBeenSet = true;
    m_aWSConfigConnectorArn = std::forward<AWSConfigConnectorArnT>(value);
  }
  template <typename AWSConfigConnectorArnT = Aws::String>
  GcpProviderConfiguration& WithAWSConfigConnectorArn(AWSConfigConnectorArnT&& value) {
    SetAWSConfigConnectorArn(std::forward<AWSConfigConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope configuration that defines which GCP resources are monitored.</p>
   */
  inline const GcpScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = GcpScopeConfiguration>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = GcpScopeConfiguration>
  GcpProviderConfiguration& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of GCP regions to monitor.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGCPRegions() const { return m_gCPRegions; }
  inline bool GCPRegionsHasBeenSet() const { return m_gCPRegionsHasBeenSet; }
  template <typename GCPRegionsT = Aws::Vector<Aws::String>>
  void SetGCPRegions(GCPRegionsT&& value) {
    m_gCPRegionsHasBeenSet = true;
    m_gCPRegions = std::forward<GCPRegionsT>(value);
  }
  template <typename GCPRegionsT = Aws::Vector<Aws::String>>
  GcpProviderConfiguration& WithGCPRegions(GCPRegionsT&& value) {
    SetGCPRegions(std::forward<GCPRegionsT>(value));
    return *this;
  }
  template <typename GCPRegionsT = Aws::String>
  GcpProviderConfiguration& AddGCPRegions(GCPRegionsT&& value) {
    m_gCPRegionsHasBeenSet = true;
    m_gCPRegions.emplace_back(std::forward<GCPRegionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aWSConfigConnectorArn;

  GcpScopeConfiguration m_scopeConfiguration;

  Aws::Vector<Aws::String> m_gCPRegions;
  bool m_aWSConfigConnectorArnHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_gCPRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
