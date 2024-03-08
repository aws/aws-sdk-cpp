/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/KnowledgeBaseSummary.h>
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

KnowledgeBaseSummary::KnowledgeBaseSummary() : 
    m_descriptionHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_knowledgeBaseType(KnowledgeBaseType::NOT_SET),
    m_knowledgeBaseTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_renderingConfigurationHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false),
    m_status(KnowledgeBaseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

KnowledgeBaseSummary::KnowledgeBaseSummary(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_knowledgeBaseType(KnowledgeBaseType::NOT_SET),
    m_knowledgeBaseTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_renderingConfigurationHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false),
    m_status(KnowledgeBaseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

KnowledgeBaseSummary& KnowledgeBaseSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");

    m_knowledgeBaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseType"))
  {
    m_knowledgeBaseType = KnowledgeBaseTypeMapper::GetKnowledgeBaseTypeForName(jsonValue.GetString("knowledgeBaseType"));

    m_knowledgeBaseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renderingConfiguration"))
  {
    m_renderingConfiguration = jsonValue.GetObject("renderingConfiguration");

    m_renderingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("serverSideEncryptionConfiguration");

    m_serverSideEncryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceConfiguration"))
  {
    m_sourceConfiguration = jsonValue.GetObject("sourceConfiguration");

    m_sourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KnowledgeBaseStatusMapper::GetKnowledgeBaseStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
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

JsonValue KnowledgeBaseSummary::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_knowledgeBaseTypeHasBeenSet)
  {
   payload.WithString("knowledgeBaseType", KnowledgeBaseTypeMapper::GetNameForKnowledgeBaseType(m_knowledgeBaseType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_renderingConfigurationHasBeenSet)
  {
   payload.WithObject("renderingConfiguration", m_renderingConfiguration.Jsonize());

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("serverSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", KnowledgeBaseStatusMapper::GetNameForKnowledgeBaseStatus(m_status));
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
