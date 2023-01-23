/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultNewSheetConfiguration.h>
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

DefaultNewSheetConfiguration::DefaultNewSheetConfiguration() : 
    m_interactiveLayoutConfigurationHasBeenSet(false),
    m_paginatedLayoutConfigurationHasBeenSet(false),
    m_sheetContentType(SheetContentType::NOT_SET),
    m_sheetContentTypeHasBeenSet(false)
{
}

DefaultNewSheetConfiguration::DefaultNewSheetConfiguration(JsonView jsonValue) : 
    m_interactiveLayoutConfigurationHasBeenSet(false),
    m_paginatedLayoutConfigurationHasBeenSet(false),
    m_sheetContentType(SheetContentType::NOT_SET),
    m_sheetContentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultNewSheetConfiguration& DefaultNewSheetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InteractiveLayoutConfiguration"))
  {
    m_interactiveLayoutConfiguration = jsonValue.GetObject("InteractiveLayoutConfiguration");

    m_interactiveLayoutConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaginatedLayoutConfiguration"))
  {
    m_paginatedLayoutConfiguration = jsonValue.GetObject("PaginatedLayoutConfiguration");

    m_paginatedLayoutConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SheetContentType"))
  {
    m_sheetContentType = SheetContentTypeMapper::GetSheetContentTypeForName(jsonValue.GetString("SheetContentType"));

    m_sheetContentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultNewSheetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_interactiveLayoutConfigurationHasBeenSet)
  {
   payload.WithObject("InteractiveLayoutConfiguration", m_interactiveLayoutConfiguration.Jsonize());

  }

  if(m_paginatedLayoutConfigurationHasBeenSet)
  {
   payload.WithObject("PaginatedLayoutConfiguration", m_paginatedLayoutConfiguration.Jsonize());

  }

  if(m_sheetContentTypeHasBeenSet)
  {
   payload.WithString("SheetContentType", SheetContentTypeMapper::GetNameForSheetContentType(m_sheetContentType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
