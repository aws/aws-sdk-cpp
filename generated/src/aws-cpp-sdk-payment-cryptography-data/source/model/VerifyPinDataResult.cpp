﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VerifyPinDataResult.h>
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

VerifyPinDataResult::VerifyPinDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

VerifyPinDataResult& VerifyPinDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VerificationKeyArn"))
  {
    m_verificationKeyArn = jsonValue.GetString("VerificationKeyArn");
    m_verificationKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VerificationKeyCheckValue"))
  {
    m_verificationKeyCheckValue = jsonValue.GetString("VerificationKeyCheckValue");
    m_verificationKeyCheckValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionKeyCheckValue"))
  {
    m_encryptionKeyCheckValue = jsonValue.GetString("EncryptionKeyCheckValue");
    m_encryptionKeyCheckValueHasBeenSet = true;
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
