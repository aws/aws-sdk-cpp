/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Autotune.h>
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

Autotune::Autotune() : 
    m_mode(AutotuneMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

Autotune::Autotune(JsonView jsonValue) : 
    m_mode(AutotuneMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

Autotune& Autotune::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = AutotuneModeMapper::GetAutotuneModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue Autotune::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", AutotuneModeMapper::GetNameForAutotuneMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
