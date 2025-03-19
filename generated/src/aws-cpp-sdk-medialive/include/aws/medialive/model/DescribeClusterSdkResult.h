/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ClusterType.h>
#include <aws/medialive/model/ClusterNetworkSettings.h>
#include <aws/medialive/model/ClusterState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeClusterResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeClusterResponse">AWS
   * API Reference</a></p>
   */
  class DescribeClusterSdkResult
  {
  public:
    AWS_MEDIALIVE_API DescribeClusterSdkResult() = default;
    AWS_MEDIALIVE_API DescribeClusterSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeClusterSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of this Cluster. It is automatically assigned when the Cluster is
     * created.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeClusterSdkResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetChannelIds() const { return m_channelIds; }
    template<typename ChannelIdsT = Aws::Vector<Aws::String>>
    void SetChannelIds(ChannelIdsT&& value) { m_channelIdsHasBeenSet = true; m_channelIds = std::forward<ChannelIdsT>(value); }
    template<typename ChannelIdsT = Aws::Vector<Aws::String>>
    DescribeClusterSdkResult& WithChannelIds(ChannelIdsT&& value) { SetChannelIds(std::forward<ChannelIdsT>(value)); return *this;}
    template<typename ChannelIdsT = Aws::String>
    DescribeClusterSdkResult& AddChannelIds(ChannelIdsT&& value) { m_channelIdsHasBeenSet = true; m_channelIds.emplace_back(std::forward<ChannelIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The hardware type for the Cluster
     */
    inline ClusterType GetClusterType() const { return m_clusterType; }
    inline void SetClusterType(ClusterType value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline DescribeClusterSdkResult& WithClusterType(ClusterType value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the  Cluster. Unique in the AWS account. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeClusterSdkResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the IAM role for the Node in this Cluster. Any Nodes that are
     * associated with this Cluster assume this role. The role gives permissions to the
     * operations that you expect these Node to perform.
     */
    inline const Aws::String& GetInstanceRoleArn() const { return m_instanceRoleArn; }
    template<typename InstanceRoleArnT = Aws::String>
    void SetInstanceRoleArn(InstanceRoleArnT&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::forward<InstanceRoleArnT>(value); }
    template<typename InstanceRoleArnT = Aws::String>
    DescribeClusterSdkResult& WithInstanceRoleArn(InstanceRoleArnT&& value) { SetInstanceRoleArn(std::forward<InstanceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the Cluster.
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeClusterSdkResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Network settings that connect the Nodes in the Cluster to one or more of the
     * Networks that the Cluster is associated with.
     */
    inline const ClusterNetworkSettings& GetNetworkSettings() const { return m_networkSettings; }
    template<typename NetworkSettingsT = ClusterNetworkSettings>
    void SetNetworkSettings(NetworkSettingsT&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::forward<NetworkSettingsT>(value); }
    template<typename NetworkSettingsT = ClusterNetworkSettings>
    DescribeClusterSdkResult& WithNetworkSettings(NetworkSettingsT&& value) { SetNetworkSettings(std::forward<NetworkSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the Cluster.
     */
    inline ClusterState GetState() const { return m_state; }
    inline void SetState(ClusterState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeClusterSdkResult& WithState(ClusterState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_channelIds;
    bool m_channelIdsHasBeenSet = false;

    ClusterType m_clusterType{ClusterType::NOT_SET};
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ClusterNetworkSettings m_networkSettings;
    bool m_networkSettingsHasBeenSet = false;

    ClusterState m_state{ClusterState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
