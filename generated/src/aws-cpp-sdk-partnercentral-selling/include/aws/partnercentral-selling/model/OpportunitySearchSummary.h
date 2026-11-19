/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySearchAwsSummary.h>
#include <aws/partnercentral-selling/model/OpportunitySearchCustomer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchLifeCycle.h>
#include <aws/partnercentral-selling/model/OpportunitySearchProject.h>
#include <aws/partnercentral-selling/model/OpportunitySearchRelatedEntityIdentifiers.h>
#include <aws/partnercentral-selling/model/OpportunitySearchTeamMember.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
#include <aws/partnercentral-selling/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>A curated summary view of an opportunity returned by a search. It holds the
 * fields needed to render a search result row, take action, and run follow-up
 * filters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchSummary">AWS
 * API Reference</a></p>
 */
class OpportunitySearchSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchSummary() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The read-only, system-generated unique identifier of the opportunity.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  OpportunitySearchSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the opportunity was last modified, in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  OpportunitySearchSummary& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the opportunity was created, in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  OpportunitySearchSummary& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the opportunity is a new business opportunity, a renewal,
   * or an expansion.</p>
   */
  inline OpportunityType GetOpportunityType() const { return m_opportunityType; }
  inline bool OpportunityTypeHasBeenSet() const { return m_opportunityTypeHasBeenSet; }
  inline void SetOpportunityType(OpportunityType value) {
    m_opportunityTypeHasBeenSet = true;
    m_opportunityType = value;
  }
  inline OpportunitySearchSummary& WithOpportunityType(OpportunityType value) {
    SetOpportunityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the opportunity in your customer relationship
   * management (CRM) system. This value lets you link the opportunity to your
   * CRM.</p>
   */
  inline const Aws::String& GetPartnerOpportunityIdentifier() const { return m_partnerOpportunityIdentifier; }
  inline bool PartnerOpportunityIdentifierHasBeenSet() const { return m_partnerOpportunityIdentifierHasBeenSet; }
  template <typename PartnerOpportunityIdentifierT = Aws::String>
  void SetPartnerOpportunityIdentifier(PartnerOpportunityIdentifierT&& value) {
    m_partnerOpportunityIdentifierHasBeenSet = true;
    m_partnerOpportunityIdentifier = std::forward<PartnerOpportunityIdentifierT>(value);
  }
  template <typename PartnerOpportunityIdentifierT = Aws::String>
  OpportunitySearchSummary& WithPartnerOpportunityIdentifier(PartnerOpportunityIdentifierT&& value) {
    SetPartnerOpportunityIdentifier(std::forward<PartnerOpportunityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A curated lifecycle view: review status, stage, next steps, and target close
   * date.</p>
   */
  inline const OpportunitySearchLifeCycle& GetLifeCycle() const { return m_lifeCycle; }
  inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
  template <typename LifeCycleT = OpportunitySearchLifeCycle>
  void SetLifeCycle(LifeCycleT&& value) {
    m_lifeCycleHasBeenSet = true;
    m_lifeCycle = std::forward<LifeCycleT>(value);
  }
  template <typename LifeCycleT = OpportunitySearchLifeCycle>
  OpportunitySearchSummary& WithLifeCycle(LifeCycleT&& value) {
    SetLifeCycle(std::forward<LifeCycleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A curated customer view: company name, industry, AWS account, and
   * country.</p>
   */
  inline const OpportunitySearchCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = OpportunitySearchCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = OpportunitySearchCustomer>
  OpportunitySearchSummary& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A curated project view: title, AWS Partner Network (APN) programs, and
   * expected customer spend.</p>
   */
  inline const OpportunitySearchProject& GetProject() const { return m_project; }
  inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
  template <typename ProjectT = OpportunitySearchProject>
  void SetProject(ProjectT&& value) {
    m_projectHasBeenSet = true;
    m_project = std::forward<ProjectT>(value);
  }
  template <typename ProjectT = OpportunitySearchProject>
  OpportunitySearchSummary& WithProject(ProjectT&& value) {
    SetProject(std::forward<ProjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the opportunity, returned as key-value pairs.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  OpportunitySearchSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  OpportunitySearchSummary& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Curated related-entity identifiers surfaced in search: AWS Marketplace
   * offers, offer sets, and solutions.</p>
   */
  inline const OpportunitySearchRelatedEntityIdentifiers& GetRelatedEntityIdentifiers() const { return m_relatedEntityIdentifiers; }
  inline bool RelatedEntityIdentifiersHasBeenSet() const { return m_relatedEntityIdentifiersHasBeenSet; }
  template <typename RelatedEntityIdentifiersT = OpportunitySearchRelatedEntityIdentifiers>
  void SetRelatedEntityIdentifiers(RelatedEntityIdentifiersT&& value) {
    m_relatedEntityIdentifiersHasBeenSet = true;
    m_relatedEntityIdentifiers = std::forward<RelatedEntityIdentifiersT>(value);
  }
  template <typename RelatedEntityIdentifiersT = OpportunitySearchRelatedEntityIdentifiers>
  OpportunitySearchSummary& WithRelatedEntityIdentifiers(RelatedEntityIdentifiersT&& value) {
    SetRelatedEntityIdentifiers(std::forward<RelatedEntityIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The opportunity owner and team members. Search results include only each
   * member's name and business title, and exclude contact email and phone.</p>
   */
  inline const Aws::Vector<OpportunitySearchTeamMember>& GetOpportunityTeam() const { return m_opportunityTeam; }
  inline bool OpportunityTeamHasBeenSet() const { return m_opportunityTeamHasBeenSet; }
  template <typename OpportunityTeamT = Aws::Vector<OpportunitySearchTeamMember>>
  void SetOpportunityTeam(OpportunityTeamT&& value) {
    m_opportunityTeamHasBeenSet = true;
    m_opportunityTeam = std::forward<OpportunityTeamT>(value);
  }
  template <typename OpportunityTeamT = Aws::Vector<OpportunitySearchTeamMember>>
  OpportunitySearchSummary& WithOpportunityTeam(OpportunityTeamT&& value) {
    SetOpportunityTeam(std::forward<OpportunityTeamT>(value));
    return *this;
  }
  template <typename OpportunityTeamT = OpportunitySearchTeamMember>
  OpportunitySearchSummary& AddOpportunityTeam(OpportunityTeamT&& value) {
    m_opportunityTeamHasBeenSet = true;
    m_opportunityTeam.emplace_back(std::forward<OpportunityTeamT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS-side view of this opportunity. Absent when no AWS opportunity summary
   * record exists yet.</p>
   */
  inline const OpportunitySearchAwsSummary& GetAwsOpportunitySummary() const { return m_awsOpportunitySummary; }
  inline bool AwsOpportunitySummaryHasBeenSet() const { return m_awsOpportunitySummaryHasBeenSet; }
  template <typename AwsOpportunitySummaryT = OpportunitySearchAwsSummary>
  void SetAwsOpportunitySummary(AwsOpportunitySummaryT&& value) {
    m_awsOpportunitySummaryHasBeenSet = true;
    m_awsOpportunitySummary = std::forward<AwsOpportunitySummaryT>(value);
  }
  template <typename AwsOpportunitySummaryT = OpportunitySearchAwsSummary>
  OpportunitySearchSummary& WithAwsOpportunitySummary(AwsOpportunitySummaryT&& value) {
    SetAwsOpportunitySummary(std::forward<AwsOpportunitySummaryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::Utils::DateTime m_lastModifiedDate{};

  Aws::Utils::DateTime m_createdDate{};

  OpportunityType m_opportunityType{OpportunityType::NOT_SET};

  Aws::String m_partnerOpportunityIdentifier;

  OpportunitySearchLifeCycle m_lifeCycle;

  OpportunitySearchCustomer m_customer;

  OpportunitySearchProject m_project;

  Aws::Vector<Tag> m_tags;

  OpportunitySearchRelatedEntityIdentifiers m_relatedEntityIdentifiers;

  Aws::Vector<OpportunitySearchTeamMember> m_opportunityTeam;

  OpportunitySearchAwsSummary m_awsOpportunitySummary;
  bool m_idHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_opportunityTypeHasBeenSet = false;
  bool m_partnerOpportunityIdentifierHasBeenSet = false;
  bool m_lifeCycleHasBeenSet = false;
  bool m_customerHasBeenSet = false;
  bool m_projectHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_relatedEntityIdentifiersHasBeenSet = false;
  bool m_opportunityTeamHasBeenSet = false;
  bool m_awsOpportunitySummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
