/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

ResourceResult::ResourceResult() : 
    m_componentIdHasBeenSet(false),
    m_lastCheckedTimestampHasBeenSet(false),
    m_readiness(Readiness::NOT_SET),
    m_readinessHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

ResourceResult::ResourceResult(JsonView jsonValue) : 
    m_componentIdHasBeenSet(false),
    m_lastCheckedTimestampHasBeenSet(false),
    m_readiness(Readiness::NOT_SET),
    m_readinessHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceResult& ResourceResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentId"))
  {
    m_componentId = jsonValue.GetString("componentId");

    m_componentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastCheckedTimestamp"))
  {
    m_lastCheckedTimestamp = jsonValue.GetString("lastCheckedTimestamp");

    m_lastCheckedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readiness"))
  {
    m_readiness = ReadinessMapper::GetReadinessForName(jsonValue.GetString("readiness"));

    m_readinessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceResult::Jsonize() const
{
  JsonValue payload;

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("componentId", m_componentId);

  }

  if(m_lastCheckedTimestampHasBeenSet)
  {
   payload.WithString("lastCheckedTimestamp", m_lastCheckedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_readinessHasBeenSet)
  {
   payload.WithString("readiness", ReadinessMapper::GetNameForReadiness(m_readiness));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
