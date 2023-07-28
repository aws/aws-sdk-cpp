/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotFile.h>
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

SnapshotFile::SnapshotFile() : 
    m_sheetSelectionsHasBeenSet(false),
    m_formatType(SnapshotFileFormatType::NOT_SET),
    m_formatTypeHasBeenSet(false)
{
}

SnapshotFile::SnapshotFile(JsonView jsonValue) : 
    m_sheetSelectionsHasBeenSet(false),
    m_formatType(SnapshotFileFormatType::NOT_SET),
    m_formatTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotFile& SnapshotFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetSelections"))
  {
    Aws::Utils::Array<JsonView> sheetSelectionsJsonList = jsonValue.GetArray("SheetSelections");
    for(unsigned sheetSelectionsIndex = 0; sheetSelectionsIndex < sheetSelectionsJsonList.GetLength(); ++sheetSelectionsIndex)
    {
      m_sheetSelections.push_back(sheetSelectionsJsonList[sheetSelectionsIndex].AsObject());
    }
    m_sheetSelectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FormatType"))
  {
    m_formatType = SnapshotFileFormatTypeMapper::GetSnapshotFileFormatTypeForName(jsonValue.GetString("FormatType"));

    m_formatTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotFile::Jsonize() const
{
  JsonValue payload;

  if(m_sheetSelectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sheetSelectionsJsonList(m_sheetSelections.size());
   for(unsigned sheetSelectionsIndex = 0; sheetSelectionsIndex < sheetSelectionsJsonList.GetLength(); ++sheetSelectionsIndex)
   {
     sheetSelectionsJsonList[sheetSelectionsIndex].AsObject(m_sheetSelections[sheetSelectionsIndex].Jsonize());
   }
   payload.WithArray("SheetSelections", std::move(sheetSelectionsJsonList));

  }

  if(m_formatTypeHasBeenSet)
  {
   payload.WithString("FormatType", SnapshotFileFormatTypeMapper::GetNameForSnapshotFileFormatType(m_formatType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
