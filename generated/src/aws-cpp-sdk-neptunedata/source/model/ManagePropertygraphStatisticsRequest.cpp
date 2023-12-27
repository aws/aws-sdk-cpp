/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ManagePropertygraphStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ManagePropertygraphStatisticsRequest::ManagePropertygraphStatisticsRequest() : 
    m_mode(StatisticsAutoGenerationMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

Aws::String ManagePropertygraphStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", StatisticsAutoGenerationModeMapper::GetNameForStatisticsAutoGenerationMode(m_mode));
  }

  return payload.View().WriteReadable();
}




