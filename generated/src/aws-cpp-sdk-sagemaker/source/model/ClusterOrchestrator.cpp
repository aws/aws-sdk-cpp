/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterOrchestrator.h>
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

ClusterOrchestrator::ClusterOrchestrator(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterOrchestrator& ClusterOrchestrator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Eks"))
  {
    m_eks = jsonValue.GetObject("Eks");
    m_eksHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterOrchestrator::Jsonize() const
{
  JsonValue payload;

  if(m_eksHasBeenSet)
  {
   payload.WithObject("Eks", m_eks.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
