/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/security-ir/model/EngagementType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/Watcher.h>
#include <aws/security-ir/model/ThreatActorIp.h>
#include <aws/security-ir/model/ImpactedAwsRegion.h>
#include <utility>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class UpdateCaseRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API UpdateCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCase"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element for UpdateCase to identify the case ID for updates.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline UpdateCaseRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline UpdateCaseRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline UpdateCaseRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the title field.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline UpdateCaseRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline UpdateCaseRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline UpdateCaseRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the description
     * field.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateCaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateCaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateCaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the customer reported
     * incident start date field. </p>
     */
    inline const Aws::Utils::DateTime& GetReportedIncidentStartDate() const{ return m_reportedIncidentStartDate; }
    inline bool ReportedIncidentStartDateHasBeenSet() const { return m_reportedIncidentStartDateHasBeenSet; }
    inline void SetReportedIncidentStartDate(const Aws::Utils::DateTime& value) { m_reportedIncidentStartDateHasBeenSet = true; m_reportedIncidentStartDate = value; }
    inline void SetReportedIncidentStartDate(Aws::Utils::DateTime&& value) { m_reportedIncidentStartDateHasBeenSet = true; m_reportedIncidentStartDate = std::move(value); }
    inline UpdateCaseRequest& WithReportedIncidentStartDate(const Aws::Utils::DateTime& value) { SetReportedIncidentStartDate(value); return *this;}
    inline UpdateCaseRequest& WithReportedIncidentStartDate(Aws::Utils::DateTime&& value) { SetReportedIncidentStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the incident start
     * date field.</p>
     */
    inline const Aws::Utils::DateTime& GetActualIncidentStartDate() const{ return m_actualIncidentStartDate; }
    inline bool ActualIncidentStartDateHasBeenSet() const { return m_actualIncidentStartDateHasBeenSet; }
    inline void SetActualIncidentStartDate(const Aws::Utils::DateTime& value) { m_actualIncidentStartDateHasBeenSet = true; m_actualIncidentStartDate = value; }
    inline void SetActualIncidentStartDate(Aws::Utils::DateTime&& value) { m_actualIncidentStartDateHasBeenSet = true; m_actualIncidentStartDate = std::move(value); }
    inline UpdateCaseRequest& WithActualIncidentStartDate(const Aws::Utils::DateTime& value) { SetActualIncidentStartDate(value); return *this;}
    inline UpdateCaseRequest& WithActualIncidentStartDate(Aws::Utils::DateTime&& value) { SetActualIncidentStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the engagement type
     * field. <code>Available engagement types include Security Incident |
     * Investigation</code>. </p>
     */
    inline const EngagementType& GetEngagementType() const{ return m_engagementType; }
    inline bool EngagementTypeHasBeenSet() const { return m_engagementTypeHasBeenSet; }
    inline void SetEngagementType(const EngagementType& value) { m_engagementTypeHasBeenSet = true; m_engagementType = value; }
    inline void SetEngagementType(EngagementType&& value) { m_engagementTypeHasBeenSet = true; m_engagementType = std::move(value); }
    inline UpdateCaseRequest& WithEngagementType(const EngagementType& value) { SetEngagementType(value); return *this;}
    inline UpdateCaseRequest& WithEngagementType(EngagementType&& value) { SetEngagementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add additional watchers
     * to a case.</p>
     */
    inline const Aws::Vector<Watcher>& GetWatchersToAdd() const{ return m_watchersToAdd; }
    inline bool WatchersToAddHasBeenSet() const { return m_watchersToAddHasBeenSet; }
    inline void SetWatchersToAdd(const Aws::Vector<Watcher>& value) { m_watchersToAddHasBeenSet = true; m_watchersToAdd = value; }
    inline void SetWatchersToAdd(Aws::Vector<Watcher>&& value) { m_watchersToAddHasBeenSet = true; m_watchersToAdd = std::move(value); }
    inline UpdateCaseRequest& WithWatchersToAdd(const Aws::Vector<Watcher>& value) { SetWatchersToAdd(value); return *this;}
    inline UpdateCaseRequest& WithWatchersToAdd(Aws::Vector<Watcher>&& value) { SetWatchersToAdd(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddWatchersToAdd(const Watcher& value) { m_watchersToAddHasBeenSet = true; m_watchersToAdd.push_back(value); return *this; }
    inline UpdateCaseRequest& AddWatchersToAdd(Watcher&& value) { m_watchersToAddHasBeenSet = true; m_watchersToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to remove existing
     * watchers from a case.</p>
     */
    inline const Aws::Vector<Watcher>& GetWatchersToDelete() const{ return m_watchersToDelete; }
    inline bool WatchersToDeleteHasBeenSet() const { return m_watchersToDeleteHasBeenSet; }
    inline void SetWatchersToDelete(const Aws::Vector<Watcher>& value) { m_watchersToDeleteHasBeenSet = true; m_watchersToDelete = value; }
    inline void SetWatchersToDelete(Aws::Vector<Watcher>&& value) { m_watchersToDeleteHasBeenSet = true; m_watchersToDelete = std::move(value); }
    inline UpdateCaseRequest& WithWatchersToDelete(const Aws::Vector<Watcher>& value) { SetWatchersToDelete(value); return *this;}
    inline UpdateCaseRequest& WithWatchersToDelete(Aws::Vector<Watcher>&& value) { SetWatchersToDelete(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddWatchersToDelete(const Watcher& value) { m_watchersToDeleteHasBeenSet = true; m_watchersToDelete.push_back(value); return *this; }
    inline UpdateCaseRequest& AddWatchersToDelete(Watcher&& value) { m_watchersToDeleteHasBeenSet = true; m_watchersToDelete.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add additional
     * suspicious IP addresses related to a case. </p>
     */
    inline const Aws::Vector<ThreatActorIp>& GetThreatActorIpAddressesToAdd() const{ return m_threatActorIpAddressesToAdd; }
    inline bool ThreatActorIpAddressesToAddHasBeenSet() const { return m_threatActorIpAddressesToAddHasBeenSet; }
    inline void SetThreatActorIpAddressesToAdd(const Aws::Vector<ThreatActorIp>& value) { m_threatActorIpAddressesToAddHasBeenSet = true; m_threatActorIpAddressesToAdd = value; }
    inline void SetThreatActorIpAddressesToAdd(Aws::Vector<ThreatActorIp>&& value) { m_threatActorIpAddressesToAddHasBeenSet = true; m_threatActorIpAddressesToAdd = std::move(value); }
    inline UpdateCaseRequest& WithThreatActorIpAddressesToAdd(const Aws::Vector<ThreatActorIp>& value) { SetThreatActorIpAddressesToAdd(value); return *this;}
    inline UpdateCaseRequest& WithThreatActorIpAddressesToAdd(Aws::Vector<ThreatActorIp>&& value) { SetThreatActorIpAddressesToAdd(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddThreatActorIpAddressesToAdd(const ThreatActorIp& value) { m_threatActorIpAddressesToAddHasBeenSet = true; m_threatActorIpAddressesToAdd.push_back(value); return *this; }
    inline UpdateCaseRequest& AddThreatActorIpAddressesToAdd(ThreatActorIp&& value) { m_threatActorIpAddressesToAddHasBeenSet = true; m_threatActorIpAddressesToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to remove suspicious IP
     * addresses from a case.</p>
     */
    inline const Aws::Vector<ThreatActorIp>& GetThreatActorIpAddressesToDelete() const{ return m_threatActorIpAddressesToDelete; }
    inline bool ThreatActorIpAddressesToDeleteHasBeenSet() const { return m_threatActorIpAddressesToDeleteHasBeenSet; }
    inline void SetThreatActorIpAddressesToDelete(const Aws::Vector<ThreatActorIp>& value) { m_threatActorIpAddressesToDeleteHasBeenSet = true; m_threatActorIpAddressesToDelete = value; }
    inline void SetThreatActorIpAddressesToDelete(Aws::Vector<ThreatActorIp>&& value) { m_threatActorIpAddressesToDeleteHasBeenSet = true; m_threatActorIpAddressesToDelete = std::move(value); }
    inline UpdateCaseRequest& WithThreatActorIpAddressesToDelete(const Aws::Vector<ThreatActorIp>& value) { SetThreatActorIpAddressesToDelete(value); return *this;}
    inline UpdateCaseRequest& WithThreatActorIpAddressesToDelete(Aws::Vector<ThreatActorIp>&& value) { SetThreatActorIpAddressesToDelete(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddThreatActorIpAddressesToDelete(const ThreatActorIp& value) { m_threatActorIpAddressesToDeleteHasBeenSet = true; m_threatActorIpAddressesToDelete.push_back(value); return *this; }
    inline UpdateCaseRequest& AddThreatActorIpAddressesToDelete(ThreatActorIp&& value) { m_threatActorIpAddressesToDeleteHasBeenSet = true; m_threatActorIpAddressesToDelete.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add services
     * impacted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedServicesToAdd() const{ return m_impactedServicesToAdd; }
    inline bool ImpactedServicesToAddHasBeenSet() const { return m_impactedServicesToAddHasBeenSet; }
    inline void SetImpactedServicesToAdd(const Aws::Vector<Aws::String>& value) { m_impactedServicesToAddHasBeenSet = true; m_impactedServicesToAdd = value; }
    inline void SetImpactedServicesToAdd(Aws::Vector<Aws::String>&& value) { m_impactedServicesToAddHasBeenSet = true; m_impactedServicesToAdd = std::move(value); }
    inline UpdateCaseRequest& WithImpactedServicesToAdd(const Aws::Vector<Aws::String>& value) { SetImpactedServicesToAdd(value); return *this;}
    inline UpdateCaseRequest& WithImpactedServicesToAdd(Aws::Vector<Aws::String>&& value) { SetImpactedServicesToAdd(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddImpactedServicesToAdd(const Aws::String& value) { m_impactedServicesToAddHasBeenSet = true; m_impactedServicesToAdd.push_back(value); return *this; }
    inline UpdateCaseRequest& AddImpactedServicesToAdd(Aws::String&& value) { m_impactedServicesToAddHasBeenSet = true; m_impactedServicesToAdd.push_back(std::move(value)); return *this; }
    inline UpdateCaseRequest& AddImpactedServicesToAdd(const char* value) { m_impactedServicesToAddHasBeenSet = true; m_impactedServicesToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to remove services
     * impacted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedServicesToDelete() const{ return m_impactedServicesToDelete; }
    inline bool ImpactedServicesToDeleteHasBeenSet() const { return m_impactedServicesToDeleteHasBeenSet; }
    inline void SetImpactedServicesToDelete(const Aws::Vector<Aws::String>& value) { m_impactedServicesToDeleteHasBeenSet = true; m_impactedServicesToDelete = value; }
    inline void SetImpactedServicesToDelete(Aws::Vector<Aws::String>&& value) { m_impactedServicesToDeleteHasBeenSet = true; m_impactedServicesToDelete = std::move(value); }
    inline UpdateCaseRequest& WithImpactedServicesToDelete(const Aws::Vector<Aws::String>& value) { SetImpactedServicesToDelete(value); return *this;}
    inline UpdateCaseRequest& WithImpactedServicesToDelete(Aws::Vector<Aws::String>&& value) { SetImpactedServicesToDelete(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddImpactedServicesToDelete(const Aws::String& value) { m_impactedServicesToDeleteHasBeenSet = true; m_impactedServicesToDelete.push_back(value); return *this; }
    inline UpdateCaseRequest& AddImpactedServicesToDelete(Aws::String&& value) { m_impactedServicesToDeleteHasBeenSet = true; m_impactedServicesToDelete.push_back(std::move(value)); return *this; }
    inline UpdateCaseRequest& AddImpactedServicesToDelete(const char* value) { m_impactedServicesToDeleteHasBeenSet = true; m_impactedServicesToDelete.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add regions
     * impacted.</p>
     */
    inline const Aws::Vector<ImpactedAwsRegion>& GetImpactedAwsRegionsToAdd() const{ return m_impactedAwsRegionsToAdd; }
    inline bool ImpactedAwsRegionsToAddHasBeenSet() const { return m_impactedAwsRegionsToAddHasBeenSet; }
    inline void SetImpactedAwsRegionsToAdd(const Aws::Vector<ImpactedAwsRegion>& value) { m_impactedAwsRegionsToAddHasBeenSet = true; m_impactedAwsRegionsToAdd = value; }
    inline void SetImpactedAwsRegionsToAdd(Aws::Vector<ImpactedAwsRegion>&& value) { m_impactedAwsRegionsToAddHasBeenSet = true; m_impactedAwsRegionsToAdd = std::move(value); }
    inline UpdateCaseRequest& WithImpactedAwsRegionsToAdd(const Aws::Vector<ImpactedAwsRegion>& value) { SetImpactedAwsRegionsToAdd(value); return *this;}
    inline UpdateCaseRequest& WithImpactedAwsRegionsToAdd(Aws::Vector<ImpactedAwsRegion>&& value) { SetImpactedAwsRegionsToAdd(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddImpactedAwsRegionsToAdd(const ImpactedAwsRegion& value) { m_impactedAwsRegionsToAddHasBeenSet = true; m_impactedAwsRegionsToAdd.push_back(value); return *this; }
    inline UpdateCaseRequest& AddImpactedAwsRegionsToAdd(ImpactedAwsRegion&& value) { m_impactedAwsRegionsToAddHasBeenSet = true; m_impactedAwsRegionsToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to remove regions
     * impacted.</p>
     */
    inline const Aws::Vector<ImpactedAwsRegion>& GetImpactedAwsRegionsToDelete() const{ return m_impactedAwsRegionsToDelete; }
    inline bool ImpactedAwsRegionsToDeleteHasBeenSet() const { return m_impactedAwsRegionsToDeleteHasBeenSet; }
    inline void SetImpactedAwsRegionsToDelete(const Aws::Vector<ImpactedAwsRegion>& value) { m_impactedAwsRegionsToDeleteHasBeenSet = true; m_impactedAwsRegionsToDelete = value; }
    inline void SetImpactedAwsRegionsToDelete(Aws::Vector<ImpactedAwsRegion>&& value) { m_impactedAwsRegionsToDeleteHasBeenSet = true; m_impactedAwsRegionsToDelete = std::move(value); }
    inline UpdateCaseRequest& WithImpactedAwsRegionsToDelete(const Aws::Vector<ImpactedAwsRegion>& value) { SetImpactedAwsRegionsToDelete(value); return *this;}
    inline UpdateCaseRequest& WithImpactedAwsRegionsToDelete(Aws::Vector<ImpactedAwsRegion>&& value) { SetImpactedAwsRegionsToDelete(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddImpactedAwsRegionsToDelete(const ImpactedAwsRegion& value) { m_impactedAwsRegionsToDeleteHasBeenSet = true; m_impactedAwsRegionsToDelete.push_back(value); return *this; }
    inline UpdateCaseRequest& AddImpactedAwsRegionsToDelete(ImpactedAwsRegion&& value) { m_impactedAwsRegionsToDeleteHasBeenSet = true; m_impactedAwsRegionsToDelete.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add accounts
     * impacted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedAccountsToAdd() const{ return m_impactedAccountsToAdd; }
    inline bool ImpactedAccountsToAddHasBeenSet() const { return m_impactedAccountsToAddHasBeenSet; }
    inline void SetImpactedAccountsToAdd(const Aws::Vector<Aws::String>& value) { m_impactedAccountsToAddHasBeenSet = true; m_impactedAccountsToAdd = value; }
    inline void SetImpactedAccountsToAdd(Aws::Vector<Aws::String>&& value) { m_impactedAccountsToAddHasBeenSet = true; m_impactedAccountsToAdd = std::move(value); }
    inline UpdateCaseRequest& WithImpactedAccountsToAdd(const Aws::Vector<Aws::String>& value) { SetImpactedAccountsToAdd(value); return *this;}
    inline UpdateCaseRequest& WithImpactedAccountsToAdd(Aws::Vector<Aws::String>&& value) { SetImpactedAccountsToAdd(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddImpactedAccountsToAdd(const Aws::String& value) { m_impactedAccountsToAddHasBeenSet = true; m_impactedAccountsToAdd.push_back(value); return *this; }
    inline UpdateCaseRequest& AddImpactedAccountsToAdd(Aws::String&& value) { m_impactedAccountsToAddHasBeenSet = true; m_impactedAccountsToAdd.push_back(std::move(value)); return *this; }
    inline UpdateCaseRequest& AddImpactedAccountsToAdd(const char* value) { m_impactedAccountsToAddHasBeenSet = true; m_impactedAccountsToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add accounts
     * impacted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedAccountsToDelete() const{ return m_impactedAccountsToDelete; }
    inline bool ImpactedAccountsToDeleteHasBeenSet() const { return m_impactedAccountsToDeleteHasBeenSet; }
    inline void SetImpactedAccountsToDelete(const Aws::Vector<Aws::String>& value) { m_impactedAccountsToDeleteHasBeenSet = true; m_impactedAccountsToDelete = value; }
    inline void SetImpactedAccountsToDelete(Aws::Vector<Aws::String>&& value) { m_impactedAccountsToDeleteHasBeenSet = true; m_impactedAccountsToDelete = std::move(value); }
    inline UpdateCaseRequest& WithImpactedAccountsToDelete(const Aws::Vector<Aws::String>& value) { SetImpactedAccountsToDelete(value); return *this;}
    inline UpdateCaseRequest& WithImpactedAccountsToDelete(Aws::Vector<Aws::String>&& value) { SetImpactedAccountsToDelete(std::move(value)); return *this;}
    inline UpdateCaseRequest& AddImpactedAccountsToDelete(const Aws::String& value) { m_impactedAccountsToDeleteHasBeenSet = true; m_impactedAccountsToDelete.push_back(value); return *this; }
    inline UpdateCaseRequest& AddImpactedAccountsToDelete(Aws::String&& value) { m_impactedAccountsToDeleteHasBeenSet = true; m_impactedAccountsToDelete.push_back(std::move(value)); return *this; }
    inline UpdateCaseRequest& AddImpactedAccountsToDelete(const char* value) { m_impactedAccountsToDeleteHasBeenSet = true; m_impactedAccountsToDelete.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_reportedIncidentStartDate;
    bool m_reportedIncidentStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_actualIncidentStartDate;
    bool m_actualIncidentStartDateHasBeenSet = false;

    EngagementType m_engagementType;
    bool m_engagementTypeHasBeenSet = false;

    Aws::Vector<Watcher> m_watchersToAdd;
    bool m_watchersToAddHasBeenSet = false;

    Aws::Vector<Watcher> m_watchersToDelete;
    bool m_watchersToDeleteHasBeenSet = false;

    Aws::Vector<ThreatActorIp> m_threatActorIpAddressesToAdd;
    bool m_threatActorIpAddressesToAddHasBeenSet = false;

    Aws::Vector<ThreatActorIp> m_threatActorIpAddressesToDelete;
    bool m_threatActorIpAddressesToDeleteHasBeenSet = false;

    Aws::Vector<Aws::String> m_impactedServicesToAdd;
    bool m_impactedServicesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_impactedServicesToDelete;
    bool m_impactedServicesToDeleteHasBeenSet = false;

    Aws::Vector<ImpactedAwsRegion> m_impactedAwsRegionsToAdd;
    bool m_impactedAwsRegionsToAddHasBeenSet = false;

    Aws::Vector<ImpactedAwsRegion> m_impactedAwsRegionsToDelete;
    bool m_impactedAwsRegionsToDeleteHasBeenSet = false;

    Aws::Vector<Aws::String> m_impactedAccountsToAdd;
    bool m_impactedAccountsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_impactedAccountsToDelete;
    bool m_impactedAccountsToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
