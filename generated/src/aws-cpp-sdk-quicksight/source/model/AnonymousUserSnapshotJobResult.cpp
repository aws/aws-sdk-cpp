/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnonymousUserSnapshotJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AnonymousUserSnapshotJobResult::AnonymousUserSnapshotJobResult() : 
    m_fileGroupsHasBeenSet(false)
{
}

AnonymousUserSnapshotJobResult::AnonymousUserSnapshotJobResult(JsonView jsonValue) : 
    m_fileGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

AnonymousUserSnapshotJobResult& AnonymousUserSnapshotJobResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileGroups"))
  {
    Aws::Utils::Array<JsonView> fileGroupsJsonList = jsonValue.GetArray("FileGroups");
    for(unsigned fileGroupsIndex = 0; fileGroupsIndex < fileGroupsJsonList.GetLength(); ++fileGroupsIndex)
    {
      m_fileGroups.push_back(fileGroupsJsonList[fileGroupsIndex].AsObject());
    }
    m_fileGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue AnonymousUserSnapshotJobResult::Jsonize() const
{
  JsonValue payload;

  if(m_fileGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileGroupsJsonList(m_fileGroups.size());
   for(unsigned fileGroupsIndex = 0; fileGroupsIndex < fileGroupsJsonList.GetLength(); ++fileGroupsIndex)
   {
     fileGroupsJsonList[fileGroupsIndex].AsObject(m_fileGroups[fileGroupsIndex].Jsonize());
   }
   payload.WithArray("FileGroups", std::move(fileGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
