/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ListTableRestoreStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTableRestoreStatusResult::ListTableRestoreStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTableRestoreStatusResult& ListTableRestoreStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableRestoreStatuses"))
  {
    Aws::Utils::Array<JsonView> tableRestoreStatusesJsonList = jsonValue.GetArray("tableRestoreStatuses");
    for(unsigned tableRestoreStatusesIndex = 0; tableRestoreStatusesIndex < tableRestoreStatusesJsonList.GetLength(); ++tableRestoreStatusesIndex)
    {
      m_tableRestoreStatuses.push_back(tableRestoreStatusesJsonList[tableRestoreStatusesIndex].AsObject());
    }
    m_tableRestoreStatusesHasBeenSet = true;
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
