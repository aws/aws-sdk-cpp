/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/GetArchitectureRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetArchitectureRecommendationsResult::GetArchitectureRecommendationsResult()
{
}

GetArchitectureRecommendationsResult::GetArchitectureRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetArchitectureRecommendationsResult& GetArchitectureRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("lastAuditTimestamp"))
  {
    m_lastAuditTimestamp = jsonValue.GetString("lastAuditTimestamp");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("recommendations"))
  {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("recommendations");
    for(unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex)
    {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
  }



  return *this;
}
