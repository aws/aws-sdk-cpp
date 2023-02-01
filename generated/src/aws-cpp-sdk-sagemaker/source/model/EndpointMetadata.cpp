/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointMetadata.h>
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

EndpointMetadata::EndpointMetadata() : 
    m_endpointNameHasBeenSet(false),
    m_endpointConfigNameHasBeenSet(false),
    m_endpointStatus(EndpointStatus::NOT_SET),
    m_endpointStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

EndpointMetadata::EndpointMetadata(JsonView jsonValue) : 
    m_endpointNameHasBeenSet(false),
    m_endpointConfigNameHasBeenSet(false),
    m_endpointStatus(EndpointStatus::NOT_SET),
    m_endpointStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointMetadata& EndpointMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointConfigName"))
  {
    m_endpointConfigName = jsonValue.GetString("EndpointConfigName");

    m_endpointConfigNameHasBeenSet = true;
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

  return *this;
}

JsonValue EndpointMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_endpointConfigNameHasBeenSet)
  {
   payload.WithString("EndpointConfigName", m_endpointConfigName);

  }

  if(m_endpointStatusHasBeenSet)
  {
   payload.WithString("EndpointStatus", EndpointStatusMapper::GetNameForEndpointStatus(m_endpointStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
