/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/ListKnowledgeBasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKnowledgeBasesResult::ListKnowledgeBasesResult()
{
}

ListKnowledgeBasesResult::ListKnowledgeBasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListKnowledgeBasesResult& ListKnowledgeBasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("knowledgeBaseSummaries"))
  {
    Aws::Utils::Array<JsonView> knowledgeBaseSummariesJsonList = jsonValue.GetArray("knowledgeBaseSummaries");
    for(unsigned knowledgeBaseSummariesIndex = 0; knowledgeBaseSummariesIndex < knowledgeBaseSummariesJsonList.GetLength(); ++knowledgeBaseSummariesIndex)
    {
      m_knowledgeBaseSummaries.push_back(knowledgeBaseSummariesJsonList[knowledgeBaseSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
