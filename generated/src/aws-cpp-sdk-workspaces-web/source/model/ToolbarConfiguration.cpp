/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ToolbarConfiguration.h>
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

ToolbarConfiguration::ToolbarConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolbarConfiguration& ToolbarConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("toolbarType"))
  {
    m_toolbarType = ToolbarTypeMapper::GetToolbarTypeForName(jsonValue.GetString("toolbarType"));
    m_toolbarTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("visualMode"))
  {
    m_visualMode = VisualModeMapper::GetVisualModeForName(jsonValue.GetString("visualMode"));
    m_visualModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hiddenToolbarItems"))
  {
    Aws::Utils::Array<JsonView> hiddenToolbarItemsJsonList = jsonValue.GetArray("hiddenToolbarItems");
    for(unsigned hiddenToolbarItemsIndex = 0; hiddenToolbarItemsIndex < hiddenToolbarItemsJsonList.GetLength(); ++hiddenToolbarItemsIndex)
    {
      m_hiddenToolbarItems.push_back(ToolbarItemMapper::GetToolbarItemForName(hiddenToolbarItemsJsonList[hiddenToolbarItemsIndex].AsString()));
    }
    m_hiddenToolbarItemsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxDisplayResolution"))
  {
    m_maxDisplayResolution = MaxDisplayResolutionMapper::GetMaxDisplayResolutionForName(jsonValue.GetString("maxDisplayResolution"));
    m_maxDisplayResolutionHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolbarConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_toolbarTypeHasBeenSet)
  {
   payload.WithString("toolbarType", ToolbarTypeMapper::GetNameForToolbarType(m_toolbarType));
  }

  if(m_visualModeHasBeenSet)
  {
   payload.WithString("visualMode", VisualModeMapper::GetNameForVisualMode(m_visualMode));
  }

  if(m_hiddenToolbarItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hiddenToolbarItemsJsonList(m_hiddenToolbarItems.size());
   for(unsigned hiddenToolbarItemsIndex = 0; hiddenToolbarItemsIndex < hiddenToolbarItemsJsonList.GetLength(); ++hiddenToolbarItemsIndex)
   {
     hiddenToolbarItemsJsonList[hiddenToolbarItemsIndex].AsString(ToolbarItemMapper::GetNameForToolbarItem(m_hiddenToolbarItems[hiddenToolbarItemsIndex]));
   }
   payload.WithArray("hiddenToolbarItems", std::move(hiddenToolbarItemsJsonList));

  }

  if(m_maxDisplayResolutionHasBeenSet)
  {
   payload.WithString("maxDisplayResolution", MaxDisplayResolutionMapper::GetNameForMaxDisplayResolution(m_maxDisplayResolution));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
