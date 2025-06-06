﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/StartContentUploadResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartContentUploadResult::StartContentUploadResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartContentUploadResult& StartContentUploadResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("uploadId"))
  {
    m_uploadId = jsonValue.GetString("uploadId");
    m_uploadIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("urlExpiry"))
  {
    m_urlExpiry = jsonValue.GetDouble("urlExpiry");
    m_urlExpiryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("headersToInclude"))
  {
    Aws::Map<Aws::String, JsonView> headersToIncludeJsonMap = jsonValue.GetObject("headersToInclude").GetAllObjects();
    for(auto& headersToIncludeItem : headersToIncludeJsonMap)
    {
      m_headersToInclude[headersToIncludeItem.first] = headersToIncludeItem.second.AsString();
    }
    m_headersToIncludeHasBeenSet = true;
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
