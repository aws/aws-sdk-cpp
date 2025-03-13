/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetImageScalingConfiguration.h>
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

SheetImageScalingConfiguration::SheetImageScalingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SheetImageScalingConfiguration& SheetImageScalingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScalingType"))
  {
    m_scalingType = SheetImageScalingTypeMapper::GetSheetImageScalingTypeForName(jsonValue.GetString("ScalingType"));
    m_scalingTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetImageScalingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scalingTypeHasBeenSet)
  {
   payload.WithString("ScalingType", SheetImageScalingTypeMapper::GetNameForSheetImageScalingType(m_scalingType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
