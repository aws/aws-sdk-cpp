/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCrossAccountAuthorizationsResult::ListCrossAccountAuthorizationsResult()
{
}

ListCrossAccountAuthorizationsResult::ListCrossAccountAuthorizationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCrossAccountAuthorizationsResult& ListCrossAccountAuthorizationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("crossAccountAuthorizations"))
  {
    Aws::Utils::Array<JsonView> crossAccountAuthorizationsJsonList = jsonValue.GetArray("crossAccountAuthorizations");
    for(unsigned crossAccountAuthorizationsIndex = 0; crossAccountAuthorizationsIndex < crossAccountAuthorizationsJsonList.GetLength(); ++crossAccountAuthorizationsIndex)
    {
      m_crossAccountAuthorizations.push_back(crossAccountAuthorizationsJsonList[crossAccountAuthorizationsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
