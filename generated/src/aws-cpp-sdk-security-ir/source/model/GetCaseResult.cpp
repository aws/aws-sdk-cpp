/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/GetCaseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCaseResult::GetCaseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCaseResult& GetCaseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("caseArn"))
  {
    m_caseArn = jsonValue.GetString("caseArn");
    m_caseArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("caseStatus"))
  {
    m_caseStatus = CaseStatusMapper::GetCaseStatusForName(jsonValue.GetString("caseStatus"));
    m_caseStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engagementType"))
  {
    m_engagementType = EngagementTypeMapper::GetEngagementTypeForName(jsonValue.GetString("engagementType"));
    m_engagementTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reportedIncidentStartDate"))
  {
    m_reportedIncidentStartDate = jsonValue.GetDouble("reportedIncidentStartDate");
    m_reportedIncidentStartDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actualIncidentStartDate"))
  {
    m_actualIncidentStartDate = jsonValue.GetDouble("actualIncidentStartDate");
    m_actualIncidentStartDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("impactedAwsRegions"))
  {
    Aws::Utils::Array<JsonView> impactedAwsRegionsJsonList = jsonValue.GetArray("impactedAwsRegions");
    for(unsigned impactedAwsRegionsIndex = 0; impactedAwsRegionsIndex < impactedAwsRegionsJsonList.GetLength(); ++impactedAwsRegionsIndex)
    {
      m_impactedAwsRegions.push_back(impactedAwsRegionsJsonList[impactedAwsRegionsIndex].AsObject());
    }
    m_impactedAwsRegionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("threatActorIpAddresses"))
  {
    Aws::Utils::Array<JsonView> threatActorIpAddressesJsonList = jsonValue.GetArray("threatActorIpAddresses");
    for(unsigned threatActorIpAddressesIndex = 0; threatActorIpAddressesIndex < threatActorIpAddressesJsonList.GetLength(); ++threatActorIpAddressesIndex)
    {
      m_threatActorIpAddresses.push_back(threatActorIpAddressesJsonList[threatActorIpAddressesIndex].AsObject());
    }
    m_threatActorIpAddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingAction"))
  {
    m_pendingAction = PendingActionMapper::GetPendingActionForName(jsonValue.GetString("pendingAction"));
    m_pendingActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("impactedAccounts"))
  {
    Aws::Utils::Array<JsonView> impactedAccountsJsonList = jsonValue.GetArray("impactedAccounts");
    for(unsigned impactedAccountsIndex = 0; impactedAccountsIndex < impactedAccountsJsonList.GetLength(); ++impactedAccountsIndex)
    {
      m_impactedAccounts.push_back(impactedAccountsJsonList[impactedAccountsIndex].AsString());
    }
    m_impactedAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("watchers"))
  {
    Aws::Utils::Array<JsonView> watchersJsonList = jsonValue.GetArray("watchers");
    for(unsigned watchersIndex = 0; watchersIndex < watchersJsonList.GetLength(); ++watchersIndex)
    {
      m_watchers.push_back(watchersJsonList[watchersIndex].AsObject());
    }
    m_watchersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");
    m_lastUpdatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("closureCode"))
  {
    m_closureCode = ClosureCodeMapper::GetClosureCodeForName(jsonValue.GetString("closureCode"));
    m_closureCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolverType"))
  {
    m_resolverType = ResolverTypeMapper::GetResolverTypeForName(jsonValue.GetString("resolverType"));
    m_resolverTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("impactedServices"))
  {
    Aws::Utils::Array<JsonView> impactedServicesJsonList = jsonValue.GetArray("impactedServices");
    for(unsigned impactedServicesIndex = 0; impactedServicesIndex < impactedServicesJsonList.GetLength(); ++impactedServicesIndex)
    {
      m_impactedServices.push_back(impactedServicesJsonList[impactedServicesIndex].AsString());
    }
    m_impactedServicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("caseAttachments"))
  {
    Aws::Utils::Array<JsonView> caseAttachmentsJsonList = jsonValue.GetArray("caseAttachments");
    for(unsigned caseAttachmentsIndex = 0; caseAttachmentsIndex < caseAttachmentsJsonList.GetLength(); ++caseAttachmentsIndex)
    {
      m_caseAttachments.push_back(caseAttachmentsJsonList[caseAttachmentsIndex].AsObject());
    }
    m_caseAttachmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("closedDate"))
  {
    m_closedDate = jsonValue.GetDouble("closedDate");
    m_closedDateHasBeenSet = true;
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
