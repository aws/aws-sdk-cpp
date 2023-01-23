/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ListWorkgroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkgroupsResult::ListWorkgroupsResult()
{
}

ListWorkgroupsResult::ListWorkgroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkgroupsResult& ListWorkgroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workgroups"))
  {
    Aws::Utils::Array<JsonView> workgroupsJsonList = jsonValue.GetArray("workgroups");
    for(unsigned workgroupsIndex = 0; workgroupsIndex < workgroupsJsonList.GetLength(); ++workgroupsIndex)
    {
      m_workgroups.push_back(workgroupsJsonList[workgroupsIndex].AsObject());
    }
  }



  return *this;
}
