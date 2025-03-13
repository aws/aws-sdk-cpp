/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/CreateAccessorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessorResult::CreateAccessorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAccessorResult& CreateAccessorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessorId"))
  {
    m_accessorId = jsonValue.GetString("AccessorId");
    m_accessorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingToken"))
  {
    m_billingToken = jsonValue.GetString("BillingToken");
    m_billingTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkType"))
  {
    m_networkType = AccessorNetworkTypeMapper::GetAccessorNetworkTypeForName(jsonValue.GetString("NetworkType"));
    m_networkTypeHasBeenSet = true;
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
