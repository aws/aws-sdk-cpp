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

ActionReviewPayloadField::ActionReviewPayloadField() : 
    m_allowedValuesHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_displayOrder(0),
    m_displayOrderHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_type(ActionPayloadFieldType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ActionReviewPayloadField::ActionReviewPayloadField(JsonView jsonValue) : 
    m_allowedValuesHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_displayOrder(0),
    m_displayOrderHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_type(ActionPayloadFieldType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ActionReviewPayloadField& ActionReviewPayloadField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedValues"))
  {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsObject());
    }
    m_allowedValuesHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
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

  return *this;
}

JsonValue ActionReviewPayloadField::Jsonize() const
{
  JsonValue payload;

  if(m_allowedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsObject(m_allowedValues[allowedValuesIndex].Jsonize());
   }
   payload.WithArray("allowedValues", std::move(allowedValuesJsonList));

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_displayOrderHasBeenSet)
  {
   payload.WithInteger("displayOrder", m_displayOrder);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

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

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
