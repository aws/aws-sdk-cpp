/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDataSetOverrideParameters.h>
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

AssetBundleImportJobDataSetOverrideParameters::AssetBundleImportJobDataSetOverrideParameters() : 
    m_dataSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AssetBundleImportJobDataSetOverrideParameters::AssetBundleImportJobDataSetOverrideParameters(JsonView jsonValue) : 
    m_dataSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDataSetOverrideParameters& AssetBundleImportJobDataSetOverrideParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobDataSetOverrideParameters::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

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
