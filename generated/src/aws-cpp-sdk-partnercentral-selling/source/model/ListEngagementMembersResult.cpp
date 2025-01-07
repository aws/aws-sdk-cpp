﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListEngagementMembersResult.h>
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

ListEngagementMembersResult::ListEngagementMembersResult()
{
}

ListEngagementMembersResult::ListEngagementMembersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEngagementMembersResult& ListEngagementMembersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EngagementMemberList"))
  {
    Aws::Utils::Array<JsonView> engagementMemberListJsonList = jsonValue.GetArray("EngagementMemberList");
    for(unsigned engagementMemberListIndex = 0; engagementMemberListIndex < engagementMemberListJsonList.GetLength(); ++engagementMemberListIndex)
    {
      m_engagementMemberList.push_back(engagementMemberListJsonList[engagementMemberListIndex].AsObject());
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
