/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/GetTrustStoreCertificateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTrustStoreCertificateResult::GetTrustStoreCertificateResult()
{
}

GetTrustStoreCertificateResult::GetTrustStoreCertificateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTrustStoreCertificateResult& GetTrustStoreCertificateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificate"))
  {
    m_certificate = jsonValue.GetObject("certificate");

  }

  if(jsonValue.ValueExists("trustStoreArn"))
  {
    m_trustStoreArn = jsonValue.GetString("trustStoreArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
