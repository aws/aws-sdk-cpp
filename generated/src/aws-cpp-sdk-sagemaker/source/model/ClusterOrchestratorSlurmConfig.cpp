/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterOrchestratorSlurmConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterOrchestratorSlurmConfig::ClusterOrchestratorSlurmConfig(JsonView jsonValue) { *this = jsonValue; }

ClusterOrchestratorSlurmConfig& ClusterOrchestratorSlurmConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SlurmConfigStrategy")) {
    m_slurmConfigStrategy =
        ClusterSlurmConfigStrategyMapper::GetClusterSlurmConfigStrategyForName(jsonValue.GetString("SlurmConfigStrategy"));
    m_slurmConfigStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccountingDatabase")) {
    m_accountingDatabase = jsonValue.GetObject("AccountingDatabase");
    m_accountingDatabaseHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterOrchestratorSlurmConfig::Jsonize() const {
  JsonValue payload;

  if (m_slurmConfigStrategyHasBeenSet) {
    payload.WithString("SlurmConfigStrategy",
                       ClusterSlurmConfigStrategyMapper::GetNameForClusterSlurmConfigStrategy(m_slurmConfigStrategy));
  }

  if (m_accountingDatabaseHasBeenSet) {
    payload.WithObject("AccountingDatabase", m_accountingDatabase.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
