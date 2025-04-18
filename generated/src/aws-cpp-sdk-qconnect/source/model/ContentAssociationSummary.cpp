/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ContentAssociationSummary.h>
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

ContentAssociationSummary::ContentAssociationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentAssociationSummary& ContentAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");
    m_knowledgeBaseArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentId"))
  {
    m_contentId = jsonValue.GetString("contentId");
    m_contentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentArn"))
  {
    m_contentArn = jsonValue.GetString("contentArn");
    m_contentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentAssociationId"))
  {
    m_contentAssociationId = jsonValue.GetString("contentAssociationId");
    m_contentAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentAssociationArn"))
  {
    m_contentAssociationArn = jsonValue.GetString("contentAssociationArn");
    m_contentAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associationType"))
  {
    m_associationType = ContentAssociationTypeMapper::GetContentAssociationTypeForName(jsonValue.GetString("associationType"));
    m_associationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associationData"))
  {
    m_associationData = jsonValue.GetObject("associationData");
    m_associationDataHasBeenSet = true;
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

JsonValue ContentAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_contentIdHasBeenSet)
  {
   payload.WithString("contentId", m_contentId);

  }

  if(m_contentArnHasBeenSet)
  {
   payload.WithString("contentArn", m_contentArn);

  }

  if(m_contentAssociationIdHasBeenSet)
  {
   payload.WithString("contentAssociationId", m_contentAssociationId);

  }

  if(m_contentAssociationArnHasBeenSet)
  {
   payload.WithString("contentAssociationArn", m_contentAssociationArn);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("associationType", ContentAssociationTypeMapper::GetNameForContentAssociationType(m_associationType));
  }

  if(m_associationDataHasBeenSet)
  {
   payload.WithObject("associationData", m_associationData.Jsonize());

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
