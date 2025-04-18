/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIGuardrailData.h>
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

AIGuardrailData::AIGuardrailData(JsonView jsonValue)
{
  *this = jsonValue;
}

AIGuardrailData& AIGuardrailData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assistantId"))
  {
    m_assistantId = jsonValue.GetString("assistantId");
    m_assistantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assistantArn"))
  {
    m_assistantArn = jsonValue.GetString("assistantArn");
    m_assistantArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aiGuardrailArn"))
  {
    m_aiGuardrailArn = jsonValue.GetString("aiGuardrailArn");
    m_aiGuardrailArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aiGuardrailId"))
  {
    m_aiGuardrailId = jsonValue.GetString("aiGuardrailId");
    m_aiGuardrailIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("visibilityStatus"))
  {
    m_visibilityStatus = VisibilityStatusMapper::GetVisibilityStatusForName(jsonValue.GetString("visibilityStatus"));
    m_visibilityStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blockedInputMessaging"))
  {
    m_blockedInputMessaging = jsonValue.GetString("blockedInputMessaging");
    m_blockedInputMessagingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blockedOutputsMessaging"))
  {
    m_blockedOutputsMessaging = jsonValue.GetString("blockedOutputsMessaging");
    m_blockedOutputsMessagingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("topicPolicyConfig"))
  {
    m_topicPolicyConfig = jsonValue.GetObject("topicPolicyConfig");
    m_topicPolicyConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentPolicyConfig"))
  {
    m_contentPolicyConfig = jsonValue.GetObject("contentPolicyConfig");
    m_contentPolicyConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wordPolicyConfig"))
  {
    m_wordPolicyConfig = jsonValue.GetObject("wordPolicyConfig");
    m_wordPolicyConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitiveInformationPolicyConfig"))
  {
    m_sensitiveInformationPolicyConfig = jsonValue.GetObject("sensitiveInformationPolicyConfig");
    m_sensitiveInformationPolicyConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contextualGroundingPolicyConfig"))
  {
    m_contextualGroundingPolicyConfig = jsonValue.GetObject("contextualGroundingPolicyConfig");
    m_contextualGroundingPolicyConfigHasBeenSet = true;
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
  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedTime"))
  {
    m_modifiedTime = jsonValue.GetDouble("modifiedTime");
    m_modifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue AIGuardrailData::Jsonize() const
{
  JsonValue payload;

  if(m_assistantIdHasBeenSet)
  {
   payload.WithString("assistantId", m_assistantId);

  }

  if(m_assistantArnHasBeenSet)
  {
   payload.WithString("assistantArn", m_assistantArn);

  }

  if(m_aiGuardrailArnHasBeenSet)
  {
   payload.WithString("aiGuardrailArn", m_aiGuardrailArn);

  }

  if(m_aiGuardrailIdHasBeenSet)
  {
   payload.WithString("aiGuardrailId", m_aiGuardrailId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_visibilityStatusHasBeenSet)
  {
   payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
  }

  if(m_blockedInputMessagingHasBeenSet)
  {
   payload.WithString("blockedInputMessaging", m_blockedInputMessaging);

  }

  if(m_blockedOutputsMessagingHasBeenSet)
  {
   payload.WithString("blockedOutputsMessaging", m_blockedOutputsMessaging);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_topicPolicyConfigHasBeenSet)
  {
   payload.WithObject("topicPolicyConfig", m_topicPolicyConfig.Jsonize());

  }

  if(m_contentPolicyConfigHasBeenSet)
  {
   payload.WithObject("contentPolicyConfig", m_contentPolicyConfig.Jsonize());

  }

  if(m_wordPolicyConfigHasBeenSet)
  {
   payload.WithObject("wordPolicyConfig", m_wordPolicyConfig.Jsonize());

  }

  if(m_sensitiveInformationPolicyConfigHasBeenSet)
  {
   payload.WithObject("sensitiveInformationPolicyConfig", m_sensitiveInformationPolicyConfig.Jsonize());

  }

  if(m_contextualGroundingPolicyConfigHasBeenSet)
  {
   payload.WithObject("contextualGroundingPolicyConfig", m_contextualGroundingPolicyConfig.Jsonize());

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_modifiedTimeHasBeenSet)
  {
   payload.WithDouble("modifiedTime", m_modifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
