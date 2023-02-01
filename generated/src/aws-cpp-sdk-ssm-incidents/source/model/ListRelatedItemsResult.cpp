/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ListRelatedItemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRelatedItemsResult::ListRelatedItemsResult()
{
}

ListRelatedItemsResult::ListRelatedItemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRelatedItemsResult& ListRelatedItemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("relatedItems"))
  {
    Aws::Utils::Array<JsonView> relatedItemsJsonList = jsonValue.GetArray("relatedItems");
    for(unsigned relatedItemsIndex = 0; relatedItemsIndex < relatedItemsJsonList.GetLength(); ++relatedItemsIndex)
    {
      m_relatedItems.push_back(relatedItemsJsonList[relatedItemsIndex].AsObject());
    }
  }



  return *this;
}
