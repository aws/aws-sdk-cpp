/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/SingleMeasureMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

SingleMeasureMapping::SingleMeasureMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

SingleMeasureMapping& SingleMeasureMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MeasureValue"))
  {
    m_measureValue = jsonValue.GetString("MeasureValue");
    m_measureValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MeasureValueType"))
  {
    m_measureValueType = MeasureValueTypeMapper::GetMeasureValueTypeForName(jsonValue.GetString("MeasureValueType"));
    m_measureValueTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MeasureName"))
  {
    m_measureName = jsonValue.GetString("MeasureName");
    m_measureNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SingleMeasureMapping::Jsonize() const
{
  JsonValue payload;

  if(m_measureValueHasBeenSet)
  {
   payload.WithString("MeasureValue", m_measureValue);

  }

  if(m_measureValueTypeHasBeenSet)
  {
   payload.WithString("MeasureValueType", MeasureValueTypeMapper::GetNameForMeasureValueType(m_measureValueType));
  }

  if(m_measureNameHasBeenSet)
  {
   payload.WithString("MeasureName", m_measureName);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
