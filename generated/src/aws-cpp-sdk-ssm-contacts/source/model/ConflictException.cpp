/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

ConflictException::ConflictException() : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_dependentEntitiesHasBeenSet(false)
{
}

ConflictException::ConflictException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_dependentEntitiesHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DependentEntities"))
  {
    Aws::Utils::Array<JsonView> dependentEntitiesJsonList = jsonValue.GetArray("DependentEntities");
    for(unsigned dependentEntitiesIndex = 0; dependentEntitiesIndex < dependentEntitiesJsonList.GetLength(); ++dependentEntitiesIndex)
    {
      m_dependentEntities.push_back(dependentEntitiesJsonList[dependentEntitiesIndex].AsObject());
    }
    m_dependentEntitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_dependentEntitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependentEntitiesJsonList(m_dependentEntities.size());
   for(unsigned dependentEntitiesIndex = 0; dependentEntitiesIndex < dependentEntitiesJsonList.GetLength(); ++dependentEntitiesIndex)
   {
     dependentEntitiesJsonList[dependentEntitiesIndex].AsObject(m_dependentEntities[dependentEntitiesIndex].Jsonize());
   }
   payload.WithArray("DependentEntities", std::move(dependentEntitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
