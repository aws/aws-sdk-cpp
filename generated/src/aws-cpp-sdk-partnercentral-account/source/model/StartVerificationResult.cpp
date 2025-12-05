/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-account/model/StartVerificationResult.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartVerificationResult::StartVerificationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

StartVerificationResult& StartVerificationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("VerificationType")) {
    m_verificationType = VerificationTypeMapper::GetVerificationTypeForName(jsonValue.GetString("VerificationType"));
    m_verificationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VerificationStatus")) {
    m_verificationStatus = VerificationStatusMapper::GetVerificationStatusForName(jsonValue.GetString("VerificationStatus"));
    m_verificationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VerificationStatusReason")) {
    m_verificationStatusReason = jsonValue.GetString("VerificationStatusReason");
    m_verificationStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VerificationResponseDetails")) {
    m_verificationResponseDetails = jsonValue.GetObject("VerificationResponseDetails");
    m_verificationResponseDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletedAt")) {
    m_completedAt = jsonValue.GetString("CompletedAt");
    m_completedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
