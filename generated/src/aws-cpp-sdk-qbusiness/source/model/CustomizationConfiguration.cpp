/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CustomizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

CustomizationConfiguration::CustomizationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomizationConfiguration& CustomizationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customCSSUrl"))
  {
    m_customCSSUrl = jsonValue.GetString("customCSSUrl");
    m_customCSSUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logoUrl"))
  {
    m_logoUrl = jsonValue.GetString("logoUrl");
    m_logoUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontUrl"))
  {
    m_fontUrl = jsonValue.GetString("fontUrl");
    m_fontUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("faviconUrl"))
  {
    m_faviconUrl = jsonValue.GetString("faviconUrl");
    m_faviconUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomizationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customCSSUrlHasBeenSet)
  {
   payload.WithString("customCSSUrl", m_customCSSUrl);

  }

  if(m_logoUrlHasBeenSet)
  {
   payload.WithString("logoUrl", m_logoUrl);

  }

  if(m_fontUrlHasBeenSet)
  {
   payload.WithString("fontUrl", m_fontUrl);

  }

  if(m_faviconUrlHasBeenSet)
  {
   payload.WithString("faviconUrl", m_faviconUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
