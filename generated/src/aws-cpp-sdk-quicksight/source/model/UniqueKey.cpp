/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UniqueKey.h>
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

UniqueKey::UniqueKey(JsonView jsonValue)
{
  *this = jsonValue;
}

UniqueKey& UniqueKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnNames"))
  {
    Aws::Utils::Array<JsonView> columnNamesJsonList = jsonValue.GetArray("ColumnNames");
    for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
    {
      m_columnNames.push_back(columnNamesJsonList[columnNamesIndex].AsString());
    }
    m_columnNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue UniqueKey::Jsonize() const
{
  JsonValue payload;

  if(m_columnNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnNamesJsonList(m_columnNames.size());
   for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
   {
     columnNamesJsonList[columnNamesIndex].AsString(m_columnNames[columnNamesIndex]);
   }
   payload.WithArray("ColumnNames", std::move(columnNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
