﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIGuardrailSummary.h>
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

AIGuardrailSummary::AIGuardrailSummary() : 
    m_aiGuardrailArnHasBeenSet(false),
    m_aiGuardrailIdHasBeenSet(false),
    m_assistantArnHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_visibilityStatus(VisibilityStatus::NOT_SET),
    m_visibilityStatusHasBeenSet(false)
{
}

AIGuardrailSummary::AIGuardrailSummary(JsonView jsonValue)
  : AIGuardrailSummary()
{
  *this = jsonValue;
}

AIGuardrailSummary& AIGuardrailSummary::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("assistantArn"))
  {
    m_assistantArn = jsonValue.GetString("assistantArn");

    m_assistantArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assistantId"))
  {
    m_assistantId = jsonValue.GetString("assistantId");

    m_assistantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedTime"))
  {
    m_modifiedTime = jsonValue.GetDouble("modifiedTime");

    m_modifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

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

  if(jsonValue.ValueExists("visibilityStatus"))
  {
    m_visibilityStatus = VisibilityStatusMapper::GetVisibilityStatusForName(jsonValue.GetString("visibilityStatus"));

    m_visibilityStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AIGuardrailSummary::Jsonize() const
{
  JsonValue payload;

  if(m_aiGuardrailArnHasBeenSet)
  {
   payload.WithString("aiGuardrailArn", m_aiGuardrailArn);

  }

  if(m_aiGuardrailIdHasBeenSet)
  {
   payload.WithString("aiGuardrailId", m_aiGuardrailId);

  }

  if(m_assistantArnHasBeenSet)
  {
   payload.WithString("assistantArn", m_assistantArn);

  }

  if(m_assistantIdHasBeenSet)
  {
   payload.WithString("assistantId", m_assistantId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_modifiedTimeHasBeenSet)
  {
   payload.WithDouble("modifiedTime", m_modifiedTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
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

  if(m_visibilityStatusHasBeenSet)
  {
   payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
