/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabaseConnectionUrls.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabaseConnectionUrls::AutonomousDatabaseConnectionUrls(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabaseConnectionUrls& AutonomousDatabaseConnectionUrls::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apexUrl")) {
    m_apexUrl = jsonValue.GetString("apexUrl");
    m_apexUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("databaseTransformsUrl")) {
    m_databaseTransformsUrl = jsonValue.GetString("databaseTransformsUrl");
    m_databaseTransformsUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("graphStudioUrl")) {
    m_graphStudioUrl = jsonValue.GetString("graphStudioUrl");
    m_graphStudioUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("machineLearningNotebookUrl")) {
    m_machineLearningNotebookUrl = jsonValue.GetString("machineLearningNotebookUrl");
    m_machineLearningNotebookUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("machineLearningUserManagementUrl")) {
    m_machineLearningUserManagementUrl = jsonValue.GetString("machineLearningUserManagementUrl");
    m_machineLearningUserManagementUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mongoDbUrl")) {
    m_mongoDbUrl = jsonValue.GetString("mongoDbUrl");
    m_mongoDbUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ordsUrl")) {
    m_ordsUrl = jsonValue.GetString("ordsUrl");
    m_ordsUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spatialStudioUrl")) {
    m_spatialStudioUrl = jsonValue.GetString("spatialStudioUrl");
    m_spatialStudioUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sqlDevWebUrl")) {
    m_sqlDevWebUrl = jsonValue.GetString("sqlDevWebUrl");
    m_sqlDevWebUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabaseConnectionUrls::Jsonize() const {
  JsonValue payload;

  if (m_apexUrlHasBeenSet) {
    payload.WithString("apexUrl", m_apexUrl);
  }

  if (m_databaseTransformsUrlHasBeenSet) {
    payload.WithString("databaseTransformsUrl", m_databaseTransformsUrl);
  }

  if (m_graphStudioUrlHasBeenSet) {
    payload.WithString("graphStudioUrl", m_graphStudioUrl);
  }

  if (m_machineLearningNotebookUrlHasBeenSet) {
    payload.WithString("machineLearningNotebookUrl", m_machineLearningNotebookUrl);
  }

  if (m_machineLearningUserManagementUrlHasBeenSet) {
    payload.WithString("machineLearningUserManagementUrl", m_machineLearningUserManagementUrl);
  }

  if (m_mongoDbUrlHasBeenSet) {
    payload.WithString("mongoDbUrl", m_mongoDbUrl);
  }

  if (m_ordsUrlHasBeenSet) {
    payload.WithString("ordsUrl", m_ordsUrl);
  }

  if (m_spatialStudioUrlHasBeenSet) {
    payload.WithString("spatialStudioUrl", m_spatialStudioUrl);
  }

  if (m_sqlDevWebUrlHasBeenSet) {
    payload.WithString("sqlDevWebUrl", m_sqlDevWebUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
