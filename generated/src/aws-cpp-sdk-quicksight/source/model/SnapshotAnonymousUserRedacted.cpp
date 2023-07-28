/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotAnonymousUserRedacted.h>
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

SnapshotAnonymousUserRedacted::SnapshotAnonymousUserRedacted() : 
    m_rowLevelPermissionTagKeysHasBeenSet(false)
{
}

SnapshotAnonymousUserRedacted::SnapshotAnonymousUserRedacted(JsonView jsonValue) : 
    m_rowLevelPermissionTagKeysHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotAnonymousUserRedacted& SnapshotAnonymousUserRedacted::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RowLevelPermissionTagKeys"))
  {
    Aws::Utils::Array<JsonView> rowLevelPermissionTagKeysJsonList = jsonValue.GetArray("RowLevelPermissionTagKeys");
    for(unsigned rowLevelPermissionTagKeysIndex = 0; rowLevelPermissionTagKeysIndex < rowLevelPermissionTagKeysJsonList.GetLength(); ++rowLevelPermissionTagKeysIndex)
    {
      m_rowLevelPermissionTagKeys.push_back(rowLevelPermissionTagKeysJsonList[rowLevelPermissionTagKeysIndex].AsString());
    }
    m_rowLevelPermissionTagKeysHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotAnonymousUserRedacted::Jsonize() const
{
  JsonValue payload;

  if(m_rowLevelPermissionTagKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowLevelPermissionTagKeysJsonList(m_rowLevelPermissionTagKeys.size());
   for(unsigned rowLevelPermissionTagKeysIndex = 0; rowLevelPermissionTagKeysIndex < rowLevelPermissionTagKeysJsonList.GetLength(); ++rowLevelPermissionTagKeysIndex)
   {
     rowLevelPermissionTagKeysJsonList[rowLevelPermissionTagKeysIndex].AsString(m_rowLevelPermissionTagKeys[rowLevelPermissionTagKeysIndex]);
   }
   payload.WithArray("RowLevelPermissionTagKeys", std::move(rowLevelPermissionTagKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
