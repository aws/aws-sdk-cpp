/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearch/model/ListDataSourceAttachmentsResult.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataSourceAttachmentsResult::ListDataSourceAttachmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListDataSourceAttachmentsResult& ListDataSourceAttachmentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("attachments")) {
    Aws::Utils::Array<JsonView> attachmentsJsonList = jsonValue.GetArray("attachments");
    for (unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex) {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
    m_attachmentsHasBeenSet = true;
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
