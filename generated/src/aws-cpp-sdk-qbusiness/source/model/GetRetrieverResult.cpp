/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetRetrieverResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRetrieverResult::GetRetrieverResult() : 
    m_status(RetrieverStatus::NOT_SET),
    m_type(RetrieverType::NOT_SET)
{
}

GetRetrieverResult::GetRetrieverResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RetrieverStatus::NOT_SET),
    m_type(RetrieverType::NOT_SET)
{
  *this = result;
}

GetRetrieverResult& GetRetrieverResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("retrieverArn"))
  {
    m_retrieverArn = jsonValue.GetString("retrieverArn");

  }

  if(jsonValue.ValueExists("retrieverId"))
  {
    m_retrieverId = jsonValue.GetString("retrieverId");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RetrieverStatusMapper::GetRetrieverStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RetrieverTypeMapper::GetRetrieverTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
