/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HumanTaskConfig.h>
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

HumanTaskConfig::HumanTaskConfig() : 
    m_workteamArnHasBeenSet(false),
    m_uiConfigHasBeenSet(false),
    m_preHumanTaskLambdaArnHasBeenSet(false),
    m_taskKeywordsHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_numberOfHumanWorkersPerDataObject(0),
    m_numberOfHumanWorkersPerDataObjectHasBeenSet(false),
    m_taskTimeLimitInSeconds(0),
    m_taskTimeLimitInSecondsHasBeenSet(false),
    m_taskAvailabilityLifetimeInSeconds(0),
    m_taskAvailabilityLifetimeInSecondsHasBeenSet(false),
    m_maxConcurrentTaskCount(0),
    m_maxConcurrentTaskCountHasBeenSet(false),
    m_annotationConsolidationConfigHasBeenSet(false),
    m_publicWorkforceTaskPriceHasBeenSet(false)
{
}

HumanTaskConfig::HumanTaskConfig(JsonView jsonValue) : 
    m_workteamArnHasBeenSet(false),
    m_uiConfigHasBeenSet(false),
    m_preHumanTaskLambdaArnHasBeenSet(false),
    m_taskKeywordsHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_numberOfHumanWorkersPerDataObject(0),
    m_numberOfHumanWorkersPerDataObjectHasBeenSet(false),
    m_taskTimeLimitInSeconds(0),
    m_taskTimeLimitInSecondsHasBeenSet(false),
    m_taskAvailabilityLifetimeInSeconds(0),
    m_taskAvailabilityLifetimeInSecondsHasBeenSet(false),
    m_maxConcurrentTaskCount(0),
    m_maxConcurrentTaskCountHasBeenSet(false),
    m_annotationConsolidationConfigHasBeenSet(false),
    m_publicWorkforceTaskPriceHasBeenSet(false)
{
  *this = jsonValue;
}

HumanTaskConfig& HumanTaskConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkteamArn"))
  {
    m_workteamArn = jsonValue.GetString("WorkteamArn");

    m_workteamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UiConfig"))
  {
    m_uiConfig = jsonValue.GetObject("UiConfig");

    m_uiConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreHumanTaskLambdaArn"))
  {
    m_preHumanTaskLambdaArn = jsonValue.GetString("PreHumanTaskLambdaArn");

    m_preHumanTaskLambdaArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("NumberOfHumanWorkersPerDataObject"))
  {
    m_numberOfHumanWorkersPerDataObject = jsonValue.GetInteger("NumberOfHumanWorkersPerDataObject");

    m_numberOfHumanWorkersPerDataObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskTimeLimitInSeconds"))
  {
    m_taskTimeLimitInSeconds = jsonValue.GetInteger("TaskTimeLimitInSeconds");

    m_taskTimeLimitInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskAvailabilityLifetimeInSeconds"))
  {
    m_taskAvailabilityLifetimeInSeconds = jsonValue.GetInteger("TaskAvailabilityLifetimeInSeconds");

    m_taskAvailabilityLifetimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrentTaskCount"))
  {
    m_maxConcurrentTaskCount = jsonValue.GetInteger("MaxConcurrentTaskCount");

    m_maxConcurrentTaskCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnnotationConsolidationConfig"))
  {
    m_annotationConsolidationConfig = jsonValue.GetObject("AnnotationConsolidationConfig");

    m_annotationConsolidationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicWorkforceTaskPrice"))
  {
    m_publicWorkforceTaskPrice = jsonValue.GetObject("PublicWorkforceTaskPrice");

    m_publicWorkforceTaskPriceHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanTaskConfig::Jsonize() const
{
  JsonValue payload;

  if(m_workteamArnHasBeenSet)
  {
   payload.WithString("WorkteamArn", m_workteamArn);

  }

  if(m_uiConfigHasBeenSet)
  {
   payload.WithObject("UiConfig", m_uiConfig.Jsonize());

  }

  if(m_preHumanTaskLambdaArnHasBeenSet)
  {
   payload.WithString("PreHumanTaskLambdaArn", m_preHumanTaskLambdaArn);

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

  if(m_taskTitleHasBeenSet)
  {
   payload.WithString("TaskTitle", m_taskTitle);

  }

  if(m_taskDescriptionHasBeenSet)
  {
   payload.WithString("TaskDescription", m_taskDescription);

  }

  if(m_numberOfHumanWorkersPerDataObjectHasBeenSet)
  {
   payload.WithInteger("NumberOfHumanWorkersPerDataObject", m_numberOfHumanWorkersPerDataObject);

  }

  if(m_taskTimeLimitInSecondsHasBeenSet)
  {
   payload.WithInteger("TaskTimeLimitInSeconds", m_taskTimeLimitInSeconds);

  }

  if(m_taskAvailabilityLifetimeInSecondsHasBeenSet)
  {
   payload.WithInteger("TaskAvailabilityLifetimeInSeconds", m_taskAvailabilityLifetimeInSeconds);

  }

  if(m_maxConcurrentTaskCountHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentTaskCount", m_maxConcurrentTaskCount);

  }

  if(m_annotationConsolidationConfigHasBeenSet)
  {
   payload.WithObject("AnnotationConsolidationConfig", m_annotationConsolidationConfig.Jsonize());

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
