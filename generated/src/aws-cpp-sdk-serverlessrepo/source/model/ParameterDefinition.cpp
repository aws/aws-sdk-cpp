/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/ParameterDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

ParameterDefinition::ParameterDefinition() : 
    m_allowedPatternHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_constraintDescriptionHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maxLength(0),
    m_maxLengthHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_minLength(0),
    m_minLengthHasBeenSet(false),
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_noEcho(false),
    m_noEchoHasBeenSet(false),
    m_referencedByResourcesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ParameterDefinition::ParameterDefinition(JsonView jsonValue) : 
    m_allowedPatternHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_constraintDescriptionHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maxLength(0),
    m_maxLengthHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_minLength(0),
    m_minLengthHasBeenSet(false),
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_noEcho(false),
    m_noEchoHasBeenSet(false),
    m_referencedByResourcesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterDefinition& ParameterDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedPattern"))
  {
    m_allowedPattern = jsonValue.GetString("allowedPattern");

    m_allowedPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowedValues"))
  {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("constraintDescription"))
  {
    m_constraintDescription = jsonValue.GetString("constraintDescription");

    m_constraintDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxLength"))
  {
    m_maxLength = jsonValue.GetInteger("maxLength");

    m_maxLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxValue"))
  {
    m_maxValue = jsonValue.GetInteger("maxValue");

    m_maxValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minLength"))
  {
    m_minLength = jsonValue.GetInteger("minLength");

    m_minLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minValue"))
  {
    m_minValue = jsonValue.GetInteger("minValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noEcho"))
  {
    m_noEcho = jsonValue.GetBool("noEcho");

    m_noEchoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referencedByResources"))
  {
    Aws::Utils::Array<JsonView> referencedByResourcesJsonList = jsonValue.GetArray("referencedByResources");
    for(unsigned referencedByResourcesIndex = 0; referencedByResourcesIndex < referencedByResourcesJsonList.GetLength(); ++referencedByResourcesIndex)
    {
      m_referencedByResources.push_back(referencedByResourcesJsonList[referencedByResourcesIndex].AsString());
    }
    m_referencedByResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_allowedPatternHasBeenSet)
  {
   payload.WithString("allowedPattern", m_allowedPattern);

  }

  if(m_allowedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
   }
   payload.WithArray("allowedValues", std::move(allowedValuesJsonList));

  }

  if(m_constraintDescriptionHasBeenSet)
  {
   payload.WithString("constraintDescription", m_constraintDescription);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_maxLengthHasBeenSet)
  {
   payload.WithInteger("maxLength", m_maxLength);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithInteger("maxValue", m_maxValue);

  }

  if(m_minLengthHasBeenSet)
  {
   payload.WithInteger("minLength", m_minLength);

  }

  if(m_minValueHasBeenSet)
  {
   payload.WithInteger("minValue", m_minValue);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_noEchoHasBeenSet)
  {
   payload.WithBool("noEcho", m_noEcho);

  }

  if(m_referencedByResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referencedByResourcesJsonList(m_referencedByResources.size());
   for(unsigned referencedByResourcesIndex = 0; referencedByResourcesIndex < referencedByResourcesJsonList.GetLength(); ++referencedByResourcesIndex)
   {
     referencedByResourcesJsonList[referencedByResourcesIndex].AsString(m_referencedByResources[referencedByResourcesIndex]);
   }
   payload.WithArray("referencedByResources", std::move(referencedByResourcesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
