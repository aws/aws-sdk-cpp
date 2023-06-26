/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

Rule::Rule() : 
    m_aSSERTIONHasBeenSet(false),
    m_gATINGHasBeenSet(false)
{
}

Rule::Rule(JsonView jsonValue) : 
    m_aSSERTIONHasBeenSet(false),
    m_gATINGHasBeenSet(false)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ASSERTION"))
  {
    m_aSSERTION = jsonValue.GetObject("ASSERTION");

    m_aSSERTIONHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GATING"))
  {
    m_gATING = jsonValue.GetObject("GATING");

    m_gATINGHasBeenSet = true;
  }

  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_aSSERTIONHasBeenSet)
  {
   payload.WithObject("ASSERTION", m_aSSERTION.Jsonize());

  }

  if(m_gATINGHasBeenSet)
  {
   payload.WithObject("GATING", m_gATING.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
