/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobAnalysisOverridePermissions.h>
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

AssetBundleImportJobAnalysisOverridePermissions::AssetBundleImportJobAnalysisOverridePermissions() : 
    m_analysisIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

AssetBundleImportJobAnalysisOverridePermissions::AssetBundleImportJobAnalysisOverridePermissions(JsonView jsonValue) : 
    m_analysisIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobAnalysisOverridePermissions& AssetBundleImportJobAnalysisOverridePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnalysisIds"))
  {
    Aws::Utils::Array<JsonView> analysisIdsJsonList = jsonValue.GetArray("AnalysisIds");
    for(unsigned analysisIdsIndex = 0; analysisIdsIndex < analysisIdsJsonList.GetLength(); ++analysisIdsIndex)
    {
      m_analysisIds.push_back(analysisIdsJsonList[analysisIdsIndex].AsString());
    }
    m_analysisIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetObject("Permissions");

    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobAnalysisOverridePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_analysisIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisIdsJsonList(m_analysisIds.size());
   for(unsigned analysisIdsIndex = 0; analysisIdsIndex < analysisIdsJsonList.GetLength(); ++analysisIdsIndex)
   {
     analysisIdsJsonList[analysisIdsIndex].AsString(m_analysisIds[analysisIdsIndex]);
   }
   payload.WithArray("AnalysisIds", std::move(analysisIdsJsonList));

  }

  if(m_permissionsHasBeenSet)
  {
   payload.WithObject("Permissions", m_permissions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
