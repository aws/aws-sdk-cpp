/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListWorldTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorldTemplatesResult::ListWorldTemplatesResult()
{
}

ListWorldTemplatesResult::ListWorldTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorldTemplatesResult& ListWorldTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("templateSummaries"))
  {
    Aws::Utils::Array<JsonView> templateSummariesJsonList = jsonValue.GetArray("templateSummaries");
    for(unsigned templateSummariesIndex = 0; templateSummariesIndex < templateSummariesJsonList.GetLength(); ++templateSummariesIndex)
    {
      m_templateSummaries.push_back(templateSummariesJsonList[templateSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
