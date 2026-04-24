/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationAnalysisResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationAnalysisResult::NetworkMigrationAnalysisResult(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationAnalysisResult& NetworkMigrationAnalysisResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobID")) {
    m_jobID = jsonValue.GetString("jobID");
    m_jobIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkMigrationExecutionID")) {
    m_networkMigrationExecutionID = jsonValue.GetString("networkMigrationExecutionID");
    m_networkMigrationExecutionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkMigrationDefinitionID")) {
    m_networkMigrationDefinitionID = jsonValue.GetString("networkMigrationDefinitionID");
    m_networkMigrationDefinitionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analyzerType")) {
    m_analyzerType = AnalyzerTypeMapper::GetAnalyzerTypeForName(jsonValue.GetString("analyzerType"));
    m_analyzerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("target")) {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = NetworkMigrationAnalysisResultStatusMapper::GetNetworkMigrationAnalysisResultStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisResult")) {
    m_analysisResult = jsonValue.GetString("analysisResult");
    m_analysisResultHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationAnalysisResult::Jsonize() const {
  JsonValue payload;

  if (m_jobIDHasBeenSet) {
    payload.WithString("jobID", m_jobID);
  }

  if (m_networkMigrationExecutionIDHasBeenSet) {
    payload.WithString("networkMigrationExecutionID", m_networkMigrationExecutionID);
  }

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_analyzerTypeHasBeenSet) {
    payload.WithString("analyzerType", AnalyzerTypeMapper::GetNameForAnalyzerType(m_analyzerType));
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("target", m_target.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", NetworkMigrationAnalysisResultStatusMapper::GetNameForNetworkMigrationAnalysisResultStatus(m_status));
  }

  if (m_analysisResultHasBeenSet) {
    payload.WithString("analysisResult", m_analysisResult);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
