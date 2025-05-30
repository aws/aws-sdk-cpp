﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeSMBSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSMBSettingsResult::DescribeSMBSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSMBSettingsResult& DescribeSMBSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");
    m_gatewayARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActiveDirectoryStatus"))
  {
    m_activeDirectoryStatus = ActiveDirectoryStatusMapper::GetActiveDirectoryStatusForName(jsonValue.GetString("ActiveDirectoryStatus"));
    m_activeDirectoryStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SMBGuestPasswordSet"))
  {
    m_sMBGuestPasswordSet = jsonValue.GetBool("SMBGuestPasswordSet");
    m_sMBGuestPasswordSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SMBSecurityStrategy"))
  {
    m_sMBSecurityStrategy = SMBSecurityStrategyMapper::GetSMBSecurityStrategyForName(jsonValue.GetString("SMBSecurityStrategy"));
    m_sMBSecurityStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSharesVisible"))
  {
    m_fileSharesVisible = jsonValue.GetBool("FileSharesVisible");
    m_fileSharesVisibleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SMBLocalGroups"))
  {
    m_sMBLocalGroups = jsonValue.GetObject("SMBLocalGroups");
    m_sMBLocalGroupsHasBeenSet = true;
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
