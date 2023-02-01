/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/JoinDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JoinDomainResult::JoinDomainResult() : 
    m_activeDirectoryStatus(ActiveDirectoryStatus::NOT_SET)
{
}

JoinDomainResult::JoinDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_activeDirectoryStatus(ActiveDirectoryStatus::NOT_SET)
{
  *this = result;
}

JoinDomainResult& JoinDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("ActiveDirectoryStatus"))
  {
    m_activeDirectoryStatus = ActiveDirectoryStatusMapper::GetActiveDirectoryStatusForName(jsonValue.GetString("ActiveDirectoryStatus"));

  }



  return *this;
}
