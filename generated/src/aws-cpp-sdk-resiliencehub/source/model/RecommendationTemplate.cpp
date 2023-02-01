/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RecommendationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

RecommendationTemplate::RecommendationTemplate() : 
    m_appArnHasBeenSet(false),
    m_assessmentArnHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_format(TemplateFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_needsReplacements(false),
    m_needsReplacementsHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_recommendationTemplateArnHasBeenSet(false),
    m_recommendationTypesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(RecommendationTemplateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templatesLocationHasBeenSet(false)
{
}

RecommendationTemplate::RecommendationTemplate(JsonView jsonValue) : 
    m_appArnHasBeenSet(false),
    m_assessmentArnHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_format(TemplateFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_needsReplacements(false),
    m_needsReplacementsHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false),
    m_recommendationTemplateArnHasBeenSet(false),
    m_recommendationTypesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(RecommendationTemplateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templatesLocationHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationTemplate& RecommendationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");

    m_appArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentArn"))
  {
    m_assessmentArn = jsonValue.GetString("assessmentArn");

    m_assessmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = TemplateFormatMapper::GetTemplateFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("needsReplacements"))
  {
    m_needsReplacements = jsonValue.GetBool("needsReplacements");

    m_needsReplacementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationIds"))
  {
    Aws::Utils::Array<JsonView> recommendationIdsJsonList = jsonValue.GetArray("recommendationIds");
    for(unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex)
    {
      m_recommendationIds.push_back(recommendationIdsJsonList[recommendationIdsIndex].AsString());
    }
    m_recommendationIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationTemplateArn"))
  {
    m_recommendationTemplateArn = jsonValue.GetString("recommendationTemplateArn");

    m_recommendationTemplateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationTypes"))
  {
    Aws::Utils::Array<JsonView> recommendationTypesJsonList = jsonValue.GetArray("recommendationTypes");
    for(unsigned recommendationTypesIndex = 0; recommendationTypesIndex < recommendationTypesJsonList.GetLength(); ++recommendationTypesIndex)
    {
      m_recommendationTypes.push_back(RenderRecommendationTypeMapper::GetRenderRecommendationTypeForName(recommendationTypesJsonList[recommendationTypesIndex].AsString()));
    }
    m_recommendationTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RecommendationTemplateStatusMapper::GetRecommendationTemplateStatusForName(jsonValue.GetString("status"));

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

  if(jsonValue.ValueExists("templatesLocation"))
  {
    m_templatesLocation = jsonValue.GetObject("templatesLocation");

    m_templatesLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_assessmentArnHasBeenSet)
  {
   payload.WithString("assessmentArn", m_assessmentArn);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", TemplateFormatMapper::GetNameForTemplateFormat(m_format));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_needsReplacementsHasBeenSet)
  {
   payload.WithBool("needsReplacements", m_needsReplacements);

  }

  if(m_recommendationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationIdsJsonList(m_recommendationIds.size());
   for(unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex)
   {
     recommendationIdsJsonList[recommendationIdsIndex].AsString(m_recommendationIds[recommendationIdsIndex]);
   }
   payload.WithArray("recommendationIds", std::move(recommendationIdsJsonList));

  }

  if(m_recommendationTemplateArnHasBeenSet)
  {
   payload.WithString("recommendationTemplateArn", m_recommendationTemplateArn);

  }

  if(m_recommendationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationTypesJsonList(m_recommendationTypes.size());
   for(unsigned recommendationTypesIndex = 0; recommendationTypesIndex < recommendationTypesJsonList.GetLength(); ++recommendationTypesIndex)
   {
     recommendationTypesJsonList[recommendationTypesIndex].AsString(RenderRecommendationTypeMapper::GetNameForRenderRecommendationType(m_recommendationTypes[recommendationTypesIndex]));
   }
   payload.WithArray("recommendationTypes", std::move(recommendationTypesJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RecommendationTemplateStatusMapper::GetNameForRecommendationTemplateStatus(m_status));
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

  if(m_templatesLocationHasBeenSet)
  {
   payload.WithObject("templatesLocation", m_templatesLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
