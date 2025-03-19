/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/GetParametersForExportResult.h>
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

GetParametersForExportResult::GetParametersForExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetParametersForExportResult& GetParametersForExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SigningKeyCertificate"))
  {
    m_signingKeyCertificate = jsonValue.GetString("SigningKeyCertificate");
    m_signingKeyCertificateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SigningKeyCertificateChain"))
  {
    m_signingKeyCertificateChain = jsonValue.GetString("SigningKeyCertificateChain");
    m_signingKeyCertificateChainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SigningKeyAlgorithm"))
  {
    m_signingKeyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("SigningKeyAlgorithm"));
    m_signingKeyAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportToken"))
  {
    m_exportToken = jsonValue.GetString("ExportToken");
    m_exportTokenHasBeenSet = true;
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
