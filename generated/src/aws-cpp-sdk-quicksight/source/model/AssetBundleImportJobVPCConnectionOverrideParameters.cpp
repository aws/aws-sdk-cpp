/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobVPCConnectionOverrideParameters.h>
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

AssetBundleImportJobVPCConnectionOverrideParameters::AssetBundleImportJobVPCConnectionOverrideParameters() : 
    m_vPCConnectionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dnsResolversHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

AssetBundleImportJobVPCConnectionOverrideParameters::AssetBundleImportJobVPCConnectionOverrideParameters(JsonView jsonValue) : 
    m_vPCConnectionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_dnsResolversHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobVPCConnectionOverrideParameters& AssetBundleImportJobVPCConnectionOverrideParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VPCConnectionId"))
  {
    m_vPCConnectionId = jsonValue.GetString("VPCConnectionId");

    m_vPCConnectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsResolvers"))
  {
    Aws::Utils::Array<JsonView> dnsResolversJsonList = jsonValue.GetArray("DnsResolvers");
    for(unsigned dnsResolversIndex = 0; dnsResolversIndex < dnsResolversJsonList.GetLength(); ++dnsResolversIndex)
    {
      m_dnsResolvers.push_back(dnsResolversJsonList[dnsResolversIndex].AsString());
    }
    m_dnsResolversHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobVPCConnectionOverrideParameters::Jsonize() const
{
  JsonValue payload;

  if(m_vPCConnectionIdHasBeenSet)
  {
   payload.WithString("VPCConnectionId", m_vPCConnectionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_dnsResolversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsResolversJsonList(m_dnsResolvers.size());
   for(unsigned dnsResolversIndex = 0; dnsResolversIndex < dnsResolversJsonList.GetLength(); ++dnsResolversIndex)
   {
     dnsResolversJsonList[dnsResolversIndex].AsString(m_dnsResolvers[dnsResolversIndex]);
   }
   payload.WithArray("DnsResolvers", std::move(dnsResolversJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
