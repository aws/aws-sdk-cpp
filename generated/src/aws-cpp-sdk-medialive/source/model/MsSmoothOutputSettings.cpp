/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MsSmoothOutputSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MsSmoothOutputSettings::MsSmoothOutputSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MsSmoothOutputSettings& MsSmoothOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("h265PackagingType"))
  {
    m_h265PackagingType = MsSmoothH265PackagingTypeMapper::GetMsSmoothH265PackagingTypeForName(jsonValue.GetString("h265PackagingType"));
    m_h265PackagingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nameModifier"))
  {
    m_nameModifier = jsonValue.GetString("nameModifier");
    m_nameModifierHasBeenSet = true;
  }
  return *this;
}

JsonValue MsSmoothOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_h265PackagingTypeHasBeenSet)
  {
   payload.WithString("h265PackagingType", MsSmoothH265PackagingTypeMapper::GetNameForMsSmoothH265PackagingType(m_h265PackagingType));
  }

  if(m_nameModifierHasBeenSet)
  {
   payload.WithString("nameModifier", m_nameModifier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
