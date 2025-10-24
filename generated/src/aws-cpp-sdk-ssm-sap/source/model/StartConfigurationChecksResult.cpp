﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ssm-sap/model/StartConfigurationChecksResult.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartConfigurationChecksResult::StartConfigurationChecksResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

StartConfigurationChecksResult& StartConfigurationChecksResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ConfigurationCheckOperations")) {
    Aws::Utils::Array<JsonView> configurationCheckOperationsJsonList = jsonValue.GetArray("ConfigurationCheckOperations");
    for (unsigned configurationCheckOperationsIndex = 0;
         configurationCheckOperationsIndex < configurationCheckOperationsJsonList.GetLength(); ++configurationCheckOperationsIndex) {
      m_configurationCheckOperations.push_back(configurationCheckOperationsJsonList[configurationCheckOperationsIndex].AsObject());
    }
    m_configurationCheckOperationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
