/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/RegisterTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterTargetsResult::RegisterTargetsResult()
{
}

RegisterTargetsResult::RegisterTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RegisterTargetsResult& RegisterTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("successful"))
  {
    Aws::Utils::Array<JsonView> successfulJsonList = jsonValue.GetArray("successful");
    for(unsigned successfulIndex = 0; successfulIndex < successfulJsonList.GetLength(); ++successfulIndex)
    {
      m_successful.push_back(successfulJsonList[successfulIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("unsuccessful"))
  {
    Aws::Utils::Array<JsonView> unsuccessfulJsonList = jsonValue.GetArray("unsuccessful");
    for(unsigned unsuccessfulIndex = 0; unsuccessfulIndex < unsuccessfulJsonList.GetLength(); ++unsuccessfulIndex)
    {
      m_unsuccessful.push_back(unsuccessfulJsonList[unsuccessfulIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
