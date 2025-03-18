/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ProbabilisticRuleValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

ProbabilisticRuleValue::ProbabilisticRuleValue(JsonView jsonValue)
{
  *this = jsonValue;
}

ProbabilisticRuleValue& ProbabilisticRuleValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredSamplingPercentage"))
  {
    m_desiredSamplingPercentage = jsonValue.GetDouble("DesiredSamplingPercentage");
    m_desiredSamplingPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActualSamplingPercentage"))
  {
    m_actualSamplingPercentage = jsonValue.GetDouble("ActualSamplingPercentage");
    m_actualSamplingPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue ProbabilisticRuleValue::Jsonize() const
{
  JsonValue payload;

  if(m_desiredSamplingPercentageHasBeenSet)
  {
   payload.WithDouble("DesiredSamplingPercentage", m_desiredSamplingPercentage);

  }

  if(m_actualSamplingPercentageHasBeenSet)
  {
   payload.WithDouble("ActualSamplingPercentage", m_actualSamplingPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
