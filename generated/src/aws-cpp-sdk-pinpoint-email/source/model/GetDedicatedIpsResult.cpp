/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/GetDedicatedIpsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDedicatedIpsResult::GetDedicatedIpsResult()
{
}

GetDedicatedIpsResult::GetDedicatedIpsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDedicatedIpsResult& GetDedicatedIpsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DedicatedIps"))
  {
    Aws::Utils::Array<JsonView> dedicatedIpsJsonList = jsonValue.GetArray("DedicatedIps");
    for(unsigned dedicatedIpsIndex = 0; dedicatedIpsIndex < dedicatedIpsJsonList.GetLength(); ++dedicatedIpsIndex)
    {
      m_dedicatedIps.push_back(dedicatedIpsJsonList[dedicatedIpsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
