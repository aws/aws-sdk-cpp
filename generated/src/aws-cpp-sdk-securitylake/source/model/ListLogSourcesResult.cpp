/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/ListLogSourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLogSourcesResult::ListLogSourcesResult()
{
}

ListLogSourcesResult::ListLogSourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLogSourcesResult& ListLogSourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("regionSourceTypesAccountsList"))
  {
    Aws::Utils::Array<JsonView> regionSourceTypesAccountsListJsonList = jsonValue.GetArray("regionSourceTypesAccountsList");
    for(unsigned regionSourceTypesAccountsListIndex = 0; regionSourceTypesAccountsListIndex < regionSourceTypesAccountsListJsonList.GetLength(); ++regionSourceTypesAccountsListIndex)
    {
      Aws::Map<Aws::String, JsonView> allDimensionsMapJsonMap = regionSourceTypesAccountsListJsonList[regionSourceTypesAccountsListIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> allDimensionsMapMap;
      for(auto& allDimensionsMapItem : allDimensionsMapJsonMap)
      {
        Aws::Map<Aws::String, JsonView> twoDimensionsMapJsonMap = allDimensionsMapItem.second.GetAllObjects();
        Aws::Map<Aws::String, Aws::Vector<Aws::String>> twoDimensionsMapMap;
        for(auto& twoDimensionsMapItem : twoDimensionsMapJsonMap)
        {
          Aws::Utils::Array<JsonView> valueSetJsonList = twoDimensionsMapItem.second.AsArray();
          Aws::Vector<Aws::String> valueSetList;
          valueSetList.reserve((size_t)valueSetJsonList.GetLength());
          for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
          {
            valueSetList.push_back(valueSetJsonList[valueSetIndex].AsString());
          }
          twoDimensionsMapMap[twoDimensionsMapItem.first] = std::move(valueSetList);
        }
        allDimensionsMapMap[allDimensionsMapItem.first] = std::move(twoDimensionsMapMap);
      }
      m_regionSourceTypesAccountsList.push_back(std::move(allDimensionsMapMap));
    }
  }



  return *this;
}
