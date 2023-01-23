/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetDedicatedIpPoolResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDedicatedIpPoolResult::GetDedicatedIpPoolResult()
{
}

GetDedicatedIpPoolResult::GetDedicatedIpPoolResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDedicatedIpPoolResult& GetDedicatedIpPoolResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DedicatedIpPool"))
  {
    m_dedicatedIpPool = jsonValue.GetObject("DedicatedIpPool");

  }



  return *this;
}
