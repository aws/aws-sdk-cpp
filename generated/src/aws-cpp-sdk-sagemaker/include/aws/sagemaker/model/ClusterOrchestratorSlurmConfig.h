/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterAccountingDatabase.h>
#include <aws/sagemaker/model/ClusterSlurmConfigStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The configuration settings for the Slurm orchestrator used with the SageMaker
 * HyperPod cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterOrchestratorSlurmConfig">AWS
 * API Reference</a></p>
 */
class ClusterOrchestratorSlurmConfig {
 public:
  AWS_SAGEMAKER_API ClusterOrchestratorSlurmConfig() = default;
  AWS_SAGEMAKER_API ClusterOrchestratorSlurmConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterOrchestratorSlurmConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The strategy for managing partitions for the Slurm configuration. Valid
   * values are <code>Managed</code>, <code>Overwrite</code>, and
   * <code>Merge</code>.</p>
   */
  inline ClusterSlurmConfigStrategy GetSlurmConfigStrategy() const { return m_slurmConfigStrategy; }
  inline bool SlurmConfigStrategyHasBeenSet() const { return m_slurmConfigStrategyHasBeenSet; }
  inline void SetSlurmConfigStrategy(ClusterSlurmConfigStrategy value) {
    m_slurmConfigStrategyHasBeenSet = true;
    m_slurmConfigStrategy = value;
  }
  inline ClusterOrchestratorSlurmConfig& WithSlurmConfigStrategy(ClusterSlurmConfigStrategy value) {
    SetSlurmConfigStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external database that stores the Slurm accounting data for the cluster,
   * such as job history, associations, and usage. When you omit this field, Slurm
   * accounting uses a database on the cluster's controller node.</p>  <p>This
   * field is only supported for clusters using <code>Continuous</code> as the
   * <code>NodeProvisioningMode</code>.</p>
   */
  inline const ClusterAccountingDatabase& GetAccountingDatabase() const { return m_accountingDatabase; }
  inline bool AccountingDatabaseHasBeenSet() const { return m_accountingDatabaseHasBeenSet; }
  template <typename AccountingDatabaseT = ClusterAccountingDatabase>
  void SetAccountingDatabase(AccountingDatabaseT&& value) {
    m_accountingDatabaseHasBeenSet = true;
    m_accountingDatabase = std::forward<AccountingDatabaseT>(value);
  }
  template <typename AccountingDatabaseT = ClusterAccountingDatabase>
  ClusterOrchestratorSlurmConfig& WithAccountingDatabase(AccountingDatabaseT&& value) {
    SetAccountingDatabase(std::forward<AccountingDatabaseT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterSlurmConfigStrategy m_slurmConfigStrategy{ClusterSlurmConfigStrategy::NOT_SET};

  ClusterAccountingDatabase m_accountingDatabase;
  bool m_slurmConfigStrategyHasBeenSet = false;
  bool m_accountingDatabaseHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
