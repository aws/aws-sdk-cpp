/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ListRecoveryPointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecoveryPointsResult::ListRecoveryPointsResult()
{
}

ListRecoveryPointsResult::ListRecoveryPointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecoveryPointsResult& ListRecoveryPointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("recoveryPoints"))
  {
    Aws::Utils::Array<JsonView> recoveryPointsJsonList = jsonValue.GetArray("recoveryPoints");
    for(unsigned recoveryPointsIndex = 0; recoveryPointsIndex < recoveryPointsJsonList.GetLength(); ++recoveryPointsIndex)
    {
      m_recoveryPoints.push_back(recoveryPointsJsonList[recoveryPointsIndex].AsObject());
    }
  }



  return *this;
}
