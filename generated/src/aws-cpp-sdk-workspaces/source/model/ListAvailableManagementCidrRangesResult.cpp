/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ListAvailableManagementCidrRangesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAvailableManagementCidrRangesResult::ListAvailableManagementCidrRangesResult()
{
}

ListAvailableManagementCidrRangesResult::ListAvailableManagementCidrRangesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAvailableManagementCidrRangesResult& ListAvailableManagementCidrRangesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ManagementCidrRanges"))
  {
    Aws::Utils::Array<JsonView> managementCidrRangesJsonList = jsonValue.GetArray("ManagementCidrRanges");
    for(unsigned managementCidrRangesIndex = 0; managementCidrRangesIndex < managementCidrRangesJsonList.GetLength(); ++managementCidrRangesIndex)
    {
      m_managementCidrRanges.push_back(managementCidrRangesJsonList[managementCidrRangesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
