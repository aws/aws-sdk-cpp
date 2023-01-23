/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecoveryGroupReadinessSummaryResult::GetRecoveryGroupReadinessSummaryResult() : 
    m_readiness(Readiness::NOT_SET)
{
}

GetRecoveryGroupReadinessSummaryResult::GetRecoveryGroupReadinessSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_readiness(Readiness::NOT_SET)
{
  *this = result;
}

GetRecoveryGroupReadinessSummaryResult& GetRecoveryGroupReadinessSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("readiness"))
  {
    m_readiness = ReadinessMapper::GetReadinessForName(jsonValue.GetString("readiness"));

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
