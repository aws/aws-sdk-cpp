/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetRecordRequest::BatchGetRecordRequest() : 
    m_identifiersHasBeenSet(false),
    m_expirationTimeResponse(ExpirationTimeResponse::NOT_SET),
    m_expirationTimeResponseHasBeenSet(false)
{
}

Aws::String BatchGetRecordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifiersJsonList(m_identifiers.size());
   for(unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex)
   {
     identifiersJsonList[identifiersIndex].AsObject(m_identifiers[identifiersIndex].Jsonize());
   }
   payload.WithArray("Identifiers", std::move(identifiersJsonList));

  }

  if(m_expirationTimeResponseHasBeenSet)
  {
   payload.WithString("ExpirationTimeResponse", ExpirationTimeResponseMapper::GetNameForExpirationTimeResponse(m_expirationTimeResponse));
  }

  return payload.View().WriteReadable();
}




