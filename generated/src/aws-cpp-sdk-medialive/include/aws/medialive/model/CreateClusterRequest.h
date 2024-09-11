/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/ClusterType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ClusterNetworkSettingsCreateRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Create as many Clusters as you want, but create at least one. Each Cluster
   * groups together Nodes that you want to treat as a collection. Within the
   * Cluster, you will set up some Nodes as active Nodes, and some as backup Nodes,
   * for Node failover purposes. Each Node can belong to only one Cluster.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateClusterRequest">AWS
   * API Reference</a></p>
   */
  class CreateClusterRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Specify a type. All the Nodes that you later add to this Cluster must be this
     * type of hardware. One Cluster instance can't contain different hardware types.
     * You won't be able to change this parameter after you create the Cluster.
     */
    inline const ClusterType& GetClusterType() const{ return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(const ClusterType& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline void SetClusterType(ClusterType&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }
    inline CreateClusterRequest& WithClusterType(const ClusterType& value) { SetClusterType(value); return *this;}
    inline CreateClusterRequest& WithClusterType(ClusterType&& value) { SetClusterType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the IAM role for the Node in this Cluster. The role must include all
     * the operations that you expect these Node to perform. If necessary, create a
     * role in IAM, then attach it here.
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }
    inline CreateClusterRequest& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}
    inline CreateClusterRequest& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}
    inline CreateClusterRequest& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a name that is unique in the AWS account. We recommend that you assign a
     * name that hints at the types of Nodes in the Cluster. Names are case-sensitive.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateClusterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateClusterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Network settings that connect the Nodes in the Cluster to one or more of the
     * Networks that the Cluster is associated with.
     */
    inline const ClusterNetworkSettingsCreateRequest& GetNetworkSettings() const{ return m_networkSettings; }
    inline bool NetworkSettingsHasBeenSet() const { return m_networkSettingsHasBeenSet; }
    inline void SetNetworkSettings(const ClusterNetworkSettingsCreateRequest& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = value; }
    inline void SetNetworkSettings(ClusterNetworkSettingsCreateRequest&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::move(value); }
    inline CreateClusterRequest& WithNetworkSettings(const ClusterNetworkSettingsCreateRequest& value) { SetNetworkSettings(value); return *this;}
    inline CreateClusterRequest& WithNetworkSettings(ClusterNetworkSettingsCreateRequest&& value) { SetNetworkSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the request.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline CreateClusterRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateClusterRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateClusterRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
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

    ClusterType m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ClusterNetworkSettingsCreateRequest m_networkSettings;
    bool m_networkSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
