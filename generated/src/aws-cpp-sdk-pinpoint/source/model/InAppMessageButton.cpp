/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppMessageButton.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

InAppMessageButton::InAppMessageButton() : 
    m_androidHasBeenSet(false),
    m_defaultConfigHasBeenSet(false),
    m_iOSHasBeenSet(false),
    m_webHasBeenSet(false)
{
}

InAppMessageButton::InAppMessageButton(JsonView jsonValue) : 
    m_androidHasBeenSet(false),
    m_defaultConfigHasBeenSet(false),
    m_iOSHasBeenSet(false),
    m_webHasBeenSet(false)
{
  *this = jsonValue;
}

InAppMessageButton& InAppMessageButton::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Android"))
  {
    m_android = jsonValue.GetObject("Android");

    m_androidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultConfig"))
  {
    m_defaultConfig = jsonValue.GetObject("DefaultConfig");

    m_defaultConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IOS"))
  {
    m_iOS = jsonValue.GetObject("IOS");

    m_iOSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Web"))
  {
    m_web = jsonValue.GetObject("Web");

    m_webHasBeenSet = true;
  }

  return *this;
}

JsonValue InAppMessageButton::Jsonize() const
{
  JsonValue payload;

  if(m_androidHasBeenSet)
  {
   payload.WithObject("Android", m_android.Jsonize());

  }

  if(m_defaultConfigHasBeenSet)
  {
   payload.WithObject("DefaultConfig", m_defaultConfig.Jsonize());

  }

  if(m_iOSHasBeenSet)
  {
   payload.WithObject("IOS", m_iOS.Jsonize());

  }

  if(m_webHasBeenSet)
  {
   payload.WithObject("Web", m_web.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
