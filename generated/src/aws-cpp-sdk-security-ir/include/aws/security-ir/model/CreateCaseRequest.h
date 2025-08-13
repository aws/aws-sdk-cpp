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
    AWS_SECURITYIR_API CreateCaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCase"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> <p>The <code>clientToken</code> field is an idempotency key used to
     * ensure that repeated attempts for a single action will be ignored by the server
     * during retries. A caller supplied unique ID (typically a UUID) should be
     * provided. </p> </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCaseRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to identify the resolver
     * type.</p>
     */
    inline ResolverType GetResolverType() const { return m_resolverType; }
    inline bool ResolverTypeHasBeenSet() const { return m_resolverTypeHasBeenSet; }
    inline void SetResolverType(ResolverType value) { m_resolverTypeHasBeenSet = true; m_resolverType = value; }
    inline CreateCaseRequest& WithResolverType(ResolverType value) { SetResolverType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide a title for
     * the new case.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CreateCaseRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase</p> <p>to provide a
     * description for the new case.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCaseRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide an engagement
     * type for the new cases. Available engagement types include Security Incident |
     * Investigation </p>
     */
    inline EngagementType GetEngagementType() const { return m_engagementType; }
    inline bool EngagementTypeHasBeenSet() const { return m_engagementTypeHasBeenSet; }
    inline void SetEngagementType(EngagementType value) { m_engagementTypeHasBeenSet = true; m_engagementType = value; }
    inline CreateCaseRequest& WithEngagementType(EngagementType value) { SetEngagementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide an initial
     * start date for the unauthorized activity. </p>
     */
    inline const Aws::Utils::DateTime& GetReportedIncidentStartDate() const { return m_reportedIncidentStartDate; }
    inline bool ReportedIncidentStartDateHasBeenSet() const { return m_reportedIncidentStartDateHasBeenSet; }
    template<typename ReportedIncidentStartDateT = Aws::Utils::DateTime>
    void SetReportedIncidentStartDate(ReportedIncidentStartDateT&& value) { m_reportedIncidentStartDateHasBeenSet = true; m_reportedIncidentStartDate = std::forward<ReportedIncidentStartDateT>(value); }
    template<typename ReportedIncidentStartDateT = Aws::Utils::DateTime>
    CreateCaseRequest& WithReportedIncidentStartDate(ReportedIncidentStartDateT&& value) { SetReportedIncidentStartDate(std::forward<ReportedIncidentStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide a list of
     * impacted accounts.</p>  <p> AWS account ID's may appear less than 12
     * characters and need to be zero-prepended. An example would be
     * <code>123123123</code> which is nine digits, and with zero-prepend would be
     * <code>000123123123</code>. Not zero-prepending to 12 digits could result in
     * errors. </p> 
     */
    inline const Aws::Vector<Aws::String>& GetImpactedAccounts() const { return m_impactedAccounts; }
    inline bool ImpactedAccountsHasBeenSet() const { return m_impactedAccountsHasBeenSet; }
    template<typename ImpactedAccountsT = Aws::Vector<Aws::String>>
    void SetImpactedAccounts(ImpactedAccountsT&& value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts = std::forward<ImpactedAccountsT>(value); }
    template<typename ImpactedAccountsT = Aws::Vector<Aws::String>>
    CreateCaseRequest& WithImpactedAccounts(ImpactedAccountsT&& value) { SetImpactedAccounts(std::forward<ImpactedAccountsT>(value)); return *this;}
    template<typename ImpactedAccountsT = Aws::String>
    CreateCaseRequest& AddImpactedAccounts(ImpactedAccountsT&& value) { m_impactedAccountsHasBeenSet = true; m_impactedAccounts.emplace_back(std::forward<ImpactedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Required element used in combination with CreateCase to provide a list of
     * entities to receive notifications for case updates. </p>
     */
    inline const Aws::Vector<Watcher>& GetWatchers() const { return m_watchers; }
    inline bool WatchersHasBeenSet() const { return m_watchersHasBeenSet; }
    template<typename WatchersT = Aws::Vector<Watcher>>
    void SetWatchers(WatchersT&& value) { m_watchersHasBeenSet = true; m_watchers = std::forward<WatchersT>(value); }
    template<typename WatchersT = Aws::Vector<Watcher>>
    CreateCaseRequest& WithWatchers(WatchersT&& value) { SetWatchers(std::forward<WatchersT>(value)); return *this;}
    template<typename WatchersT = Watcher>
    CreateCaseRequest& AddWatchers(WatchersT&& value) { m_watchersHasBeenSet = true; m_watchers.emplace_back(std::forward<WatchersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCase to provide a list of
     * suspicious internet protocol addresses associated with unauthorized activity.
     * </p>
     */
    inline const Aws::Vector<ThreatActorIp>& GetThreatActorIpAddresses() const { return m_threatActorIpAddresses; }
    inline bool ThreatActorIpAddressesHasBeenSet() const { return m_threatActorIpAddressesHasBeenSet; }
    template<typename ThreatActorIpAddressesT = Aws::Vector<ThreatActorIp>>
    void SetThreatActorIpAddresses(ThreatActorIpAddressesT&& value) { m_threatActorIpAddressesHasBeenSet = true; m_threatActorIpAddresses = std::forward<ThreatActorIpAddressesT>(value); }
    template<typename ThreatActorIpAddressesT = Aws::Vector<ThreatActorIp>>
    CreateCaseRequest& WithThreatActorIpAddresses(ThreatActorIpAddressesT&& value) { SetThreatActorIpAddresses(std::forward<ThreatActorIpAddressesT>(value)); return *this;}
    template<typename ThreatActorIpAddressesT = ThreatActorIp>
    CreateCaseRequest& AddThreatActorIpAddresses(ThreatActorIpAddressesT&& value) { m_threatActorIpAddressesHasBeenSet = true; m_threatActorIpAddresses.emplace_back(std::forward<ThreatActorIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCase to provide a list of
     * services impacted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpactedServices() const { return m_impactedServices; }
    inline bool ImpactedServicesHasBeenSet() const { return m_impactedServicesHasBeenSet; }
    template<typename ImpactedServicesT = Aws::Vector<Aws::String>>
    void SetImpactedServices(ImpactedServicesT&& value) { m_impactedServicesHasBeenSet = true; m_impactedServices = std::forward<ImpactedServicesT>(value); }
    template<typename ImpactedServicesT = Aws::Vector<Aws::String>>
    CreateCaseRequest& WithImpactedServices(ImpactedServicesT&& value) { SetImpactedServices(std::forward<ImpactedServicesT>(value)); return *this;}
    template<typename ImpactedServicesT = Aws::String>
    CreateCaseRequest& AddImpactedServices(ImpactedServicesT&& value) { m_impactedServicesHasBeenSet = true; m_impactedServices.emplace_back(std::forward<ImpactedServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCase to provide a list of
     * impacted regions.</p>
     */
    inline const Aws::Vector<ImpactedAwsRegion>& GetImpactedAwsRegions() const { return m_impactedAwsRegions; }
    inline bool ImpactedAwsRegionsHasBeenSet() const { return m_impactedAwsRegionsHasBeenSet; }
    template<typename ImpactedAwsRegionsT = Aws::Vector<ImpactedAwsRegion>>
    void SetImpactedAwsRegions(ImpactedAwsRegionsT&& value) { m_impactedAwsRegionsHasBeenSet = true; m_impactedAwsRegions = std::forward<ImpactedAwsRegionsT>(value); }
    template<typename ImpactedAwsRegionsT = Aws::Vector<ImpactedAwsRegion>>
    CreateCaseRequest& WithImpactedAwsRegions(ImpactedAwsRegionsT&& value) { SetImpactedAwsRegions(std::forward<ImpactedAwsRegionsT>(value)); return *this;}
    template<typename ImpactedAwsRegionsT = ImpactedAwsRegion>
    CreateCaseRequest& AddImpactedAwsRegions(ImpactedAwsRegionsT&& value) { m_impactedAwsRegionsHasBeenSet = true; m_impactedAwsRegions.emplace_back(std::forward<ImpactedAwsRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional element used in combination with CreateCase to add customer
     * specified tags to a case.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCaseRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCaseRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    ResolverType m_resolverType{ResolverType::NOT_SET};
    bool m_resolverTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EngagementType m_engagementType{EngagementType::NOT_SET};
    bool m_engagementTypeHasBeenSet = false;

    Aws::Utils::DateTime m_reportedIncidentStartDate{};
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
