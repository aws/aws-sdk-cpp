/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ListOpenWorkflowExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOpenWorkflowExecutionsResult::ListOpenWorkflowExecutionsResult()
{
}

ListOpenWorkflowExecutionsResult::ListOpenWorkflowExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOpenWorkflowExecutionsResult& ListOpenWorkflowExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("executionInfos"))
  {
    Aws::Utils::Array<JsonView> executionInfosJsonList = jsonValue.GetArray("executionInfos");
    for(unsigned executionInfosIndex = 0; executionInfosIndex < executionInfosJsonList.GetLength(); ++executionInfosIndex)
    {
      m_executionInfos.push_back(executionInfosJsonList[executionInfosIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
