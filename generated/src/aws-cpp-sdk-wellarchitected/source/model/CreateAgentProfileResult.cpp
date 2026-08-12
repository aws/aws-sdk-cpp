/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wellarchitected/model/CreateAgentProfileResult.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAgentProfileResult::CreateAgentProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateAgentProfileResult& CreateAgentProfileResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("businessOverview")) {
    m_businessOverview = jsonValue.GetString("businessOverview");
    m_businessOverviewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pillars")) {
    Aws::Utils::Array<JsonView> pillarsJsonList = jsonValue.GetArray("pillars");
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      m_pillars.push_back(PillarMapper::GetPillarForName(pillarsJsonList[pillarsIndex].AsString()));
    }
    m_pillarsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletionProtection")) {
    m_deletionProtection = jsonValue.GetBool("deletionProtection");
    m_deletionProtectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aggregationConfiguration")) {
    Aws::Utils::Array<JsonView> aggregationConfigurationJsonList = jsonValue.GetArray("aggregationConfiguration");
    for (unsigned aggregationConfigurationIndex = 0; aggregationConfigurationIndex < aggregationConfigurationJsonList.GetLength();
         ++aggregationConfigurationIndex) {
      m_aggregationConfiguration.push_back(aggregationConfigurationJsonList[aggregationConfigurationIndex].AsObject());
    }
    m_aggregationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eligibleForScheduledGeneration")) {
    m_eligibleForScheduledGeneration = jsonValue.GetBool("eligibleForScheduledGeneration");
    m_eligibleForScheduledGenerationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eligibleForArchitectureGeneration")) {
    m_eligibleForArchitectureGeneration = jsonValue.GetBool("eligibleForArchitectureGeneration");
    m_eligibleForArchitectureGenerationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fieldErrors")) {
    Aws::Map<Aws::String, JsonView> fieldErrorsJsonMap = jsonValue.GetObject("fieldErrors").GetAllObjects();
    for (auto& fieldErrorsItem : fieldErrorsJsonMap) {
      m_fieldErrors[fieldErrorsItem.first] = fieldErrorsItem.second.AsString();
    }
    m_fieldErrorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedBy")) {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedAt")) {
    m_lastModifiedAt = jsonValue.GetString("lastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
