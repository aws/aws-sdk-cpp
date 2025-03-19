/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/Type.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

Type::Type(JsonView jsonValue)
{
  *this = jsonValue;
}

Type& Type::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScalarType"))
  {
    m_scalarType = ScalarTypeMapper::GetScalarTypeForName(jsonValue.GetString("ScalarType"));
    m_scalarTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArrayColumnInfo"))
  {
    m_arrayColumnInfo = Aws::MakeShared<ColumnInfo>("Type", jsonValue.GetObject("ArrayColumnInfo"));
    m_arrayColumnInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeSeriesMeasureValueColumnInfo"))
  {
    m_timeSeriesMeasureValueColumnInfo = Aws::MakeShared<ColumnInfo>("Type", jsonValue.GetObject("TimeSeriesMeasureValueColumnInfo"));
    m_timeSeriesMeasureValueColumnInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RowColumnInfo"))
  {
    Aws::Utils::Array<JsonView> rowColumnInfoJsonList = jsonValue.GetArray("RowColumnInfo");
    for(unsigned rowColumnInfoIndex = 0; rowColumnInfoIndex < rowColumnInfoJsonList.GetLength(); ++rowColumnInfoIndex)
    {
      m_rowColumnInfo.push_back(rowColumnInfoJsonList[rowColumnInfoIndex].AsObject());
    }
    m_rowColumnInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue Type::Jsonize() const
{
  JsonValue payload;

  if(m_scalarTypeHasBeenSet)
  {
   payload.WithString("ScalarType", ScalarTypeMapper::GetNameForScalarType(m_scalarType));
  }

  if(m_arrayColumnInfoHasBeenSet)
  {
   payload.WithObject("ArrayColumnInfo", m_arrayColumnInfo->Jsonize());

  }

  if(m_timeSeriesMeasureValueColumnInfoHasBeenSet)
  {
   payload.WithObject("TimeSeriesMeasureValueColumnInfo", m_timeSeriesMeasureValueColumnInfo->Jsonize());

  }

  if(m_rowColumnInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowColumnInfoJsonList(m_rowColumnInfo.size());
   for(unsigned rowColumnInfoIndex = 0; rowColumnInfoIndex < rowColumnInfoJsonList.GetLength(); ++rowColumnInfoIndex)
   {
     rowColumnInfoJsonList[rowColumnInfoIndex].AsObject(m_rowColumnInfo[rowColumnInfoIndex].Jsonize());
   }
   payload.WithArray("RowColumnInfo", std::move(rowColumnInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
