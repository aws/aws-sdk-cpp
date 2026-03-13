/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mgn/model/GetNetworkMigrationDefinitionResult.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNetworkMigrationDefinitionResult::GetNetworkMigrationDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetNetworkMigrationDefinitionResult& GetNetworkMigrationDefinitionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkMigrationDefinitionID")) {
    m_networkMigrationDefinitionID = jsonValue.GetString("networkMigrationDefinitionID");
    m_networkMigrationDefinitionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceConfigurations")) {
    Aws::Utils::Array<JsonView> sourceConfigurationsJsonList = jsonValue.GetArray("sourceConfigurations");
    for (unsigned sourceConfigurationsIndex = 0; sourceConfigurationsIndex < sourceConfigurationsJsonList.GetLength();
         ++sourceConfigurationsIndex) {
      m_sourceConfigurations.push_back(sourceConfigurationsJsonList[sourceConfigurationsIndex].AsObject());
    }
    m_sourceConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetS3Configuration")) {
    m_targetS3Configuration = jsonValue.GetObject("targetS3Configuration");
    m_targetS3ConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetNetwork")) {
    m_targetNetwork = jsonValue.GetObject("targetNetwork");
    m_targetNetworkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetDeployment")) {
    m_targetDeployment = TargetDeploymentMapper::GetTargetDeploymentForName(jsonValue.GetString("targetDeployment"));
    m_targetDeploymentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeTags")) {
    Aws::Map<Aws::String, JsonView> scopeTagsJsonMap = jsonValue.GetObject("scopeTags").GetAllObjects();
    for (auto& scopeTagsItem : scopeTagsJsonMap) {
      m_scopeTags[scopeTagsItem.first] = scopeTagsItem.second.AsString();
    }
    m_scopeTagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
