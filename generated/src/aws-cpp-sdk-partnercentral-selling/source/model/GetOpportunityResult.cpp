/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/GetOpportunityResult.h>
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

GetOpportunityResult::GetOpportunityResult() : 
    m_nationalSecurity(NationalSecurity::NOT_SET),
    m_opportunityType(OpportunityType::NOT_SET)
{
}

GetOpportunityResult::GetOpportunityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetOpportunityResult()
{
  *this = result;
}

GetOpportunityResult& GetOpportunityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");

  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

  }

  if(jsonValue.ValueExists("Customer"))
  {
    m_customer = jsonValue.GetObject("Customer");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

  }

  if(jsonValue.ValueExists("LifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("LifeCycle");

  }

  if(jsonValue.ValueExists("Marketing"))
  {
    m_marketing = jsonValue.GetObject("Marketing");

  }

  if(jsonValue.ValueExists("NationalSecurity"))
  {
    m_nationalSecurity = NationalSecurityMapper::GetNationalSecurityForName(jsonValue.GetString("NationalSecurity"));

  }

  if(jsonValue.ValueExists("OpportunityTeam"))
  {
    Aws::Utils::Array<JsonView> opportunityTeamJsonList = jsonValue.GetArray("OpportunityTeam");
    for(unsigned opportunityTeamIndex = 0; opportunityTeamIndex < opportunityTeamJsonList.GetLength(); ++opportunityTeamIndex)
    {
      m_opportunityTeam.push_back(opportunityTeamJsonList[opportunityTeamIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OpportunityType"))
  {
    m_opportunityType = OpportunityTypeMapper::GetOpportunityTypeForName(jsonValue.GetString("OpportunityType"));

  }

  if(jsonValue.ValueExists("PartnerOpportunityIdentifier"))
  {
    m_partnerOpportunityIdentifier = jsonValue.GetString("PartnerOpportunityIdentifier");

  }

  if(jsonValue.ValueExists("PrimaryNeedsFromAws"))
  {
    Aws::Utils::Array<JsonView> primaryNeedsFromAwsJsonList = jsonValue.GetArray("PrimaryNeedsFromAws");
    for(unsigned primaryNeedsFromAwsIndex = 0; primaryNeedsFromAwsIndex < primaryNeedsFromAwsJsonList.GetLength(); ++primaryNeedsFromAwsIndex)
    {
      m_primaryNeedsFromAws.push_back(PrimaryNeedFromAwsMapper::GetPrimaryNeedFromAwsForName(primaryNeedsFromAwsJsonList[primaryNeedsFromAwsIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("Project"))
  {
    m_project = jsonValue.GetObject("Project");

  }

  if(jsonValue.ValueExists("RelatedEntityIdentifiers"))
  {
    m_relatedEntityIdentifiers = jsonValue.GetObject("RelatedEntityIdentifiers");

  }

  if(jsonValue.ValueExists("SoftwareRevenue"))
  {
    m_softwareRevenue = jsonValue.GetObject("SoftwareRevenue");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
