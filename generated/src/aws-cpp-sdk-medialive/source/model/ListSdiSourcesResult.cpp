/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListSdiSourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSdiSourcesResult::ListSdiSourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSdiSourcesResult& ListSdiSourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sdiSources"))
  {
    Aws::Utils::Array<JsonView> sdiSourcesJsonList = jsonValue.GetArray("sdiSources");
    for(unsigned sdiSourcesIndex = 0; sdiSourcesIndex < sdiSourcesJsonList.GetLength(); ++sdiSourcesIndex)
    {
      m_sdiSources.push_back(sdiSourcesJsonList[sdiSourcesIndex].AsObject());
    }
    m_sdiSourcesHasBeenSet = true;
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
