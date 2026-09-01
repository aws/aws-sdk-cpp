/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sesv2/model/ListEmailIdentityCertificatesResult.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEmailIdentityCertificatesResult::ListEmailIdentityCertificatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListEmailIdentityCertificatesResult& ListEmailIdentityCertificatesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Certificates")) {
    Aws::Utils::Array<JsonView> certificatesJsonList = jsonValue.GetArray("Certificates");
    for (unsigned certificatesIndex = 0; certificatesIndex < certificatesJsonList.GetLength(); ++certificatesIndex) {
      m_certificates.push_back(certificatesJsonList[certificatesIndex].AsObject());
    }
    m_certificatesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
