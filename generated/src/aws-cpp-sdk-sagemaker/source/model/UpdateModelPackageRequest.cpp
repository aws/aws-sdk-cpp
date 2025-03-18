﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateModelPackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateModelPackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelPackageArnHasBeenSet)
  {
   payload.WithString("ModelPackageArn", m_modelPackageArn);

  }

  if(m_modelApprovalStatusHasBeenSet)
  {
   payload.WithString("ModelApprovalStatus", ModelApprovalStatusMapper::GetNameForModelApprovalStatus(m_modelApprovalStatus));
  }

  if(m_approvalDescriptionHasBeenSet)
  {
   payload.WithString("ApprovalDescription", m_approvalDescription);

  }

  if(m_customerMetadataPropertiesHasBeenSet)
  {
   JsonValue customerMetadataPropertiesJsonMap;
   for(auto& customerMetadataPropertiesItem : m_customerMetadataProperties)
   {
     customerMetadataPropertiesJsonMap.WithString(customerMetadataPropertiesItem.first, customerMetadataPropertiesItem.second);
   }
   payload.WithObject("CustomerMetadataProperties", std::move(customerMetadataPropertiesJsonMap));

  }

  if(m_customerMetadataPropertiesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerMetadataPropertiesToRemoveJsonList(m_customerMetadataPropertiesToRemove.size());
   for(unsigned customerMetadataPropertiesToRemoveIndex = 0; customerMetadataPropertiesToRemoveIndex < customerMetadataPropertiesToRemoveJsonList.GetLength(); ++customerMetadataPropertiesToRemoveIndex)
   {
     customerMetadataPropertiesToRemoveJsonList[customerMetadataPropertiesToRemoveIndex].AsString(m_customerMetadataPropertiesToRemove[customerMetadataPropertiesToRemoveIndex]);
   }
   payload.WithArray("CustomerMetadataPropertiesToRemove", std::move(customerMetadataPropertiesToRemoveJsonList));

  }

  if(m_additionalInferenceSpecificationsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalInferenceSpecificationsToAddJsonList(m_additionalInferenceSpecificationsToAdd.size());
   for(unsigned additionalInferenceSpecificationsToAddIndex = 0; additionalInferenceSpecificationsToAddIndex < additionalInferenceSpecificationsToAddJsonList.GetLength(); ++additionalInferenceSpecificationsToAddIndex)
   {
     additionalInferenceSpecificationsToAddJsonList[additionalInferenceSpecificationsToAddIndex].AsObject(m_additionalInferenceSpecificationsToAdd[additionalInferenceSpecificationsToAddIndex].Jsonize());
   }
   payload.WithArray("AdditionalInferenceSpecificationsToAdd", std::move(additionalInferenceSpecificationsToAddJsonList));

  }

  if(m_inferenceSpecificationHasBeenSet)
  {
   payload.WithObject("InferenceSpecification", m_inferenceSpecification.Jsonize());

  }

  if(m_sourceUriHasBeenSet)
  {
   payload.WithString("SourceUri", m_sourceUri);

  }

  if(m_modelCardHasBeenSet)
  {
   payload.WithObject("ModelCard", m_modelCard.Jsonize());

  }

  if(m_modelLifeCycleHasBeenSet)
  {
   payload.WithObject("ModelLifeCycle", m_modelLifeCycle.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateModelPackageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateModelPackage"));
  return headers;

}




