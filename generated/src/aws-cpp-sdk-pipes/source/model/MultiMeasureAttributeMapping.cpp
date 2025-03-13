/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/MultiMeasureAttributeMapping.h>
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

MultiMeasureAttributeMapping::MultiMeasureAttributeMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

MultiMeasureAttributeMapping& MultiMeasureAttributeMapping::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("MultiMeasureAttributeName"))
  {
    m_multiMeasureAttributeName = jsonValue.GetString("MultiMeasureAttributeName");
    m_multiMeasureAttributeNameHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiMeasureAttributeMapping::Jsonize() const
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

  if(m_multiMeasureAttributeNameHasBeenSet)
  {
   payload.WithString("MultiMeasureAttributeName", m_multiMeasureAttributeName);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
