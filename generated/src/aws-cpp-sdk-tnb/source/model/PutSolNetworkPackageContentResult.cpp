/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/PutSolNetworkPackageContentResult.h>
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

PutSolNetworkPackageContentResult::PutSolNetworkPackageContentResult()
{
}

PutSolNetworkPackageContentResult::PutSolNetworkPackageContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutSolNetworkPackageContentResult& PutSolNetworkPackageContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

  }

  if(jsonValue.ValueExists("nsdId"))
  {
    m_nsdId = jsonValue.GetString("nsdId");

  }

  if(jsonValue.ValueExists("nsdName"))
  {
    m_nsdName = jsonValue.GetString("nsdName");

  }

  if(jsonValue.ValueExists("nsdVersion"))
  {
    m_nsdVersion = jsonValue.GetString("nsdVersion");

  }

  if(jsonValue.ValueExists("vnfPkgIds"))
  {
    Aws::Utils::Array<JsonView> vnfPkgIdsJsonList = jsonValue.GetArray("vnfPkgIds");
    for(unsigned vnfPkgIdsIndex = 0; vnfPkgIdsIndex < vnfPkgIdsJsonList.GetLength(); ++vnfPkgIdsIndex)
    {
      m_vnfPkgIds.push_back(vnfPkgIdsJsonList[vnfPkgIdsIndex].AsString());
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
