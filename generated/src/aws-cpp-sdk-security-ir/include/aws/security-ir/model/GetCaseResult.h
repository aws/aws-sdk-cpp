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
    AWS_SECURITYIR_API GetCaseResult();
    AWS_SECURITYIR_API GetCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API GetCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for GetCase that provides the case title.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline void SetTitle(const Aws::String& value) { m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_title.assign(value); }
    inline GetCaseResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline GetCaseResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline GetCaseResult& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the case ARN</p>
     */
    inline const Aws::String& GetCaseArn() const{ return m_caseArn; }
    inline void SetCaseArn(const Aws::String& value) { m_caseArn = value; }
    inline void SetCaseArn(Aws::String&& value) { m_caseArn = std::move(value); }
    inline void SetCaseArn(const char* value) { m_caseArn.assign(value); }
    inline GetCaseResult& WithCaseArn(const Aws::String& value) { SetCaseArn(value); return *this;}
    inline GetCaseResult& WithCaseArn(Aws::String&& value) { SetCaseArn(std::move(value)); return *this;}
    inline GetCaseResult& WithCaseArn(const char* value) { SetCaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides contents of the case
     * description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetCaseResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCaseResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCaseResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the case status. Options for
     * statuses include <code>Submitted | Detection and Analysis | Eradication,
     * Containment and Recovery | Post-Incident Activities | Closed </code> </p>
     */
    inline const CaseStatus& GetCaseStatus() const{ return m_caseStatus; }
    inline void SetCaseStatus(const CaseStatus& value) { m_caseStatus = value; }
    inline void SetCaseStatus(CaseStatus&& value) { m_caseStatus = std::move(value); }
    inline GetCaseResult& WithCaseStatus(const CaseStatus& value) { SetCaseStatus(value); return *this;}
    inline GetCaseResult& WithCaseStatus(CaseStatus&& value) { SetCaseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the engagement type. Options for
     * engagement type include <code>Active Security Event | Investigations</code> </p>
     */
    inline const EngagementType& GetEngagementType() const{ return m_engagementType; }
    inline void SetEngagementType(const EngagementType& value) { m_engagementType = value; }
    inline void SetEngagementType(EngagementType&& value) { m_engagementType = std::move(value); }
    inline GetCaseResult& WithEngagementType(const EngagementType& value) { SetEngagementType(value); return *this;}
    inline GetCaseResult& WithEngagementType(EngagementType&& value) { SetEngagementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the customer provided incident
     * start date.</p>
     */
    inline const Aws::Utils::DateTime& GetReportedIncidentStartDate() const{ return m_reportedIncidentStartDate; }
    inline void SetReportedIncidentStartDate(const Aws::Utils::DateTime& value) { m_reportedIncidentStartDate = value; }
    inline void SetReportedIncidentStartDate(Aws::Utils::DateTime&& value) { m_reportedIncidentStartDate = std::move(value); }
    inline GetCaseResult& WithReportedIncidentStartDate(const Aws::Utils::DateTime& value) { SetReportedIncidentStartDate(value); return *this;}
    inline GetCaseResult& WithReportedIncidentStartDate(Aws::Utils::DateTime&& value) { SetReportedIncidentStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the actual incident start date as
     * identified by data analysis during the investigation. </p>
     */
    inline const Aws::Utils::DateTime& GetActualIncidentStartDate() const{ return m_actualIncidentStartDate; }
    inline void SetActualIncidentStartDate(const Aws::Utils::DateTime& value) { m_actualIncidentStartDate = value; }
    inline void SetActualIncidentStartDate(Aws::Utils::DateTime&& value) { m_actualIncidentStartDate = std::move(value); }
    inline GetCaseResult& WithActualIncidentStartDate(const Aws::Utils::DateTime& value) { SetActualIncidentStartDate(value); return *this;}
    inline GetCaseResult& WithActualIncidentStartDate(Aws::Utils::DateTime&& value) { SetActualIncidentStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the impacted regions.</p>
     */
    inline const Aws::Vector<ImpactedAwsRegion>& GetImpactedAwsRegions() const{ return m_impactedAwsRegions; }
    inline void SetImpactedAwsRegions(const Aws::Vector<ImpactedAwsRegion>& value) { m_impactedAwsRegions = value; }
    inline void SetImpactedAwsRegions(Aws::Vector<ImpactedAwsRegion>&& value) { m_impactedAwsRegions = std::move(value); }
    inline GetCaseResult& WithImpactedAwsRegions(const Aws::Vector<ImpactedAwsRegion>& value) { SetImpactedAwsRegions(value); return *this;}
    inline GetCaseResult& WithImpactedAwsRegions(Aws::Vector<ImpactedAwsRegion>&& value) { SetImpactedAwsRegions(std::move(value)); return *this;}
    inline GetCaseResult& AddImpactedAwsRegions(const ImpactedAwsRegion& value) { m_impactedAwsRegions.push_back(value); return *this; }
    inline GetCaseResult& AddImpactedAwsRegions(ImpactedAwsRegion&& value) { m_impactedAwsRegions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of suspicious IP addresses
     * associated with unauthorized activity. </p>
     */
    inline const Aws::Vector<ThreatActorIp>& GetThreatActorIpAddresses() const{ return m_threatActorIpAddresses; }
    inline void SetThreatActorIpAddresses(const Aws::Vector<ThreatActorIp>& value) { m_threatActorIpAddresses = value; }
    inline void SetThreatActorIpAddresses(Aws::Vector<ThreatActorIp>&& value) { m_threatActorIpAddresses = std::move(value); }
    inline GetCaseResult& WithThreatActorIpAddresses(const Aws::Vector<ThreatActorIp>& value) { SetThreatActorIpAddresses(value); return *this;}
    inline GetCaseResult& WithThreatActorIpAddresses(Aws::Vector<ThreatActorIp>&& value) { SetThreatActorIpAddresses(std::move(value)); return *this;}
    inline GetCaseResult& AddThreatActorIpAddresses(const ThreatActorIp& value) { m_threatActorIpAddresses.push_back(value); return *this; }
    inline GetCaseResult& AddThreatActorIpAddresses(ThreatActorIp&& value) { m_threatActorIpAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides identifies the case is waiting on
     * customer input.</p>
     */
    inline const PendingAction& GetPendingAction() const{ return m_pendingAction; }
    inline void SetPendingAction(const PendingAction& value) { m_pendingAction = value; }
    inline void SetPendingAction(PendingAction&& value) { m_pendingAction = std::move(value); }
    inline GetCaseResult& WithPendingAction(const PendingAction& value) { SetPendingAction(value); return *this;}
    inline GetCaseResult& WithPendingAction(PendingAction&& value) { SetPendingAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of impacted accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedAccounts() const{ return m_impactedAccounts; }
    inline void SetImpactedAccounts(const Aws::Vector<Aws::String>& value) { m_impactedAccounts = value; }
    inline void SetImpactedAccounts(Aws::Vector<Aws::String>&& value) { m_impactedAccounts = std::move(value); }
    inline GetCaseResult& WithImpactedAccounts(const Aws::Vector<Aws::String>& value) { SetImpactedAccounts(value); return *this;}
    inline GetCaseResult& WithImpactedAccounts(Aws::Vector<Aws::String>&& value) { SetImpactedAccounts(std::move(value)); return *this;}
    inline GetCaseResult& AddImpactedAccounts(const Aws::String& value) { m_impactedAccounts.push_back(value); return *this; }
    inline GetCaseResult& AddImpactedAccounts(Aws::String&& value) { m_impactedAccounts.push_back(std::move(value)); return *this; }
    inline GetCaseResult& AddImpactedAccounts(const char* value) { m_impactedAccounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of Watchers added to the
     * case.</p>
     */
    inline const Aws::Vector<Watcher>& GetWatchers() const{ return m_watchers; }
    inline void SetWatchers(const Aws::Vector<Watcher>& value) { m_watchers = value; }
    inline void SetWatchers(Aws::Vector<Watcher>&& value) { m_watchers = std::move(value); }
    inline GetCaseResult& WithWatchers(const Aws::Vector<Watcher>& value) { SetWatchers(value); return *this;}
    inline GetCaseResult& WithWatchers(Aws::Vector<Watcher>&& value) { SetWatchers(std::move(value)); return *this;}
    inline GetCaseResult& AddWatchers(const Watcher& value) { m_watchers.push_back(value); return *this; }
    inline GetCaseResult& AddWatchers(Watcher&& value) { m_watchers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the date the case was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline GetCaseResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline GetCaseResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the date a case was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline GetCaseResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline GetCaseResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the summary code for why a case
     * was closed.</p>
     */
    inline const ClosureCode& GetClosureCode() const{ return m_closureCode; }
    inline void SetClosureCode(const ClosureCode& value) { m_closureCode = value; }
    inline void SetClosureCode(ClosureCode&& value) { m_closureCode = std::move(value); }
    inline GetCaseResult& WithClosureCode(const ClosureCode& value) { SetClosureCode(value); return *this;}
    inline GetCaseResult& WithClosureCode(ClosureCode&& value) { SetClosureCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the current resolver types.
     * Options include <code> self-supported | AWS-supported</code>. </p>
     */
    inline const ResolverType& GetResolverType() const{ return m_resolverType; }
    inline void SetResolverType(const ResolverType& value) { m_resolverType = value; }
    inline void SetResolverType(ResolverType&& value) { m_resolverType = std::move(value); }
    inline GetCaseResult& WithResolverType(const ResolverType& value) { SetResolverType(value); return *this;}
    inline GetCaseResult& WithResolverType(ResolverType&& value) { SetResolverType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of impacted services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedServices() const{ return m_impactedServices; }
    inline void SetImpactedServices(const Aws::Vector<Aws::String>& value) { m_impactedServices = value; }
    inline void SetImpactedServices(Aws::Vector<Aws::String>&& value) { m_impactedServices = std::move(value); }
    inline GetCaseResult& WithImpactedServices(const Aws::Vector<Aws::String>& value) { SetImpactedServices(value); return *this;}
    inline GetCaseResult& WithImpactedServices(Aws::Vector<Aws::String>&& value) { SetImpactedServices(std::move(value)); return *this;}
    inline GetCaseResult& AddImpactedServices(const Aws::String& value) { m_impactedServices.push_back(value); return *this; }
    inline GetCaseResult& AddImpactedServices(Aws::String&& value) { m_impactedServices.push_back(std::move(value)); return *this; }
    inline GetCaseResult& AddImpactedServices(const char* value) { m_impactedServices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides a list of current case
     * attachments.</p>
     */
    inline const Aws::Vector<CaseAttachmentAttributes>& GetCaseAttachments() const{ return m_caseAttachments; }
    inline void SetCaseAttachments(const Aws::Vector<CaseAttachmentAttributes>& value) { m_caseAttachments = value; }
    inline void SetCaseAttachments(Aws::Vector<CaseAttachmentAttributes>&& value) { m_caseAttachments = std::move(value); }
    inline GetCaseResult& WithCaseAttachments(const Aws::Vector<CaseAttachmentAttributes>& value) { SetCaseAttachments(value); return *this;}
    inline GetCaseResult& WithCaseAttachments(Aws::Vector<CaseAttachmentAttributes>&& value) { SetCaseAttachments(std::move(value)); return *this;}
    inline GetCaseResult& AddCaseAttachments(const CaseAttachmentAttributes& value) { m_caseAttachments.push_back(value); return *this; }
    inline GetCaseResult& AddCaseAttachments(CaseAttachmentAttributes&& value) { m_caseAttachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for GetCase that provides the date a specified case was
     * closed.</p>
     */
    inline const Aws::Utils::DateTime& GetClosedDate() const{ return m_closedDate; }
    inline void SetClosedDate(const Aws::Utils::DateTime& value) { m_closedDate = value; }
    inline void SetClosedDate(Aws::Utils::DateTime&& value) { m_closedDate = std::move(value); }
    inline GetCaseResult& WithClosedDate(const Aws::Utils::DateTime& value) { SetClosedDate(value); return *this;}
    inline GetCaseResult& WithClosedDate(Aws::Utils::DateTime&& value) { SetClosedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_title;

    Aws::String m_caseArn;

    Aws::String m_description;

    CaseStatus m_caseStatus;

    EngagementType m_engagementType;

    Aws::Utils::DateTime m_reportedIncidentStartDate;

    Aws::Utils::DateTime m_actualIncidentStartDate;

    Aws::Vector<ImpactedAwsRegion> m_impactedAwsRegions;

    Aws::Vector<ThreatActorIp> m_threatActorIpAddresses;

    PendingAction m_pendingAction;

    Aws::Vector<Aws::String> m_impactedAccounts;

    Aws::Vector<Watcher> m_watchers;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    ClosureCode m_closureCode;

    ResolverType m_resolverType;

    Aws::Vector<Aws::String> m_impactedServices;

    Aws::Vector<CaseAttachmentAttributes> m_caseAttachments;

    Aws::Utils::DateTime m_closedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
