/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/OrganizationSharingStatus.h>
#include <aws/wellarchitected/model/DiscoveryIntegrationStatus.h>
#include <aws/wellarchitected/model/AccountJiraConfigurationOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{
  class GetGlobalSettingsResult
  {
  public:
    AWS_WELLARCHITECTED_API GetGlobalSettingsResult() = default;
    AWS_WELLARCHITECTED_API GetGlobalSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetGlobalSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Web Services Organizations sharing status.</p>
     */
    inline OrganizationSharingStatus GetOrganizationSharingStatus() const { return m_organizationSharingStatus; }
    inline void SetOrganizationSharingStatus(OrganizationSharingStatus value) { m_organizationSharingStatusHasBeenSet = true; m_organizationSharingStatus = value; }
    inline GetGlobalSettingsResult& WithOrganizationSharingStatus(OrganizationSharingStatus value) { SetOrganizationSharingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Discovery integration status.</p>
     */
    inline DiscoveryIntegrationStatus GetDiscoveryIntegrationStatus() const { return m_discoveryIntegrationStatus; }
    inline void SetDiscoveryIntegrationStatus(DiscoveryIntegrationStatus value) { m_discoveryIntegrationStatusHasBeenSet = true; m_discoveryIntegrationStatus = value; }
    inline GetGlobalSettingsResult& WithDiscoveryIntegrationStatus(DiscoveryIntegrationStatus value) { SetDiscoveryIntegrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Jira configuration status.</p>
     */
    inline const AccountJiraConfigurationOutput& GetJiraConfiguration() const { return m_jiraConfiguration; }
    template<typename JiraConfigurationT = AccountJiraConfigurationOutput>
    void SetJiraConfiguration(JiraConfigurationT&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::forward<JiraConfigurationT>(value); }
    template<typename JiraConfigurationT = AccountJiraConfigurationOutput>
    GetGlobalSettingsResult& WithJiraConfiguration(JiraConfigurationT&& value) { SetJiraConfiguration(std::forward<JiraConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGlobalSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OrganizationSharingStatus m_organizationSharingStatus{OrganizationSharingStatus::NOT_SET};
    bool m_organizationSharingStatusHasBeenSet = false;

    DiscoveryIntegrationStatus m_discoveryIntegrationStatus{DiscoveryIntegrationStatus::NOT_SET};
    bool m_discoveryIntegrationStatusHasBeenSet = false;

    AccountJiraConfigurationOutput m_jiraConfiguration;
    bool m_jiraConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
