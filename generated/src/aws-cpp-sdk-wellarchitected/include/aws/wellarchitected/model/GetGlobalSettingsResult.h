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
    AWS_WELLARCHITECTED_API GetGlobalSettingsResult();
    AWS_WELLARCHITECTED_API GetGlobalSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetGlobalSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Web Services Organizations sharing status.</p>
     */
    inline const OrganizationSharingStatus& GetOrganizationSharingStatus() const{ return m_organizationSharingStatus; }
    inline void SetOrganizationSharingStatus(const OrganizationSharingStatus& value) { m_organizationSharingStatus = value; }
    inline void SetOrganizationSharingStatus(OrganizationSharingStatus&& value) { m_organizationSharingStatus = std::move(value); }
    inline GetGlobalSettingsResult& WithOrganizationSharingStatus(const OrganizationSharingStatus& value) { SetOrganizationSharingStatus(value); return *this;}
    inline GetGlobalSettingsResult& WithOrganizationSharingStatus(OrganizationSharingStatus&& value) { SetOrganizationSharingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Discovery integration status.</p>
     */
    inline const DiscoveryIntegrationStatus& GetDiscoveryIntegrationStatus() const{ return m_discoveryIntegrationStatus; }
    inline void SetDiscoveryIntegrationStatus(const DiscoveryIntegrationStatus& value) { m_discoveryIntegrationStatus = value; }
    inline void SetDiscoveryIntegrationStatus(DiscoveryIntegrationStatus&& value) { m_discoveryIntegrationStatus = std::move(value); }
    inline GetGlobalSettingsResult& WithDiscoveryIntegrationStatus(const DiscoveryIntegrationStatus& value) { SetDiscoveryIntegrationStatus(value); return *this;}
    inline GetGlobalSettingsResult& WithDiscoveryIntegrationStatus(DiscoveryIntegrationStatus&& value) { SetDiscoveryIntegrationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Jira configuration status.</p>
     */
    inline const AccountJiraConfigurationOutput& GetJiraConfiguration() const{ return m_jiraConfiguration; }
    inline void SetJiraConfiguration(const AccountJiraConfigurationOutput& value) { m_jiraConfiguration = value; }
    inline void SetJiraConfiguration(AccountJiraConfigurationOutput&& value) { m_jiraConfiguration = std::move(value); }
    inline GetGlobalSettingsResult& WithJiraConfiguration(const AccountJiraConfigurationOutput& value) { SetJiraConfiguration(value); return *this;}
    inline GetGlobalSettingsResult& WithJiraConfiguration(AccountJiraConfigurationOutput&& value) { SetJiraConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGlobalSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGlobalSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGlobalSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    OrganizationSharingStatus m_organizationSharingStatus;

    DiscoveryIntegrationStatus m_discoveryIntegrationStatus;

    AccountJiraConfigurationOutput m_jiraConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
