/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobResourceIdOverrideConfiguration.h>
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

AssetBundleExportJobResourceIdOverrideConfiguration::AssetBundleExportJobResourceIdOverrideConfiguration() : 
    m_prefixForAllResources(false),
    m_prefixForAllResourcesHasBeenSet(false)
{
}

AssetBundleExportJobResourceIdOverrideConfiguration::AssetBundleExportJobResourceIdOverrideConfiguration(JsonView jsonValue) : 
    m_prefixForAllResources(false),
    m_prefixForAllResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleExportJobResourceIdOverrideConfiguration& AssetBundleExportJobResourceIdOverrideConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrefixForAllResources"))
  {
    m_prefixForAllResources = jsonValue.GetBool("PrefixForAllResources");

    m_prefixForAllResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleExportJobResourceIdOverrideConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_prefixForAllResourcesHasBeenSet)
  {
   payload.WithBool("PrefixForAllResources", m_prefixForAllResources);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
