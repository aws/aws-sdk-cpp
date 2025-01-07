﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListEngagementResourceAssociationsResult.h>
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

ListEngagementResourceAssociationsResult::ListEngagementResourceAssociationsResult()
{
}

ListEngagementResourceAssociationsResult::ListEngagementResourceAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEngagementResourceAssociationsResult& ListEngagementResourceAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EngagementResourceAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> engagementResourceAssociationSummariesJsonList = jsonValue.GetArray("EngagementResourceAssociationSummaries");
    for(unsigned engagementResourceAssociationSummariesIndex = 0; engagementResourceAssociationSummariesIndex < engagementResourceAssociationSummariesJsonList.GetLength(); ++engagementResourceAssociationSummariesIndex)
    {
      m_engagementResourceAssociationSummaries.push_back(engagementResourceAssociationSummariesJsonList[engagementResourceAssociationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
