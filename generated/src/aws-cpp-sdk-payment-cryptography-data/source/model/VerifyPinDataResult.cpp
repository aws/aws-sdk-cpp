/**
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

VerifyPinDataResult::VerifyPinDataResult()
{
}

VerifyPinDataResult::VerifyPinDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

VerifyPinDataResult& VerifyPinDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

  }

  if(jsonValue.ValueExists("EncryptionKeyCheckValue"))
  {
    m_encryptionKeyCheckValue = jsonValue.GetString("EncryptionKeyCheckValue");

  }

  if(jsonValue.ValueExists("VerificationKeyArn"))
  {
    m_verificationKeyArn = jsonValue.GetString("VerificationKeyArn");

  }

  if(jsonValue.ValueExists("VerificationKeyCheckValue"))
  {
    m_verificationKeyCheckValue = jsonValue.GetString("VerificationKeyCheckValue");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
