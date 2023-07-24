/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotFileGroup.h>
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

SnapshotFileGroup::SnapshotFileGroup() : 
    m_filesHasBeenSet(false)
{
}

SnapshotFileGroup::SnapshotFileGroup(JsonView jsonValue) : 
    m_filesHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotFileGroup& SnapshotFileGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Files"))
  {
    Aws::Utils::Array<JsonView> filesJsonList = jsonValue.GetArray("Files");
    for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
    {
      m_files.push_back(filesJsonList[filesIndex].AsObject());
    }
    m_filesHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotFileGroup::Jsonize() const
{
  JsonValue payload;

  if(m_filesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filesJsonList(m_files.size());
   for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
   {
     filesJsonList[filesIndex].AsObject(m_files[filesIndex].Jsonize());
   }
   payload.WithArray("Files", std::move(filesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
