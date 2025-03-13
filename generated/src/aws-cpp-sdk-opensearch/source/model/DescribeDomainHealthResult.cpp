/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribeDomainHealthResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainHealthResult::DescribeDomainHealthResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDomainHealthResult& DescribeDomainHealthResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainState"))
  {
    m_domainState = DomainStateMapper::GetDomainStateForName(jsonValue.GetString("DomainState"));
    m_domainStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZoneCount"))
  {
    m_availabilityZoneCount = jsonValue.GetString("AvailabilityZoneCount");
    m_availabilityZoneCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActiveAvailabilityZoneCount"))
  {
    m_activeAvailabilityZoneCount = jsonValue.GetString("ActiveAvailabilityZoneCount");
    m_activeAvailabilityZoneCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandByAvailabilityZoneCount"))
  {
    m_standByAvailabilityZoneCount = jsonValue.GetString("StandByAvailabilityZoneCount");
    m_standByAvailabilityZoneCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataNodeCount"))
  {
    m_dataNodeCount = jsonValue.GetString("DataNodeCount");
    m_dataNodeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DedicatedMaster"))
  {
    m_dedicatedMaster = jsonValue.GetBool("DedicatedMaster");
    m_dedicatedMasterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MasterEligibleNodeCount"))
  {
    m_masterEligibleNodeCount = jsonValue.GetString("MasterEligibleNodeCount");
    m_masterEligibleNodeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarmNodeCount"))
  {
    m_warmNodeCount = jsonValue.GetString("WarmNodeCount");
    m_warmNodeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MasterNode"))
  {
    m_masterNode = MasterNodeStatusMapper::GetMasterNodeStatusForName(jsonValue.GetString("MasterNode"));
    m_masterNodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterHealth"))
  {
    m_clusterHealth = DomainHealthMapper::GetDomainHealthForName(jsonValue.GetString("ClusterHealth"));
    m_clusterHealthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalShards"))
  {
    m_totalShards = jsonValue.GetString("TotalShards");
    m_totalShardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalUnAssignedShards"))
  {
    m_totalUnAssignedShards = jsonValue.GetString("TotalUnAssignedShards");
    m_totalUnAssignedShardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnvironmentInformation"))
  {
    Aws::Utils::Array<JsonView> environmentInformationJsonList = jsonValue.GetArray("EnvironmentInformation");
    for(unsigned environmentInformationIndex = 0; environmentInformationIndex < environmentInformationJsonList.GetLength(); ++environmentInformationIndex)
    {
      m_environmentInformation.push_back(environmentInformationJsonList[environmentInformationIndex].AsObject());
    }
    m_environmentInformationHasBeenSet = true;
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
