/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ListWorkflowTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkflowTypesResult::ListWorkflowTypesResult()
{
}

ListWorkflowTypesResult::ListWorkflowTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkflowTypesResult& ListWorkflowTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("typeInfos"))
  {
    Aws::Utils::Array<JsonView> typeInfosJsonList = jsonValue.GetArray("typeInfos");
    for(unsigned typeInfosIndex = 0; typeInfosIndex < typeInfosJsonList.GetLength(); ++typeInfosIndex)
    {
      m_typeInfos.push_back(typeInfosJsonList[typeInfosIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
