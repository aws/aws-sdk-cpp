/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HumanLoopConfig.h>
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

HumanLoopConfig::HumanLoopConfig() : 
    m_workteamArnHasBeenSet(false),
    m_humanTaskUiArnHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskCount(0),
    m_taskCountHasBeenSet(false),
    m_taskAvailabilityLifetimeInSeconds(0),
    m_taskAvailabilityLifetimeInSecondsHasBeenSet(false),
    m_taskTimeLimitInSeconds(0),
    m_taskTimeLimitInSecondsHasBeenSet(false),
    m_taskKeywordsHasBeenSet(false),
    m_publicWorkforceTaskPriceHasBeenSet(false)
{
}

HumanLoopConfig::HumanLoopConfig(JsonView jsonValue) : 
    m_workteamArnHasBeenSet(false),
    m_humanTaskUiArnHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskCount(0),
    m_taskCountHasBeenSet(false),
    m_taskAvailabilityLifetimeInSeconds(0),
    m_taskAvailabilityLifetimeInSecondsHasBeenSet(false),
    m_taskTimeLimitInSeconds(0),
    m_taskTimeLimitInSecondsHasBeenSet(false),
    m_taskKeywordsHasBeenSet(false),
    m_publicWorkforceTaskPriceHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopConfig& HumanLoopConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkteamArn"))
  {
    m_workteamArn = jsonValue.GetString("WorkteamArn");

    m_workteamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HumanTaskUiArn"))
  {
    m_humanTaskUiArn = jsonValue.GetString("HumanTaskUiArn");

    m_humanTaskUiArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskTitle"))
  {
    m_taskTitle = jsonValue.GetString("TaskTitle");

    m_taskTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskDescription"))
  {
    m_taskDescription = jsonValue.GetString("TaskDescription");

    m_taskDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskCount"))
  {
    m_taskCount = jsonValue.GetInteger("TaskCount");

    m_taskCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskAvailabilityLifetimeInSeconds"))
  {
    m_taskAvailabilityLifetimeInSeconds = jsonValue.GetInteger("TaskAvailabilityLifetimeInSeconds");

    m_taskAvailabilityLifetimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskTimeLimitInSeconds"))
  {
    m_taskTimeLimitInSeconds = jsonValue.GetInteger("TaskTimeLimitInSeconds");

    m_taskTimeLimitInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskKeywords"))
  {
    Aws::Utils::Array<JsonView> taskKeywordsJsonList = jsonValue.GetArray("TaskKeywords");
    for(unsigned taskKeywordsIndex = 0; taskKeywordsIndex < taskKeywordsJsonList.GetLength(); ++taskKeywordsIndex)
    {
      m_taskKeywords.push_back(taskKeywordsJsonList[taskKeywordsIndex].AsString());
    }
    m_taskKeywordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicWorkforceTaskPrice"))
  {
    m_publicWorkforceTaskPrice = jsonValue.GetObject("PublicWorkforceTaskPrice");

    m_publicWorkforceTaskPriceHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopConfig::Jsonize() const
{
  JsonValue payload;

  if(m_workteamArnHasBeenSet)
  {
   payload.WithString("WorkteamArn", m_workteamArn);

  }

  if(m_humanTaskUiArnHasBeenSet)
  {
   payload.WithString("HumanTaskUiArn", m_humanTaskUiArn);

  }

  if(m_taskTitleHasBeenSet)
  {
   payload.WithString("TaskTitle", m_taskTitle);

  }

  if(m_taskDescriptionHasBeenSet)
  {
   payload.WithString("TaskDescription", m_taskDescription);

  }

  if(m_taskCountHasBeenSet)
  {
   payload.WithInteger("TaskCount", m_taskCount);

  }

  if(m_taskAvailabilityLifetimeInSecondsHasBeenSet)
  {
   payload.WithInteger("TaskAvailabilityLifetimeInSeconds", m_taskAvailabilityLifetimeInSeconds);

  }

  if(m_taskTimeLimitInSecondsHasBeenSet)
  {
   payload.WithInteger("TaskTimeLimitInSeconds", m_taskTimeLimitInSeconds);

  }

  if(m_taskKeywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskKeywordsJsonList(m_taskKeywords.size());
   for(unsigned taskKeywordsIndex = 0; taskKeywordsIndex < taskKeywordsJsonList.GetLength(); ++taskKeywordsIndex)
   {
     taskKeywordsJsonList[taskKeywordsIndex].AsString(m_taskKeywords[taskKeywordsIndex]);
   }
   payload.WithArray("TaskKeywords", std::move(taskKeywordsJsonList));

  }

  if(m_publicWorkforceTaskPriceHasBeenSet)
  {
   payload.WithObject("PublicWorkforceTaskPrice", m_publicWorkforceTaskPrice.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
