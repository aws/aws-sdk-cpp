/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableDataPathOption.h>
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

PivotTableDataPathOption::PivotTableDataPathOption() : 
    m_dataPathListHasBeenSet(false),
    m_widthHasBeenSet(false)
{
}

PivotTableDataPathOption::PivotTableDataPathOption(JsonView jsonValue) : 
    m_dataPathListHasBeenSet(false),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableDataPathOption& PivotTableDataPathOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataPathList"))
  {
    Aws::Utils::Array<JsonView> dataPathListJsonList = jsonValue.GetArray("DataPathList");
    for(unsigned dataPathListIndex = 0; dataPathListIndex < dataPathListJsonList.GetLength(); ++dataPathListIndex)
    {
      m_dataPathList.push_back(dataPathListJsonList[dataPathListIndex].AsObject());
    }
    m_dataPathListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetString("Width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableDataPathOption::Jsonize() const
{
  JsonValue payload;

  if(m_dataPathListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataPathListJsonList(m_dataPathList.size());
   for(unsigned dataPathListIndex = 0; dataPathListIndex < dataPathListJsonList.GetLength(); ++dataPathListIndex)
   {
     dataPathListJsonList[dataPathListIndex].AsObject(m_dataPathList[dataPathListIndex].Jsonize());
   }
   payload.WithArray("DataPathList", std::move(dataPathListJsonList));

  }

  if(m_widthHasBeenSet)
  {
   payload.WithString("Width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
