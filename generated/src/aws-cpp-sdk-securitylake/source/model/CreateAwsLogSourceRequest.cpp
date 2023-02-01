/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateAwsLogSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAwsLogSourceRequest::CreateAwsLogSourceRequest() : 
    m_enableAllDimensionsHasBeenSet(false),
    m_enableSingleDimensionHasBeenSet(false),
    m_enableTwoDimensionsHasBeenSet(false),
    m_inputOrderHasBeenSet(false)
{
}

Aws::String CreateAwsLogSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enableAllDimensionsHasBeenSet)
  {
   JsonValue enableAllDimensionsJsonMap;
   for(auto& enableAllDimensionsItem : m_enableAllDimensions)
   {
     JsonValue twoDimensionsMapJsonMap;
     for(auto& twoDimensionsMapItem : enableAllDimensionsItem.second)
     {
       Aws::Utils::Array<JsonValue> valueSetJsonList(twoDimensionsMapItem.second.size());
       for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
       {
         valueSetJsonList[valueSetIndex].AsString(twoDimensionsMapItem.second[valueSetIndex]);
       }
       twoDimensionsMapJsonMap.WithArray(twoDimensionsMapItem.first, std::move(valueSetJsonList));
     }
     enableAllDimensionsJsonMap.WithObject(enableAllDimensionsItem.first, std::move(twoDimensionsMapJsonMap));
   }
   payload.WithObject("enableAllDimensions", std::move(enableAllDimensionsJsonMap));

  }

  if(m_enableSingleDimensionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enableSingleDimensionJsonList(m_enableSingleDimension.size());
   for(unsigned enableSingleDimensionIndex = 0; enableSingleDimensionIndex < enableSingleDimensionJsonList.GetLength(); ++enableSingleDimensionIndex)
   {
     enableSingleDimensionJsonList[enableSingleDimensionIndex].AsString(m_enableSingleDimension[enableSingleDimensionIndex]);
   }
   payload.WithArray("enableSingleDimension", std::move(enableSingleDimensionJsonList));

  }

  if(m_enableTwoDimensionsHasBeenSet)
  {
   JsonValue enableTwoDimensionsJsonMap;
   for(auto& enableTwoDimensionsItem : m_enableTwoDimensions)
   {
     Aws::Utils::Array<JsonValue> valueSetJsonList(enableTwoDimensionsItem.second.size());
     for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
     {
       valueSetJsonList[valueSetIndex].AsString(enableTwoDimensionsItem.second[valueSetIndex]);
     }
     enableTwoDimensionsJsonMap.WithArray(enableTwoDimensionsItem.first, std::move(valueSetJsonList));
   }
   payload.WithObject("enableTwoDimensions", std::move(enableTwoDimensionsJsonMap));

  }

  if(m_inputOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputOrderJsonList(m_inputOrder.size());
   for(unsigned inputOrderIndex = 0; inputOrderIndex < inputOrderJsonList.GetLength(); ++inputOrderIndex)
   {
     inputOrderJsonList[inputOrderIndex].AsString(DimensionMapper::GetNameForDimension(m_inputOrder[inputOrderIndex]));
   }
   payload.WithArray("inputOrder", std::move(inputOrderJsonList));

  }

  return payload.View().WriteReadable();
}




