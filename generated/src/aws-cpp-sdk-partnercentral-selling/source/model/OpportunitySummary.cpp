/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/OpportunitySummary.h>
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

OpportunitySummary::OpportunitySummary(JsonView jsonValue)
{
  *this = jsonValue;
}

OpportunitySummary& OpportunitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartnerOpportunityIdentifier"))
  {
    m_partnerOpportunityIdentifier = jsonValue.GetString("PartnerOpportunityIdentifier");
    m_partnerOpportunityIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpportunityType"))
  {
    m_opportunityType = OpportunityTypeMapper::GetOpportunityTypeForName(jsonValue.GetString("OpportunityType"));
    m_opportunityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("LifeCycle");
    m_lifeCycleHasBeenSet = true;
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
  return *this;
}

JsonValue OpportunitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_partnerOpportunityIdentifierHasBeenSet)
  {
   payload.WithString("PartnerOpportunityIdentifier", m_partnerOpportunityIdentifier);

  }

  if(m_opportunityTypeHasBeenSet)
  {
   payload.WithString("OpportunityType", OpportunityTypeMapper::GetNameForOpportunityType(m_opportunityType));
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lifeCycleHasBeenSet)
  {
   payload.WithObject("LifeCycle", m_lifeCycle.Jsonize());

  }

  if(m_customerHasBeenSet)
  {
   payload.WithObject("Customer", m_customer.Jsonize());

  }

  if(m_projectHasBeenSet)
  {
   payload.WithObject("Project", m_project.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
