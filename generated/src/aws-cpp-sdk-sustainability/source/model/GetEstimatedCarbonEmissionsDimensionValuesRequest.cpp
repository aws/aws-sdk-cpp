/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsDimensionValuesRequest.h>

#include <utility>

using namespace Aws::Sustainability::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetEstimatedCarbonEmissionsDimensionValuesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_timePeriodHasBeenSet) {
    payload.WithObject("TimePeriod", m_timePeriod.Jsonize());
  }

  if (m_dimensionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
    for (unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex) {
      dimensionsJsonList[dimensionsIndex].AsString(DimensionMapper::GetNameForDimension(m_dimensions[dimensionsIndex]));
    }
    payload.WithArray("Dimensions", std::move(dimensionsJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
