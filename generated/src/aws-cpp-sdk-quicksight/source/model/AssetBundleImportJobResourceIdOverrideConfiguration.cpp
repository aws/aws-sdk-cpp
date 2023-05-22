/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobResourceIdOverrideConfiguration.h>
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

AssetBundleImportJobResourceIdOverrideConfiguration::AssetBundleImportJobResourceIdOverrideConfiguration() : 
    m_prefixForAllResourcesHasBeenSet(false)
{
}

AssetBundleImportJobResourceIdOverrideConfiguration::AssetBundleImportJobResourceIdOverrideConfiguration(JsonView jsonValue) : 
    m_prefixForAllResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobResourceIdOverrideConfiguration& AssetBundleImportJobResourceIdOverrideConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrefixForAllResources"))
  {
    m_prefixForAllResources = jsonValue.GetString("PrefixForAllResources");

    m_prefixForAllResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobResourceIdOverrideConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_prefixForAllResourcesHasBeenSet)
  {
   payload.WithString("PrefixForAllResources", m_prefixForAllResources);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
