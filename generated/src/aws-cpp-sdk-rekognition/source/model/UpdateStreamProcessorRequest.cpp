/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UpdateStreamProcessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateStreamProcessorRequest::UpdateStreamProcessorRequest() : 
    m_nameHasBeenSet(false),
    m_settingsForUpdateHasBeenSet(false),
    m_regionsOfInterestForUpdateHasBeenSet(false),
    m_dataSharingPreferenceForUpdateHasBeenSet(false),
    m_parametersToDeleteHasBeenSet(false)
{
}

Aws::String UpdateStreamProcessorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_settingsForUpdateHasBeenSet)
  {
   payload.WithObject("SettingsForUpdate", m_settingsForUpdate.Jsonize());

  }

  if(m_regionsOfInterestForUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsOfInterestForUpdateJsonList(m_regionsOfInterestForUpdate.size());
   for(unsigned regionsOfInterestForUpdateIndex = 0; regionsOfInterestForUpdateIndex < regionsOfInterestForUpdateJsonList.GetLength(); ++regionsOfInterestForUpdateIndex)
   {
     regionsOfInterestForUpdateJsonList[regionsOfInterestForUpdateIndex].AsObject(m_regionsOfInterestForUpdate[regionsOfInterestForUpdateIndex].Jsonize());
   }
   payload.WithArray("RegionsOfInterestForUpdate", std::move(regionsOfInterestForUpdateJsonList));

  }

  if(m_dataSharingPreferenceForUpdateHasBeenSet)
  {
   payload.WithObject("DataSharingPreferenceForUpdate", m_dataSharingPreferenceForUpdate.Jsonize());

  }

  if(m_parametersToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersToDeleteJsonList(m_parametersToDelete.size());
   for(unsigned parametersToDeleteIndex = 0; parametersToDeleteIndex < parametersToDeleteJsonList.GetLength(); ++parametersToDeleteIndex)
   {
     parametersToDeleteJsonList[parametersToDeleteIndex].AsString(StreamProcessorParameterToDeleteMapper::GetNameForStreamProcessorParameterToDelete(m_parametersToDelete[parametersToDeleteIndex]));
   }
   payload.WithArray("ParametersToDelete", std::move(parametersToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStreamProcessorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.UpdateStreamProcessor"));
  return headers;

}




