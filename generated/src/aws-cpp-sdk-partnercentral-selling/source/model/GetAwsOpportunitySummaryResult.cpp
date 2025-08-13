/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/GetAwsOpportunitySummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAwsOpportunitySummaryResult::GetAwsOpportunitySummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAwsOpportunitySummaryResult& GetAwsOpportunitySummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelatedOpportunityId"))
  {
    m_relatedOpportunityId = jsonValue.GetString("RelatedOpportunityId");
    m_relatedOpportunityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Origin"))
  {
    m_origin = OpportunityOriginMapper::GetOpportunityOriginForName(jsonValue.GetString("Origin"));
    m_originHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvolvementType"))
  {
    m_involvementType = SalesInvolvementTypeMapper::GetSalesInvolvementTypeForName(jsonValue.GetString("InvolvementType"));
    m_involvementTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("LifeCycle");
    m_lifeCycleHasBeenSet = true;
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
  if(jsonValue.ValueExists("Insights"))
  {
    m_insights = jsonValue.GetObject("Insights");
    m_insightsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvolvementTypeChangeReason"))
  {
    m_involvementTypeChangeReason = InvolvementTypeChangeReasonMapper::GetInvolvementTypeChangeReasonForName(jsonValue.GetString("InvolvementTypeChangeReason"));
    m_involvementTypeChangeReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelatedEntityIds"))
  {
    m_relatedEntityIds = jsonValue.GetObject("RelatedEntityIds");
    m_relatedEntityIdsHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
