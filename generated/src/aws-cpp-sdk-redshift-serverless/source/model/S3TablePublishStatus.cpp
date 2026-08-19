/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/model/S3TablePublishStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RedshiftServerless {
namespace Model {

S3TablePublishStatus::S3TablePublishStatus(JsonView jsonValue) { *this = jsonValue; }

S3TablePublishStatus& S3TablePublishStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabledAll")) {
    m_enabledAll = jsonValue.GetBool("enabledAll");
    m_enabledAllHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastIngestionTimes")) {
    Aws::Map<Aws::String, JsonView> lastIngestionTimesJsonMap = jsonValue.GetObject("lastIngestionTimes").GetAllObjects();
    for (auto& lastIngestionTimesItem : lastIngestionTimesJsonMap) {
      m_lastIngestionTimes[lastIngestionTimesItem.first] = lastIngestionTimesItem.second.AsString();
    }
    m_lastIngestionTimesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3TableGranularity")) {
    m_s3TableGranularity = S3TableGranularityMapper::GetS3TableGranularityForName(jsonValue.GetString("s3TableGranularity"));
    m_s3TableGranularityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3TableNamespace")) {
    m_s3TableNamespace = jsonValue.GetString("s3TableNamespace");
    m_s3TableNamespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Tables")) {
    Aws::Utils::Array<JsonView> s3TablesJsonList = jsonValue.GetArray("s3Tables");
    for (unsigned s3TablesIndex = 0; s3TablesIndex < s3TablesJsonList.GetLength(); ++s3TablesIndex) {
      m_s3Tables.push_back(s3TablesJsonList[s3TablesIndex].AsString());
    }
    m_s3TablesHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TablePublishStatus::Jsonize() const {
  JsonValue payload;

  if (m_enabledAllHasBeenSet) {
    payload.WithBool("enabledAll", m_enabledAll);
  }

  if (m_lastIngestionTimesHasBeenSet) {
    JsonValue lastIngestionTimesJsonMap;
    for (auto& lastIngestionTimesItem : m_lastIngestionTimes) {
      lastIngestionTimesJsonMap.WithString(lastIngestionTimesItem.first, lastIngestionTimesItem.second);
    }
    payload.WithObject("lastIngestionTimes", std::move(lastIngestionTimesJsonMap));
  }

  if (m_s3TableGranularityHasBeenSet) {
    payload.WithString("s3TableGranularity", S3TableGranularityMapper::GetNameForS3TableGranularity(m_s3TableGranularity));
  }

  if (m_s3TableNamespaceHasBeenSet) {
    payload.WithString("s3TableNamespace", m_s3TableNamespace);
  }

  if (m_s3TablesHasBeenSet) {
    Aws::Utils::Array<JsonValue> s3TablesJsonList(m_s3Tables.size());
    for (unsigned s3TablesIndex = 0; s3TablesIndex < s3TablesJsonList.GetLength(); ++s3TablesIndex) {
      s3TablesJsonList[s3TablesIndex].AsString(m_s3Tables[s3TablesIndex]);
    }
    payload.WithArray("s3Tables", std::move(s3TablesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
