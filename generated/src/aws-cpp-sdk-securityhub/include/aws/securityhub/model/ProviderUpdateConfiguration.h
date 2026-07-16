/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AzureUpdateConfiguration.h>
#include <aws/securityhub/model/JiraCloudUpdateConfiguration.h>
#include <aws/securityhub/model/ServiceNowUpdateConfiguration.h>

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
 * <p>The parameters required to update the configuration of an integration
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProviderUpdateConfiguration">AWS
 * API Reference</a></p>
 */
class ProviderUpdateConfiguration {
 public:
  AWS_SECURITYHUB_API ProviderUpdateConfiguration() = default;
  AWS_SECURITYHUB_API ProviderUpdateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ProviderUpdateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The parameters required to update the configuration for a Jira Cloud
   * integration.</p>
   */
  inline const JiraCloudUpdateConfiguration& GetJiraCloud() const { return m_jiraCloud; }
  inline bool JiraCloudHasBeenSet() const { return m_jiraCloudHasBeenSet; }
  template <typename JiraCloudT = JiraCloudUpdateConfiguration>
  void SetJiraCloud(JiraCloudT&& value) {
    m_jiraCloudHasBeenSet = true;
    m_jiraCloud = std::forward<JiraCloudT>(value);
  }
  template <typename JiraCloudT = JiraCloudUpdateConfiguration>
  ProviderUpdateConfiguration& WithJiraCloud(JiraCloudT&& value) {
    SetJiraCloud(std::forward<JiraCloudT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters required to update the configuration for a ServiceNow
   * integration.</p>
   */
  inline const ServiceNowUpdateConfiguration& GetServiceNow() const { return m_serviceNow; }
  inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
  template <typename ServiceNowT = ServiceNowUpdateConfiguration>
  void SetServiceNow(ServiceNowT&& value) {
    m_serviceNowHasBeenSet = true;
    m_serviceNow = std::forward<ServiceNowT>(value);
  }
  template <typename ServiceNowT = ServiceNowUpdateConfiguration>
  ProviderUpdateConfiguration& WithServiceNow(ServiceNowT&& value) {
    SetServiceNow(std::forward<ServiceNowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters required to update the configuration for a Microsoft Azure
   * CSPM integration.</p>
   */
  inline const AzureUpdateConfiguration& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureUpdateConfiguration>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureUpdateConfiguration>
  ProviderUpdateConfiguration& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}
 private:
  JiraCloudUpdateConfiguration m_jiraCloud;

  ServiceNowUpdateConfiguration m_serviceNow;

  AzureUpdateConfiguration m_azure;
  bool m_jiraCloudHasBeenSet = false;
  bool m_serviceNowHasBeenSet = false;
  bool m_azureHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
