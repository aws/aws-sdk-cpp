/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpdateLensReviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLensReviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lensNotesHasBeenSet)
  {
   payload.WithString("LensNotes", m_lensNotes);

  }

  if(m_pillarNotesHasBeenSet)
  {
   JsonValue pillarNotesJsonMap;
   for(auto& pillarNotesItem : m_pillarNotes)
   {
     pillarNotesJsonMap.WithString(pillarNotesItem.first, pillarNotesItem.second);
   }
   payload.WithObject("PillarNotes", std::move(pillarNotesJsonMap));

  }

  if(m_jiraConfigurationHasBeenSet)
  {
   payload.WithObject("JiraConfiguration", m_jiraConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




