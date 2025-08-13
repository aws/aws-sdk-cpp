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
    AWS_SECURITYIR_API UpdateCaseRequest() = default;

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
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    UpdateCaseRequest& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the title field.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    UpdateCaseRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the description
     * field.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCaseRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the customer reported
     * incident start date field. </p>
     */
    inline const Aws::Utils::DateTime& GetReportedIncidentStartDate() const { return m_reportedIncidentStartDate; }
    inline bool ReportedIncidentStartDateHasBeenSet() const { return m_reportedIncidentStartDateHasBeenSet; }
    template<typename ReportedIncidentStartDateT = Aws::Utils::DateTime>
    void SetReportedIncidentStartDate(ReportedIncidentStartDateT&& value) { m_reportedIncidentStartDateHasBeenSet = true; m_reportedIncidentStartDate = std::forward<ReportedIncidentStartDateT>(value); }
    template<typename ReportedIncidentStartDateT = Aws::Utils::DateTime>
    UpdateCaseRequest& WithReportedIncidentStartDate(ReportedIncidentStartDateT&& value) { SetReportedIncidentStartDate(std::forward<ReportedIncidentStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the incident start
     * date field.</p>
     */
    inline const Aws::Utils::DateTime& GetActualIncidentStartDate() const { return m_actualIncidentStartDate; }
    inline bool ActualIncidentStartDateHasBeenSet() const { return m_actualIncidentStartDateHasBeenSet; }
    template<typename ActualIncidentStartDateT = Aws::Utils::DateTime>
    void SetActualIncidentStartDate(ActualIncidentStartDateT&& value) { m_actualIncidentStartDateHasBeenSet = true; m_actualIncidentStartDate = std::forward<ActualIncidentStartDateT>(value); }
    template<typename ActualIncidentStartDateT = Aws::Utils::DateTime>
    UpdateCaseRequest& WithActualIncidentStartDate(ActualIncidentStartDateT&& value) { SetActualIncidentStartDate(std::forward<ActualIncidentStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content for the engagement type
     * field. <code>Available engagement types include Security Incident |
     * Investigation</code>. </p>
     */
    inline EngagementType GetEngagementType() const { return m_engagementType; }
    inline bool EngagementTypeHasBeenSet() const { return m_engagementTypeHasBeenSet; }
    inline void SetEngagementType(EngagementType value) { m_engagementTypeHasBeenSet = true; m_engagementType = value; }
    inline UpdateCaseRequest& WithEngagementType(EngagementType value) { SetEngagementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add additional watchers
     * to a case.</p>
     */
    inline const Aws::Vector<Watcher>& GetWatchersToAdd() const { return m_watchersToAdd; }
    inline bool WatchersToAddHasBeenSet() const { return m_watchersToAddHasBeenSet; }
    template<typename WatchersToAddT = Aws::Vector<Watcher>>
    void SetWatchersToAdd(WatchersToAddT&& value) { m_watchersToAddHasBeenSet = true; m_watchersToAdd = std::forward<WatchersToAddT>(value); }
    template<typename WatchersToAddT = Aws::Vector<Watcher>>
    UpdateCaseRequest& WithWatchersToAdd(WatchersToAddT&& value) { SetWatchersToAdd(std::forward<WatchersToAddT>(value)); return *this;}
    template<typename WatchersToAddT = Watcher>
    UpdateCaseRequest& AddWatchersToAdd(WatchersToAddT&& value) { m_watchersToAddHasBeenSet = true; m_watchersToAdd.emplace_back(std::forward<WatchersToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to remove existing
     * watchers from a case.</p>
     */
    inline const Aws::Vector<Watcher>& GetWatchersToDelete() const { return m_watchersToDelete; }
    inline bool WatchersToDeleteHasBeenSet() const { return m_watchersToDeleteHasBeenSet; }
    template<typename WatchersToDeleteT = Aws::Vector<Watcher>>
    void SetWatchersToDelete(WatchersToDeleteT&& value) { m_watchersToDeleteHasBeenSet = true; m_watchersToDelete = std::forward<WatchersToDeleteT>(value); }
    template<typename WatchersToDeleteT = Aws::Vector<Watcher>>
    UpdateCaseRequest& WithWatchersToDelete(WatchersToDeleteT&& value) { SetWatchersToDelete(std::forward<WatchersToDeleteT>(value)); return *this;}
    template<typename WatchersToDeleteT = Watcher>
    UpdateCaseRequest& AddWatchersToDelete(WatchersToDeleteT&& value) { m_watchersToDeleteHasBeenSet = true; m_watchersToDelete.emplace_back(std::forward<WatchersToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add additional
     * suspicious IP addresses related to a case. </p>
     */
    inline const Aws::Vector<ThreatActorIp>& GetThreatActorIpAddressesToAdd() const { return m_threatActorIpAddressesToAdd; }
    inline bool ThreatActorIpAddressesToAddHasBeenSet() const { return m_threatActorIpAddressesToAddHasBeenSet; }
    template<typename ThreatActorIpAddressesToAddT = Aws::Vector<ThreatActorIp>>
    void SetThreatActorIpAddressesToAdd(ThreatActorIpAddressesToAddT&& value) { m_threatActorIpAddressesToAddHasBeenSet = true; m_threatActorIpAddressesToAdd = std::forward<ThreatActorIpAddressesToAddT>(value); }
    template<typename ThreatActorIpAddressesToAddT = Aws::Vector<ThreatActorIp>>
    UpdateCaseRequest& WithThreatActorIpAddressesToAdd(ThreatActorIpAddressesToAddT&& value) { SetThreatActorIpAddressesToAdd(std::forward<ThreatActorIpAddressesToAddT>(value)); return *this;}
    template<typename ThreatActorIpAddressesToAddT = ThreatActorIp>
    UpdateCaseRequest& AddThreatActorIpAddressesToAdd(ThreatActorIpAddressesToAddT&& value) { m_threatActorIpAddressesToAddHasBeenSet = true; m_threatActorIpAddressesToAdd.emplace_back(std::forward<ThreatActorIpAddressesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to remove suspicious IP
     * addresses from a case.</p>
     */
    inline const Aws::Vector<ThreatActorIp>& GetThreatActorIpAddressesToDelete() const { return m_threatActorIpAddressesToDelete; }
    inline bool ThreatActorIpAddressesToDeleteHasBeenSet() const { return m_threatActorIpAddressesToDeleteHasBeenSet; }
    template<typename ThreatActorIpAddressesToDeleteT = Aws::Vector<ThreatActorIp>>
    void SetThreatActorIpAddressesToDelete(ThreatActorIpAddressesToDeleteT&& value) { m_threatActorIpAddressesToDeleteHasBeenSet = true; m_threatActorIpAddressesToDelete = std::forward<ThreatActorIpAddressesToDeleteT>(value); }
    template<typename ThreatActorIpAddressesToDeleteT = Aws::Vector<ThreatActorIp>>
    UpdateCaseRequest& WithThreatActorIpAddressesToDelete(ThreatActorIpAddressesToDeleteT&& value) { SetThreatActorIpAddressesToDelete(std::forward<ThreatActorIpAddressesToDeleteT>(value)); return *this;}
    template<typename ThreatActorIpAddressesToDeleteT = ThreatActorIp>
    UpdateCaseRequest& AddThreatActorIpAddressesToDelete(ThreatActorIpAddressesToDeleteT&& value) { m_threatActorIpAddressesToDeleteHasBeenSet = true; m_threatActorIpAddressesToDelete.emplace_back(std::forward<ThreatActorIpAddressesToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add services
     * impacted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedServicesToAdd() const { return m_impactedServicesToAdd; }
    inline bool ImpactedServicesToAddHasBeenSet() const { return m_impactedServicesToAddHasBeenSet; }
    template<typename ImpactedServicesToAddT = Aws::Vector<Aws::String>>
    void SetImpactedServicesToAdd(ImpactedServicesToAddT&& value) { m_impactedServicesToAddHasBeenSet = true; m_impactedServicesToAdd = std::forward<ImpactedServicesToAddT>(value); }
    template<typename ImpactedServicesToAddT = Aws::Vector<Aws::String>>
    UpdateCaseRequest& WithImpactedServicesToAdd(ImpactedServicesToAddT&& value) { SetImpactedServicesToAdd(std::forward<ImpactedServicesToAddT>(value)); return *this;}
    template<typename ImpactedServicesToAddT = Aws::String>
    UpdateCaseRequest& AddImpactedServicesToAdd(ImpactedServicesToAddT&& value) { m_impactedServicesToAddHasBeenSet = true; m_impactedServicesToAdd.emplace_back(std::forward<ImpactedServicesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to remove services
     * impacted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedServicesToDelete() const { return m_impactedServicesToDelete; }
    inline bool ImpactedServicesToDeleteHasBeenSet() const { return m_impactedServicesToDeleteHasBeenSet; }
    template<typename ImpactedServicesToDeleteT = Aws::Vector<Aws::String>>
    void SetImpactedServicesToDelete(ImpactedServicesToDeleteT&& value) { m_impactedServicesToDeleteHasBeenSet = true; m_impactedServicesToDelete = std::forward<ImpactedServicesToDeleteT>(value); }
    template<typename ImpactedServicesToDeleteT = Aws::Vector<Aws::String>>
    UpdateCaseRequest& WithImpactedServicesToDelete(ImpactedServicesToDeleteT&& value) { SetImpactedServicesToDelete(std::forward<ImpactedServicesToDeleteT>(value)); return *this;}
    template<typename ImpactedServicesToDeleteT = Aws::String>
    UpdateCaseRequest& AddImpactedServicesToDelete(ImpactedServicesToDeleteT&& value) { m_impactedServicesToDeleteHasBeenSet = true; m_impactedServicesToDelete.emplace_back(std::forward<ImpactedServicesToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add regions
     * impacted.</p>
     */
    inline const Aws::Vector<ImpactedAwsRegion>& GetImpactedAwsRegionsToAdd() const { return m_impactedAwsRegionsToAdd; }
    inline bool ImpactedAwsRegionsToAddHasBeenSet() const { return m_impactedAwsRegionsToAddHasBeenSet; }
    template<typename ImpactedAwsRegionsToAddT = Aws::Vector<ImpactedAwsRegion>>
    void SetImpactedAwsRegionsToAdd(ImpactedAwsRegionsToAddT&& value) { m_impactedAwsRegionsToAddHasBeenSet = true; m_impactedAwsRegionsToAdd = std::forward<ImpactedAwsRegionsToAddT>(value); }
    template<typename ImpactedAwsRegionsToAddT = Aws::Vector<ImpactedAwsRegion>>
    UpdateCaseRequest& WithImpactedAwsRegionsToAdd(ImpactedAwsRegionsToAddT&& value) { SetImpactedAwsRegionsToAdd(std::forward<ImpactedAwsRegionsToAddT>(value)); return *this;}
    template<typename ImpactedAwsRegionsToAddT = ImpactedAwsRegion>
    UpdateCaseRequest& AddImpactedAwsRegionsToAdd(ImpactedAwsRegionsToAddT&& value) { m_impactedAwsRegionsToAddHasBeenSet = true; m_impactedAwsRegionsToAdd.emplace_back(std::forward<ImpactedAwsRegionsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to remove regions
     * impacted.</p>
     */
    inline const Aws::Vector<ImpactedAwsRegion>& GetImpactedAwsRegionsToDelete() const { return m_impactedAwsRegionsToDelete; }
    inline bool ImpactedAwsRegionsToDeleteHasBeenSet() const { return m_impactedAwsRegionsToDeleteHasBeenSet; }
    template<typename ImpactedAwsRegionsToDeleteT = Aws::Vector<ImpactedAwsRegion>>
    void SetImpactedAwsRegionsToDelete(ImpactedAwsRegionsToDeleteT&& value) { m_impactedAwsRegionsToDeleteHasBeenSet = true; m_impactedAwsRegionsToDelete = std::forward<ImpactedAwsRegionsToDeleteT>(value); }
    template<typename ImpactedAwsRegionsToDeleteT = Aws::Vector<ImpactedAwsRegion>>
    UpdateCaseRequest& WithImpactedAwsRegionsToDelete(ImpactedAwsRegionsToDeleteT&& value) { SetImpactedAwsRegionsToDelete(std::forward<ImpactedAwsRegionsToDeleteT>(value)); return *this;}
    template<typename ImpactedAwsRegionsToDeleteT = ImpactedAwsRegion>
    UpdateCaseRequest& AddImpactedAwsRegionsToDelete(ImpactedAwsRegionsToDeleteT&& value) { m_impactedAwsRegionsToDeleteHasBeenSet = true; m_impactedAwsRegionsToDelete.emplace_back(std::forward<ImpactedAwsRegionsToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add accounts
     * impacted.</p>  <p> AWS account ID's may appear less than 12 characters and
     * need to be zero-prepended. An example would be <code>123123123</code> which is
     * nine digits, and with zero-prepend would be <code>000123123123</code>. Not
     * zero-prepending to 12 digits could result in errors. </p> 
     */
    inline const Aws::Vector<Aws::String>& GetImpactedAccountsToAdd() const { return m_impactedAccountsToAdd; }
    inline bool ImpactedAccountsToAddHasBeenSet() const { return m_impactedAccountsToAddHasBeenSet; }
    template<typename ImpactedAccountsToAddT = Aws::Vector<Aws::String>>
    void SetImpactedAccountsToAdd(ImpactedAccountsToAddT&& value) { m_impactedAccountsToAddHasBeenSet = true; m_impactedAccountsToAdd = std::forward<ImpactedAccountsToAddT>(value); }
    template<typename ImpactedAccountsToAddT = Aws::Vector<Aws::String>>
    UpdateCaseRequest& WithImpactedAccountsToAdd(ImpactedAccountsToAddT&& value) { SetImpactedAccountsToAdd(std::forward<ImpactedAccountsToAddT>(value)); return *this;}
    template<typename ImpactedAccountsToAddT = Aws::String>
    UpdateCaseRequest& AddImpactedAccountsToAdd(ImpactedAccountsToAddT&& value) { m_impactedAccountsToAddHasBeenSet = true; m_impactedAccountsToAdd.emplace_back(std::forward<ImpactedAccountsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional element for UpdateCase to provide content to add accounts
     * impacted.</p>  <p> AWS account ID's may appear less than 12 characters and
     * need to be zero-prepended. An example would be <code>123123123</code> which is
     * nine digits, and with zero-prepend would be <code>000123123123</code>. Not
     * zero-prepending to 12 digits could result in errors. </p> 
     */
    inline const Aws::Vector<Aws::String>& GetImpactedAccountsToDelete() const { return m_impactedAccountsToDelete; }
    inline bool ImpactedAccountsToDeleteHasBeenSet() const { return m_impactedAccountsToDeleteHasBeenSet; }
    template<typename ImpactedAccountsToDeleteT = Aws::Vector<Aws::String>>
    void SetImpactedAccountsToDelete(ImpactedAccountsToDeleteT&& value) { m_impactedAccountsToDeleteHasBeenSet = true; m_impactedAccountsToDelete = std::forward<ImpactedAccountsToDeleteT>(value); }
    template<typename ImpactedAccountsToDeleteT = Aws::Vector<Aws::String>>
    UpdateCaseRequest& WithImpactedAccountsToDelete(ImpactedAccountsToDeleteT&& value) { SetImpactedAccountsToDelete(std::forward<ImpactedAccountsToDeleteT>(value)); return *this;}
    template<typename ImpactedAccountsToDeleteT = Aws::String>
    UpdateCaseRequest& AddImpactedAccountsToDelete(ImpactedAccountsToDeleteT&& value) { m_impactedAccountsToDeleteHasBeenSet = true; m_impactedAccountsToDelete.emplace_back(std::forward<ImpactedAccountsToDeleteT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_reportedIncidentStartDate{};
    bool m_reportedIncidentStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_actualIncidentStartDate{};
    bool m_actualIncidentStartDateHasBeenSet = false;

    EngagementType m_engagementType{EngagementType::NOT_SET};
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
