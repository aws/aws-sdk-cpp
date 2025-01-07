/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/ResolverType.h>
#include <aws/security-ir/model/EngagementType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/security-ir/model/Watcher.h>
#include <aws/security-ir/model/ThreatActorIp.h>
#include <aws/security-ir/model/ImpactedAwsRegion.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class CreateCaseRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API CreateCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCase"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element used in combination with CreateCase.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateCaseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateCaseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateCaseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to identify the resolver
     * type. Available resolvers include self-supported | aws-supported. </p>
     */
    inline const ResolverType& GetResolverType() const{ return m_resolverType; }
    inline bool ResolverTypeHasBeenSet() const { return m_resolverTypeHasBeenSet; }
    inline void SetResolverType(const ResolverType& value) { m_resolverTypeHasBeenSet = true; m_resolverType = value; }
    inline void SetResolverType(ResolverType&& value) { m_resolverTypeHasBeenSet = true; m_resolverType = std::move(value); }
    inline CreateCaseRequest& WithResolverType(const ResolverType& value) { SetResolverType(value); return *this;}
    inline CreateCaseRequest& WithResolverType(ResolverType&& value) { SetResolverType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide a title for
     * the new case.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline CreateCaseRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline CreateCaseRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline CreateCaseRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide a description
     * for the new case.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateCaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateCaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateCaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide an engagement
     * type for the new cases. Available engagement types include Security Incident |
     * Investigation </p>
     */
    inline const EngagementType& GetEngagementType() const{ return m_engagementType; }
    inline bool EngagementTypeHasBeenSet() const { return m_engagementTypeHasBeenSet; }
    inline void SetEngagementType(const EngagementType& value) { m_engagementTypeHasBeenSet = true; m_engagementType = value; }
    inline void SetEngagementType(EngagementType&& value) { m_engagementTypeHasBeenSet = true; m_engagementType = std::move(value); }
    inline CreateCaseRequest& WithEngagementType(const EngagementType& value) { SetEngagementType(value); return *this;}
    inline CreateCaseRequest& WithEngagementType(EngagementType&& value) { SetEngagementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide an initial
     * start date for the unauthorized activity. </p>
     */
    inline const Aws::Utils::DateTime& GetReportedIncidentStartDate() const{ return m_reportedIncidentStartDate; }
    inline bool ReportedIncidentStartDateHasBeenSet() const { return m_reportedIncidentStartDateHasBeenSet; }
    inline void SetReportedIncidentStartDate(const Aws::Utils::DateTime& value) { m_reportedIncidentStartDateHasBeenSet = true; m_reportedIncidentStartDate = value; }
    inline void SetReportedIncidentStartDate(Aws::Utils::DateTime&& value) { m_reportedIncidentStartDateHasBeenSet = true; m_reportedIncidentStartDate = std::move(value); }
    inline CreateCaseRequest& WithReportedIncidentStartDate(const Aws::Utils::DateTime& value) { SetReportedIncidentStartDate(value); return *this;}
    inline CreateCaseRequest& WithReportedIncidentStartDate(Aws::Utils::DateTime&& value) { SetReportedIncidentStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide a list of
     * impacted accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedAccounts() const{ return m_impactedAccounts; }
    inline bool ImpactedAccountsHasBeenSet() const { return m_impactedAccountsHasBeenSet; }
    inline void SetImpactedAccounts(const Aws::Vector<Aws::String>& value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts = value; }
    inline void SetImpactedAccounts(Aws::Vector<Aws::String>&& value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts = std::move(value); }
    inline CreateCaseRequest& WithImpactedAccounts(const Aws::Vector<Aws::String>& value) { SetImpactedAccounts(value); return *this;}
    inline CreateCaseRequest& WithImpactedAccounts(Aws::Vector<Aws::String>&& value) { SetImpactedAccounts(std::move(value)); return *this;}
    inline CreateCaseRequest& AddImpactedAccounts(const Aws::String& value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts.push_back(value); return *this; }
    inline CreateCaseRequest& AddImpactedAccounts(Aws::String&& value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts.push_back(std::move(value)); return *this; }
    inline CreateCaseRequest& AddImpactedAccounts(const char* value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide a list of
     * entities to receive notifications for case updates. </p>
     */
    inline const Aws::Vector<Watcher>& GetWatchers() const{ return m_watchers; }
    inline bool WatchersHasBeenSet() const { return m_watchersHasBeenSet; }
    inline void SetWatchers(const Aws::Vector<Watcher>& value) { m_watchersHasBeenSet = true; m_watchers = value; }
    inline void SetWatchers(Aws::Vector<Watcher>&& value) { m_watchersHasBeenSet = true; m_watchers = std::move(value); }
    inline CreateCaseRequest& WithWatchers(const Aws::Vector<Watcher>& value) { SetWatchers(value); return *this;}
    inline CreateCaseRequest& WithWatchers(Aws::Vector<Watcher>&& value) { SetWatchers(std::move(value)); return *this;}
    inline CreateCaseRequest& AddWatchers(const Watcher& value) { m_watchersHasBeenSet = true; m_watchers.push_back(value); return *this; }
    inline CreateCaseRequest& AddWatchers(Watcher&& value) { m_watchersHasBeenSet = true; m_watchers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCase to provide a list of
     * suspicious internet protocol addresses associated with unauthorized activity.
     * </p>
     */
    inline const Aws::Vector<ThreatActorIp>& GetThreatActorIpAddresses() const{ return m_threatActorIpAddresses; }
    inline bool ThreatActorIpAddressesHasBeenSet() const { return m_threatActorIpAddressesHasBeenSet; }
    inline void SetThreatActorIpAddresses(const Aws::Vector<ThreatActorIp>& value) { m_threatActorIpAddressesHasBeenSet = true; m_threatActorIpAddresses = value; }
    inline void SetThreatActorIpAddresses(Aws::Vector<ThreatActorIp>&& value) { m_threatActorIpAddressesHasBeenSet = true; m_threatActorIpAddresses = std::move(value); }
    inline CreateCaseRequest& WithThreatActorIpAddresses(const Aws::Vector<ThreatActorIp>& value) { SetThreatActorIpAddresses(value); return *this;}
    inline CreateCaseRequest& WithThreatActorIpAddresses(Aws::Vector<ThreatActorIp>&& value) { SetThreatActorIpAddresses(std::move(value)); return *this;}
    inline CreateCaseRequest& AddThreatActorIpAddresses(const ThreatActorIp& value) { m_threatActorIpAddressesHasBeenSet = true; m_threatActorIpAddresses.push_back(value); return *this; }
    inline CreateCaseRequest& AddThreatActorIpAddresses(ThreatActorIp&& value) { m_threatActorIpAddressesHasBeenSet = true; m_threatActorIpAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCase to provide a list of
     * services impacted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedServices() const{ return m_impactedServices; }
    inline bool ImpactedServicesHasBeenSet() const { return m_impactedServicesHasBeenSet; }
    inline void SetImpactedServices(const Aws::Vector<Aws::String>& value) { m_impactedServicesHasBeenSet = true; m_impactedServices = value; }
    inline void SetImpactedServices(Aws::Vector<Aws::String>&& value) { m_impactedServicesHasBeenSet = true; m_impactedServices = std::move(value); }
    inline CreateCaseRequest& WithImpactedServices(const Aws::Vector<Aws::String>& value) { SetImpactedServices(value); return *this;}
    inline CreateCaseRequest& WithImpactedServices(Aws::Vector<Aws::String>&& value) { SetImpactedServices(std::move(value)); return *this;}
    inline CreateCaseRequest& AddImpactedServices(const Aws::String& value) { m_impactedServicesHasBeenSet = true; m_impactedServices.push_back(value); return *this; }
    inline CreateCaseRequest& AddImpactedServices(Aws::String&& value) { m_impactedServicesHasBeenSet = true; m_impactedServices.push_back(std::move(value)); return *this; }
    inline CreateCaseRequest& AddImpactedServices(const char* value) { m_impactedServicesHasBeenSet = true; m_impactedServices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCase to provide a list of
     * impacted regions.</p>
     */
    inline const Aws::Vector<ImpactedAwsRegion>& GetImpactedAwsRegions() const{ return m_impactedAwsRegions; }
    inline bool ImpactedAwsRegionsHasBeenSet() const { return m_impactedAwsRegionsHasBeenSet; }
    inline void SetImpactedAwsRegions(const Aws::Vector<ImpactedAwsRegion>& value) { m_impactedAwsRegionsHasBeenSet = true; m_impactedAwsRegions = value; }
    inline void SetImpactedAwsRegions(Aws::Vector<ImpactedAwsRegion>&& value) { m_impactedAwsRegionsHasBeenSet = true; m_impactedAwsRegions = std::move(value); }
    inline CreateCaseRequest& WithImpactedAwsRegions(const Aws::Vector<ImpactedAwsRegion>& value) { SetImpactedAwsRegions(value); return *this;}
    inline CreateCaseRequest& WithImpactedAwsRegions(Aws::Vector<ImpactedAwsRegion>&& value) { SetImpactedAwsRegions(std::move(value)); return *this;}
    inline CreateCaseRequest& AddImpactedAwsRegions(const ImpactedAwsRegion& value) { m_impactedAwsRegionsHasBeenSet = true; m_impactedAwsRegions.push_back(value); return *this; }
    inline CreateCaseRequest& AddImpactedAwsRegions(ImpactedAwsRegion&& value) { m_impactedAwsRegionsHasBeenSet = true; m_impactedAwsRegions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCase to add customer
     * specified tags to a case.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCaseRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateCaseRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCaseRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateCaseRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateCaseRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateCaseRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateCaseRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateCaseRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateCaseRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ResolverType m_resolverType;
    bool m_resolverTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EngagementType m_engagementType;
    bool m_engagementTypeHasBeenSet = false;

    Aws::Utils::DateTime m_reportedIncidentStartDate;
    bool m_reportedIncidentStartDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_impactedAccounts;
    bool m_impactedAccountsHasBeenSet = false;

    Aws::Vector<Watcher> m_watchers;
    bool m_watchersHasBeenSet = false;

    Aws::Vector<ThreatActorIp> m_threatActorIpAddresses;
    bool m_threatActorIpAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_impactedServices;
    bool m_impactedServicesHasBeenSet = false;

    Aws::Vector<ImpactedAwsRegion> m_impactedAwsRegions;
    bool m_impactedAwsRegionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
