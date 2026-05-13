/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rtbfabric/model/ListCertificateAssociationsResult.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCertificateAssociationsResult::ListCertificateAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListCertificateAssociationsResult& ListCertificateAssociationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("certificateAssociations")) {
    Aws::Utils::Array<JsonView> certificateAssociationsJsonList = jsonValue.GetArray("certificateAssociations");
    for (unsigned certificateAssociationsIndex = 0; certificateAssociationsIndex < certificateAssociationsJsonList.GetLength();
         ++certificateAssociationsIndex) {
      m_certificateAssociations.push_back(certificateAssociationsJsonList[certificateAssociationsIndex].AsObject());
    }
    m_certificateAssociationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
