/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeKeyRegistrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeKeyRegistrationResult::DescribeKeyRegistrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeKeyRegistrationResult& DescribeKeyRegistrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyRegistration"))
  {
    Aws::Utils::Array<JsonView> keyRegistrationJsonList = jsonValue.GetArray("KeyRegistration");
    for(unsigned keyRegistrationIndex = 0; keyRegistrationIndex < keyRegistrationJsonList.GetLength(); ++keyRegistrationIndex)
    {
      m_keyRegistration.push_back(keyRegistrationJsonList[keyRegistrationIndex].AsObject());
    }
    m_keyRegistrationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QDataKey"))
  {
    m_qDataKey = jsonValue.GetObject("QDataKey");
    m_qDataKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetInteger("Status");
    m_statusHasBeenSet = true;
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
