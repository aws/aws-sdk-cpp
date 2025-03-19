/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceSharingConfig.h>
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

ResourceSharingConfig::ResourceSharingConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceSharingConfig& ResourceSharingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Strategy"))
  {
    m_strategy = ResourceSharingStrategyMapper::GetResourceSharingStrategyForName(jsonValue.GetString("Strategy"));
    m_strategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BorrowLimit"))
  {
    m_borrowLimit = jsonValue.GetInteger("BorrowLimit");
    m_borrowLimitHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSharingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_strategyHasBeenSet)
  {
   payload.WithString("Strategy", ResourceSharingStrategyMapper::GetNameForResourceSharingStrategy(m_strategy));
  }

  if(m_borrowLimitHasBeenSet)
  {
   payload.WithInteger("BorrowLimit", m_borrowLimit);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
