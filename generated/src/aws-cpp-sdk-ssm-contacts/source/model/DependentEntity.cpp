/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/DependentEntity.h>
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

DependentEntity::DependentEntity() : 
    m_relationTypeHasBeenSet(false),
    m_dependentResourceIdsHasBeenSet(false)
{
}

DependentEntity::DependentEntity(JsonView jsonValue) : 
    m_relationTypeHasBeenSet(false),
    m_dependentResourceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

DependentEntity& DependentEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RelationType"))
  {
    m_relationType = jsonValue.GetString("RelationType");

    m_relationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DependentResourceIds"))
  {
    Aws::Utils::Array<JsonView> dependentResourceIdsJsonList = jsonValue.GetArray("DependentResourceIds");
    for(unsigned dependentResourceIdsIndex = 0; dependentResourceIdsIndex < dependentResourceIdsJsonList.GetLength(); ++dependentResourceIdsIndex)
    {
      m_dependentResourceIds.push_back(dependentResourceIdsJsonList[dependentResourceIdsIndex].AsString());
    }
    m_dependentResourceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue DependentEntity::Jsonize() const
{
  JsonValue payload;

  if(m_relationTypeHasBeenSet)
  {
   payload.WithString("RelationType", m_relationType);

  }

  if(m_dependentResourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependentResourceIdsJsonList(m_dependentResourceIds.size());
   for(unsigned dependentResourceIdsIndex = 0; dependentResourceIdsIndex < dependentResourceIdsJsonList.GetLength(); ++dependentResourceIdsIndex)
   {
     dependentResourceIdsJsonList[dependentResourceIdsIndex].AsString(m_dependentResourceIds[dependentResourceIdsIndex]);
   }
   payload.WithArray("DependentResourceIds", std::move(dependentResourceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
