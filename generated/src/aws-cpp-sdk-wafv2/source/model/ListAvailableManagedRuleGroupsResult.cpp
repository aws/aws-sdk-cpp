﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ListAvailableManagedRuleGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAvailableManagedRuleGroupsResult::ListAvailableManagedRuleGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAvailableManagedRuleGroupsResult& ListAvailableManagedRuleGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedRuleGroups"))
  {
    Aws::Utils::Array<JsonView> managedRuleGroupsJsonList = jsonValue.GetArray("ManagedRuleGroups");
    for(unsigned managedRuleGroupsIndex = 0; managedRuleGroupsIndex < managedRuleGroupsJsonList.GetLength(); ++managedRuleGroupsIndex)
    {
      m_managedRuleGroups.push_back(managedRuleGroupsJsonList[managedRuleGroupsIndex].AsObject());
    }
    m_managedRuleGroupsHasBeenSet = true;
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
