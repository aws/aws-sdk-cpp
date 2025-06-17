/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/JiraCloudProviderConfiguration.h>
#include <aws/securityhub/model/ServiceNowProviderConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The initial configuration settings required to establish an integration
   * between Security Hub and third-party provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProviderConfiguration">AWS
   * API Reference</a></p>
   */
  class ProviderConfiguration
  {
  public:
    AWS_SECURITYHUB_API ProviderConfiguration() = default;
    AWS_SECURITYHUB_API ProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration settings required to establish an integration with Jira
     * Cloud.</p>
     */
    inline const JiraCloudProviderConfiguration& GetJiraCloud() const { return m_jiraCloud; }
    inline bool JiraCloudHasBeenSet() const { return m_jiraCloudHasBeenSet; }
    template<typename JiraCloudT = JiraCloudProviderConfiguration>
    void SetJiraCloud(JiraCloudT&& value) { m_jiraCloudHasBeenSet = true; m_jiraCloud = std::forward<JiraCloudT>(value); }
    template<typename JiraCloudT = JiraCloudProviderConfiguration>
    ProviderConfiguration& WithJiraCloud(JiraCloudT&& value) { SetJiraCloud(std::forward<JiraCloudT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings required to establish an integration with
     * ServiceNow ITSM.</p>
     */
    inline const ServiceNowProviderConfiguration& GetServiceNow() const { return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    template<typename ServiceNowT = ServiceNowProviderConfiguration>
    void SetServiceNow(ServiceNowT&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::forward<ServiceNowT>(value); }
    template<typename ServiceNowT = ServiceNowProviderConfiguration>
    ProviderConfiguration& WithServiceNow(ServiceNowT&& value) { SetServiceNow(std::forward<ServiceNowT>(value)); return *this;}
    ///@}
  private:

    JiraCloudProviderConfiguration m_jiraCloud;
    bool m_jiraCloudHasBeenSet = false;

    ServiceNowProviderConfiguration m_serviceNow;
    bool m_serviceNowHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
