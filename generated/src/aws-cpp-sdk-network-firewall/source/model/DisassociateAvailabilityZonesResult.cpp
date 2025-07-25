﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DisassociateAvailabilityZonesResult.h>
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

DisassociateAvailabilityZonesResult::DisassociateAvailabilityZonesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociateAvailabilityZonesResult& DisassociateAvailabilityZonesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");
    m_firewallArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirewallName"))
  {
    m_firewallName = jsonValue.GetString("FirewallName");
    m_firewallNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZoneMappings"))
  {
    Aws::Utils::Array<JsonView> availabilityZoneMappingsJsonList = jsonValue.GetArray("AvailabilityZoneMappings");
    for(unsigned availabilityZoneMappingsIndex = 0; availabilityZoneMappingsIndex < availabilityZoneMappingsJsonList.GetLength(); ++availabilityZoneMappingsIndex)
    {
      m_availabilityZoneMappings.push_back(availabilityZoneMappingsJsonList[availabilityZoneMappingsIndex].AsObject());
    }
    m_availabilityZoneMappingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateToken"))
  {
    m_updateToken = jsonValue.GetString("UpdateToken");
    m_updateTokenHasBeenSet = true;
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
