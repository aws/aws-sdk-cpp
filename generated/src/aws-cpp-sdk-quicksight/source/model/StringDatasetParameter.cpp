/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StringDatasetParameter.h>
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

StringDatasetParameter::StringDatasetParameter() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueType(DatasetParameterValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_defaultValuesHasBeenSet(false)
{
}

StringDatasetParameter::StringDatasetParameter(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueType(DatasetParameterValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_defaultValuesHasBeenSet(false)
{
  *this = jsonValue;
}

StringDatasetParameter& StringDatasetParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueType"))
  {
    m_valueType = DatasetParameterValueTypeMapper::GetDatasetParameterValueTypeForName(jsonValue.GetString("ValueType"));

    m_valueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValues"))
  {
    m_defaultValues = jsonValue.GetObject("DefaultValues");

    m_defaultValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue StringDatasetParameter::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueTypeHasBeenSet)
  {
   payload.WithString("ValueType", DatasetParameterValueTypeMapper::GetNameForDatasetParameterValueType(m_valueType));
  }

  if(m_defaultValuesHasBeenSet)
  {
   payload.WithObject("DefaultValues", m_defaultValues.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
