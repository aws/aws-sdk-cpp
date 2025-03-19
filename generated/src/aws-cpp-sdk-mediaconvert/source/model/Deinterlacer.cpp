/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Deinterlacer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Deinterlacer::Deinterlacer(JsonView jsonValue)
{
  *this = jsonValue;
}

Deinterlacer& Deinterlacer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("algorithm"))
  {
    m_algorithm = DeinterlaceAlgorithmMapper::GetDeinterlaceAlgorithmForName(jsonValue.GetString("algorithm"));
    m_algorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("control"))
  {
    m_control = DeinterlacerControlMapper::GetDeinterlacerControlForName(jsonValue.GetString("control"));
    m_controlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = DeinterlacerModeMapper::GetDeinterlacerModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue Deinterlacer::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("algorithm", DeinterlaceAlgorithmMapper::GetNameForDeinterlaceAlgorithm(m_algorithm));
  }

  if(m_controlHasBeenSet)
  {
   payload.WithString("control", DeinterlacerControlMapper::GetNameForDeinterlacerControl(m_control));
  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", DeinterlacerModeMapper::GetNameForDeinterlacerMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
