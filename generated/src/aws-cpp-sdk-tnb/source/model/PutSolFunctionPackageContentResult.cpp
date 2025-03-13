/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/PutSolFunctionPackageContentResult.h>
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

PutSolFunctionPackageContentResult::PutSolFunctionPackageContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutSolFunctionPackageContentResult& PutSolFunctionPackageContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnfProductName"))
  {
    m_vnfProductName = jsonValue.GetString("vnfProductName");
    m_vnfProductNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnfProvider"))
  {
    m_vnfProvider = jsonValue.GetString("vnfProvider");
    m_vnfProviderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnfdId"))
  {
    m_vnfdId = jsonValue.GetString("vnfdId");
    m_vnfdIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnfdVersion"))
  {
    m_vnfdVersion = jsonValue.GetString("vnfdVersion");
    m_vnfdVersionHasBeenSet = true;
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
