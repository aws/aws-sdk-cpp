/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/PutApplicationPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutApplicationPolicyResult::PutApplicationPolicyResult()
{
}

PutApplicationPolicyResult::PutApplicationPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutApplicationPolicyResult& PutApplicationPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("statements"))
  {
    Aws::Utils::Array<JsonView> statementsJsonList = jsonValue.GetArray("statements");
    for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
    {
      m_statements.push_back(statementsJsonList[statementsIndex].AsObject());
    }
  }



  return *this;
}
