/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/MultiMeasureAttributeMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

MultiMeasureAttributeMapping::MultiMeasureAttributeMapping() : 
    m_sourceColumnHasBeenSet(false),
    m_targetMultiMeasureAttributeNameHasBeenSet(false),
    m_measureValueType(ScalarMeasureValueType::NOT_SET),
    m_measureValueTypeHasBeenSet(false)
{
}

MultiMeasureAttributeMapping::MultiMeasureAttributeMapping(JsonView jsonValue) : 
    m_sourceColumnHasBeenSet(false),
    m_targetMultiMeasureAttributeNameHasBeenSet(false),
    m_measureValueType(ScalarMeasureValueType::NOT_SET),
    m_measureValueTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MultiMeasureAttributeMapping& MultiMeasureAttributeMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceColumn"))
  {
    m_sourceColumn = jsonValue.GetString("SourceColumn");

    m_sourceColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetMultiMeasureAttributeName"))
  {
    m_targetMultiMeasureAttributeName = jsonValue.GetString("TargetMultiMeasureAttributeName");

    m_targetMultiMeasureAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeasureValueType"))
  {
    m_measureValueType = ScalarMeasureValueTypeMapper::GetScalarMeasureValueTypeForName(jsonValue.GetString("MeasureValueType"));

    m_measureValueTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiMeasureAttributeMapping::Jsonize() const
{
  JsonValue payload;

  if(m_sourceColumnHasBeenSet)
  {
   payload.WithString("SourceColumn", m_sourceColumn);

  }

  if(m_targetMultiMeasureAttributeNameHasBeenSet)
  {
   payload.WithString("TargetMultiMeasureAttributeName", m_targetMultiMeasureAttributeName);

  }

  if(m_measureValueTypeHasBeenSet)
  {
   payload.WithString("MeasureValueType", ScalarMeasureValueTypeMapper::GetNameForScalarMeasureValueType(m_measureValueType));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
