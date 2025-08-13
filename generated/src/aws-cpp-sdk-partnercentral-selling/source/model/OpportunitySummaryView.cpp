/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/OpportunitySummaryView.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

OpportunitySummaryView::OpportunitySummaryView(JsonView jsonValue)
{
  *this = jsonValue;
}

OpportunitySummaryView& OpportunitySummaryView::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpportunityType"))
  {
    m_opportunityType = OpportunityTypeMapper::GetOpportunityTypeForName(jsonValue.GetString("OpportunityType"));
    m_opportunityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("Lifecycle");
    m_lifecycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpportunityTeam"))
  {
    Aws::Utils::Array<JsonView> opportunityTeamJsonList = jsonValue.GetArray("OpportunityTeam");
    for(unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex)
    {
      m_opportunityTeam.push_back(opportunityTeamJsonList[opportunityTeamIndex].AsObject());
    }
    m_opportunityTeamHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryNeedsFromAws"))
  {
    Aws::Utils::Array<JsonView> primaryNeedsFromAwsJsonList = jsonValue.GetArray("PrimaryNeedsFromAws");
    for(unsigned primaryNeedsFromAwsIndex = 0; primaryNeedsFromAwsIndex < primaryNeedsFromAwsJsonList.GetLength(); ++primaryNeedsFromAwsIndex)
    {
      m_primaryNeedsFromAws.push_back(PrimaryNeedFromAwsMapper::GetPrimaryNeedFromAwsForName(primaryNeedsFromAwsJsonList[primaryNeedsFromAwsIndex].AsString()));
    }
    m_primaryNeedsFromAwsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Customer"))
  {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Project"))
  {
    m_project = jsonValue.GetObject("Project");
    m_projectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelatedEntityIdentifiers"))
  {
    m_relatedEntityIdentifiers = jsonValue.GetObject("RelatedEntityIdentifiers");
    m_relatedEntityIdentifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySummaryView::Jsonize() const
{
  JsonValue payload;

  if(m_opportunityTypeHasBeenSet)
  {
   payload.WithString("OpportunityType", OpportunityTypeMapper::GetNameForOpportunityType(m_opportunityType));
  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  if(m_opportunityTeamHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> opportunityTeamJsonList(m_opportunityTeam.size());
   for(unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex)
   {
     opportunityTeamJsonList[opportunityTeamIndex].AsObject(m_opportunityTeam[opportunityTeamIndex].Jsonize());
   }
   payload.WithArray("OpportunityTeam", std::move(opportunityTeamJsonList));

  }

  if(m_primaryNeedsFromAwsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> primaryNeedsFromAwsJsonList(m_primaryNeedsFromAws.size());
   for(unsigned primaryNeedsFromAwsIndex = 0; primaryNeedsFromAwsIndex < primaryNeedsFromAwsJsonList.GetLength(); ++primaryNeedsFromAwsIndex)
   {
     primaryNeedsFromAwsJsonList[primaryNeedsFromAwsIndex].AsString(PrimaryNeedFromAwsMapper::GetNameForPrimaryNeedFromAws(m_primaryNeedsFromAws[primaryNeedsFromAwsIndex]));
   }
   payload.WithArray("PrimaryNeedsFromAws", std::move(primaryNeedsFromAwsJsonList));

  }

  if(m_customerHasBeenSet)
  {
   payload.WithObject("Customer", m_customer.Jsonize());

  }

  if(m_projectHasBeenSet)
  {
   payload.WithObject("Project", m_project.Jsonize());

  }

  if(m_relatedEntityIdentifiersHasBeenSet)
  {
   payload.WithObject("RelatedEntityIdentifiers", m_relatedEntityIdentifiers.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
