/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PutResourcePolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutResourcePolicyResult::PutResourcePolicyResult()
{
}

PutResourcePolicyResult::PutResourcePolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutResourcePolicyResult& PutResourcePolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

  }

  if(jsonValue.ValueExists("PolicyHash"))
  {
    m_policyHash = jsonValue.GetString("PolicyHash");

  }



  return *this;
}
