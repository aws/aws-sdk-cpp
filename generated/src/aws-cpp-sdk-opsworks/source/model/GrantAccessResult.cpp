/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/GrantAccessResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GrantAccessResult::GrantAccessResult()
{
}

GrantAccessResult::GrantAccessResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GrantAccessResult& GrantAccessResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TemporaryCredential"))
  {
    m_temporaryCredential = jsonValue.GetObject("TemporaryCredential");

  }



  return *this;
}
