/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringConstraintsResource.h>
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

MonitoringConstraintsResource::MonitoringConstraintsResource() : 
    m_s3UriHasBeenSet(false)
{
}

MonitoringConstraintsResource::MonitoringConstraintsResource(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringConstraintsResource& MonitoringConstraintsResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringConstraintsResource::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
