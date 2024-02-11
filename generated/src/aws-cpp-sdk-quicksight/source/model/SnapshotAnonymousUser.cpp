/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotAnonymousUser.h>
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

SnapshotAnonymousUser::SnapshotAnonymousUser() : 
    m_rowLevelPermissionTagsHasBeenSet(false)
{
}

SnapshotAnonymousUser::SnapshotAnonymousUser(JsonView jsonValue) : 
    m_rowLevelPermissionTagsHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotAnonymousUser& SnapshotAnonymousUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RowLevelPermissionTags"))
  {
    Aws::Utils::Array<JsonView> rowLevelPermissionTagsJsonList = jsonValue.GetArray("RowLevelPermissionTags");
    for(unsigned rowLevelPermissionTagsIndex = 0; rowLevelPermissionTagsIndex < rowLevelPermissionTagsJsonList.GetLength(); ++rowLevelPermissionTagsIndex)
    {
      m_rowLevelPermissionTags.push_back(rowLevelPermissionTagsJsonList[rowLevelPermissionTagsIndex].AsObject());
    }
    m_rowLevelPermissionTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotAnonymousUser::Jsonize() const
{
  JsonValue payload;

  if(m_rowLevelPermissionTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowLevelPermissionTagsJsonList(m_rowLevelPermissionTags.size());
   for(unsigned rowLevelPermissionTagsIndex = 0; rowLevelPermissionTagsIndex < rowLevelPermissionTagsJsonList.GetLength(); ++rowLevelPermissionTagsIndex)
   {
     rowLevelPermissionTagsJsonList[rowLevelPermissionTagsIndex].AsObject(m_rowLevelPermissionTags[rowLevelPermissionTagsIndex].Jsonize());
   }
   payload.WithArray("RowLevelPermissionTags", std::move(rowLevelPermissionTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
