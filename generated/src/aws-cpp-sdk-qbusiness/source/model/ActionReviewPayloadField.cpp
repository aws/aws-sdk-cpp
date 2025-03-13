/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionReviewPayloadField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ActionReviewPayloadField::ActionReviewPayloadField(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionReviewPayloadField& ActionReviewPayloadField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayOrder"))
  {
    m_displayOrder = jsonValue.GetInteger("displayOrder");
    m_displayOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayDescription"))
  {
    m_displayDescription = jsonValue.GetString("displayDescription");
    m_displayDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ActionPayloadFieldTypeMapper::GetActionPayloadFieldTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedValues"))
  {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsObject());
    }
    m_allowedValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedFormat"))
  {
    m_allowedFormat = jsonValue.GetString("allowedFormat");
    m_allowedFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arrayItemJsonSchema"))
  {
    m_arrayItemJsonSchema = jsonValue.GetObject("arrayItemJsonSchema");
    m_arrayItemJsonSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");
    m_requiredHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionReviewPayloadField::Jsonize() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_displayOrderHasBeenSet)
  {
   payload.WithInteger("displayOrder", m_displayOrder);

  }

  if(m_displayDescriptionHasBeenSet)
  {
   payload.WithString("displayDescription", m_displayDescription);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ActionPayloadFieldTypeMapper::GetNameForActionPayloadFieldType(m_type));
  }

  if(m_valueHasBeenSet)
  {
    if(!m_value.View().IsNull())
    {
       payload.WithObject("value", JsonValue(m_value.View()));
    }
  }

  if(m_allowedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsObject(m_allowedValues[allowedValuesIndex].Jsonize());
   }
   payload.WithArray("allowedValues", std::move(allowedValuesJsonList));

  }

  if(m_allowedFormatHasBeenSet)
  {
   payload.WithString("allowedFormat", m_allowedFormat);

  }

  if(m_arrayItemJsonSchemaHasBeenSet)
  {
    if(!m_arrayItemJsonSchema.View().IsNull())
    {
       payload.WithObject("arrayItemJsonSchema", JsonValue(m_arrayItemJsonSchema.View()));
    }
  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
