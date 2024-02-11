/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/LoaderIdResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

LoaderIdResult::LoaderIdResult() : 
    m_loadIdsHasBeenSet(false)
{
}

LoaderIdResult::LoaderIdResult(JsonView jsonValue) : 
    m_loadIdsHasBeenSet(false)
{
  *this = jsonValue;
}

LoaderIdResult& LoaderIdResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("loadIds"))
  {
    Aws::Utils::Array<JsonView> loadIdsJsonList = jsonValue.GetArray("loadIds");
    for(unsigned loadIdsIndex = 0; loadIdsIndex < loadIdsJsonList.GetLength(); ++loadIdsIndex)
    {
      m_loadIds.push_back(loadIdsJsonList[loadIdsIndex].AsString());
    }
    m_loadIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoaderIdResult::Jsonize() const
{
  JsonValue payload;

  if(m_loadIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loadIdsJsonList(m_loadIds.size());
   for(unsigned loadIdsIndex = 0; loadIdsIndex < loadIdsJsonList.GetLength(); ++loadIdsIndex)
   {
     loadIdsJsonList[loadIdsIndex].AsString(m_loadIds[loadIdsIndex]);
   }
   payload.WithArray("loadIds", std::move(loadIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
