/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VerifyAuthRequestCryptogramResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

VerifyAuthRequestCryptogramResult::VerifyAuthRequestCryptogramResult()
{
}

VerifyAuthRequestCryptogramResult::VerifyAuthRequestCryptogramResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

VerifyAuthRequestCryptogramResult& VerifyAuthRequestCryptogramResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthResponseValue"))
  {
    m_authResponseValue = jsonValue.GetString("AuthResponseValue");

  }

  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");

  }

  if(jsonValue.ValueExists("KeyCheckValue"))
  {
    m_keyCheckValue = jsonValue.GetString("KeyCheckValue");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
