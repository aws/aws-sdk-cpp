/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/GeneratePinDataResult.h>
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

GeneratePinDataResult::GeneratePinDataResult()
{
}

GeneratePinDataResult::GeneratePinDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GeneratePinDataResult& GeneratePinDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EncryptedPinBlock"))
  {
    m_encryptedPinBlock = jsonValue.GetString("EncryptedPinBlock");

  }

  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

  }

  if(jsonValue.ValueExists("EncryptionKeyCheckValue"))
  {
    m_encryptionKeyCheckValue = jsonValue.GetString("EncryptionKeyCheckValue");

  }

  if(jsonValue.ValueExists("GenerationKeyArn"))
  {
    m_generationKeyArn = jsonValue.GetString("GenerationKeyArn");

  }

  if(jsonValue.ValueExists("GenerationKeyCheckValue"))
  {
    m_generationKeyCheckValue = jsonValue.GetString("GenerationKeyCheckValue");

  }

  if(jsonValue.ValueExists("PinData"))
  {
    m_pinData = jsonValue.GetObject("PinData");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
