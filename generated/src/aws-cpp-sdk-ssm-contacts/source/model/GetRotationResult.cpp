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
    m_rotationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactIds"))
  {
    Aws::Utils::Array<JsonView> contactIdsJsonList = jsonValue.GetArray("ContactIds");
    for(unsigned contactIdsIndex = 0; contactIdsIndex < contactIdsJsonList.GetLength(); ++contactIdsIndex)
    {
      m_contactIds.push_back(contactIdsJsonList[contactIdsIndex].AsString());
    }
    m_contactIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeZoneId"))
  {
    m_timeZoneId = jsonValue.GetString("TimeZoneId");
    m_timeZoneIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Recurrence"))
  {
    m_recurrence = jsonValue.GetObject("Recurrence");
    m_recurrenceHasBeenSet = true;
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
