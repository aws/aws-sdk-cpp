/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/AWSResources.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

AWSResources::AWSResources(JsonView jsonValue) { *this = jsonValue; }

AWSResources& AWSResources::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcs")) {
    Aws::Utils::Array<JsonView> vpcsJsonList = jsonValue.GetArray("vpcs");
    for (unsigned vpcsIndex = 0; vpcsIndex < vpcsJsonList.GetLength(); ++vpcsIndex) {
      m_vpcs.push_back(vpcsJsonList[vpcsIndex].AsObject());
    }
    m_vpcsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logGroups")) {
    Aws::Utils::Array<JsonView> logGroupsJsonList = jsonValue.GetArray("logGroups");
    for (unsigned logGroupsIndex = 0; logGroupsIndex < logGroupsJsonList.GetLength(); ++logGroupsIndex) {
      m_logGroups.push_back(logGroupsJsonList[logGroupsIndex].AsString());
    }
    m_logGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Buckets")) {
    Aws::Utils::Array<JsonView> s3BucketsJsonList = jsonValue.GetArray("s3Buckets");
    for (unsigned s3BucketsIndex = 0; s3BucketsIndex < s3BucketsJsonList.GetLength(); ++s3BucketsIndex) {
      m_s3Buckets.push_back(s3BucketsJsonList[s3BucketsIndex].AsString());
    }
    m_s3BucketsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretArns")) {
    Aws::Utils::Array<JsonView> secretArnsJsonList = jsonValue.GetArray("secretArns");
    for (unsigned secretArnsIndex = 0; secretArnsIndex < secretArnsJsonList.GetLength(); ++secretArnsIndex) {
      m_secretArns.push_back(secretArnsJsonList[secretArnsIndex].AsString());
    }
    m_secretArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunctionArns")) {
    Aws::Utils::Array<JsonView> lambdaFunctionArnsJsonList = jsonValue.GetArray("lambdaFunctionArns");
    for (unsigned lambdaFunctionArnsIndex = 0; lambdaFunctionArnsIndex < lambdaFunctionArnsJsonList.GetLength();
         ++lambdaFunctionArnsIndex) {
      m_lambdaFunctionArns.push_back(lambdaFunctionArnsJsonList[lambdaFunctionArnsIndex].AsString());
    }
    m_lambdaFunctionArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iamRoles")) {
    Aws::Utils::Array<JsonView> iamRolesJsonList = jsonValue.GetArray("iamRoles");
    for (unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex) {
      m_iamRoles.push_back(iamRolesJsonList[iamRolesIndex].AsString());
    }
    m_iamRolesHasBeenSet = true;
  }
  return *this;
}

JsonValue AWSResources::Jsonize() const {
  JsonValue payload;

  if (m_vpcsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpcsJsonList(m_vpcs.size());
    for (unsigned vpcsIndex = 0; vpcsIndex < vpcsJsonList.GetLength(); ++vpcsIndex) {
      vpcsJsonList[vpcsIndex].AsObject(m_vpcs[vpcsIndex].Jsonize());
    }
    payload.WithArray("vpcs", std::move(vpcsJsonList));
  }

  if (m_logGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> logGroupsJsonList(m_logGroups.size());
    for (unsigned logGroupsIndex = 0; logGroupsIndex < logGroupsJsonList.GetLength(); ++logGroupsIndex) {
      logGroupsJsonList[logGroupsIndex].AsString(m_logGroups[logGroupsIndex]);
    }
    payload.WithArray("logGroups", std::move(logGroupsJsonList));
  }

  if (m_s3BucketsHasBeenSet) {
    Aws::Utils::Array<JsonValue> s3BucketsJsonList(m_s3Buckets.size());
    for (unsigned s3BucketsIndex = 0; s3BucketsIndex < s3BucketsJsonList.GetLength(); ++s3BucketsIndex) {
      s3BucketsJsonList[s3BucketsIndex].AsString(m_s3Buckets[s3BucketsIndex]);
    }
    payload.WithArray("s3Buckets", std::move(s3BucketsJsonList));
  }

  if (m_secretArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> secretArnsJsonList(m_secretArns.size());
    for (unsigned secretArnsIndex = 0; secretArnsIndex < secretArnsJsonList.GetLength(); ++secretArnsIndex) {
      secretArnsJsonList[secretArnsIndex].AsString(m_secretArns[secretArnsIndex]);
    }
    payload.WithArray("secretArns", std::move(secretArnsJsonList));
  }

  if (m_lambdaFunctionArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> lambdaFunctionArnsJsonList(m_lambdaFunctionArns.size());
    for (unsigned lambdaFunctionArnsIndex = 0; lambdaFunctionArnsIndex < lambdaFunctionArnsJsonList.GetLength();
         ++lambdaFunctionArnsIndex) {
      lambdaFunctionArnsJsonList[lambdaFunctionArnsIndex].AsString(m_lambdaFunctionArns[lambdaFunctionArnsIndex]);
    }
    payload.WithArray("lambdaFunctionArns", std::move(lambdaFunctionArnsJsonList));
  }

  if (m_iamRolesHasBeenSet) {
    Aws::Utils::Array<JsonValue> iamRolesJsonList(m_iamRoles.size());
    for (unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex) {
      iamRolesJsonList[iamRolesIndex].AsString(m_iamRoles[iamRolesIndex]);
    }
    payload.WithArray("iamRoles", std::move(iamRolesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
