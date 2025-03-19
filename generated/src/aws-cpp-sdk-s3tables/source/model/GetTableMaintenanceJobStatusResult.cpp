/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/GetTableMaintenanceJobStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTableMaintenanceJobStatusResult::GetTableMaintenanceJobStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTableMaintenanceJobStatusResult& GetTableMaintenanceJobStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tableARN"))
  {
    m_tableARN = jsonValue.GetString("tableARN");
    m_tableARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    Aws::Map<Aws::String, JsonView> statusJsonMap = jsonValue.GetObject("status").GetAllObjects();
    for(auto& statusItem : statusJsonMap)
    {
      m_status[TableMaintenanceJobTypeMapper::GetTableMaintenanceJobTypeForName(statusItem.first)] = statusItem.second.AsObject();
    }
    m_statusHasBeenSet = true;
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
