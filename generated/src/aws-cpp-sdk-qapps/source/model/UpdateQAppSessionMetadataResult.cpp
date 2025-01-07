﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/UpdateQAppSessionMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateQAppSessionMetadataResult::UpdateQAppSessionMetadataResult()
{
}

UpdateQAppSessionMetadataResult::UpdateQAppSessionMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateQAppSessionMetadataResult& UpdateQAppSessionMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

  }

  if(jsonValue.ValueExists("sessionArn"))
  {
    m_sessionArn = jsonValue.GetString("sessionArn");

  }

  if(jsonValue.ValueExists("sessionName"))
  {
    m_sessionName = jsonValue.GetString("sessionName");

  }

  if(jsonValue.ValueExists("sharingConfiguration"))
  {
    m_sharingConfiguration = jsonValue.GetObject("sharingConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
