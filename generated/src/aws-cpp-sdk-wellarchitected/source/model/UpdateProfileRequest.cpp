/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpdateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProfileRequest::UpdateProfileRequest() : 
    m_profileArnHasBeenSet(false),
    m_profileDescriptionHasBeenSet(false),
    m_profileQuestionsHasBeenSet(false)
{
}

Aws::String UpdateProfileRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}




