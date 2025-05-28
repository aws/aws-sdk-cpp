/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DescribeFlowOperationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFlowOperationResult::DescribeFlowOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFlowOperationResult& DescribeFlowOperationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");
    m_firewallArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcEndpointAssociationArn"))
  {
    m_vpcEndpointAssociationArn = jsonValue.GetString("VpcEndpointAssociationArn");
    m_vpcEndpointAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowOperationId"))
  {
    m_flowOperationId = jsonValue.GetString("FlowOperationId");
    m_flowOperationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowOperationType"))
  {
    m_flowOperationType = FlowOperationTypeMapper::GetFlowOperationTypeForName(jsonValue.GetString("FlowOperationType"));
    m_flowOperationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowOperationStatus"))
  {
    m_flowOperationStatus = FlowOperationStatusMapper::GetFlowOperationStatusForName(jsonValue.GetString("FlowOperationStatus"));
    m_flowOperationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowRequestTimestamp"))
  {
    m_flowRequestTimestamp = jsonValue.GetDouble("FlowRequestTimestamp");
    m_flowRequestTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowOperation"))
  {
    m_flowOperation = jsonValue.GetObject("FlowOperation");
    m_flowOperationHasBeenSet = true;
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
