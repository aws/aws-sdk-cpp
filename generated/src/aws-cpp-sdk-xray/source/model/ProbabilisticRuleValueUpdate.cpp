/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ProbabilisticRuleValueUpdate.h>
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

ProbabilisticRuleValueUpdate::ProbabilisticRuleValueUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

ProbabilisticRuleValueUpdate& ProbabilisticRuleValueUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredSamplingPercentage"))
  {
    m_desiredSamplingPercentage = jsonValue.GetDouble("DesiredSamplingPercentage");
    m_desiredSamplingPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue ProbabilisticRuleValueUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_desiredSamplingPercentageHasBeenSet)
  {
   payload.WithDouble("DesiredSamplingPercentage", m_desiredSamplingPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
