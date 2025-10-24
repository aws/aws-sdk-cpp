﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mpa/model/GetIdentitySourceResult.h>

#include <utility>

using namespace Aws::MPA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIdentitySourceResult::GetIdentitySourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetIdentitySourceResult& GetIdentitySourceResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("IdentitySourceType")) {
    m_identitySourceType = IdentitySourceTypeMapper::GetIdentitySourceTypeForName(jsonValue.GetString("IdentitySourceType"));
    m_identitySourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentitySourceParameters")) {
    m_identitySourceParameters = jsonValue.GetObject("IdentitySourceParameters");
    m_identitySourceParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentitySourceArn")) {
    m_identitySourceArn = jsonValue.GetString("IdentitySourceArn");
    m_identitySourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = IdentitySourceStatusMapper::GetIdentitySourceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusCode")) {
    m_statusCode = IdentitySourceStatusCodeMapper::GetIdentitySourceStatusCodeForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
