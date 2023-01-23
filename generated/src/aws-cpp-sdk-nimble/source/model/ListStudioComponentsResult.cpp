/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListStudioComponentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStudioComponentsResult::ListStudioComponentsResult()
{
}

ListStudioComponentsResult::ListStudioComponentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStudioComponentsResult& ListStudioComponentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("studioComponents"))
  {
    Aws::Utils::Array<JsonView> studioComponentsJsonList = jsonValue.GetArray("studioComponents");
    for(unsigned studioComponentsIndex = 0; studioComponentsIndex < studioComponentsJsonList.GetLength(); ++studioComponentsIndex)
    {
      m_studioComponents.push_back(studioComponentsJsonList[studioComponentsIndex].AsObject());
    }
  }



  return *this;
}
