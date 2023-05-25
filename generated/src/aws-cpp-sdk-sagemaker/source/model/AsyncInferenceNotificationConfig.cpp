/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AsyncInferenceNotificationConfig.h>
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

AsyncInferenceNotificationConfig::AsyncInferenceNotificationConfig() : 
    m_successTopicHasBeenSet(false),
    m_errorTopicHasBeenSet(false),
    m_includeInferenceResponseInHasBeenSet(false)
{
}

AsyncInferenceNotificationConfig::AsyncInferenceNotificationConfig(JsonView jsonValue) : 
    m_successTopicHasBeenSet(false),
    m_errorTopicHasBeenSet(false),
    m_includeInferenceResponseInHasBeenSet(false)
{
  *this = jsonValue;
}

AsyncInferenceNotificationConfig& AsyncInferenceNotificationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuccessTopic"))
  {
    m_successTopic = jsonValue.GetString("SuccessTopic");

    m_successTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorTopic"))
  {
    m_errorTopic = jsonValue.GetString("ErrorTopic");

    m_errorTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeInferenceResponseIn"))
  {
    Aws::Utils::Array<JsonView> includeInferenceResponseInJsonList = jsonValue.GetArray("IncludeInferenceResponseIn");
    for(unsigned includeInferenceResponseInIndex = 0; includeInferenceResponseInIndex < includeInferenceResponseInJsonList.GetLength(); ++includeInferenceResponseInIndex)
    {
      m_includeInferenceResponseIn.push_back(AsyncNotificationTopicTypesMapper::GetAsyncNotificationTopicTypesForName(includeInferenceResponseInJsonList[includeInferenceResponseInIndex].AsString()));
    }
    m_includeInferenceResponseInHasBeenSet = true;
  }

  return *this;
}

JsonValue AsyncInferenceNotificationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_successTopicHasBeenSet)
  {
   payload.WithString("SuccessTopic", m_successTopic);

  }

  if(m_errorTopicHasBeenSet)
  {
   payload.WithString("ErrorTopic", m_errorTopic);

  }

  if(m_includeInferenceResponseInHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeInferenceResponseInJsonList(m_includeInferenceResponseIn.size());
   for(unsigned includeInferenceResponseInIndex = 0; includeInferenceResponseInIndex < includeInferenceResponseInJsonList.GetLength(); ++includeInferenceResponseInIndex)
   {
     includeInferenceResponseInJsonList[includeInferenceResponseInIndex].AsString(AsyncNotificationTopicTypesMapper::GetNameForAsyncNotificationTopicTypes(m_includeInferenceResponseIn[includeInferenceResponseInIndex]));
   }
   payload.WithArray("IncludeInferenceResponseIn", std::move(includeInferenceResponseInJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
