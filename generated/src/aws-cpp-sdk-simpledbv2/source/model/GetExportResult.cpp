/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/simpledbv2/model/GetExportResult.h>

#include <utility>

using namespace Aws::SimpleDBv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExportResult::GetExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetExportResult& GetExportResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("exportArn")) {
    m_exportArn = jsonValue.GetString("exportArn");
    m_exportArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exportStatus")) {
    m_exportStatus = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("exportStatus"));
    m_exportStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestedAt")) {
    m_requestedAt = jsonValue.GetDouble("requestedAt");
    m_requestedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Bucket")) {
    m_s3Bucket = jsonValue.GetString("s3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3KeyPrefix")) {
    m_s3KeyPrefix = jsonValue.GetString("s3KeyPrefix");
    m_s3KeyPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3SseAlgorithm")) {
    m_s3SseAlgorithm = S3SseAlgorithmMapper::GetS3SseAlgorithmForName(jsonValue.GetString("s3SseAlgorithm"));
    m_s3SseAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3SseKmsKeyId")) {
    m_s3SseKmsKeyId = jsonValue.GetString("s3SseKmsKeyId");
    m_s3SseKmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketOwner")) {
    m_s3BucketOwner = jsonValue.GetString("s3BucketOwner");
    m_s3BucketOwnerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCode")) {
    m_failureCode = jsonValue.GetString("failureCode");
    m_failureCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureMessage")) {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exportManifest")) {
    m_exportManifest = jsonValue.GetString("exportManifest");
    m_exportManifestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("itemsCount")) {
    m_itemsCount = jsonValue.GetInt64("itemsCount");
    m_itemsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exportDataCutoffTime")) {
    m_exportDataCutoffTime = jsonValue.GetDouble("exportDataCutoffTime");
    m_exportDataCutoffTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
