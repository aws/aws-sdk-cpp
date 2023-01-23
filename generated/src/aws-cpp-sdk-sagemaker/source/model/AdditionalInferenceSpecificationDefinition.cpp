/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AdditionalInferenceSpecificationDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AdditionalInferenceSpecificationDefinition::AdditionalInferenceSpecificationDefinition() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_supportedTransformInstanceTypesHasBeenSet(false),
    m_supportedRealtimeInferenceInstanceTypesHasBeenSet(false),
    m_supportedContentTypesHasBeenSet(false),
    m_supportedResponseMIMETypesHasBeenSet(false)
{
}

AdditionalInferenceSpecificationDefinition::AdditionalInferenceSpecificationDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_supportedTransformInstanceTypesHasBeenSet(false),
    m_supportedRealtimeInferenceInstanceTypesHasBeenSet(false),
    m_supportedContentTypesHasBeenSet(false),
    m_supportedResponseMIMETypesHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalInferenceSpecificationDefinition& AdditionalInferenceSpecificationDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("Containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedTransformInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> supportedTransformInstanceTypesJsonList = jsonValue.GetArray("SupportedTransformInstanceTypes");
    for(unsigned supportedTransformInstanceTypesIndex = 0; supportedTransformInstanceTypesIndex < supportedTransformInstanceTypesJsonList.GetLength(); ++supportedTransformInstanceTypesIndex)
    {
      m_supportedTransformInstanceTypes.push_back(TransformInstanceTypeMapper::GetTransformInstanceTypeForName(supportedTransformInstanceTypesJsonList[supportedTransformInstanceTypesIndex].AsString()));
    }
    m_supportedTransformInstanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedRealtimeInferenceInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> supportedRealtimeInferenceInstanceTypesJsonList = jsonValue.GetArray("SupportedRealtimeInferenceInstanceTypes");
    for(unsigned supportedRealtimeInferenceInstanceTypesIndex = 0; supportedRealtimeInferenceInstanceTypesIndex < supportedRealtimeInferenceInstanceTypesJsonList.GetLength(); ++supportedRealtimeInferenceInstanceTypesIndex)
    {
      m_supportedRealtimeInferenceInstanceTypes.push_back(ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(supportedRealtimeInferenceInstanceTypesJsonList[supportedRealtimeInferenceInstanceTypesIndex].AsString()));
    }
    m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedContentTypes"))
  {
    Aws::Utils::Array<JsonView> supportedContentTypesJsonList = jsonValue.GetArray("SupportedContentTypes");
    for(unsigned supportedContentTypesIndex = 0; supportedContentTypesIndex < supportedContentTypesJsonList.GetLength(); ++supportedContentTypesIndex)
    {
      m_supportedContentTypes.push_back(supportedContentTypesJsonList[supportedContentTypesIndex].AsString());
    }
    m_supportedContentTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedResponseMIMETypes"))
  {
    Aws::Utils::Array<JsonView> supportedResponseMIMETypesJsonList = jsonValue.GetArray("SupportedResponseMIMETypes");
    for(unsigned supportedResponseMIMETypesIndex = 0; supportedResponseMIMETypesIndex < supportedResponseMIMETypesJsonList.GetLength(); ++supportedResponseMIMETypesIndex)
    {
      m_supportedResponseMIMETypes.push_back(supportedResponseMIMETypesJsonList[supportedResponseMIMETypesIndex].AsString());
    }
    m_supportedResponseMIMETypesHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalInferenceSpecificationDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("Containers", std::move(containersJsonList));

  }

  if(m_supportedTransformInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedTransformInstanceTypesJsonList(m_supportedTransformInstanceTypes.size());
   for(unsigned supportedTransformInstanceTypesIndex = 0; supportedTransformInstanceTypesIndex < supportedTransformInstanceTypesJsonList.GetLength(); ++supportedTransformInstanceTypesIndex)
   {
     supportedTransformInstanceTypesJsonList[supportedTransformInstanceTypesIndex].AsString(TransformInstanceTypeMapper::GetNameForTransformInstanceType(m_supportedTransformInstanceTypes[supportedTransformInstanceTypesIndex]));
   }
   payload.WithArray("SupportedTransformInstanceTypes", std::move(supportedTransformInstanceTypesJsonList));

  }

  if(m_supportedRealtimeInferenceInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedRealtimeInferenceInstanceTypesJsonList(m_supportedRealtimeInferenceInstanceTypes.size());
   for(unsigned supportedRealtimeInferenceInstanceTypesIndex = 0; supportedRealtimeInferenceInstanceTypesIndex < supportedRealtimeInferenceInstanceTypesJsonList.GetLength(); ++supportedRealtimeInferenceInstanceTypesIndex)
   {
     supportedRealtimeInferenceInstanceTypesJsonList[supportedRealtimeInferenceInstanceTypesIndex].AsString(ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_supportedRealtimeInferenceInstanceTypes[supportedRealtimeInferenceInstanceTypesIndex]));
   }
   payload.WithArray("SupportedRealtimeInferenceInstanceTypes", std::move(supportedRealtimeInferenceInstanceTypesJsonList));

  }

  if(m_supportedContentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedContentTypesJsonList(m_supportedContentTypes.size());
   for(unsigned supportedContentTypesIndex = 0; supportedContentTypesIndex < supportedContentTypesJsonList.GetLength(); ++supportedContentTypesIndex)
   {
     supportedContentTypesJsonList[supportedContentTypesIndex].AsString(m_supportedContentTypes[supportedContentTypesIndex]);
   }
   payload.WithArray("SupportedContentTypes", std::move(supportedContentTypesJsonList));

  }

  if(m_supportedResponseMIMETypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedResponseMIMETypesJsonList(m_supportedResponseMIMETypes.size());
   for(unsigned supportedResponseMIMETypesIndex = 0; supportedResponseMIMETypesIndex < supportedResponseMIMETypesJsonList.GetLength(); ++supportedResponseMIMETypesIndex)
   {
     supportedResponseMIMETypesJsonList[supportedResponseMIMETypesIndex].AsString(m_supportedResponseMIMETypes[supportedResponseMIMETypesIndex]);
   }
   payload.WithArray("SupportedResponseMIMETypes", std::move(supportedResponseMIMETypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
