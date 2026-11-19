/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchSummary::OpportunitySearchSummary(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchSummary& OpportunitySearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedDate")) {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedDate")) {
    m_createdDate = jsonValue.GetString("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpportunityType")) {
    m_opportunityType = OpportunityTypeMapper::GetOpportunityTypeForName(jsonValue.GetString("OpportunityType"));
    m_opportunityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartnerOpportunityIdentifier")) {
    m_partnerOpportunityIdentifier = jsonValue.GetString("PartnerOpportunityIdentifier");
    m_partnerOpportunityIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LifeCycle")) {
    m_lifeCycle = jsonValue.GetObject("LifeCycle");
    m_lifeCycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Customer")) {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Project")) {
    m_project = jsonValue.GetObject("Project");
    m_projectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RelatedEntityIdentifiers")) {
    m_relatedEntityIdentifiers = jsonValue.GetObject("RelatedEntityIdentifiers");
    m_relatedEntityIdentifiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpportunityTeam")) {
    Aws::Utils::Array<JsonView> opportunityTeamJsonList = jsonValue.GetArray("OpportunityTeam");
    for (unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex) {
      m_opportunityTeam.push_back(opportunityTeamJsonList[opportunityTeamIndex].AsObject());
    }
    m_opportunityTeamHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsOpportunitySummary")) {
    m_awsOpportunitySummary = jsonValue.GetObject("AwsOpportunitySummary");
    m_awsOpportunitySummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_lastModifiedDateHasBeenSet) {
    payload.WithString("LastModifiedDate", m_lastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_createdDateHasBeenSet) {
    payload.WithString("CreatedDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_opportunityTypeHasBeenSet) {
    payload.WithString("OpportunityType", OpportunityTypeMapper::GetNameForOpportunityType(m_opportunityType));
  }

  if (m_partnerOpportunityIdentifierHasBeenSet) {
    payload.WithString("PartnerOpportunityIdentifier", m_partnerOpportunityIdentifier);
  }

  if (m_lifeCycleHasBeenSet) {
    payload.WithObject("LifeCycle", m_lifeCycle.Jsonize());
  }

  if (m_customerHasBeenSet) {
    payload.WithObject("Customer", m_customer.Jsonize());
  }

  if (m_projectHasBeenSet) {
    payload.WithObject("Project", m_project.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_relatedEntityIdentifiersHasBeenSet) {
    payload.WithObject("RelatedEntityIdentifiers", m_relatedEntityIdentifiers.Jsonize());
  }

  if (m_opportunityTeamHasBeenSet) {
    Aws::Utils::Array<JsonValue> opportunityTeamJsonList(m_opportunityTeam.size());
    for (unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex) {
      opportunityTeamJsonList[opportunityTeamIndex].AsObject(m_opportunityTeam[opportunityTeamIndex].Jsonize());
    }
    payload.WithArray("OpportunityTeam", std::move(opportunityTeamJsonList));
  }

  if (m_awsOpportunitySummaryHasBeenSet) {
    payload.WithObject("AwsOpportunitySummary", m_awsOpportunitySummary.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
