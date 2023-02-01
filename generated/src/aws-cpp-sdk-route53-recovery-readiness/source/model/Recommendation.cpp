/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/Recommendation.h>
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

Recommendation::Recommendation() : 
    m_recommendationTextHasBeenSet(false)
{
}

Recommendation::Recommendation(JsonView jsonValue) : 
    m_recommendationTextHasBeenSet(false)
{
  *this = jsonValue;
}

Recommendation& Recommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recommendationText"))
  {
    m_recommendationText = jsonValue.GetString("recommendationText");

    m_recommendationTextHasBeenSet = true;
  }

  return *this;
}

JsonValue Recommendation::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationTextHasBeenSet)
  {
   payload.WithString("recommendationText", m_recommendationText);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
