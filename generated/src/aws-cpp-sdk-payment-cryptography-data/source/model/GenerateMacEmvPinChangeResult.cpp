/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/GenerateMacEmvPinChangeResult.h>
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

GenerateMacEmvPinChangeResult::GenerateMacEmvPinChangeResult()
{
}

GenerateMacEmvPinChangeResult::GenerateMacEmvPinChangeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GenerateMacEmvPinChangeResult& GenerateMacEmvPinChangeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NewPinPekArn"))
  {
    m_newPinPekArn = jsonValue.GetString("NewPinPekArn");

  }

  if(jsonValue.ValueExists("SecureMessagingIntegrityKeyArn"))
  {
    m_secureMessagingIntegrityKeyArn = jsonValue.GetString("SecureMessagingIntegrityKeyArn");

  }

  if(jsonValue.ValueExists("SecureMessagingConfidentialityKeyArn"))
  {
    m_secureMessagingConfidentialityKeyArn = jsonValue.GetString("SecureMessagingConfidentialityKeyArn");

  }

  if(jsonValue.ValueExists("Mac"))
  {
    m_mac = jsonValue.GetString("Mac");

  }

  if(jsonValue.ValueExists("EncryptedPinBlock"))
  {
    m_encryptedPinBlock = jsonValue.GetString("EncryptedPinBlock");

  }

  if(jsonValue.ValueExists("NewPinPekKeyCheckValue"))
  {
    m_newPinPekKeyCheckValue = jsonValue.GetString("NewPinPekKeyCheckValue");

  }

  if(jsonValue.ValueExists("SecureMessagingIntegrityKeyCheckValue"))
  {
    m_secureMessagingIntegrityKeyCheckValue = jsonValue.GetString("SecureMessagingIntegrityKeyCheckValue");

  }

  if(jsonValue.ValueExists("SecureMessagingConfidentialityKeyCheckValue"))
  {
    m_secureMessagingConfidentialityKeyCheckValue = jsonValue.GetString("SecureMessagingConfidentialityKeyCheckValue");

  }

  if(jsonValue.ValueExists("VisaAmexDerivationOutputs"))
  {
    m_visaAmexDerivationOutputs = jsonValue.GetObject("VisaAmexDerivationOutputs");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
