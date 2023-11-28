/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AssistantAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

AssistantAssociationSummary::AssistantAssociationSummary() : 
    m_assistantArnHasBeenSet(false),
    m_assistantAssociationArnHasBeenSet(false),
    m_assistantAssociationIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_associationDataHasBeenSet(false),
    m_associationType(AssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AssistantAssociationSummary::AssistantAssociationSummary(JsonView jsonValue) : 
    m_assistantArnHasBeenSet(false),
    m_assistantAssociationArnHasBeenSet(false),
    m_assistantAssociationIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_associationDataHasBeenSet(false),
    m_associationType(AssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AssistantAssociationSummary& AssistantAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assistantArn"))
  {
    m_assistantArn = jsonValue.GetString("assistantArn");

    m_assistantArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assistantAssociationArn"))
  {
    m_assistantAssociationArn = jsonValue.GetString("assistantAssociationArn");

    m_assistantAssociationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assistantAssociationId"))
  {
    m_assistantAssociationId = jsonValue.GetString("assistantAssociationId");

    m_assistantAssociationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assistantId"))
  {
    m_assistantId = jsonValue.GetString("assistantId");

    m_assistantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationData"))
  {
    m_associationData = jsonValue.GetObject("associationData");

    m_associationDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationType"))
  {
    m_associationType = AssociationTypeMapper::GetAssociationTypeForName(jsonValue.GetString("associationType"));

    m_associationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssistantAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_assistantArnHasBeenSet)
  {
   payload.WithString("assistantArn", m_assistantArn);

  }

  if(m_assistantAssociationArnHasBeenSet)
  {
   payload.WithString("assistantAssociationArn", m_assistantAssociationArn);

  }

  if(m_assistantAssociationIdHasBeenSet)
  {
   payload.WithString("assistantAssociationId", m_assistantAssociationId);

  }

  if(m_assistantIdHasBeenSet)
  {
   payload.WithString("assistantId", m_assistantId);

  }

  if(m_associationDataHasBeenSet)
  {
   payload.WithObject("associationData", m_associationData.Jsonize());

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("associationType", AssociationTypeMapper::GetNameForAssociationType(m_associationType));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
