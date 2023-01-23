/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/TargetResource.h>
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

TargetResource::TargetResource() : 
    m_nLBResourceHasBeenSet(false),
    m_r53ResourceHasBeenSet(false)
{
}

TargetResource::TargetResource(JsonView jsonValue) : 
    m_nLBResourceHasBeenSet(false),
    m_r53ResourceHasBeenSet(false)
{
  *this = jsonValue;
}

TargetResource& TargetResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nLBResource"))
  {
    m_nLBResource = jsonValue.GetObject("nLBResource");

    m_nLBResourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("r53Resource"))
  {
    m_r53Resource = jsonValue.GetObject("r53Resource");

    m_r53ResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetResource::Jsonize() const
{
  JsonValue payload;

  if(m_nLBResourceHasBeenSet)
  {
   payload.WithObject("nLBResource", m_nLBResource.Jsonize());

  }

  if(m_r53ResourceHasBeenSet)
  {
   payload.WithObject("r53Resource", m_r53Resource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
