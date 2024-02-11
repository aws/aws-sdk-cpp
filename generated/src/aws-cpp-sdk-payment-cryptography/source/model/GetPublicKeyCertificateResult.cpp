/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/GetPublicKeyCertificateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPublicKeyCertificateResult::GetPublicKeyCertificateResult()
{
}

GetPublicKeyCertificateResult::GetPublicKeyCertificateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPublicKeyCertificateResult& GetPublicKeyCertificateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyCertificate"))
  {
    m_keyCertificate = jsonValue.GetString("KeyCertificate");

  }

  if(jsonValue.ValueExists("KeyCertificateChain"))
  {
    m_keyCertificateChain = jsonValue.GetString("KeyCertificateChain");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
