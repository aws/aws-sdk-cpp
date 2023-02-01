/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDatalakeExceptionsExpiryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatalakeExceptionsExpiryResult::GetDatalakeExceptionsExpiryResult() : 
    m_exceptionMessageExpiry(0)
{
}

GetDatalakeExceptionsExpiryResult::GetDatalakeExceptionsExpiryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_exceptionMessageExpiry(0)
{
  *this = result;
}

GetDatalakeExceptionsExpiryResult& GetDatalakeExceptionsExpiryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exceptionMessageExpiry"))
  {
    m_exceptionMessageExpiry = jsonValue.GetInt64("exceptionMessageExpiry");

  }



  return *this;
}
