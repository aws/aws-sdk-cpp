/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobVPCConnectionOverrideProperties.h>
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

AssetBundleExportJobVPCConnectionOverrideProperties::AssetBundleExportJobVPCConnectionOverrideProperties() : 
    m_arnHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

AssetBundleExportJobVPCConnectionOverrideProperties::AssetBundleExportJobVPCConnectionOverrideProperties(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleExportJobVPCConnectionOverrideProperties& AssetBundleExportJobVPCConnectionOverrideProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("Properties");
    for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
    {
      m_properties.push_back(AssetBundleExportJobVPCConnectionPropertyToOverrideMapper::GetAssetBundleExportJobVPCConnectionPropertyToOverrideForName(propertiesJsonList[propertiesIndex].AsString()));
    }
    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleExportJobVPCConnectionOverrideProperties::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_propertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
   for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
   {
     propertiesJsonList[propertiesIndex].AsString(AssetBundleExportJobVPCConnectionPropertyToOverrideMapper::GetNameForAssetBundleExportJobVPCConnectionPropertyToOverride(m_properties[propertiesIndex]));
   }
   payload.WithArray("Properties", std::move(propertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
