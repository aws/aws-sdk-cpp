/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateShareResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateShareResult::CreateShareResult() : 
    m_status(ShareStatus::NOT_SET)
{
}

CreateShareResult::CreateShareResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ShareStatus::NOT_SET)
{
  *this = result;
}

CreateShareResult& CreateShareResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("shareId"))
  {
    m_shareId = jsonValue.GetString("shareId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("shareName"))
  {
    m_shareName = jsonValue.GetString("shareName");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
