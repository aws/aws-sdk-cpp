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
   * Placeholder documentation for DeleteClusterResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteClusterResponse">AWS
   * API Reference</a></p>
   */
  class DeleteClusterResult
  {
  public:
    AWS_MEDIALIVE_API DeleteClusterResult();
    AWS_MEDIALIVE_API DeleteClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DeleteClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of this Cluster. It is automatically assigned when the Cluster is
     * created.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteClusterResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteClusterResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteClusterResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetChannelIds() const{ return m_channelIds; }
    inline void SetChannelIds(const Aws::Vector<Aws::String>& value) { m_channelIds = value; }
    inline void SetChannelIds(Aws::Vector<Aws::String>&& value) { m_channelIds = std::move(value); }
    inline DeleteClusterResult& WithChannelIds(const Aws::Vector<Aws::String>& value) { SetChannelIds(value); return *this;}
    inline DeleteClusterResult& WithChannelIds(Aws::Vector<Aws::String>&& value) { SetChannelIds(std::move(value)); return *this;}
    inline DeleteClusterResult& AddChannelIds(const Aws::String& value) { m_channelIds.push_back(value); return *this; }
    inline DeleteClusterResult& AddChannelIds(Aws::String&& value) { m_channelIds.push_back(std::move(value)); return *this; }
    inline DeleteClusterResult& AddChannelIds(const char* value) { m_channelIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The hardware type for the Cluster
     */
    inline const ClusterType& GetClusterType() const{ return m_clusterType; }
    inline void SetClusterType(const ClusterType& value) { m_clusterType = value; }
    inline void SetClusterType(ClusterType&& value) { m_clusterType = std::move(value); }
    inline DeleteClusterResult& WithClusterType(const ClusterType& value) { SetClusterType(value); return *this;}
    inline DeleteClusterResult& WithClusterType(ClusterType&& value) { SetClusterType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the  Cluster. Unique in the AWS account. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DeleteClusterResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteClusterResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteClusterResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the IAM role for the Node in this Cluster. Any Nodes that are
     * associated with this Cluster assume this role. The role gives permissions to the
     * operations that you expect these Node to perform.
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArn = value; }
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArn = std::move(value); }
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArn.assign(value); }
    inline DeleteClusterResult& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}
    inline DeleteClusterResult& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}
    inline DeleteClusterResult& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the Cluster.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DeleteClusterResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteClusterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteClusterResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Network settings that connect the Nodes in the Cluster to one or more of the
     * Networks that the Cluster is associated with.
     */
    inline const ClusterNetworkSettings& GetNetworkSettings() const{ return m_networkSettings; }
    inline void SetNetworkSettings(const ClusterNetworkSettings& value) { m_networkSettings = value; }
    inline void SetNetworkSettings(ClusterNetworkSettings&& value) { m_networkSettings = std::move(value); }
    inline DeleteClusterResult& WithNetworkSettings(const ClusterNetworkSettings& value) { SetNetworkSettings(value); return *this;}
    inline DeleteClusterResult& WithNetworkSettings(ClusterNetworkSettings&& value) { SetNetworkSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the Cluster.
     */
    inline const ClusterState& GetState() const{ return m_state; }
    inline void SetState(const ClusterState& value) { m_state = value; }
    inline void SetState(ClusterState&& value) { m_state = std::move(value); }
    inline DeleteClusterResult& WithState(const ClusterState& value) { SetState(value); return *this;}
    inline DeleteClusterResult& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_channelIds;

    ClusterType m_clusterType;

    Aws::String m_id;

    Aws::String m_instanceRoleArn;

    Aws::String m_name;

    ClusterNetworkSettings m_networkSettings;

    ClusterState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
