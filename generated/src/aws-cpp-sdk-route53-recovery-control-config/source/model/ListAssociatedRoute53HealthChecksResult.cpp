/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssociatedRoute53HealthChecksResult::ListAssociatedRoute53HealthChecksResult()
{
}

ListAssociatedRoute53HealthChecksResult::ListAssociatedRoute53HealthChecksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssociatedRoute53HealthChecksResult& ListAssociatedRoute53HealthChecksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HealthCheckIds"))
  {
    Aws::Utils::Array<JsonView> healthCheckIdsJsonList = jsonValue.GetArray("HealthCheckIds");
    for(unsigned healthCheckIdsIndex = 0; healthCheckIdsIndex < healthCheckIdsJsonList.GetLength(); ++healthCheckIdsIndex)
    {
      m_healthCheckIds.push_back(healthCheckIdsJsonList[healthCheckIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
