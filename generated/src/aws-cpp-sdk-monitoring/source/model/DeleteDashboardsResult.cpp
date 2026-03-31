/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/DeleteDashboardsResult.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;
using namespace Aws::Utils::Cbor;
using namespace Aws;

DeleteDashboardsResult::DeleteDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) { *this = result; }

DeleteDashboardsResult& DeleteDashboardsResult::operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  const auto& responseMetadataIter = headers.find("x-amzn-requestid");
  if (responseMetadataIter != headers.end()) {
    m_responseMetadataHasBeenSet = true;
    // for backward compatibility for customers used to an old XML Client interface
    m_responseMetadata.SetRequestId(responseMetadataIter->second);
  }

  return *this;
}
