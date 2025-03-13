/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ValidationStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ValidationStrategy::ValidationStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

ValidationStrategy& ValidationStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ValidationStrategyModeMapper::GetValidationStrategyModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ValidationStrategyModeMapper::GetNameForValidationStrategyMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
