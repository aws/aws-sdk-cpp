/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/DisableDefaultKeyReplicationRegionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableDefaultKeyReplicationRegionsResult::DisableDefaultKeyReplicationRegionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisableDefaultKeyReplicationRegionsResult& DisableDefaultKeyReplicationRegionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EnabledReplicationRegions"))
  {
    Aws::Utils::Array<JsonView> enabledReplicationRegionsJsonList = jsonValue.GetArray("EnabledReplicationRegions");
    for(unsigned enabledReplicationRegionsIndex = 0; enabledReplicationRegionsIndex < enabledReplicationRegionsJsonList.GetLength(); ++enabledReplicationRegionsIndex)
    {
      m_enabledReplicationRegions.push_back(enabledReplicationRegionsJsonList[enabledReplicationRegionsIndex].AsString());
    }
    m_enabledReplicationRegionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
