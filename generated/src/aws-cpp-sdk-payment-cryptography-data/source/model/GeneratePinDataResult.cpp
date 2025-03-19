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

GeneratePinDataResult::GeneratePinDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GeneratePinDataResult& GeneratePinDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GenerationKeyArn"))
  {
    m_generationKeyArn = jsonValue.GetString("GenerationKeyArn");
    m_generationKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GenerationKeyCheckValue"))
  {
    m_generationKeyCheckValue = jsonValue.GetString("GenerationKeyCheckValue");
    m_generationKeyCheckValueHasBeenSet = true;
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
  if(jsonValue.ValueExists("EncryptedPinBlock"))
  {
    m_encryptedPinBlock = jsonValue.GetString("EncryptedPinBlock");
    m_encryptedPinBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PinData"))
  {
    m_pinData = jsonValue.GetObject("PinData");
    m_pinDataHasBeenSet = true;
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
