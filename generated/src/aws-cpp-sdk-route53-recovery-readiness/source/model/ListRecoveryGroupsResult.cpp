/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecoveryGroupsResult::ListRecoveryGroupsResult()
{
}

ListRecoveryGroupsResult::ListRecoveryGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecoveryGroupsResult& ListRecoveryGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("recoveryGroups"))
  {
    Aws::Utils::Array<JsonView> recoveryGroupsJsonList = jsonValue.GetArray("recoveryGroups");
    for(unsigned recoveryGroupsIndex = 0; recoveryGroupsIndex < recoveryGroupsJsonList.GetLength(); ++recoveryGroupsIndex)
    {
      m_recoveryGroups.push_back(recoveryGroupsJsonList[recoveryGroupsIndex].AsObject());
    }
  }



  return *this;
}
