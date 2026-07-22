/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/UpdateClusterSlurmConfigurationRequest.h>
#include <aws/pcs/model/UpdateSchedulerRequest.h>

#include <utility>

namespace Aws {
namespace PCS {
namespace Model {

/**
 */
class UpdateClusterRequest : public PCSRequest {
 public:
  AWS_PCS_API UpdateClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

  AWS_PCS_API Aws::String SerializePayload() const override;

  AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or ID of the cluster to update.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  UpdateClusterRequest& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Idempotency ensures that an API request completes
   * only once. With an idempotent request, if the original request completes
   * successfully, the subsequent retries with the same client token return the
   * result from the original successful request and they have no additional effect.
   * If you don't specify a client token, the CLI and SDK automatically generate 1
   * for you.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateClusterRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional options related to the Slurm scheduler.</p>
   */
  inline const UpdateClusterSlurmConfigurationRequest& GetSlurmConfiguration() const { return m_slurmConfiguration; }
  inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
  template <typename SlurmConfigurationT = UpdateClusterSlurmConfigurationRequest>
  void SetSlurmConfiguration(SlurmConfigurationT&& value) {
    m_slurmConfigurationHasBeenSet = true;
    m_slurmConfiguration = std::forward<SlurmConfigurationT>(value);
  }
  template <typename SlurmConfigurationT = UpdateClusterSlurmConfigurationRequest>
  UpdateClusterRequest& WithSlurmConfiguration(SlurmConfigurationT&& value) {
    SetSlurmConfiguration(std::forward<SlurmConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scheduler configuration to update for the cluster. Use this to update the
   * scheduler version. For more information, see <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/working-with_clusters_version_update.html">Updating
   * the scheduler version on a cluster</a> in the <i>PCS User Guide</i>.</p>
   */
  inline const UpdateSchedulerRequest& GetScheduler() const { return m_scheduler; }
  inline bool SchedulerHasBeenSet() const { return m_schedulerHasBeenSet; }
  template <typename SchedulerT = UpdateSchedulerRequest>
  void SetScheduler(SchedulerT&& value) {
    m_schedulerHasBeenSet = true;
    m_scheduler = std::forward<SchedulerT>(value);
  }
  template <typename SchedulerT = UpdateSchedulerRequest>
  UpdateClusterRequest& WithScheduler(SchedulerT&& value) {
    SetScheduler(std::forward<SchedulerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterIdentifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  UpdateClusterSlurmConfigurationRequest m_slurmConfiguration;

  UpdateSchedulerRequest m_scheduler;
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_slurmConfigurationHasBeenSet = false;
  bool m_schedulerHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
