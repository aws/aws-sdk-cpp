/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-account/model/UpdateConnectionPreferencesResult.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateConnectionPreferencesResult::UpdateConnectionPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateConnectionPreferencesResult& UpdateConnectionPreferencesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccessType")) {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("AccessType"));
    m_accessTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExcludedParticipantIds")) {
    Aws::Utils::Array<JsonView> excludedParticipantIdsJsonList = jsonValue.GetArray("ExcludedParticipantIds");
    for (unsigned excludedParticipantIdsIndex = 0; excludedParticipantIdsIndex < excludedParticipantIdsJsonList.GetLength();
         ++excludedParticipantIdsIndex) {
      m_excludedParticipantIds.push_back(excludedParticipantIdsJsonList[excludedParticipantIdsIndex].AsString());
    }
    m_excludedParticipantIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Revision")) {
    m_revision = jsonValue.GetInt64("Revision");
    m_revisionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
