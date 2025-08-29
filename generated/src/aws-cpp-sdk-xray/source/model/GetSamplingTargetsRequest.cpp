/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetSamplingTargetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetSamplingTargetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_samplingStatisticsDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> samplingStatisticsDocumentsJsonList(m_samplingStatisticsDocuments.size());
   for(unsigned samplingStatisticsDocumentsIndex = 0; samplingStatisticsDocumentsIndex < samplingStatisticsDocumentsJsonList.GetLength(); ++samplingStatisticsDocumentsIndex)
   {
     samplingStatisticsDocumentsJsonList[samplingStatisticsDocumentsIndex].AsObject(m_samplingStatisticsDocuments[samplingStatisticsDocumentsIndex].Jsonize());
   }
   payload.WithArray("SamplingStatisticsDocuments", std::move(samplingStatisticsDocumentsJsonList));

  }

  if(m_samplingBoostStatisticsDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> samplingBoostStatisticsDocumentsJsonList(m_samplingBoostStatisticsDocuments.size());
   for(unsigned samplingBoostStatisticsDocumentsIndex = 0; samplingBoostStatisticsDocumentsIndex < samplingBoostStatisticsDocumentsJsonList.GetLength(); ++samplingBoostStatisticsDocumentsIndex)
   {
     samplingBoostStatisticsDocumentsJsonList[samplingBoostStatisticsDocumentsIndex].AsObject(m_samplingBoostStatisticsDocuments[samplingBoostStatisticsDocumentsIndex].Jsonize());
   }
   payload.WithArray("SamplingBoostStatisticsDocuments", std::move(samplingBoostStatisticsDocumentsJsonList));

  }

  return payload.View().WriteReadable();
}




