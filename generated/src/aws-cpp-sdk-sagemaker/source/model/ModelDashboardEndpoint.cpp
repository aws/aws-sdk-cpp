/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelDashboardEndpoint.h>
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

ModelDashboardEndpoint::ModelDashboardEndpoint() : 
    m_endpointNameHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_endpointStatus(EndpointStatus::NOT_SET),
    m_endpointStatusHasBeenSet(false)
{
}

ModelDashboardEndpoint::ModelDashboardEndpoint(JsonView jsonValue) : 
    m_endpointNameHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_endpointStatus(EndpointStatus::NOT_SET),
    m_endpointStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ModelDashboardEndpoint& ModelDashboardEndpoint::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("EndpointStatus"))
  {
    m_endpointStatus = EndpointStatusMapper::GetEndpointStatusForName(jsonValue.GetString("EndpointStatus"));

    m_endpointStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelDashboardEndpoint::Jsonize() const
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

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_endpointStatusHasBeenSet)
  {
   payload.WithString("EndpointStatus", EndpointStatusMapper::GetNameForEndpointStatus(m_endpointStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
