/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/model/SchedulerRequest.h>
#include <aws/pcs/model/Size.h>
#include <aws/pcs/model/NetworkingRequest.h>
#include <aws/pcs/model/ClusterSlurmConfigurationRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PCS
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public PCSRequest
  {
  public:
    AWS_PCS_API CreateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_PCS_API Aws::String SerializePayload() const override;

    AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name to identify the cluster. Example: <code>MyCluster</code> </p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateClusterRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster management and job scheduling software associated with the
     * cluster.</p>
     */
    inline const SchedulerRequest& GetScheduler() const { return m_scheduler; }
    inline bool SchedulerHasBeenSet() const { return m_schedulerHasBeenSet; }
    template<typename SchedulerT = SchedulerRequest>
    void SetScheduler(SchedulerT&& value) { m_schedulerHasBeenSet = true; m_scheduler = std::forward<SchedulerT>(value); }
    template<typename SchedulerT = SchedulerRequest>
    CreateClusterRequest& WithScheduler(SchedulerT&& value) { SetScheduler(std::forward<SchedulerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that determines the maximum number of compute nodes in the cluster
     * and the maximum number of jobs (active and queued).</p> <ul> <li> <p>
     * <code>SMALL</code>: 32 compute nodes and 256 jobs</p> </li> <li> <p>
     * <code>MEDIUM</code>: 512 compute nodes and 8192 jobs</p> </li> <li> <p>
     * <code>LARGE</code>: 2048 compute nodes and 16,384 jobs</p> </li> </ul>
     */
    inline Size GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(Size value) { m_sizeHasBeenSet = true; m_size = value; }
    inline CreateClusterRequest& WithSize(Size value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The networking configuration used to set up the cluster's control plane.</p>
     */
    inline const NetworkingRequest& GetNetworking() const { return m_networking; }
    inline bool NetworkingHasBeenSet() const { return m_networkingHasBeenSet; }
    template<typename NetworkingT = NetworkingRequest>
    void SetNetworking(NetworkingT&& value) { m_networkingHasBeenSet = true; m_networking = std::forward<NetworkingT>(value); }
    template<typename NetworkingT = NetworkingRequest>
    CreateClusterRequest& WithNetworking(NetworkingT&& value) { SetNetworking(std::forward<NetworkingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options related to the Slurm scheduler.</p>
     */
    inline const ClusterSlurmConfigurationRequest& GetSlurmConfiguration() const { return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    template<typename SlurmConfigurationT = ClusterSlurmConfigurationRequest>
    void SetSlurmConfiguration(SlurmConfigurationT&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::forward<SlurmConfigurationT>(value); }
    template<typename SlurmConfigurationT = ClusterSlurmConfigurationRequest>
    CreateClusterRequest& WithSlurmConfiguration(SlurmConfigurationT&& value) { SetSlurmConfiguration(std::forward<SlurmConfigurationT>(value)); return *this;}
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
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateClusterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>1 or more tags added to the resource. Each tag consists of a tag key and tag
     * value. The tag value is optional and can be an empty string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    SchedulerRequest m_scheduler;
    bool m_schedulerHasBeenSet = false;

    Size m_size{Size::NOT_SET};
    bool m_sizeHasBeenSet = false;

    NetworkingRequest m_networking;
    bool m_networkingHasBeenSet = false;

    ClusterSlurmConfigurationRequest m_slurmConfiguration;
    bool m_slurmConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
