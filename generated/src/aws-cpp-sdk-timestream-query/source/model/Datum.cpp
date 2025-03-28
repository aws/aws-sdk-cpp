﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/Datum.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-query/model/Row.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

Datum::Datum(JsonView jsonValue)
{
  *this = jsonValue;
}

Datum& Datum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScalarValue"))
  {
    m_scalarValue = jsonValue.GetString("ScalarValue");
    m_scalarValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeSeriesValue"))
  {
    Aws::Utils::Array<JsonView> timeSeriesValueJsonList = jsonValue.GetArray("TimeSeriesValue");
    for(unsigned timeSeriesValueIndex = 0; timeSeriesValueIndex < timeSeriesValueJsonList.GetLength(); ++timeSeriesValueIndex)
    {
      m_timeSeriesValue.push_back(timeSeriesValueJsonList[timeSeriesValueIndex].AsObject());
    }
    m_timeSeriesValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArrayValue"))
  {
    Aws::Utils::Array<JsonView> arrayValueJsonList = jsonValue.GetArray("ArrayValue");
    for(unsigned arrayValueIndex = 0; arrayValueIndex < arrayValueJsonList.GetLength(); ++arrayValueIndex)
    {
      m_arrayValue.push_back(arrayValueJsonList[arrayValueIndex].AsObject());
    }
    m_arrayValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RowValue"))
  {
    m_rowValue = Aws::MakeShared<Row>("Datum", jsonValue.GetObject("RowValue"));
    m_rowValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NullValue"))
  {
    m_nullValue = jsonValue.GetBool("NullValue");
    m_nullValueHasBeenSet = true;
  }
  return *this;
}

JsonValue Datum::Jsonize() const
{
  JsonValue payload;

  if(m_scalarValueHasBeenSet)
  {
   payload.WithString("ScalarValue", m_scalarValue);

  }

  if(m_timeSeriesValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timeSeriesValueJsonList(m_timeSeriesValue.size());
   for(unsigned timeSeriesValueIndex = 0; timeSeriesValueIndex < timeSeriesValueJsonList.GetLength(); ++timeSeriesValueIndex)
   {
     timeSeriesValueJsonList[timeSeriesValueIndex].AsObject(m_timeSeriesValue[timeSeriesValueIndex].Jsonize());
   }
   payload.WithArray("TimeSeriesValue", std::move(timeSeriesValueJsonList));

  }

  if(m_arrayValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> arrayValueJsonList(m_arrayValue.size());
   for(unsigned arrayValueIndex = 0; arrayValueIndex < arrayValueJsonList.GetLength(); ++arrayValueIndex)
   {
     arrayValueJsonList[arrayValueIndex].AsObject(m_arrayValue[arrayValueIndex].Jsonize());
   }
   payload.WithArray("ArrayValue", std::move(arrayValueJsonList));

  }

  if(m_rowValueHasBeenSet)
  {
   payload.WithObject("RowValue", m_rowValue->Jsonize());

  }

  if(m_nullValueHasBeenSet)
  {
   payload.WithBool("NullValue", m_nullValue);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
