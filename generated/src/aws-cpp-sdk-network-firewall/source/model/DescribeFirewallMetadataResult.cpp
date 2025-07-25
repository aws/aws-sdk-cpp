﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DescribeFirewallMetadataResult.h>
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

DescribeFirewallMetadataResult::DescribeFirewallMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFirewallMetadataResult& DescribeFirewallMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");
    m_firewallArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirewallPolicyArn"))
  {
    m_firewallPolicyArn = jsonValue.GetString("FirewallPolicyArn");
    m_firewallPolicyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FirewallStatusValueMapper::GetFirewallStatusValueForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedAvailabilityZones"))
  {
    Aws::Map<Aws::String, JsonView> supportedAvailabilityZonesJsonMap = jsonValue.GetObject("SupportedAvailabilityZones").GetAllObjects();
    for(auto& supportedAvailabilityZonesItem : supportedAvailabilityZonesJsonMap)
    {
      m_supportedAvailabilityZones[supportedAvailabilityZonesItem.first] = supportedAvailabilityZonesItem.second.AsObject();
    }
    m_supportedAvailabilityZonesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransitGatewayAttachmentId"))
  {
    m_transitGatewayAttachmentId = jsonValue.GetString("TransitGatewayAttachmentId");
    m_transitGatewayAttachmentIdHasBeenSet = true;
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
