/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointInfo.h>
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

EndpointInfo::EndpointInfo() : 
    m_endpointNameHasBeenSet(false)
{
}

EndpointInfo::EndpointInfo(JsonView jsonValue) : 
    m_endpointNameHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointInfo& EndpointInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointInfo::Jsonize() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
