/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListInventoryEntriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInventoryEntriesResult::ListInventoryEntriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInventoryEntriesResult& ListInventoryEntriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");
    m_typeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");
    m_schemaVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CaptureTime"))
  {
    m_captureTime = jsonValue.GetString("CaptureTime");
    m_captureTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Entries"))
  {
    Aws::Utils::Array<JsonView> entriesJsonList = jsonValue.GetArray("Entries");
    for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
    {
      Aws::Map<Aws::String, JsonView> inventoryItemEntryJsonMap = entriesJsonList[entriesIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> inventoryItemEntryMap;
      for(auto& inventoryItemEntryItem : inventoryItemEntryJsonMap)
      {
        inventoryItemEntryMap[inventoryItemEntryItem.first] = inventoryItemEntryItem.second.AsString();
      }
      m_entries.push_back(std::move(inventoryItemEntryMap));
    }
    m_entriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
