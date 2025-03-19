/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/ComputeNodeGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

ComputeNodeGroup::ComputeNodeGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeNodeGroup& ComputeNodeGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterId"))
  {
    m_clusterId = jsonValue.GetString("clusterId");
    m_clusterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ComputeNodeGroupStatusMapper::GetComputeNodeGroupStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("amiId"))
  {
    m_amiId = jsonValue.GetString("amiId");
    m_amiIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("purchaseOption"))
  {
    m_purchaseOption = PurchaseOptionMapper::GetPurchaseOptionForName(jsonValue.GetString("purchaseOption"));
    m_purchaseOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customLaunchTemplate"))
  {
    m_customLaunchTemplate = jsonValue.GetObject("customLaunchTemplate");
    m_customLaunchTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamInstanceProfileArn"))
  {
    m_iamInstanceProfileArn = jsonValue.GetString("iamInstanceProfileArn");
    m_iamInstanceProfileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scalingConfiguration"))
  {
    m_scalingConfiguration = jsonValue.GetObject("scalingConfiguration");
    m_scalingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceConfigs"))
  {
    Aws::Utils::Array<JsonView> instanceConfigsJsonList = jsonValue.GetArray("instanceConfigs");
    for(unsigned instanceConfigsIndex = 0; instanceConfigsIndex < instanceConfigsJsonList.GetLength(); ++instanceConfigsIndex)
    {
      m_instanceConfigs.push_back(instanceConfigsJsonList[instanceConfigsIndex].AsObject());
    }
    m_instanceConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spotOptions"))
  {
    m_spotOptions = jsonValue.GetObject("spotOptions");
    m_spotOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slurmConfiguration"))
  {
    m_slurmConfiguration = jsonValue.GetObject("slurmConfiguration");
    m_slurmConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorInfo"))
  {
    Aws::Utils::Array<JsonView> errorInfoJsonList = jsonValue.GetArray("errorInfo");
    for(unsigned errorInfoIndex = 0; errorInfoIndex < errorInfoJsonList.GetLength(); ++errorInfoIndex)
    {
      m_errorInfo.push_back(errorInfoJsonList[errorInfoIndex].AsObject());
    }
    m_errorInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeNodeGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("clusterId", m_clusterId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ComputeNodeGroupStatusMapper::GetNameForComputeNodeGroupStatus(m_status));
  }

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("amiId", m_amiId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_purchaseOptionHasBeenSet)
  {
   payload.WithString("purchaseOption", PurchaseOptionMapper::GetNameForPurchaseOption(m_purchaseOption));
  }

  if(m_customLaunchTemplateHasBeenSet)
  {
   payload.WithObject("customLaunchTemplate", m_customLaunchTemplate.Jsonize());

  }

  if(m_iamInstanceProfileArnHasBeenSet)
  {
   payload.WithString("iamInstanceProfileArn", m_iamInstanceProfileArn);

  }

  if(m_scalingConfigurationHasBeenSet)
  {
   payload.WithObject("scalingConfiguration", m_scalingConfiguration.Jsonize());

  }

  if(m_instanceConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceConfigsJsonList(m_instanceConfigs.size());
   for(unsigned instanceConfigsIndex = 0; instanceConfigsIndex < instanceConfigsJsonList.GetLength(); ++instanceConfigsIndex)
   {
     instanceConfigsJsonList[instanceConfigsIndex].AsObject(m_instanceConfigs[instanceConfigsIndex].Jsonize());
   }
   payload.WithArray("instanceConfigs", std::move(instanceConfigsJsonList));

  }

  if(m_spotOptionsHasBeenSet)
  {
   payload.WithObject("spotOptions", m_spotOptions.Jsonize());

  }

  if(m_slurmConfigurationHasBeenSet)
  {
   payload.WithObject("slurmConfiguration", m_slurmConfiguration.Jsonize());

  }

  if(m_errorInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorInfoJsonList(m_errorInfo.size());
   for(unsigned errorInfoIndex = 0; errorInfoIndex < errorInfoJsonList.GetLength(); ++errorInfoIndex)
   {
     errorInfoJsonList[errorInfoIndex].AsObject(m_errorInfo[errorInfoIndex].Jsonize());
   }
   payload.WithArray("errorInfo", std::move(errorInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
