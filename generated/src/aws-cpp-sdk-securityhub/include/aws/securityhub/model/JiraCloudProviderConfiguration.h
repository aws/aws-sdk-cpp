/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * between Security Hub and Jira Cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/JiraCloudProviderConfiguration">AWS
   * API Reference</a></p>
   */
  class JiraCloudProviderConfiguration
  {
  public:
    AWS_SECURITYHUB_API JiraCloudProviderConfiguration() = default;
    AWS_SECURITYHUB_API JiraCloudProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API JiraCloudProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The project key for a JiraCloud instance.</p>
     */
    inline const Aws::String& GetProjectKey() const { return m_projectKey; }
    inline bool ProjectKeyHasBeenSet() const { return m_projectKeyHasBeenSet; }
    template<typename ProjectKeyT = Aws::String>
    void SetProjectKey(ProjectKeyT&& value) { m_projectKeyHasBeenSet = true; m_projectKey = std::forward<ProjectKeyT>(value); }
    template<typename ProjectKeyT = Aws::String>
    JiraCloudProviderConfiguration& WithProjectKey(ProjectKeyT&& value) { SetProjectKey(std::forward<ProjectKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectKey;
    bool m_projectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
