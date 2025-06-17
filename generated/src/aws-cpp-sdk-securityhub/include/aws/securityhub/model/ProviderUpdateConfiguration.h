/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/JiraCloudUpdateConfiguration.h>
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
   * <p>The parameters required to update the configuration of an integration
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProviderUpdateConfiguration">AWS
   * API Reference</a></p>
   */
  class ProviderUpdateConfiguration
  {
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
    template<typename JiraCloudT = JiraCloudUpdateConfiguration>
    void SetJiraCloud(JiraCloudT&& value) { m_jiraCloudHasBeenSet = true; m_jiraCloud = std::forward<JiraCloudT>(value); }
    template<typename JiraCloudT = JiraCloudUpdateConfiguration>
    ProviderUpdateConfiguration& WithJiraCloud(JiraCloudT&& value) { SetJiraCloud(std::forward<JiraCloudT>(value)); return *this;}
    ///@}
  private:

    JiraCloudUpdateConfiguration m_jiraCloud;
    bool m_jiraCloudHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
