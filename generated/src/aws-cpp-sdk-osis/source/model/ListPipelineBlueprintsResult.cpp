/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/ListPipelineBlueprintsResult.h>
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

ListPipelineBlueprintsResult::ListPipelineBlueprintsResult()
{
}

ListPipelineBlueprintsResult::ListPipelineBlueprintsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipelineBlueprintsResult& ListPipelineBlueprintsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Blueprints"))
  {
    Aws::Utils::Array<JsonView> blueprintsJsonList = jsonValue.GetArray("Blueprints");
    for(unsigned blueprintsIndex = 0; blueprintsIndex < blueprintsJsonList.GetLength(); ++blueprintsIndex)
    {
      m_blueprints.push_back(blueprintsJsonList[blueprintsIndex].AsObject());
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
