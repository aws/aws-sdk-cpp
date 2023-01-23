/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetSuppressedDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSuppressedDestinationResult::GetSuppressedDestinationResult()
{
}

GetSuppressedDestinationResult::GetSuppressedDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSuppressedDestinationResult& GetSuppressedDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SuppressedDestination"))
  {
    m_suppressedDestination = jsonValue.GetObject("SuppressedDestination");

  }



  return *this;
}
