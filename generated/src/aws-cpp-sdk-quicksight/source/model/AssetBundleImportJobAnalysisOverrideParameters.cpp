/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobAnalysisOverrideParameters.h>
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

AssetBundleImportJobAnalysisOverrideParameters::AssetBundleImportJobAnalysisOverrideParameters() : 
    m_analysisIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AssetBundleImportJobAnalysisOverrideParameters::AssetBundleImportJobAnalysisOverrideParameters(JsonView jsonValue) : 
    m_analysisIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobAnalysisOverrideParameters& AssetBundleImportJobAnalysisOverrideParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnalysisId"))
  {
    m_analysisId = jsonValue.GetString("AnalysisId");

    m_analysisIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobAnalysisOverrideParameters::Jsonize() const
{
  JsonValue payload;

  if(m_analysisIdHasBeenSet)
  {
   payload.WithString("AnalysisId", m_analysisId);

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
