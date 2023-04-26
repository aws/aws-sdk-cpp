/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/GetPipelineChangeProgressResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OSIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPipelineChangeProgressResult::GetPipelineChangeProgressResult()
{
}

GetPipelineChangeProgressResult::GetPipelineChangeProgressResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPipelineChangeProgressResult& GetPipelineChangeProgressResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChangeProgressStatuses"))
  {
    Aws::Utils::Array<JsonView> changeProgressStatusesJsonList = jsonValue.GetArray("ChangeProgressStatuses");
    for(unsigned changeProgressStatusesIndex = 0; changeProgressStatusesIndex < changeProgressStatusesJsonList.GetLength(); ++changeProgressStatusesIndex)
    {
      m_changeProgressStatuses.push_back(changeProgressStatusesJsonList[changeProgressStatusesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
