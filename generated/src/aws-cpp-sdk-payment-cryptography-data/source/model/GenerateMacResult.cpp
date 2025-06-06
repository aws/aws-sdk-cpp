﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/GenerateMacResult.h>
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

GenerateMacResult::GenerateMacResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GenerateMacResult& GenerateMacResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");
    m_keyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyCheckValue"))
  {
    m_keyCheckValue = jsonValue.GetString("KeyCheckValue");
    m_keyCheckValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mac"))
  {
    m_mac = jsonValue.GetString("Mac");
    m_macHasBeenSet = true;
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
