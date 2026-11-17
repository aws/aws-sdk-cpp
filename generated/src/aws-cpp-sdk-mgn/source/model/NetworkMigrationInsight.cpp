/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationInsight.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationInsight::NetworkMigrationInsight(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationInsight& NetworkMigrationInsight::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkMigrationDefinitionID")) {
    m_networkMigrationDefinitionID = jsonValue.GetString("networkMigrationDefinitionID");
    m_networkMigrationDefinitionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkMigrationExecutionID")) {
    m_networkMigrationExecutionID = jsonValue.GetString("networkMigrationExecutionID");
    m_networkMigrationExecutionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("producerID")) {
    m_producerID = jsonValue.GetString("producerID");
    m_producerIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("producerType")) {
    m_producerType = InsightProducerTypeMapper::GetInsightProducerTypeForName(jsonValue.GetString("producerType"));
    m_producerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("producerName")) {
    m_producerName = InsightProducerNameMapper::GetInsightProducerNameForName(jsonValue.GetString("producerName"));
    m_producerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("segmentID")) {
    m_segmentID = jsonValue.GetString("segmentID");
    m_segmentIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("constructID")) {
    m_constructID = jsonValue.GetString("constructID");
    m_constructIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("insightID")) {
    m_insightID = jsonValue.GetString("insightID");
    m_insightIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("insightLevel")) {
    m_insightLevel = InsightLevelMapper::GetInsightLevelForName(jsonValue.GetString("insightLevel"));
    m_insightLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("insightType")) {
    m_insightType = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("insightType"));
    m_insightTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("insightMessage")) {
    m_insightMessage = jsonValue.GetObject("insightMessage");
    m_insightMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationInsight::Jsonize() const {
  JsonValue payload;

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_networkMigrationExecutionIDHasBeenSet) {
    payload.WithString("networkMigrationExecutionID", m_networkMigrationExecutionID);
  }

  if (m_producerIDHasBeenSet) {
    payload.WithString("producerID", m_producerID);
  }

  if (m_producerTypeHasBeenSet) {
    payload.WithString("producerType", InsightProducerTypeMapper::GetNameForInsightProducerType(m_producerType));
  }

  if (m_producerNameHasBeenSet) {
    payload.WithString("producerName", InsightProducerNameMapper::GetNameForInsightProducerName(m_producerName));
  }

  if (m_segmentIDHasBeenSet) {
    payload.WithString("segmentID", m_segmentID);
  }

  if (m_constructIDHasBeenSet) {
    payload.WithString("constructID", m_constructID);
  }

  if (m_insightIDHasBeenSet) {
    payload.WithString("insightID", m_insightID);
  }

  if (m_insightLevelHasBeenSet) {
    payload.WithString("insightLevel", InsightLevelMapper::GetNameForInsightLevel(m_insightLevel));
  }

  if (m_insightTypeHasBeenSet) {
    payload.WithString("insightType", InsightTypeMapper::GetNameForInsightType(m_insightType));
  }

  if (m_insightMessageHasBeenSet) {
    payload.WithObject("insightMessage", m_insightMessage.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
