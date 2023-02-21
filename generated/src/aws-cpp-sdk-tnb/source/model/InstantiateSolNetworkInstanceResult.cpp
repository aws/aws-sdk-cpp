/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/InstantiateSolNetworkInstanceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InstantiateSolNetworkInstanceResult::InstantiateSolNetworkInstanceResult()
{
}

InstantiateSolNetworkInstanceResult::InstantiateSolNetworkInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InstantiateSolNetworkInstanceResult& InstantiateSolNetworkInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nsLcmOpOccId"))
  {
    m_nsLcmOpOccId = jsonValue.GetString("nsLcmOpOccId");

  }



  return *this;
}
