/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/WebvttDestinationSettings.h>
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

WebvttDestinationSettings::WebvttDestinationSettings() : 
    m_styleControl(WebvttDestinationStyleControl::NOT_SET),
    m_styleControlHasBeenSet(false)
{
}

WebvttDestinationSettings::WebvttDestinationSettings(JsonView jsonValue) : 
    m_styleControl(WebvttDestinationStyleControl::NOT_SET),
    m_styleControlHasBeenSet(false)
{
  *this = jsonValue;
}

WebvttDestinationSettings& WebvttDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("styleControl"))
  {
    m_styleControl = WebvttDestinationStyleControlMapper::GetWebvttDestinationStyleControlForName(jsonValue.GetString("styleControl"));

    m_styleControlHasBeenSet = true;
  }

  return *this;
}

JsonValue WebvttDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_styleControlHasBeenSet)
  {
   payload.WithString("styleControl", WebvttDestinationStyleControlMapper::GetNameForWebvttDestinationStyleControl(m_styleControl));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
