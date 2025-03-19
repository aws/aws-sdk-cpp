/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/UpdateBrokerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateBrokerResult::UpdateBrokerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateBrokerResult& UpdateBrokerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authenticationStrategy"))
  {
    m_authenticationStrategy = AuthenticationStrategyMapper::GetAuthenticationStrategyForName(jsonValue.GetString("authenticationStrategy"));
    m_authenticationStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("autoMinorVersionUpgrade");
    m_autoMinorVersionUpgradeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetString("brokerId");
    m_brokerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");
    m_engineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("hostInstanceType");
    m_hostInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ldapServerMetadata"))
  {
    m_ldapServerMetadata = jsonValue.GetObject("ldapServerMetadata");
    m_ldapServerMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logs"))
  {
    m_logs = jsonValue.GetObject("logs");
    m_logsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maintenanceWindowStartTime"))
  {
    m_maintenanceWindowStartTime = jsonValue.GetObject("maintenanceWindowStartTime");
    m_maintenanceWindowStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataReplicationMetadata"))
  {
    m_dataReplicationMetadata = jsonValue.GetObject("dataReplicationMetadata");
    m_dataReplicationMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataReplicationMode"))
  {
    m_dataReplicationMode = DataReplicationModeMapper::GetDataReplicationModeForName(jsonValue.GetString("dataReplicationMode"));
    m_dataReplicationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingDataReplicationMetadata"))
  {
    m_pendingDataReplicationMetadata = jsonValue.GetObject("pendingDataReplicationMetadata");
    m_pendingDataReplicationMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingDataReplicationMode"))
  {
    m_pendingDataReplicationMode = DataReplicationModeMapper::GetDataReplicationModeForName(jsonValue.GetString("pendingDataReplicationMode"));
    m_pendingDataReplicationModeHasBeenSet = true;
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
