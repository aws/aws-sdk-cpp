/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CreateSecurityPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSecurityPolicyResult::CreateSecurityPolicyResult()
{
}

CreateSecurityPolicyResult::CreateSecurityPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSecurityPolicyResult& CreateSecurityPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("securityPolicyDetail"))
  {
    m_securityPolicyDetail = jsonValue.GetObject("securityPolicyDetail");

  }



  return *this;
}
