/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DriftCheckModelQuality.h>
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

DriftCheckModelQuality::DriftCheckModelQuality() : 
    m_statisticsHasBeenSet(false),
    m_constraintsHasBeenSet(false)
{
}

DriftCheckModelQuality::DriftCheckModelQuality(JsonView jsonValue) : 
    m_statisticsHasBeenSet(false),
    m_constraintsHasBeenSet(false)
{
  *this = jsonValue;
}

DriftCheckModelQuality& DriftCheckModelQuality::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statistics"))
  {
    m_statistics = jsonValue.GetObject("Statistics");

    m_statisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Constraints"))
  {
    m_constraints = jsonValue.GetObject("Constraints");

    m_constraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue DriftCheckModelQuality::Jsonize() const
{
  JsonValue payload;

  if(m_statisticsHasBeenSet)
  {
   payload.WithObject("Statistics", m_statistics.Jsonize());

  }

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("Constraints", m_constraints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
