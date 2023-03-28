/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/GetRotationResult.h>
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

GetRotationResult::GetRotationResult()
{
}

GetRotationResult::GetRotationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRotationResult& GetRotationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RotationArn"))
  {
    m_rotationArn = jsonValue.GetString("RotationArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("ContactIds"))
  {
    Aws::Utils::Array<JsonView> contactIdsJsonList = jsonValue.GetArray("ContactIds");
    for(unsigned contactIdsIndex = 0; contactIdsIndex < contactIdsJsonList.GetLength(); ++contactIdsIndex)
    {
      m_contactIds.push_back(contactIdsJsonList[contactIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("TimeZoneId"))
  {
    m_timeZoneId = jsonValue.GetString("TimeZoneId");

  }

  if(jsonValue.ValueExists("Recurrence"))
  {
    m_recurrence = jsonValue.GetObject("Recurrence");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
