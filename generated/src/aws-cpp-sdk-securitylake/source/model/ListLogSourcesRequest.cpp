/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/ListLogSourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListLogSourcesRequest::ListLogSourcesRequest() : 
    m_inputOrderHasBeenSet(false),
    m_listAllDimensionsHasBeenSet(false),
    m_listSingleDimensionHasBeenSet(false),
    m_listTwoDimensionsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListLogSourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputOrderJsonList(m_inputOrder.size());
   for(unsigned inputOrderIndex = 0; inputOrderIndex < inputOrderJsonList.GetLength(); ++inputOrderIndex)
   {
     inputOrderJsonList[inputOrderIndex].AsString(DimensionMapper::GetNameForDimension(m_inputOrder[inputOrderIndex]));
   }
   payload.WithArray("inputOrder", std::move(inputOrderJsonList));

  }

  if(m_listAllDimensionsHasBeenSet)
  {
   JsonValue listAllDimensionsJsonMap;
   for(auto& listAllDimensionsItem : m_listAllDimensions)
   {
     JsonValue twoDimensionsMapJsonMap;
     for(auto& twoDimensionsMapItem : listAllDimensionsItem.second)
     {
       Aws::Utils::Array<JsonValue> valueSetJsonList(twoDimensionsMapItem.second.size());
       for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
       {
         valueSetJsonList[valueSetIndex].AsString(twoDimensionsMapItem.second[valueSetIndex]);
       }
       twoDimensionsMapJsonMap.WithArray(twoDimensionsMapItem.first, std::move(valueSetJsonList));
     }
     listAllDimensionsJsonMap.WithObject(listAllDimensionsItem.first, std::move(twoDimensionsMapJsonMap));
   }
   payload.WithObject("listAllDimensions", std::move(listAllDimensionsJsonMap));

  }

  if(m_listSingleDimensionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listSingleDimensionJsonList(m_listSingleDimension.size());
   for(unsigned listSingleDimensionIndex = 0; listSingleDimensionIndex < listSingleDimensionJsonList.GetLength(); ++listSingleDimensionIndex)
   {
     listSingleDimensionJsonList[listSingleDimensionIndex].AsString(m_listSingleDimension[listSingleDimensionIndex]);
   }
   payload.WithArray("listSingleDimension", std::move(listSingleDimensionJsonList));

  }

  if(m_listTwoDimensionsHasBeenSet)
  {
   JsonValue listTwoDimensionsJsonMap;
   for(auto& listTwoDimensionsItem : m_listTwoDimensions)
   {
     Aws::Utils::Array<JsonValue> valueSetJsonList(listTwoDimensionsItem.second.size());
     for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
     {
       valueSetJsonList[valueSetIndex].AsString(listTwoDimensionsItem.second[valueSetIndex]);
     }
     listTwoDimensionsJsonMap.WithArray(listTwoDimensionsItem.first, std::move(valueSetJsonList));
   }
   payload.WithObject("listTwoDimensions", std::move(listTwoDimensionsJsonMap));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




