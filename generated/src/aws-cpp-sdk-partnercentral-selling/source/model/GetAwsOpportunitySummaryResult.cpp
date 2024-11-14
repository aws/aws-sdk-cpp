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

GetAwsOpportunitySummaryResult::GetAwsOpportunitySummaryResult() : 
    m_involvementType(SalesInvolvementType::NOT_SET),
    m_involvementTypeChangeReason(InvolvementTypeChangeReason::NOT_SET),
    m_origin(OpportunityOrigin::NOT_SET),
    m_visibility(Visibility::NOT_SET)
{
}

GetAwsOpportunitySummaryResult::GetAwsOpportunitySummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetAwsOpportunitySummaryResult()
{
  *this = result;
}

GetAwsOpportunitySummaryResult& GetAwsOpportunitySummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");

  }

  if(jsonValue.ValueExists("Customer"))
  {
    m_customer = jsonValue.GetObject("Customer");

  }

  if(jsonValue.ValueExists("Insights"))
  {
    m_insights = jsonValue.GetObject("Insights");

  }

  if(jsonValue.ValueExists("InvolvementType"))
  {
    m_involvementType = SalesInvolvementTypeMapper::GetSalesInvolvementTypeForName(jsonValue.GetString("InvolvementType"));

  }

  if(jsonValue.ValueExists("InvolvementTypeChangeReason"))
  {
    m_involvementTypeChangeReason = InvolvementTypeChangeReasonMapper::GetInvolvementTypeChangeReasonForName(jsonValue.GetString("InvolvementTypeChangeReason"));

  }

  if(jsonValue.ValueExists("LifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("LifeCycle");

  }

  if(jsonValue.ValueExists("OpportunityTeam"))
  {
    Aws::Utils::Array<JsonView> opportunityTeamJsonList = jsonValue.GetArray("OpportunityTeam");
    for(unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex)
    {
      m_opportunityTeam.push_back(opportunityTeamJsonList[opportunityTeamIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Origin"))
  {
    m_origin = OpportunityOriginMapper::GetOpportunityOriginForName(jsonValue.GetString("Origin"));

  }

  if(jsonValue.ValueExists("Project"))
  {
    m_project = jsonValue.GetObject("Project");

  }

  if(jsonValue.ValueExists("RelatedEntityIds"))
  {
    m_relatedEntityIds = jsonValue.GetObject("RelatedEntityIds");

  }

  if(jsonValue.ValueExists("RelatedOpportunityId"))
  {
    m_relatedOpportunityId = jsonValue.GetString("RelatedOpportunityId");

  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
