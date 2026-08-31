/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/support/model/GetAttachmentUploadLinksResult.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAttachmentUploadLinksResult::GetAttachmentUploadLinksResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAttachmentUploadLinksResult& GetAttachmentUploadLinksResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("uploadId")) {
    m_uploadId = jsonValue.GetString("uploadId");
    m_uploadIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("partSizeBytes")) {
    m_partSizeBytes = jsonValue.GetInt64("partSizeBytes");
    m_partSizeBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalParts")) {
    m_totalParts = jsonValue.GetInteger("totalParts");
    m_totalPartsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextIndex")) {
    m_nextIndex = jsonValue.GetInteger("nextIndex");
    m_nextIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uploadUrls")) {
    Aws::Utils::Array<JsonView> uploadUrlsJsonList = jsonValue.GetArray("uploadUrls");
    for (unsigned uploadUrlsIndex = 0; uploadUrlsIndex < uploadUrlsJsonList.GetLength(); ++uploadUrlsIndex) {
      m_uploadUrls.push_back(uploadUrlsJsonList[uploadUrlsIndex].AsObject());
    }
    m_uploadUrlsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
