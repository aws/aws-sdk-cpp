﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetExecutionPreviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExecutionPreviewResult::GetExecutionPreviewResult() : 
    m_status(ExecutionPreviewStatus::NOT_SET)
{
}

GetExecutionPreviewResult::GetExecutionPreviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetExecutionPreviewResult()
{
  *this = result;
}

GetExecutionPreviewResult& GetExecutionPreviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExecutionPreviewId"))
  {
    m_executionPreviewId = jsonValue.GetString("ExecutionPreviewId");

  }

  if(jsonValue.ValueExists("EndedAt"))
  {
    m_endedAt = jsonValue.GetDouble("EndedAt");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ExecutionPreviewStatusMapper::GetExecutionPreviewStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("ExecutionPreview"))
  {
    m_executionPreview = jsonValue.GetObject("ExecutionPreview");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
