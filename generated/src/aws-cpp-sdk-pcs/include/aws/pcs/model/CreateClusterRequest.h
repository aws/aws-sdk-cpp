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
    AWS_PCS_API CreateClusterRequest();

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
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster management and job scheduling software associated with the
     * cluster.</p>
     */
    inline const SchedulerRequest& GetScheduler() const{ return m_scheduler; }
    inline bool SchedulerHasBeenSet() const { return m_schedulerHasBeenSet; }
    inline void SetScheduler(const SchedulerRequest& value) { m_schedulerHasBeenSet = true; m_scheduler = value; }
    inline void SetScheduler(SchedulerRequest&& value) { m_schedulerHasBeenSet = true; m_scheduler = std::move(value); }
    inline CreateClusterRequest& WithScheduler(const SchedulerRequest& value) { SetScheduler(value); return *this;}
    inline CreateClusterRequest& WithScheduler(SchedulerRequest&& value) { SetScheduler(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that determines the maximum number of compute nodes in the cluster
     * and the maximum number of jobs (active and queued).</p> <ul> <li> <p>
     * <code>SMALL</code>: 32 compute nodes and 256 jobs</p> </li> <li> <p>
     * <code>MEDIUM</code>: 512 compute nodes and 8192 jobs</p> </li> <li> <p>
     * <code>LARGE</code>: 2048 compute nodes and 16,384 jobs</p> </li> </ul>
     */
    inline const Size& GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(const Size& value) { m_sizeHasBeenSet = true; m_size = value; }
    inline void SetSize(Size&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }
    inline CreateClusterRequest& WithSize(const Size& value) { SetSize(value); return *this;}
    inline CreateClusterRequest& WithSize(Size&& value) { SetSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The networking configuration used to set up the cluster's control plane.</p>
     */
    inline const NetworkingRequest& GetNetworking() const{ return m_networking; }
    inline bool NetworkingHasBeenSet() const { return m_networkingHasBeenSet; }
    inline void SetNetworking(const NetworkingRequest& value) { m_networkingHasBeenSet = true; m_networking = value; }
    inline void SetNetworking(NetworkingRequest&& value) { m_networkingHasBeenSet = true; m_networking = std::move(value); }
    inline CreateClusterRequest& WithNetworking(const NetworkingRequest& value) { SetNetworking(value); return *this;}
    inline CreateClusterRequest& WithNetworking(NetworkingRequest&& value) { SetNetworking(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options related to the Slurm scheduler.</p>
     */
    inline const ClusterSlurmConfigurationRequest& GetSlurmConfiguration() const{ return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    inline void SetSlurmConfiguration(const ClusterSlurmConfigurationRequest& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = value; }
    inline void SetSlurmConfiguration(ClusterSlurmConfigurationRequest&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::move(value); }
    inline CreateClusterRequest& WithSlurmConfiguration(const ClusterSlurmConfigurationRequest& value) { SetSlurmConfiguration(value); return *this;}
    inline CreateClusterRequest& WithSlurmConfiguration(ClusterSlurmConfigurationRequest&& value) { SetSlurmConfiguration(std::move(value)); return *this;}
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateClusterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateClusterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>1 or more tags added to the resource. Each tag consists of a tag key and tag
     * value. The tag value is optional and can be an empty string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateClusterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateClusterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateClusterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateClusterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateClusterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    SchedulerRequest m_scheduler;
    bool m_schedulerHasBeenSet = false;

    Size m_size;
    bool m_sizeHasBeenSet = false;

    NetworkingRequest m_networking;
    bool m_networkingHasBeenSet = false;

    ClusterSlurmConfigurationRequest m_slurmConfiguration;
    bool m_slurmConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
