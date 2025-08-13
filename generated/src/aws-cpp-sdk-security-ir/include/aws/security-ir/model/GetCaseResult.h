/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/CaseStatus.h>
#include <aws/security-ir/model/EngagementType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/PendingAction.h>
#include <aws/security-ir/model/ClosureCode.h>
#include <aws/security-ir/model/ResolverType.h>
#include <aws/security-ir/model/ImpactedAwsRegion.h>
#include <aws/security-ir/model/ThreatActorIp.h>
#include <aws/security-ir/model/Watcher.h>
#include <aws/security-ir/model/CaseAttachmentAttributes.h>
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
namespace SecurityIR
{
namespace Model
{
  class GetCaseResult
  {
  public:
    AWS_SECURITYIR_API GetCaseResult() = default;
    AWS_SECURITYIR_API GetCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API GetCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for GetCase that provides the case title.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    GetCaseResult& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the case ARN</p>
     */
    inline const Aws::String& GetCaseArn() const { return m_caseArn; }
    template<typename CaseArnT = Aws::String>
    void SetCaseArn(CaseArnT&& value) { m_caseArnHasBeenSet = true; m_caseArn = std::forward<CaseArnT>(value); }
    template<typename CaseArnT = Aws::String>
    GetCaseResult& WithCaseArn(CaseArnT&& value) { SetCaseArn(std::forward<CaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides contents of the case
     * description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetCaseResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the case status. Options for
     * statuses include <code>Submitted | Detection and Analysis | Eradication,
     * Containment and Recovery | Post-Incident Activities | Closed </code> </p>
     */
    inline CaseStatus GetCaseStatus() const { return m_caseStatus; }
    inline void SetCaseStatus(CaseStatus value) { m_caseStatusHasBeenSet = true; m_caseStatus = value; }
    inline GetCaseResult& WithCaseStatus(CaseStatus value) { SetCaseStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the engagement type. Options for
     * engagement type include <code>Active Security Event | Investigations</code> </p>
     */
    inline EngagementType GetEngagementType() const { return m_engagementType; }
    inline void SetEngagementType(EngagementType value) { m_engagementTypeHasBeenSet = true; m_engagementType = value; }
    inline GetCaseResult& WithEngagementType(EngagementType value) { SetEngagementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the customer provided incident
     * start date.</p>
     */
    inline const Aws::Utils::DateTime& GetReportedIncidentStartDate() const { return m_reportedIncidentStartDate; }
    template<typename ReportedIncidentStartDateT = Aws::Utils::DateTime>
    void SetReportedIncidentStartDate(ReportedIncidentStartDateT&& value) { m_reportedIncidentStartDateHasBeenSet = true; m_reportedIncidentStartDate = std::forward<ReportedIncidentStartDateT>(value); }
    template<typename ReportedIncidentStartDateT = Aws::Utils::DateTime>
    GetCaseResult& WithReportedIncidentStartDate(ReportedIncidentStartDateT&& value) { SetReportedIncidentStartDate(std::forward<ReportedIncidentStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the actual incident start date as
     * identified by data analysis during the investigation. </p>
     */
    inline const Aws::Utils::DateTime& GetActualIncidentStartDate() const { return m_actualIncidentStartDate; }
    template<typename ActualIncidentStartDateT = Aws::Utils::DateTime>
    void SetActualIncidentStartDate(ActualIncidentStartDateT&& value) { m_actualIncidentStartDateHasBeenSet = true; m_actualIncidentStartDate = std::forward<ActualIncidentStartDateT>(value); }
    template<typename ActualIncidentStartDateT = Aws::Utils::DateTime>
    GetCaseResult& WithActualIncidentStartDate(ActualIncidentStartDateT&& value) { SetActualIncidentStartDate(std::forward<ActualIncidentStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the impacted regions.</p>
     */
    inline const Aws::Vector<ImpactedAwsRegion>& GetImpactedAwsRegions() const { return m_impactedAwsRegions; }
    template<typename ImpactedAwsRegionsT = Aws::Vector<ImpactedAwsRegion>>
    void SetImpactedAwsRegions(ImpactedAwsRegionsT&& value) { m_impactedAwsRegionsHasBeenSet = true; m_impactedAwsRegions = std::forward<ImpactedAwsRegionsT>(value); }
    template<typename ImpactedAwsRegionsT = Aws::Vector<ImpactedAwsRegion>>
    GetCaseResult& WithImpactedAwsRegions(ImpactedAwsRegionsT&& value) { SetImpactedAwsRegions(std::forward<ImpactedAwsRegionsT>(value)); return *this;}
    template<typename ImpactedAwsRegionsT = ImpactedAwsRegion>
    GetCaseResult& AddImpactedAwsRegions(ImpactedAwsRegionsT&& value) { m_impactedAwsRegionsHasBeenSet = true; m_impactedAwsRegions.emplace_back(std::forward<ImpactedAwsRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of suspicious IP addresses
     * associated with unauthorized activity. </p>
     */
    inline const Aws::Vector<ThreatActorIp>& GetThreatActorIpAddresses() const { return m_threatActorIpAddresses; }
    template<typename ThreatActorIpAddressesT = Aws::Vector<ThreatActorIp>>
    void SetThreatActorIpAddresses(ThreatActorIpAddressesT&& value) { m_threatActorIpAddressesHasBeenSet = true; m_threatActorIpAddresses = std::forward<ThreatActorIpAddressesT>(value); }
    template<typename ThreatActorIpAddressesT = Aws::Vector<ThreatActorIp>>
    GetCaseResult& WithThreatActorIpAddresses(ThreatActorIpAddressesT&& value) { SetThreatActorIpAddresses(std::forward<ThreatActorIpAddressesT>(value)); return *this;}
    template<typename ThreatActorIpAddressesT = ThreatActorIp>
    GetCaseResult& AddThreatActorIpAddresses(ThreatActorIpAddressesT&& value) { m_threatActorIpAddressesHasBeenSet = true; m_threatActorIpAddresses.emplace_back(std::forward<ThreatActorIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that identifies the case is waiting on customer
     * input.</p>
     */
    inline PendingAction GetPendingAction() const { return m_pendingAction; }
    inline void SetPendingAction(PendingAction value) { m_pendingActionHasBeenSet = true; m_pendingAction = value; }
    inline GetCaseResult& WithPendingAction(PendingAction value) { SetPendingAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of impacted accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedAccounts() const { return m_impactedAccounts; }
    template<typename ImpactedAccountsT = Aws::Vector<Aws::String>>
    void SetImpactedAccounts(ImpactedAccountsT&& value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts = std::forward<ImpactedAccountsT>(value); }
    template<typename ImpactedAccountsT = Aws::Vector<Aws::String>>
    GetCaseResult& WithImpactedAccounts(ImpactedAccountsT&& value) { SetImpactedAccounts(std::forward<ImpactedAccountsT>(value)); return *this;}
    template<typename ImpactedAccountsT = Aws::String>
    GetCaseResult& AddImpactedAccounts(ImpactedAccountsT&& value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts.emplace_back(std::forward<ImpactedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of Watchers added to the
     * case.</p>
     */
    inline const Aws::Vector<Watcher>& GetWatchers() const { return m_watchers; }
    template<typename WatchersT = Aws::Vector<Watcher>>
    void SetWatchers(WatchersT&& value) { m_watchersHasBeenSet = true; m_watchers = std::forward<WatchersT>(value); }
    template<typename WatchersT = Aws::Vector<Watcher>>
    GetCaseResult& WithWatchers(WatchersT&& value) { SetWatchers(std::forward<WatchersT>(value)); return *this;}
    template<typename WatchersT = Watcher>
    GetCaseResult& AddWatchers(WatchersT&& value) { m_watchersHasBeenSet = true; m_watchers.emplace_back(std::forward<WatchersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the date the case was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetCaseResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the date a case was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    GetCaseResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the summary code for why a case
     * was closed.</p>
     */
    inline ClosureCode GetClosureCode() const { return m_closureCode; }
    inline void SetClosureCode(ClosureCode value) { m_closureCodeHasBeenSet = true; m_closureCode = value; }
    inline GetCaseResult& WithClosureCode(ClosureCode value) { SetClosureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the current resolver types.</p>
     */
    inline ResolverType GetResolverType() const { return m_resolverType; }
    inline void SetResolverType(ResolverType value) { m_resolverTypeHasBeenSet = true; m_resolverType = value; }
    inline GetCaseResult& WithResolverType(ResolverType value) { SetResolverType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of impacted services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedServices() const { return m_impactedServices; }
    template<typename ImpactedServicesT = Aws::Vector<Aws::String>>
    void SetImpactedServices(ImpactedServicesT&& value) { m_impactedServicesHasBeenSet = true; m_impactedServices = std::forward<ImpactedServicesT>(value); }
    template<typename ImpactedServicesT = Aws::Vector<Aws::String>>
    GetCaseResult& WithImpactedServices(ImpactedServicesT&& value) { SetImpactedServices(std::forward<ImpactedServicesT>(value)); return *this;}
    template<typename ImpactedServicesT = Aws::String>
    GetCaseResult& AddImpactedServices(ImpactedServicesT&& value) { m_impactedServicesHasBeenSet = true; m_impactedServices.emplace_back(std::forward<ImpactedServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of current case
     * attachments.</p>
     */
    inline const Aws::Vector<CaseAttachmentAttributes>& GetCaseAttachments() const { return m_caseAttachments; }
    template<typename CaseAttachmentsT = Aws::Vector<CaseAttachmentAttributes>>
    void SetCaseAttachments(CaseAttachmentsT&& value) { m_caseAttachmentsHasBeenSet = true; m_caseAttachments = std::forward<CaseAttachmentsT>(value); }
    template<typename CaseAttachmentsT = Aws::Vector<CaseAttachmentAttributes>>
    GetCaseResult& WithCaseAttachments(CaseAttachmentsT&& value) { SetCaseAttachments(std::forward<CaseAttachmentsT>(value)); return *this;}
    template<typename CaseAttachmentsT = CaseAttachmentAttributes>
    GetCaseResult& AddCaseAttachments(CaseAttachmentsT&& value) { m_caseAttachmentsHasBeenSet = true; m_caseAttachments.emplace_back(std::forward<CaseAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the date a specified case was
     * closed.</p>
     */
    inline const Aws::Utils::DateTime& GetClosedDate() const { return m_closedDate; }
    template<typename ClosedDateT = Aws::Utils::DateTime>
    void SetClosedDate(ClosedDateT&& value) { m_closedDateHasBeenSet = true; m_closedDate = std::forward<ClosedDateT>(value); }
    template<typename ClosedDateT = Aws::Utils::DateTime>
    GetCaseResult& WithClosedDate(ClosedDateT&& value) { SetClosedDate(std::forward<ClosedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_caseArn;
    bool m_caseArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CaseStatus m_caseStatus{CaseStatus::NOT_SET};
    bool m_caseStatusHasBeenSet = false;

    EngagementType m_engagementType{EngagementType::NOT_SET};
    bool m_engagementTypeHasBeenSet = false;

    Aws::Utils::DateTime m_reportedIncidentStartDate{};
    bool m_reportedIncidentStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_actualIncidentStartDate{};
    bool m_actualIncidentStartDateHasBeenSet = false;

    Aws::Vector<ImpactedAwsRegion> m_impactedAwsRegions;
    bool m_impactedAwsRegionsHasBeenSet = false;

    Aws::Vector<ThreatActorIp> m_threatActorIpAddresses;
    bool m_threatActorIpAddressesHasBeenSet = false;

    PendingAction m_pendingAction{PendingAction::NOT_SET};
    bool m_pendingActionHasBeenSet = false;

    Aws::Vector<Aws::String> m_impactedAccounts;
    bool m_impactedAccountsHasBeenSet = false;

    Aws::Vector<Watcher> m_watchers;
    bool m_watchersHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    ClosureCode m_closureCode{ClosureCode::NOT_SET};
    bool m_closureCodeHasBeenSet = false;

    ResolverType m_resolverType{ResolverType::NOT_SET};
    bool m_resolverTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_impactedServices;
    bool m_impactedServicesHasBeenSet = false;

    Aws::Vector<CaseAttachmentAttributes> m_caseAttachments;
    bool m_caseAttachmentsHasBeenSet = false;

    Aws::Utils::DateTime m_closedDate{};
    bool m_closedDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
