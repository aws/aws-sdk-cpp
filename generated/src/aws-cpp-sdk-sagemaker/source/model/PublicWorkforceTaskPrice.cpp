/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PublicWorkforceTaskPrice.h>
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

PublicWorkforceTaskPrice::PublicWorkforceTaskPrice() : 
    m_amountInUsdHasBeenSet(false)
{
}

PublicWorkforceTaskPrice::PublicWorkforceTaskPrice(JsonView jsonValue) : 
    m_amountInUsdHasBeenSet(false)
{
  *this = jsonValue;
}

PublicWorkforceTaskPrice& PublicWorkforceTaskPrice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmountInUsd"))
  {
    m_amountInUsd = jsonValue.GetObject("AmountInUsd");

    m_amountInUsdHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicWorkforceTaskPrice::Jsonize() const
{
  JsonValue payload;

  if(m_amountInUsdHasBeenSet)
  {
   payload.WithObject("AmountInUsd", m_amountInUsd.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
