/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EbuTtDDestinationSettings.h>
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

EbuTtDDestinationSettings::EbuTtDDestinationSettings() : 
    m_copyrightHolderHasBeenSet(false),
    m_fillLineGap(EbuTtDFillLineGapControl::NOT_SET),
    m_fillLineGapHasBeenSet(false),
    m_fontFamilyHasBeenSet(false),
    m_styleControl(EbuTtDDestinationStyleControl::NOT_SET),
    m_styleControlHasBeenSet(false)
{
}

EbuTtDDestinationSettings::EbuTtDDestinationSettings(JsonView jsonValue) : 
    m_copyrightHolderHasBeenSet(false),
    m_fillLineGap(EbuTtDFillLineGapControl::NOT_SET),
    m_fillLineGapHasBeenSet(false),
    m_fontFamilyHasBeenSet(false),
    m_styleControl(EbuTtDDestinationStyleControl::NOT_SET),
    m_styleControlHasBeenSet(false)
{
  *this = jsonValue;
}

EbuTtDDestinationSettings& EbuTtDDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("copyrightHolder"))
  {
    m_copyrightHolder = jsonValue.GetString("copyrightHolder");

    m_copyrightHolderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fillLineGap"))
  {
    m_fillLineGap = EbuTtDFillLineGapControlMapper::GetEbuTtDFillLineGapControlForName(jsonValue.GetString("fillLineGap"));

    m_fillLineGapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fontFamily"))
  {
    m_fontFamily = jsonValue.GetString("fontFamily");

    m_fontFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("styleControl"))
  {
    m_styleControl = EbuTtDDestinationStyleControlMapper::GetEbuTtDDestinationStyleControlForName(jsonValue.GetString("styleControl"));

    m_styleControlHasBeenSet = true;
  }

  return *this;
}

JsonValue EbuTtDDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_copyrightHolderHasBeenSet)
  {
   payload.WithString("copyrightHolder", m_copyrightHolder);

  }

  if(m_fillLineGapHasBeenSet)
  {
   payload.WithString("fillLineGap", EbuTtDFillLineGapControlMapper::GetNameForEbuTtDFillLineGapControl(m_fillLineGap));
  }

  if(m_fontFamilyHasBeenSet)
  {
   payload.WithString("fontFamily", m_fontFamily);

  }

  if(m_styleControlHasBeenSet)
  {
   payload.WithString("styleControl", EbuTtDDestinationStyleControlMapper::GetNameForEbuTtDDestinationStyleControl(m_styleControl));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
