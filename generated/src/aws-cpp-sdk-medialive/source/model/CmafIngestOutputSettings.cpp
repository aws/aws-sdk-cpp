/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafIngestOutputSettings.h>
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

CmafIngestOutputSettings::CmafIngestOutputSettings() : 
    m_nameModifierHasBeenSet(false)
{
}

CmafIngestOutputSettings::CmafIngestOutputSettings(JsonView jsonValue) : 
    m_nameModifierHasBeenSet(false)
{
  *this = jsonValue;
}

CmafIngestOutputSettings& CmafIngestOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nameModifier"))
  {
    m_nameModifier = jsonValue.GetString("nameModifier");

    m_nameModifierHasBeenSet = true;
  }

  return *this;
}

JsonValue CmafIngestOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_nameModifierHasBeenSet)
  {
   payload.WithString("nameModifier", m_nameModifier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
