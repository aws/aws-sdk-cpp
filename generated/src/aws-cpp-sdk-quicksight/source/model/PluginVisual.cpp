/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PluginVisual.h>
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

PluginVisual::PluginVisual() : 
    m_visualIdHasBeenSet(false),
    m_pluginArnHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_chartConfigurationHasBeenSet(false),
    m_visualContentAltTextHasBeenSet(false)
{
}

PluginVisual::PluginVisual(JsonView jsonValue)
  : PluginVisual()
{
  *this = jsonValue;
}

PluginVisual& PluginVisual::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisualId"))
  {
    m_visualId = jsonValue.GetString("VisualId");

    m_visualIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PluginArn"))
  {
    m_pluginArn = jsonValue.GetString("PluginArn");

    m_pluginArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetObject("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subtitle"))
  {
    m_subtitle = jsonValue.GetObject("Subtitle");

    m_subtitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChartConfiguration"))
  {
    m_chartConfiguration = jsonValue.GetObject("ChartConfiguration");

    m_chartConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualContentAltText"))
  {
    m_visualContentAltText = jsonValue.GetString("VisualContentAltText");

    m_visualContentAltTextHasBeenSet = true;
  }

  return *this;
}

JsonValue PluginVisual::Jsonize() const
{
  JsonValue payload;

  if(m_visualIdHasBeenSet)
  {
   payload.WithString("VisualId", m_visualId);

  }

  if(m_pluginArnHasBeenSet)
  {
   payload.WithString("PluginArn", m_pluginArn);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithObject("Title", m_title.Jsonize());

  }

  if(m_subtitleHasBeenSet)
  {
   payload.WithObject("Subtitle", m_subtitle.Jsonize());

  }

  if(m_chartConfigurationHasBeenSet)
  {
   payload.WithObject("ChartConfiguration", m_chartConfiguration.Jsonize());

  }

  if(m_visualContentAltTextHasBeenSet)
  {
   payload.WithString("VisualContentAltText", m_visualContentAltText);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
