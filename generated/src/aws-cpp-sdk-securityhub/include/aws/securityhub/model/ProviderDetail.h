/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/JiraCloudDetail.h>
#include <aws/securityhub/model/ServiceNowDetail.h>
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
   * <p>The third-party provider detail for a service configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProviderDetail">AWS
   * API Reference</a></p>
   */
  class ProviderDetail
  {
  public:
    AWS_SECURITYHUB_API ProviderDetail() = default;
    AWS_SECURITYHUB_API ProviderDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ProviderDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about a Jira Cloud integration.</p>
     */
    inline const JiraCloudDetail& GetJiraCloud() const { return m_jiraCloud; }
    inline bool JiraCloudHasBeenSet() const { return m_jiraCloudHasBeenSet; }
    template<typename JiraCloudT = JiraCloudDetail>
    void SetJiraCloud(JiraCloudT&& value) { m_jiraCloudHasBeenSet = true; m_jiraCloud = std::forward<JiraCloudT>(value); }
    template<typename JiraCloudT = JiraCloudDetail>
    ProviderDetail& WithJiraCloud(JiraCloudT&& value) { SetJiraCloud(std::forward<JiraCloudT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a ServiceNow ITSM integration.</p>
     */
    inline const ServiceNowDetail& GetServiceNow() const { return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    template<typename ServiceNowT = ServiceNowDetail>
    void SetServiceNow(ServiceNowT&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::forward<ServiceNowT>(value); }
    template<typename ServiceNowT = ServiceNowDetail>
    ProviderDetail& WithServiceNow(ServiceNowT&& value) { SetServiceNow(std::forward<ServiceNowT>(value)); return *this;}
    ///@}
  private:

    JiraCloudDetail m_jiraCloud;
    bool m_jiraCloudHasBeenSet = false;

    ServiceNowDetail m_serviceNow;
    bool m_serviceNowHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
