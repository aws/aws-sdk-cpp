/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/GetRotationOverrideResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRotationOverrideResult::GetRotationOverrideResult()
{
}

GetRotationOverrideResult::GetRotationOverrideResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRotationOverrideResult& GetRotationOverrideResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RotationOverrideId"))
  {
    m_rotationOverrideId = jsonValue.GetString("RotationOverrideId");

  }

  if(jsonValue.ValueExists("RotationArn"))
  {
    m_rotationArn = jsonValue.GetString("RotationArn");

  }

  if(jsonValue.ValueExists("NewContactIds"))
  {
    Aws::Utils::Array<JsonView> newContactIdsJsonList = jsonValue.GetArray("NewContactIds");
    for(unsigned newContactIdsIndex = 0; newContactIdsIndex < newContactIdsJsonList.GetLength(); ++newContactIdsIndex)
    {
      m_newContactIds.push_back(newContactIdsJsonList[newContactIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
