/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PutDataSetRefreshPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDataSetRefreshPropertiesRequest::PutDataSetRefreshPropertiesRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_dataSetRefreshPropertiesHasBeenSet(false)
{
}

Aws::String PutDataSetRefreshPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSetRefreshPropertiesHasBeenSet)
  {
   payload.WithObject("DataSetRefreshProperties", m_dataSetRefreshProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




