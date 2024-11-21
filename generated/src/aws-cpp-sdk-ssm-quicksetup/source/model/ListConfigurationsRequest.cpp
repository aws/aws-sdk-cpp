﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/ListConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListConfigurationsRequest::ListConfigurationsRequest() : 
    m_configurationDefinitionIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_managerArnHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_startingTokenHasBeenSet(false)
{
}

Aws::String ListConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationDefinitionIdHasBeenSet)
  {
   payload.WithString("ConfigurationDefinitionId", m_configurationDefinitionId);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_managerArnHasBeenSet)
  {
   payload.WithString("ManagerArn", m_managerArn);

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  if(m_startingTokenHasBeenSet)
  {
   payload.WithString("StartingToken", m_startingToken);

  }

  return payload.View().WriteReadable();
}




