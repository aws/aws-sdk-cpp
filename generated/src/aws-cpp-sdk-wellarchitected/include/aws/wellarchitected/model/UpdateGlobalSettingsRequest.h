/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/model/OrganizationSharingStatus.h>
#include <aws/wellarchitected/model/DiscoveryIntegrationStatus.h>
#include <aws/wellarchitected/model/AccountJiraConfigurationInput.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class UpdateGlobalSettingsRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateGlobalSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalSettings"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The status of organization sharing settings.</p>
     */
    inline OrganizationSharingStatus GetOrganizationSharingStatus() const { return m_organizationSharingStatus; }
    inline bool OrganizationSharingStatusHasBeenSet() const { return m_organizationSharingStatusHasBeenSet; }
    inline void SetOrganizationSharingStatus(OrganizationSharingStatus value) { m_organizationSharingStatusHasBeenSet = true; m_organizationSharingStatus = value; }
    inline UpdateGlobalSettingsRequest& WithOrganizationSharingStatus(OrganizationSharingStatus value) { SetOrganizationSharingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of discovery support settings.</p>
     */
    inline DiscoveryIntegrationStatus GetDiscoveryIntegrationStatus() const { return m_discoveryIntegrationStatus; }
    inline bool DiscoveryIntegrationStatusHasBeenSet() const { return m_discoveryIntegrationStatusHasBeenSet; }
    inline void SetDiscoveryIntegrationStatus(DiscoveryIntegrationStatus value) { m_discoveryIntegrationStatusHasBeenSet = true; m_discoveryIntegrationStatus = value; }
    inline UpdateGlobalSettingsRequest& WithDiscoveryIntegrationStatus(DiscoveryIntegrationStatus value) { SetDiscoveryIntegrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of Jira integration settings.</p>
     */
    inline const AccountJiraConfigurationInput& GetJiraConfiguration() const { return m_jiraConfiguration; }
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }
    template<typename JiraConfigurationT = AccountJiraConfigurationInput>
    void SetJiraConfiguration(JiraConfigurationT&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::forward<JiraConfigurationT>(value); }
    template<typename JiraConfigurationT = AccountJiraConfigurationInput>
    UpdateGlobalSettingsRequest& WithJiraConfiguration(JiraConfigurationT&& value) { SetJiraConfiguration(std::forward<JiraConfigurationT>(value)); return *this;}
    ///@}
  private:

    OrganizationSharingStatus m_organizationSharingStatus{OrganizationSharingStatus::NOT_SET};
    bool m_organizationSharingStatusHasBeenSet = false;

    DiscoveryIntegrationStatus m_discoveryIntegrationStatus{DiscoveryIntegrationStatus::NOT_SET};
    bool m_discoveryIntegrationStatusHasBeenSet = false;

    AccountJiraConfigurationInput m_jiraConfiguration;
    bool m_jiraConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
