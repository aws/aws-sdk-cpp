/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ListReadinessChecksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReadinessChecksResult::ListReadinessChecksResult()
{
}

ListReadinessChecksResult::ListReadinessChecksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReadinessChecksResult& ListReadinessChecksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("readinessChecks"))
  {
    Aws::Utils::Array<JsonView> readinessChecksJsonList = jsonValue.GetArray("readinessChecks");
    for(unsigned readinessChecksIndex = 0; readinessChecksIndex < readinessChecksJsonList.GetLength(); ++readinessChecksIndex)
    {
      m_readinessChecks.push_back(readinessChecksJsonList[readinessChecksIndex].AsObject());
    }
  }



  return *this;
}
