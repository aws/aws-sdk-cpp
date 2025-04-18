﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/GetParametersForImportResult.h>
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

GetParametersForImportResult::GetParametersForImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetParametersForImportResult& GetParametersForImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WrappingKeyCertificate"))
  {
    m_wrappingKeyCertificate = jsonValue.GetString("WrappingKeyCertificate");
    m_wrappingKeyCertificateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WrappingKeyCertificateChain"))
  {
    m_wrappingKeyCertificateChain = jsonValue.GetString("WrappingKeyCertificateChain");
    m_wrappingKeyCertificateChainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WrappingKeyAlgorithm"))
  {
    m_wrappingKeyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("WrappingKeyAlgorithm"));
    m_wrappingKeyAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportToken"))
  {
    m_importToken = jsonValue.GetString("ImportToken");
    m_importTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParametersValidUntilTimestamp"))
  {
    m_parametersValidUntilTimestamp = jsonValue.GetDouble("ParametersValidUntilTimestamp");
    m_parametersValidUntilTimestampHasBeenSet = true;
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
