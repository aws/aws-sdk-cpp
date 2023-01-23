/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ResourceChange.h>
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

ResourceChange::ResourceChange() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_replacement(Replacement::NOT_SET),
    m_replacementHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

ResourceChange::ResourceChange(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_replacement(Replacement::NOT_SET),
    m_replacementHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceChange& ResourceChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogicalResourceId"))
  {
    m_logicalResourceId = jsonValue.GetString("LogicalResourceId");

    m_logicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhysicalResourceId"))
  {
    m_physicalResourceId = jsonValue.GetString("PhysicalResourceId");

    m_physicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Replacement"))
  {
    m_replacement = ReplacementMapper::GetReplacementForName(jsonValue.GetString("Replacement"));

    m_replacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    Aws::Utils::Array<JsonView> scopeJsonList = jsonValue.GetArray("Scope");
    for(unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex)
    {
      m_scope.push_back(ResourceAttributeMapper::GetResourceAttributeForName(scopeJsonList[scopeIndex].AsString()));
    }
    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    Aws::Utils::Array<JsonView> detailsJsonList = jsonValue.GetArray("Details");
    for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
    {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceChange::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithString("LogicalResourceId", m_logicalResourceId);

  }

  if(m_physicalResourceIdHasBeenSet)
  {
   payload.WithString("PhysicalResourceId", m_physicalResourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_replacementHasBeenSet)
  {
   payload.WithString("Replacement", ReplacementMapper::GetNameForReplacement(m_replacement));
  }

  if(m_scopeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopeJsonList(m_scope.size());
   for(unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex)
   {
     scopeJsonList[scopeIndex].AsString(ResourceAttributeMapper::GetNameForResourceAttribute(m_scope[scopeIndex]));
   }
   payload.WithArray("Scope", std::move(scopeJsonList));

  }

  if(m_detailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detailsJsonList(m_details.size());
   for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
   {
     detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
   }
   payload.WithArray("Details", std::move(detailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
