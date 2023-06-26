/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/OverrideDatasetParameterOperation.h>
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

OverrideDatasetParameterOperation::OverrideDatasetParameterOperation() : 
    m_parameterNameHasBeenSet(false),
    m_newParameterNameHasBeenSet(false),
    m_newDefaultValuesHasBeenSet(false)
{
}

OverrideDatasetParameterOperation::OverrideDatasetParameterOperation(JsonView jsonValue) : 
    m_parameterNameHasBeenSet(false),
    m_newParameterNameHasBeenSet(false),
    m_newDefaultValuesHasBeenSet(false)
{
  *this = jsonValue;
}

OverrideDatasetParameterOperation& OverrideDatasetParameterOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewParameterName"))
  {
    m_newParameterName = jsonValue.GetString("NewParameterName");

    m_newParameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewDefaultValues"))
  {
    m_newDefaultValues = jsonValue.GetObject("NewDefaultValues");

    m_newDefaultValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue OverrideDatasetParameterOperation::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  if(m_newParameterNameHasBeenSet)
  {
   payload.WithString("NewParameterName", m_newParameterName);

  }

  if(m_newDefaultValuesHasBeenSet)
  {
   payload.WithObject("NewDefaultValues", m_newDefaultValues.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
