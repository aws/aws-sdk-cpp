/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobResourceLimit.h>
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

RecommendationJobResourceLimit::RecommendationJobResourceLimit(JsonView jsonValue)
{
  *this = jsonValue;
}

RecommendationJobResourceLimit& RecommendationJobResourceLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxNumberOfTests"))
  {
    m_maxNumberOfTests = jsonValue.GetInteger("MaxNumberOfTests");
    m_maxNumberOfTestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxParallelOfTests"))
  {
    m_maxParallelOfTests = jsonValue.GetInteger("MaxParallelOfTests");
    m_maxParallelOfTestsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationJobResourceLimit::Jsonize() const
{
  JsonValue payload;

  if(m_maxNumberOfTestsHasBeenSet)
  {
   payload.WithInteger("MaxNumberOfTests", m_maxNumberOfTests);

  }

  if(m_maxParallelOfTestsHasBeenSet)
  {
   payload.WithInteger("MaxParallelOfTests", m_maxParallelOfTests);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
