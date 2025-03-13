/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/StatisticSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MWAA
{
namespace Model
{

StatisticSet::StatisticSet(JsonView jsonValue)
{
  *this = jsonValue;
}

StatisticSet& StatisticSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SampleCount"))
  {
    m_sampleCount = jsonValue.GetInteger("SampleCount");
    m_sampleCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sum"))
  {
    m_sum = jsonValue.GetDouble("Sum");
    m_sumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Minimum"))
  {
    m_minimum = jsonValue.GetDouble("Minimum");
    m_minimumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Maximum"))
  {
    m_maximum = jsonValue.GetDouble("Maximum");
    m_maximumHasBeenSet = true;
  }
  return *this;
}

JsonValue StatisticSet::Jsonize() const
{
  JsonValue payload;

  if(m_sampleCountHasBeenSet)
  {
   payload.WithInteger("SampleCount", m_sampleCount);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("Sum", m_sum);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithDouble("Minimum", m_minimum);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithDouble("Maximum", m_maximum);

  }

  return payload;
}

} // namespace Model
} // namespace MWAA
} // namespace Aws
