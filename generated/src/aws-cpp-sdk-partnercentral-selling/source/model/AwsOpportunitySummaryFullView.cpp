/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsOpportunitySummaryFullView.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsOpportunitySummaryFullView::AwsOpportunitySummaryFullView(JsonView jsonValue) { *this = jsonValue; }

AwsOpportunitySummaryFullView& AwsOpportunitySummaryFullView::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RelatedOpportunityId")) {
    m_relatedOpportunityId = jsonValue.GetString("RelatedOpportunityId");
    m_relatedOpportunityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Origin")) {
    m_origin = OpportunityOriginMapper::GetOpportunityOriginForName(jsonValue.GetString("Origin"));
    m_originHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvolvementType")) {
    m_involvementType = SalesInvolvementTypeMapper::GetSalesInvolvementTypeForName(jsonValue.GetString("InvolvementType"));
    m_involvementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Visibility")) {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LifeCycle")) {
    m_lifeCycle = jsonValue.GetObject("LifeCycle");
    m_lifeCycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpportunityTeam")) {
    Aws::Utils::Array<JsonView> opportunityTeamJsonList = jsonValue.GetArray("OpportunityTeam");
    for (unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex) {
      m_opportunityTeam.push_back(opportunityTeamJsonList[opportunityTeamIndex].AsObject());
    }
    m_opportunityTeamHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Insights")) {
    m_insights = jsonValue.GetObject("Insights");
    m_insightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvolvementTypeChangeReason")) {
    m_involvementTypeChangeReason =
        InvolvementTypeChangeReasonMapper::GetInvolvementTypeChangeReasonForName(jsonValue.GetString("InvolvementTypeChangeReason"));
    m_involvementTypeChangeReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RelatedEntityIds")) {
    m_relatedEntityIds = jsonValue.GetObject("RelatedEntityIds");
    m_relatedEntityIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Customer")) {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Project")) {
    m_project = jsonValue.GetObject("Project");
    m_projectHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsOpportunitySummaryFullView::Jsonize() const {
  JsonValue payload;

  if (m_relatedOpportunityIdHasBeenSet) {
    payload.WithString("RelatedOpportunityId", m_relatedOpportunityId);
  }

  if (m_originHasBeenSet) {
    payload.WithString("Origin", OpportunityOriginMapper::GetNameForOpportunityOrigin(m_origin));
  }

  if (m_involvementTypeHasBeenSet) {
    payload.WithString("InvolvementType", SalesInvolvementTypeMapper::GetNameForSalesInvolvementType(m_involvementType));
  }

  if (m_visibilityHasBeenSet) {
    payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if (m_lifeCycleHasBeenSet) {
    payload.WithObject("LifeCycle", m_lifeCycle.Jsonize());
  }

  if (m_opportunityTeamHasBeenSet) {
    Aws::Utils::Array<JsonValue> opportunityTeamJsonList(m_opportunityTeam.size());
    for (unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex) {
      opportunityTeamJsonList[opportunityTeamIndex].AsObject(m_opportunityTeam[opportunityTeamIndex].Jsonize());
    }
    payload.WithArray("OpportunityTeam", std::move(opportunityTeamJsonList));
  }

  if (m_insightsHasBeenSet) {
    payload.WithObject("Insights", m_insights.Jsonize());
  }

  if (m_involvementTypeChangeReasonHasBeenSet) {
    payload.WithString("InvolvementTypeChangeReason",
                       InvolvementTypeChangeReasonMapper::GetNameForInvolvementTypeChangeReason(m_involvementTypeChangeReason));
  }

  if (m_relatedEntityIdsHasBeenSet) {
    payload.WithObject("RelatedEntityIds", m_relatedEntityIds.Jsonize());
  }

  if (m_customerHasBeenSet) {
    payload.WithObject("Customer", m_customer.Jsonize());
  }

  if (m_projectHasBeenSet) {
    payload.WithObject("Project", m_project.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
