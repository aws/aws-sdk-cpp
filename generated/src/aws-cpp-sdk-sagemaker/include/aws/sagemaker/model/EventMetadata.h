/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterMetadata.h>
#include <aws/sagemaker/model/DatabaseConfigurationMetadata.h>
#include <aws/sagemaker/model/InstanceGroupMetadata.h>
#include <aws/sagemaker/model/InstanceGroupScalingMetadata.h>
#include <aws/sagemaker/model/InstanceMetadata.h>
#include <aws/sagemaker/model/SlurmHealthMetadata.h>

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
 * <p>Metadata associated with a cluster event, which may include details about
 * various resource types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EventMetadata">AWS
 * API Reference</a></p>
 */
class EventMetadata {
 public:
  AWS_SAGEMAKER_API EventMetadata() = default;
  AWS_SAGEMAKER_API EventMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API EventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Metadata specific to cluster-level events.</p>
   */
  inline const ClusterMetadata& GetCluster() const { return m_cluster; }
  inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
  template <typename ClusterT = ClusterMetadata>
  void SetCluster(ClusterT&& value) {
    m_clusterHasBeenSet = true;
    m_cluster = std::forward<ClusterT>(value);
  }
  template <typename ClusterT = ClusterMetadata>
  EventMetadata& WithCluster(ClusterT&& value) {
    SetCluster(std::forward<ClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata specific to instance group-level events.</p>
   */
  inline const InstanceGroupMetadata& GetInstanceGroup() const { return m_instanceGroup; }
  inline bool InstanceGroupHasBeenSet() const { return m_instanceGroupHasBeenSet; }
  template <typename InstanceGroupT = InstanceGroupMetadata>
  void SetInstanceGroup(InstanceGroupT&& value) {
    m_instanceGroupHasBeenSet = true;
    m_instanceGroup = std::forward<InstanceGroupT>(value);
  }
  template <typename InstanceGroupT = InstanceGroupMetadata>
  EventMetadata& WithInstanceGroup(InstanceGroupT&& value) {
    SetInstanceGroup(std::forward<InstanceGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata related to instance group scaling events.</p>
   */
  inline const InstanceGroupScalingMetadata& GetInstanceGroupScaling() const { return m_instanceGroupScaling; }
  inline bool InstanceGroupScalingHasBeenSet() const { return m_instanceGroupScalingHasBeenSet; }
  template <typename InstanceGroupScalingT = InstanceGroupScalingMetadata>
  void SetInstanceGroupScaling(InstanceGroupScalingT&& value) {
    m_instanceGroupScalingHasBeenSet = true;
    m_instanceGroupScaling = std::forward<InstanceGroupScalingT>(value);
  }
  template <typename InstanceGroupScalingT = InstanceGroupScalingMetadata>
  EventMetadata& WithInstanceGroupScaling(InstanceGroupScalingT&& value) {
    SetInstanceGroupScaling(std::forward<InstanceGroupScalingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata specific to instance-level events.</p>
   */
  inline const InstanceMetadata& GetInstance() const { return m_instance; }
  inline bool InstanceHasBeenSet() const { return m_instanceHasBeenSet; }
  template <typename InstanceT = InstanceMetadata>
  void SetInstance(InstanceT&& value) {
    m_instanceHasBeenSet = true;
    m_instance = std::forward<InstanceT>(value);
  }
  template <typename InstanceT = InstanceMetadata>
  EventMetadata& WithInstance(InstanceT&& value) {
    SetInstance(std::forward<InstanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata specific to events about the external Slurm accounting database of
   * the cluster.</p>
   */
  inline const DatabaseConfigurationMetadata& GetDatabaseConfiguration() const { return m_databaseConfiguration; }
  inline bool DatabaseConfigurationHasBeenSet() const { return m_databaseConfigurationHasBeenSet; }
  template <typename DatabaseConfigurationT = DatabaseConfigurationMetadata>
  void SetDatabaseConfiguration(DatabaseConfigurationT&& value) {
    m_databaseConfigurationHasBeenSet = true;
    m_databaseConfiguration = std::forward<DatabaseConfigurationT>(value);
  }
  template <typename DatabaseConfigurationT = DatabaseConfigurationMetadata>
  EventMetadata& WithDatabaseConfiguration(DatabaseConfigurationT&& value) {
    SetDatabaseConfiguration(std::forward<DatabaseConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata specific to events about the health of the Slurm components on the
   * controller node of the cluster.</p>
   */
  inline const SlurmHealthMetadata& GetSlurmHealth() const { return m_slurmHealth; }
  inline bool SlurmHealthHasBeenSet() const { return m_slurmHealthHasBeenSet; }
  template <typename SlurmHealthT = SlurmHealthMetadata>
  void SetSlurmHealth(SlurmHealthT&& value) {
    m_slurmHealthHasBeenSet = true;
    m_slurmHealth = std::forward<SlurmHealthT>(value);
  }
  template <typename SlurmHealthT = SlurmHealthMetadata>
  EventMetadata& WithSlurmHealth(SlurmHealthT&& value) {
    SetSlurmHealth(std::forward<SlurmHealthT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterMetadata m_cluster;

  InstanceGroupMetadata m_instanceGroup;

  InstanceGroupScalingMetadata m_instanceGroupScaling;

  InstanceMetadata m_instance;

  DatabaseConfigurationMetadata m_databaseConfiguration;

  SlurmHealthMetadata m_slurmHealth;
  bool m_clusterHasBeenSet = false;
  bool m_instanceGroupHasBeenSet = false;
  bool m_instanceGroupScalingHasBeenSet = false;
  bool m_instanceHasBeenSet = false;
  bool m_databaseConfigurationHasBeenSet = false;
  bool m_slurmHealthHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
