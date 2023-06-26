/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/BrowserSettingsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

BrowserSettingsSummary::BrowserSettingsSummary() : 
    m_browserSettingsArnHasBeenSet(false)
{
}

BrowserSettingsSummary::BrowserSettingsSummary(JsonView jsonValue) : 
    m_browserSettingsArnHasBeenSet(false)
{
  *this = jsonValue;
}

BrowserSettingsSummary& BrowserSettingsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("browserSettingsArn"))
  {
    m_browserSettingsArn = jsonValue.GetString("browserSettingsArn");

    m_browserSettingsArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BrowserSettingsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_browserSettingsArnHasBeenSet)
  {
   payload.WithString("browserSettingsArn", m_browserSettingsArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
