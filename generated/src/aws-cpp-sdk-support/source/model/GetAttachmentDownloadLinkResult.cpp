/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/support/model/GetAttachmentDownloadLinkResult.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAttachmentDownloadLinkResult::GetAttachmentDownloadLinkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAttachmentDownloadLinkResult& GetAttachmentDownloadLinkResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("fileName")) {
    m_fileName = jsonValue.GetString("fileName");
    m_fileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("downloadUrl")) {
    m_downloadUrl = jsonValue.GetObject("downloadUrl");
    m_downloadUrlHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
