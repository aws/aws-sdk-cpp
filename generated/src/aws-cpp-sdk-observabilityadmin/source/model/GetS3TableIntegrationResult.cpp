/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/observabilityadmin/model/GetS3TableIntegrationResult.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetS3TableIntegrationResult::GetS3TableIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetS3TableIntegrationResult& GetS3TableIntegrationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = IntegrationStatusMapper::GetIntegrationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Encryption")) {
    m_encryption = jsonValue.GetObject("Encryption");
    m_encryptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationTableBucketArn")) {
    m_destinationTableBucketArn = jsonValue.GetString("DestinationTableBucketArn");
    m_destinationTableBucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTimeStamp")) {
    m_createdTimeStamp = jsonValue.GetInt64("CreatedTimeStamp");
    m_createdTimeStampHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
