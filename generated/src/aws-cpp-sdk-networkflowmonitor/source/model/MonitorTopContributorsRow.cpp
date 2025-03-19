/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/MonitorTopContributorsRow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

MonitorTopContributorsRow::MonitorTopContributorsRow(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitorTopContributorsRow& MonitorTopContributorsRow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("localIp"))
  {
    m_localIp = jsonValue.GetString("localIp");
    m_localIpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("snatIp"))
  {
    m_snatIp = jsonValue.GetString("snatIp");
    m_snatIpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localInstanceId"))
  {
    m_localInstanceId = jsonValue.GetString("localInstanceId");
    m_localInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localVpcId"))
  {
    m_localVpcId = jsonValue.GetString("localVpcId");
    m_localVpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localRegion"))
  {
    m_localRegion = jsonValue.GetString("localRegion");
    m_localRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localAz"))
  {
    m_localAz = jsonValue.GetString("localAz");
    m_localAzHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localSubnetId"))
  {
    m_localSubnetId = jsonValue.GetString("localSubnetId");
    m_localSubnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetPort"))
  {
    m_targetPort = jsonValue.GetInteger("targetPort");
    m_targetPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationCategory"))
  {
    m_destinationCategory = DestinationCategoryMapper::GetDestinationCategoryForName(jsonValue.GetString("destinationCategory"));
    m_destinationCategoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteVpcId"))
  {
    m_remoteVpcId = jsonValue.GetString("remoteVpcId");
    m_remoteVpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteRegion"))
  {
    m_remoteRegion = jsonValue.GetString("remoteRegion");
    m_remoteRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteAz"))
  {
    m_remoteAz = jsonValue.GetString("remoteAz");
    m_remoteAzHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteSubnetId"))
  {
    m_remoteSubnetId = jsonValue.GetString("remoteSubnetId");
    m_remoteSubnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteInstanceId"))
  {
    m_remoteInstanceId = jsonValue.GetString("remoteInstanceId");
    m_remoteInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteIp"))
  {
    m_remoteIp = jsonValue.GetString("remoteIp");
    m_remoteIpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dnatIp"))
  {
    m_dnatIp = jsonValue.GetString("dnatIp");
    m_dnatIpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInt64("value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("traversedConstructs"))
  {
    Aws::Utils::Array<JsonView> traversedConstructsJsonList = jsonValue.GetArray("traversedConstructs");
    for(unsigned traversedConstructsIndex = 0; traversedConstructsIndex < traversedConstructsJsonList.GetLength(); ++traversedConstructsIndex)
    {
      m_traversedConstructs.push_back(traversedConstructsJsonList[traversedConstructsIndex].AsObject());
    }
    m_traversedConstructsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kubernetesMetadata"))
  {
    m_kubernetesMetadata = jsonValue.GetObject("kubernetesMetadata");
    m_kubernetesMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localInstanceArn"))
  {
    m_localInstanceArn = jsonValue.GetString("localInstanceArn");
    m_localInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localSubnetArn"))
  {
    m_localSubnetArn = jsonValue.GetString("localSubnetArn");
    m_localSubnetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localVpcArn"))
  {
    m_localVpcArn = jsonValue.GetString("localVpcArn");
    m_localVpcArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteInstanceArn"))
  {
    m_remoteInstanceArn = jsonValue.GetString("remoteInstanceArn");
    m_remoteInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteSubnetArn"))
  {
    m_remoteSubnetArn = jsonValue.GetString("remoteSubnetArn");
    m_remoteSubnetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteVpcArn"))
  {
    m_remoteVpcArn = jsonValue.GetString("remoteVpcArn");
    m_remoteVpcArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitorTopContributorsRow::Jsonize() const
{
  JsonValue payload;

  if(m_localIpHasBeenSet)
  {
   payload.WithString("localIp", m_localIp);

  }

  if(m_snatIpHasBeenSet)
  {
   payload.WithString("snatIp", m_snatIp);

  }

  if(m_localInstanceIdHasBeenSet)
  {
   payload.WithString("localInstanceId", m_localInstanceId);

  }

  if(m_localVpcIdHasBeenSet)
  {
   payload.WithString("localVpcId", m_localVpcId);

  }

  if(m_localRegionHasBeenSet)
  {
   payload.WithString("localRegion", m_localRegion);

  }

  if(m_localAzHasBeenSet)
  {
   payload.WithString("localAz", m_localAz);

  }

  if(m_localSubnetIdHasBeenSet)
  {
   payload.WithString("localSubnetId", m_localSubnetId);

  }

  if(m_targetPortHasBeenSet)
  {
   payload.WithInteger("targetPort", m_targetPort);

  }

  if(m_destinationCategoryHasBeenSet)
  {
   payload.WithString("destinationCategory", DestinationCategoryMapper::GetNameForDestinationCategory(m_destinationCategory));
  }

  if(m_remoteVpcIdHasBeenSet)
  {
   payload.WithString("remoteVpcId", m_remoteVpcId);

  }

  if(m_remoteRegionHasBeenSet)
  {
   payload.WithString("remoteRegion", m_remoteRegion);

  }

  if(m_remoteAzHasBeenSet)
  {
   payload.WithString("remoteAz", m_remoteAz);

  }

  if(m_remoteSubnetIdHasBeenSet)
  {
   payload.WithString("remoteSubnetId", m_remoteSubnetId);

  }

  if(m_remoteInstanceIdHasBeenSet)
  {
   payload.WithString("remoteInstanceId", m_remoteInstanceId);

  }

  if(m_remoteIpHasBeenSet)
  {
   payload.WithString("remoteIp", m_remoteIp);

  }

  if(m_dnatIpHasBeenSet)
  {
   payload.WithString("dnatIp", m_dnatIp);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("value", m_value);

  }

  if(m_traversedConstructsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> traversedConstructsJsonList(m_traversedConstructs.size());
   for(unsigned traversedConstructsIndex = 0; traversedConstructsIndex < traversedConstructsJsonList.GetLength(); ++traversedConstructsIndex)
   {
     traversedConstructsJsonList[traversedConstructsIndex].AsObject(m_traversedConstructs[traversedConstructsIndex].Jsonize());
   }
   payload.WithArray("traversedConstructs", std::move(traversedConstructsJsonList));

  }

  if(m_kubernetesMetadataHasBeenSet)
  {
   payload.WithObject("kubernetesMetadata", m_kubernetesMetadata.Jsonize());

  }

  if(m_localInstanceArnHasBeenSet)
  {
   payload.WithString("localInstanceArn", m_localInstanceArn);

  }

  if(m_localSubnetArnHasBeenSet)
  {
   payload.WithString("localSubnetArn", m_localSubnetArn);

  }

  if(m_localVpcArnHasBeenSet)
  {
   payload.WithString("localVpcArn", m_localVpcArn);

  }

  if(m_remoteInstanceArnHasBeenSet)
  {
   payload.WithString("remoteInstanceArn", m_remoteInstanceArn);

  }

  if(m_remoteSubnetArnHasBeenSet)
  {
   payload.WithString("remoteSubnetArn", m_remoteSubnetArn);

  }

  if(m_remoteVpcArnHasBeenSet)
  {
   payload.WithString("remoteVpcArn", m_remoteVpcArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
