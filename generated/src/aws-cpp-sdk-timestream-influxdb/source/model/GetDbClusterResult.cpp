/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/GetDbClusterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDbClusterResult::GetDbClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDbClusterResult& GetDbClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readerEndpoint"))
  {
    m_readerEndpoint = jsonValue.GetString("readerEndpoint");
    m_readerEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentType"))
  {
    m_deploymentType = ClusterDeploymentTypeMapper::GetClusterDeploymentTypeForName(jsonValue.GetString("deploymentType"));
    m_deploymentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbInstanceType"))
  {
    m_dbInstanceType = DbInstanceTypeMapper::GetDbInstanceTypeForName(jsonValue.GetString("dbInstanceType"));
    m_dbInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkType"))
  {
    m_networkType = NetworkTypeMapper::GetNetworkTypeForName(jsonValue.GetString("networkType"));
    m_networkTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbStorageType"))
  {
    m_dbStorageType = DbStorageTypeMapper::GetDbStorageTypeForName(jsonValue.GetString("dbStorageType"));
    m_dbStorageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("allocatedStorage");
    m_allocatedStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("publiclyAccessible");
    m_publiclyAccessibleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbParameterGroupIdentifier"))
  {
    m_dbParameterGroupIdentifier = jsonValue.GetString("dbParameterGroupIdentifier");
    m_dbParameterGroupIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logDeliveryConfiguration"))
  {
    m_logDeliveryConfiguration = jsonValue.GetObject("logDeliveryConfiguration");
    m_logDeliveryConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("influxAuthParametersSecretArn"))
  {
    m_influxAuthParametersSecretArn = jsonValue.GetString("influxAuthParametersSecretArn");
    m_influxAuthParametersSecretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcSubnetIds"))
  {
    Aws::Utils::Array<JsonView> vpcSubnetIdsJsonList = jsonValue.GetArray("vpcSubnetIds");
    for(unsigned vpcSubnetIdsIndex = 0; vpcSubnetIdsIndex < vpcSubnetIdsJsonList.GetLength(); ++vpcSubnetIdsIndex)
    {
      m_vpcSubnetIds.push_back(vpcSubnetIdsJsonList[vpcSubnetIdsIndex].AsString());
    }
    m_vpcSubnetIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcSecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupIdsJsonList = jsonValue.GetArray("vpcSecurityGroupIds");
    for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
    {
      m_vpcSecurityGroupIds.push_back(vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString());
    }
    m_vpcSecurityGroupIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failoverMode"))
  {
    m_failoverMode = FailoverModeMapper::GetFailoverModeForName(jsonValue.GetString("failoverMode"));
    m_failoverModeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
