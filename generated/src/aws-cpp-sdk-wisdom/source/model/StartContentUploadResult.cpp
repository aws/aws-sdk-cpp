/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/StartContentUploadResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartContentUploadResult::StartContentUploadResult()
{
}

StartContentUploadResult::StartContentUploadResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartContentUploadResult& StartContentUploadResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("headersToInclude"))
  {
    Aws::Map<Aws::String, JsonView> headersToIncludeJsonMap = jsonValue.GetObject("headersToInclude").GetAllObjects();
    for(auto& headersToIncludeItem : headersToIncludeJsonMap)
    {
      m_headersToInclude[headersToIncludeItem.first] = headersToIncludeItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("uploadId"))
  {
    m_uploadId = jsonValue.GetString("uploadId");

  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

  }

  if(jsonValue.ValueExists("urlExpiry"))
  {
    m_urlExpiry = jsonValue.GetDouble("urlExpiry");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
