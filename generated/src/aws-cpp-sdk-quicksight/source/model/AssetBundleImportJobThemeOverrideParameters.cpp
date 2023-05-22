/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobThemeOverrideParameters.h>
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

AssetBundleImportJobThemeOverrideParameters::AssetBundleImportJobThemeOverrideParameters() : 
    m_themeIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AssetBundleImportJobThemeOverrideParameters::AssetBundleImportJobThemeOverrideParameters(JsonView jsonValue) : 
    m_themeIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobThemeOverrideParameters& AssetBundleImportJobThemeOverrideParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ThemeId"))
  {
    m_themeId = jsonValue.GetString("ThemeId");

    m_themeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobThemeOverrideParameters::Jsonize() const
{
  JsonValue payload;

  if(m_themeIdHasBeenSet)
  {
   payload.WithString("ThemeId", m_themeId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
