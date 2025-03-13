/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/ScalingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

ScalingConfigurationRequest::ScalingConfigurationRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

ScalingConfigurationRequest& ScalingConfigurationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("minInstanceCount"))
  {
    m_minInstanceCount = jsonValue.GetInteger("minInstanceCount");
    m_minInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxInstanceCount"))
  {
    m_maxInstanceCount = jsonValue.GetInteger("maxInstanceCount");
    m_maxInstanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ScalingConfigurationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_minInstanceCountHasBeenSet)
  {
   payload.WithInteger("minInstanceCount", m_minInstanceCount);

  }

  if(m_maxInstanceCountHasBeenSet)
  {
   payload.WithInteger("maxInstanceCount", m_maxInstanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
