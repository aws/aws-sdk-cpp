/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Endpoint.h>
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

Endpoint::Endpoint() : 
    m_endpointNameHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_endpointConfigNameHasBeenSet(false),
    m_productionVariantsHasBeenSet(false),
    m_dataCaptureConfigHasBeenSet(false),
    m_endpointStatus(EndpointStatus::NOT_SET),
    m_endpointStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringSchedulesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_shadowProductionVariantsHasBeenSet(false)
{
}

Endpoint::Endpoint(JsonView jsonValue) : 
    m_endpointNameHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_endpointConfigNameHasBeenSet(false),
    m_productionVariantsHasBeenSet(false),
    m_dataCaptureConfigHasBeenSet(false),
    m_endpointStatus(EndpointStatus::NOT_SET),
    m_endpointStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringSchedulesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_shadowProductionVariantsHasBeenSet(false)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointConfigName"))
  {
    m_endpointConfigName = jsonValue.GetString("EndpointConfigName");

    m_endpointConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductionVariants"))
  {
    Aws::Utils::Array<JsonView> productionVariantsJsonList = jsonValue.GetArray("ProductionVariants");
    for(unsigned productionVariantsIndex = 0; productionVariantsIndex < productionVariantsJsonList.GetLength(); ++productionVariantsIndex)
    {
      m_productionVariants.push_back(productionVariantsJsonList[productionVariantsIndex].AsObject());
    }
    m_productionVariantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataCaptureConfig"))
  {
    m_dataCaptureConfig = jsonValue.GetObject("DataCaptureConfig");

    m_dataCaptureConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointStatus"))
  {
    m_endpointStatus = EndpointStatusMapper::GetEndpointStatusForName(jsonValue.GetString("EndpointStatus"));

    m_endpointStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringSchedules"))
  {
    Aws::Utils::Array<JsonView> monitoringSchedulesJsonList = jsonValue.GetArray("MonitoringSchedules");
    for(unsigned monitoringSchedulesIndex = 0; monitoringSchedulesIndex < monitoringSchedulesJsonList.GetLength(); ++monitoringSchedulesIndex)
    {
      m_monitoringSchedules.push_back(monitoringSchedulesJsonList[monitoringSchedulesIndex].AsObject());
    }
    m_monitoringSchedulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShadowProductionVariants"))
  {
    Aws::Utils::Array<JsonView> shadowProductionVariantsJsonList = jsonValue.GetArray("ShadowProductionVariants");
    for(unsigned shadowProductionVariantsIndex = 0; shadowProductionVariantsIndex < shadowProductionVariantsJsonList.GetLength(); ++shadowProductionVariantsIndex)
    {
      m_shadowProductionVariants.push_back(shadowProductionVariantsJsonList[shadowProductionVariantsIndex].AsObject());
    }
    m_shadowProductionVariantsHasBeenSet = true;
  }

  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_endpointConfigNameHasBeenSet)
  {
   payload.WithString("EndpointConfigName", m_endpointConfigName);

  }

  if(m_productionVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productionVariantsJsonList(m_productionVariants.size());
   for(unsigned productionVariantsIndex = 0; productionVariantsIndex < productionVariantsJsonList.GetLength(); ++productionVariantsIndex)
   {
     productionVariantsJsonList[productionVariantsIndex].AsObject(m_productionVariants[productionVariantsIndex].Jsonize());
   }
   payload.WithArray("ProductionVariants", std::move(productionVariantsJsonList));

  }

  if(m_dataCaptureConfigHasBeenSet)
  {
   payload.WithObject("DataCaptureConfig", m_dataCaptureConfig.Jsonize());

  }

  if(m_endpointStatusHasBeenSet)
  {
   payload.WithString("EndpointStatus", EndpointStatusMapper::GetNameForEndpointStatus(m_endpointStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_monitoringSchedulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitoringSchedulesJsonList(m_monitoringSchedules.size());
   for(unsigned monitoringSchedulesIndex = 0; monitoringSchedulesIndex < monitoringSchedulesJsonList.GetLength(); ++monitoringSchedulesIndex)
   {
     monitoringSchedulesJsonList[monitoringSchedulesIndex].AsObject(m_monitoringSchedules[monitoringSchedulesIndex].Jsonize());
   }
   payload.WithArray("MonitoringSchedules", std::move(monitoringSchedulesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_shadowProductionVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shadowProductionVariantsJsonList(m_shadowProductionVariants.size());
   for(unsigned shadowProductionVariantsIndex = 0; shadowProductionVariantsIndex < shadowProductionVariantsJsonList.GetLength(); ++shadowProductionVariantsIndex)
   {
     shadowProductionVariantsJsonList[shadowProductionVariantsIndex].AsObject(m_shadowProductionVariants[shadowProductionVariantsIndex].Jsonize());
   }
   payload.WithArray("ShadowProductionVariants", std::move(shadowProductionVariantsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
