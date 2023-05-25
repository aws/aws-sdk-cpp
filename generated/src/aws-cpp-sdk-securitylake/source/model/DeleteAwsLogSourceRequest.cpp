/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DeleteAwsLogSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAwsLogSourceRequest::DeleteAwsLogSourceRequest() : 
    m_disableAllDimensionsHasBeenSet(false),
    m_disableSingleDimensionHasBeenSet(false),
    m_disableTwoDimensionsHasBeenSet(false),
    m_inputOrderHasBeenSet(false)
{
}

Aws::String DeleteAwsLogSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_disableAllDimensionsHasBeenSet)
  {
   JsonValue disableAllDimensionsJsonMap;
   for(auto& disableAllDimensionsItem : m_disableAllDimensions)
   {
     JsonValue twoDimensionsMapJsonMap;
     for(auto& twoDimensionsMapItem : disableAllDimensionsItem.second)
     {
       Aws::Utils::Array<JsonValue> valueSetJsonList(twoDimensionsMapItem.second.size());
       for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
       {
         valueSetJsonList[valueSetIndex].AsString(twoDimensionsMapItem.second[valueSetIndex]);
       }
       twoDimensionsMapJsonMap.WithArray(twoDimensionsMapItem.first, std::move(valueSetJsonList));
     }
     disableAllDimensionsJsonMap.WithObject(disableAllDimensionsItem.first, std::move(twoDimensionsMapJsonMap));
   }
   payload.WithObject("disableAllDimensions", std::move(disableAllDimensionsJsonMap));

  }

  if(m_disableSingleDimensionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> disableSingleDimensionJsonList(m_disableSingleDimension.size());
   for(unsigned disableSingleDimensionIndex = 0; disableSingleDimensionIndex < disableSingleDimensionJsonList.GetLength(); ++disableSingleDimensionIndex)
   {
     disableSingleDimensionJsonList[disableSingleDimensionIndex].AsString(m_disableSingleDimension[disableSingleDimensionIndex]);
   }
   payload.WithArray("disableSingleDimension", std::move(disableSingleDimensionJsonList));

  }

  if(m_disableTwoDimensionsHasBeenSet)
  {
   JsonValue disableTwoDimensionsJsonMap;
   for(auto& disableTwoDimensionsItem : m_disableTwoDimensions)
   {
     Aws::Utils::Array<JsonValue> valueSetJsonList(disableTwoDimensionsItem.second.size());
     for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
     {
       valueSetJsonList[valueSetIndex].AsString(disableTwoDimensionsItem.second[valueSetIndex]);
     }
     disableTwoDimensionsJsonMap.WithArray(disableTwoDimensionsItem.first, std::move(valueSetJsonList));
   }
   payload.WithObject("disableTwoDimensions", std::move(disableTwoDimensionsJsonMap));

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




