/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ParameterConstraints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ParameterConstraints::ParameterConstraints() : 
    m_allowedValuesHasBeenSet(false),
    m_allowedPatternHasBeenSet(false),
    m_constraintDescriptionHasBeenSet(false),
    m_maxLengthHasBeenSet(false),
    m_minLengthHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_minValueHasBeenSet(false)
{
}

ParameterConstraints::ParameterConstraints(JsonView jsonValue) : 
    m_allowedValuesHasBeenSet(false),
    m_allowedPatternHasBeenSet(false),
    m_constraintDescriptionHasBeenSet(false),
    m_maxLengthHasBeenSet(false),
    m_minLengthHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_minValueHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterConstraints& ParameterConstraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowedValues"))
  {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("AllowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedPattern"))
  {
    m_allowedPattern = jsonValue.GetString("AllowedPattern");

    m_allowedPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConstraintDescription"))
  {
    m_constraintDescription = jsonValue.GetString("ConstraintDescription");

    m_constraintDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxLength"))
  {
    m_maxLength = jsonValue.GetString("MaxLength");

    m_maxLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinLength"))
  {
    m_minLength = jsonValue.GetString("MinLength");

    m_minLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxValue"))
  {
    m_maxValue = jsonValue.GetString("MaxValue");

    m_maxValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinValue"))
  {
    m_minValue = jsonValue.GetString("MinValue");

    m_minValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterConstraints::Jsonize() const
{
  JsonValue payload;

  if(m_allowedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
   }
   payload.WithArray("AllowedValues", std::move(allowedValuesJsonList));

  }

  if(m_allowedPatternHasBeenSet)
  {
   payload.WithString("AllowedPattern", m_allowedPattern);

  }

  if(m_constraintDescriptionHasBeenSet)
  {
   payload.WithString("ConstraintDescription", m_constraintDescription);

  }

  if(m_maxLengthHasBeenSet)
  {
   payload.WithString("MaxLength", m_maxLength);

  }

  if(m_minLengthHasBeenSet)
  {
   payload.WithString("MinLength", m_minLength);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithString("MaxValue", m_maxValue);

  }

  if(m_minValueHasBeenSet)
  {
   payload.WithString("MinValue", m_minValue);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
