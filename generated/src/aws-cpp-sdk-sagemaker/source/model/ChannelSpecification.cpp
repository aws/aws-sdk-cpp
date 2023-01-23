/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ChannelSpecification.h>
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

ChannelSpecification::ChannelSpecification() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_supportedContentTypesHasBeenSet(false),
    m_supportedCompressionTypesHasBeenSet(false),
    m_supportedInputModesHasBeenSet(false)
{
}

ChannelSpecification::ChannelSpecification(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_supportedContentTypesHasBeenSet(false),
    m_supportedCompressionTypesHasBeenSet(false),
    m_supportedInputModesHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelSpecification& ChannelSpecification::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("IsRequired"))
  {
    m_isRequired = jsonValue.GetBool("IsRequired");

    m_isRequiredHasBeenSet = true;
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

  if(jsonValue.ValueExists("SupportedCompressionTypes"))
  {
    Aws::Utils::Array<JsonView> supportedCompressionTypesJsonList = jsonValue.GetArray("SupportedCompressionTypes");
    for(unsigned supportedCompressionTypesIndex = 0; supportedCompressionTypesIndex < supportedCompressionTypesJsonList.GetLength(); ++supportedCompressionTypesIndex)
    {
      m_supportedCompressionTypes.push_back(CompressionTypeMapper::GetCompressionTypeForName(supportedCompressionTypesJsonList[supportedCompressionTypesIndex].AsString()));
    }
    m_supportedCompressionTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedInputModes"))
  {
    Aws::Utils::Array<JsonView> supportedInputModesJsonList = jsonValue.GetArray("SupportedInputModes");
    for(unsigned supportedInputModesIndex = 0; supportedInputModesIndex < supportedInputModesJsonList.GetLength(); ++supportedInputModesIndex)
    {
      m_supportedInputModes.push_back(TrainingInputModeMapper::GetTrainingInputModeForName(supportedInputModesJsonList[supportedInputModesIndex].AsString()));
    }
    m_supportedInputModesHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelSpecification::Jsonize() const
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

  if(m_isRequiredHasBeenSet)
  {
   payload.WithBool("IsRequired", m_isRequired);

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

  if(m_supportedCompressionTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedCompressionTypesJsonList(m_supportedCompressionTypes.size());
   for(unsigned supportedCompressionTypesIndex = 0; supportedCompressionTypesIndex < supportedCompressionTypesJsonList.GetLength(); ++supportedCompressionTypesIndex)
   {
     supportedCompressionTypesJsonList[supportedCompressionTypesIndex].AsString(CompressionTypeMapper::GetNameForCompressionType(m_supportedCompressionTypes[supportedCompressionTypesIndex]));
   }
   payload.WithArray("SupportedCompressionTypes", std::move(supportedCompressionTypesJsonList));

  }

  if(m_supportedInputModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedInputModesJsonList(m_supportedInputModes.size());
   for(unsigned supportedInputModesIndex = 0; supportedInputModesIndex < supportedInputModesJsonList.GetLength(); ++supportedInputModesIndex)
   {
     supportedInputModesJsonList[supportedInputModesIndex].AsString(TrainingInputModeMapper::GetNameForTrainingInputMode(m_supportedInputModes[supportedInputModesIndex]));
   }
   payload.WithArray("SupportedInputModes", std::move(supportedInputModesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
