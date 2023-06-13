/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/CreateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProfileRequest::CreateProfileRequest() : 
    m_profileNameHasBeenSet(false),
    m_profileDescriptionHasBeenSet(false),
    m_profileQuestionsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_profileDescriptionHasBeenSet)
  {
   payload.WithString("ProfileDescription", m_profileDescription);

  }

  if(m_profileQuestionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profileQuestionsJsonList(m_profileQuestions.size());
   for(unsigned profileQuestionsIndex = 0; profileQuestionsIndex < profileQuestionsJsonList.GetLength(); ++profileQuestionsIndex)
   {
     profileQuestionsJsonList[profileQuestionsIndex].AsObject(m_profileQuestions[profileQuestionsIndex].Jsonize());
   }
   payload.WithArray("ProfileQuestions", std::move(profileQuestionsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




