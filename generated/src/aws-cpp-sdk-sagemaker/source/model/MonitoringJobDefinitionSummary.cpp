/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringJobDefinitionSummary.h>
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

MonitoringJobDefinitionSummary::MonitoringJobDefinitionSummary() : 
    m_monitoringJobDefinitionNameHasBeenSet(false),
    m_monitoringJobDefinitionArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endpointNameHasBeenSet(false)
{
}

MonitoringJobDefinitionSummary::MonitoringJobDefinitionSummary(JsonView jsonValue) : 
    m_monitoringJobDefinitionNameHasBeenSet(false),
    m_monitoringJobDefinitionArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endpointNameHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringJobDefinitionSummary& MonitoringJobDefinitionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringJobDefinitionName"))
  {
    m_monitoringJobDefinitionName = jsonValue.GetString("MonitoringJobDefinitionName");

    m_monitoringJobDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringJobDefinitionArn"))
  {
    m_monitoringJobDefinitionArn = jsonValue.GetString("MonitoringJobDefinitionArn");

    m_monitoringJobDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringJobDefinitionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringJobDefinitionNameHasBeenSet)
  {
   payload.WithString("MonitoringJobDefinitionName", m_monitoringJobDefinitionName);

  }

  if(m_monitoringJobDefinitionArnHasBeenSet)
  {
   payload.WithString("MonitoringJobDefinitionArn", m_monitoringJobDefinitionArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
