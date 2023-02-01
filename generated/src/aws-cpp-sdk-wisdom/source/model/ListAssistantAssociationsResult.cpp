/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/ListAssistantAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssistantAssociationsResult::ListAssistantAssociationsResult()
{
}

ListAssistantAssociationsResult::ListAssistantAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssistantAssociationsResult& ListAssistantAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assistantAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> assistantAssociationSummariesJsonList = jsonValue.GetArray("assistantAssociationSummaries");
    for(unsigned assistantAssociationSummariesIndex = 0; assistantAssociationSummariesIndex < assistantAssociationSummariesJsonList.GetLength(); ++assistantAssociationSummariesIndex)
    {
      m_assistantAssociationSummaries.push_back(assistantAssociationSummariesJsonList[assistantAssociationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
