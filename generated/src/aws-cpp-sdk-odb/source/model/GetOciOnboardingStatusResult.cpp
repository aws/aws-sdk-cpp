/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/odb/model/GetOciOnboardingStatusResult.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOciOnboardingStatusResult::GetOciOnboardingStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetOciOnboardingStatusResult& GetOciOnboardingStatusResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("status")) {
    m_status = OciOnboardingStatusMapper::GetOciOnboardingStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("existingTenancyActivationLink")) {
    m_existingTenancyActivationLink = jsonValue.GetString("existingTenancyActivationLink");
    m_existingTenancyActivationLinkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("newTenancyActivationLink")) {
    m_newTenancyActivationLink = jsonValue.GetString("newTenancyActivationLink");
    m_newTenancyActivationLinkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociIdentityDomain")) {
    m_ociIdentityDomain = jsonValue.GetObject("ociIdentityDomain");
    m_ociIdentityDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autonomousDatabaseOciIntegrationIamRoles")) {
    Aws::Utils::Array<JsonView> autonomousDatabaseOciIntegrationIamRolesJsonList =
        jsonValue.GetArray("autonomousDatabaseOciIntegrationIamRoles");
    for (unsigned autonomousDatabaseOciIntegrationIamRolesIndex = 0;
         autonomousDatabaseOciIntegrationIamRolesIndex < autonomousDatabaseOciIntegrationIamRolesJsonList.GetLength();
         ++autonomousDatabaseOciIntegrationIamRolesIndex) {
      m_autonomousDatabaseOciIntegrationIamRoles.push_back(
          autonomousDatabaseOciIntegrationIamRolesJsonList[autonomousDatabaseOciIntegrationIamRolesIndex].AsObject());
    }
    m_autonomousDatabaseOciIntegrationIamRolesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkedOciTenancyId")) {
    m_linkedOciTenancyId = jsonValue.GetString("linkedOciTenancyId");
    m_linkedOciTenancyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkedOciCompartmentId")) {
    m_linkedOciCompartmentId = jsonValue.GetString("linkedOciCompartmentId");
    m_linkedOciCompartmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionErrors")) {
    Aws::Utils::Array<JsonView> subscriptionErrorsJsonList = jsonValue.GetArray("subscriptionErrors");
    for (unsigned subscriptionErrorsIndex = 0; subscriptionErrorsIndex < subscriptionErrorsJsonList.GetLength();
         ++subscriptionErrorsIndex) {
      m_subscriptionErrors.push_back(subscriptionErrorsJsonList[subscriptionErrorsIndex].AsObject());
    }
    m_subscriptionErrorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
