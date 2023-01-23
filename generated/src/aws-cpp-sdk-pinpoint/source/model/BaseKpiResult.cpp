/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/BaseKpiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

BaseKpiResult::BaseKpiResult() : 
    m_rowsHasBeenSet(false)
{
}

BaseKpiResult::BaseKpiResult(JsonView jsonValue) : 
    m_rowsHasBeenSet(false)
{
  *this = jsonValue;
}

BaseKpiResult& BaseKpiResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Rows"))
  {
    Aws::Utils::Array<JsonView> rowsJsonList = jsonValue.GetArray("Rows");
    for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
    {
      m_rows.push_back(rowsJsonList[rowsIndex].AsObject());
    }
    m_rowsHasBeenSet = true;
  }

  return *this;
}

JsonValue BaseKpiResult::Jsonize() const
{
  JsonValue payload;

  if(m_rowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowsJsonList(m_rows.size());
   for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
   {
     rowsJsonList[rowsIndex].AsObject(m_rows[rowsIndex].Jsonize());
   }
   payload.WithArray("Rows", std::move(rowsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
