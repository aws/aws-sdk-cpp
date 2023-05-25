/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringOutputConfig.h>
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

MonitoringOutputConfig::MonitoringOutputConfig() : 
    m_monitoringOutputsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

MonitoringOutputConfig::MonitoringOutputConfig(JsonView jsonValue) : 
    m_monitoringOutputsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringOutputConfig& MonitoringOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringOutputs"))
  {
    Aws::Utils::Array<JsonView> monitoringOutputsJsonList = jsonValue.GetArray("MonitoringOutputs");
    for(unsigned monitoringOutputsIndex = 0; monitoringOutputsIndex < monitoringOutputsJsonList.GetLength(); ++monitoringOutputsIndex)
    {
      m_monitoringOutputs.push_back(monitoringOutputsJsonList[monitoringOutputsIndex].AsObject());
    }
    m_monitoringOutputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringOutputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitoringOutputsJsonList(m_monitoringOutputs.size());
   for(unsigned monitoringOutputsIndex = 0; monitoringOutputsIndex < monitoringOutputsJsonList.GetLength(); ++monitoringOutputsIndex)
   {
     monitoringOutputsJsonList[monitoringOutputsIndex].AsObject(m_monitoringOutputs[monitoringOutputsIndex].Jsonize());
   }
   payload.WithArray("MonitoringOutputs", std::move(monitoringOutputsJsonList));

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
