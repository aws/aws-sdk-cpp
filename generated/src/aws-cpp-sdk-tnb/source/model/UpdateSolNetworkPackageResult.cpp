/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/UpdateSolNetworkPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSolNetworkPackageResult::UpdateSolNetworkPackageResult() : 
    m_nsdOperationalState(NsdOperationalState::NOT_SET)
{
}

UpdateSolNetworkPackageResult::UpdateSolNetworkPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_nsdOperationalState(NsdOperationalState::NOT_SET)
{
  *this = result;
}

UpdateSolNetworkPackageResult& UpdateSolNetworkPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nsdOperationalState"))
  {
    m_nsdOperationalState = NsdOperationalStateMapper::GetNsdOperationalStateForName(jsonValue.GetString("nsdOperationalState"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
