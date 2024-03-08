/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobOverrideValidationStrategy.h>
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

AssetBundleImportJobOverrideValidationStrategy::AssetBundleImportJobOverrideValidationStrategy() : 
    m_strictModeForAllResources(false),
    m_strictModeForAllResourcesHasBeenSet(false)
{
}

AssetBundleImportJobOverrideValidationStrategy::AssetBundleImportJobOverrideValidationStrategy(JsonView jsonValue) : 
    m_strictModeForAllResources(false),
    m_strictModeForAllResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobOverrideValidationStrategy& AssetBundleImportJobOverrideValidationStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StrictModeForAllResources"))
  {
    m_strictModeForAllResources = jsonValue.GetBool("StrictModeForAllResources");

    m_strictModeForAllResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobOverrideValidationStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_strictModeForAllResourcesHasBeenSet)
  {
   payload.WithBool("StrictModeForAllResources", m_strictModeForAllResources);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
