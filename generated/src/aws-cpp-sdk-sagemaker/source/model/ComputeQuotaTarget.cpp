/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ComputeQuotaTarget.h>
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

ComputeQuotaTarget::ComputeQuotaTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeQuotaTarget& ComputeQuotaTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TeamName"))
  {
    m_teamName = jsonValue.GetString("TeamName");
    m_teamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FairShareWeight"))
  {
    m_fairShareWeight = jsonValue.GetInteger("FairShareWeight");
    m_fairShareWeightHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeQuotaTarget::Jsonize() const
{
  JsonValue payload;

  if(m_teamNameHasBeenSet)
  {
   payload.WithString("TeamName", m_teamName);

  }

  if(m_fairShareWeightHasBeenSet)
  {
   payload.WithInteger("FairShareWeight", m_fairShareWeight);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
