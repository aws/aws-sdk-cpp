/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CreateAccessPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessPolicyResult::CreateAccessPolicyResult()
{
}

CreateAccessPolicyResult::CreateAccessPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAccessPolicyResult& CreateAccessPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessPolicyDetail"))
  {
    m_accessPolicyDetail = jsonValue.GetObject("accessPolicyDetail");

  }



  return *this;
}
