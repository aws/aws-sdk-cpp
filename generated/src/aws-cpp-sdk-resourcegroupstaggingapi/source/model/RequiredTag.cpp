/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resourcegroupstaggingapi/model/RequiredTag.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResourceGroupsTaggingAPI {
namespace Model {

RequiredTag::RequiredTag(JsonView jsonValue) { *this = jsonValue; }

RequiredTag& RequiredTag::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CloudFormationResourceTypes")) {
    Aws::Utils::Array<JsonView> cloudFormationResourceTypesJsonList = jsonValue.GetArray("CloudFormationResourceTypes");
    for (unsigned cloudFormationResourceTypesIndex = 0; cloudFormationResourceTypesIndex < cloudFormationResourceTypesJsonList.GetLength();
         ++cloudFormationResourceTypesIndex) {
      m_cloudFormationResourceTypes.push_back(cloudFormationResourceTypesJsonList[cloudFormationResourceTypesIndex].AsString());
    }
    m_cloudFormationResourceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReportingTagKeys")) {
    Aws::Utils::Array<JsonView> reportingTagKeysJsonList = jsonValue.GetArray("ReportingTagKeys");
    for (unsigned reportingTagKeysIndex = 0; reportingTagKeysIndex < reportingTagKeysJsonList.GetLength(); ++reportingTagKeysIndex) {
      m_reportingTagKeys.push_back(reportingTagKeysJsonList[reportingTagKeysIndex].AsString());
    }
    m_reportingTagKeysHasBeenSet = true;
  }
  return *this;
}

JsonValue RequiredTag::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_cloudFormationResourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudFormationResourceTypesJsonList(m_cloudFormationResourceTypes.size());
    for (unsigned cloudFormationResourceTypesIndex = 0; cloudFormationResourceTypesIndex < cloudFormationResourceTypesJsonList.GetLength();
         ++cloudFormationResourceTypesIndex) {
      cloudFormationResourceTypesJsonList[cloudFormationResourceTypesIndex].AsString(
          m_cloudFormationResourceTypes[cloudFormationResourceTypesIndex]);
    }
    payload.WithArray("CloudFormationResourceTypes", std::move(cloudFormationResourceTypesJsonList));
  }

  if (m_reportingTagKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> reportingTagKeysJsonList(m_reportingTagKeys.size());
    for (unsigned reportingTagKeysIndex = 0; reportingTagKeysIndex < reportingTagKeysJsonList.GetLength(); ++reportingTagKeysIndex) {
      reportingTagKeysJsonList[reportingTagKeysIndex].AsString(m_reportingTagKeys[reportingTagKeysIndex]);
    }
    payload.WithArray("ReportingTagKeys", std::move(reportingTagKeysJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
