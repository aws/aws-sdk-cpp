/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/NodeConnectionState.h>
#include <aws/medialive/model/NodeRole.h>
#include <aws/medialive/model/NodeState.h>
#include <aws/medialive/model/NodeInterfaceMapping.h>
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
   * Placeholder documentation for DescribeNodeResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeNodeResponse">AWS
   * API Reference</a></p>
   */
  class DescribeNodeSdkResult
  {
  public:
    AWS_MEDIALIVE_API DescribeNodeSdkResult();
    AWS_MEDIALIVE_API DescribeNodeSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeNodeSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the Node. It is automatically assigned when the Node is created.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeNodeSdkResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeNodeSdkResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeNodeSdkResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of IDs. Each ID is one ChannelPlacementGroup that is associated with
     * this Node. Empty if the Node is not yet associated with any groups.
     */
    inline const Aws::Vector<Aws::String>& GetChannelPlacementGroups() const{ return m_channelPlacementGroups; }
    inline void SetChannelPlacementGroups(const Aws::Vector<Aws::String>& value) { m_channelPlacementGroups = value; }
    inline void SetChannelPlacementGroups(Aws::Vector<Aws::String>&& value) { m_channelPlacementGroups = std::move(value); }
    inline DescribeNodeSdkResult& WithChannelPlacementGroups(const Aws::Vector<Aws::String>& value) { SetChannelPlacementGroups(value); return *this;}
    inline DescribeNodeSdkResult& WithChannelPlacementGroups(Aws::Vector<Aws::String>&& value) { SetChannelPlacementGroups(std::move(value)); return *this;}
    inline DescribeNodeSdkResult& AddChannelPlacementGroups(const Aws::String& value) { m_channelPlacementGroups.push_back(value); return *this; }
    inline DescribeNodeSdkResult& AddChannelPlacementGroups(Aws::String&& value) { m_channelPlacementGroups.push_back(std::move(value)); return *this; }
    inline DescribeNodeSdkResult& AddChannelPlacementGroups(const char* value) { m_channelPlacementGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Cluster that the Node belongs to.
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline void SetClusterId(const Aws::String& value) { m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterId.assign(value); }
    inline DescribeNodeSdkResult& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline DescribeNodeSdkResult& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline DescribeNodeSdkResult& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * The current connection state of the Node.
     */
    inline const NodeConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline void SetConnectionState(const NodeConnectionState& value) { m_connectionState = value; }
    inline void SetConnectionState(NodeConnectionState&& value) { m_connectionState = std::move(value); }
    inline DescribeNodeSdkResult& WithConnectionState(const NodeConnectionState& value) { SetConnectionState(value); return *this;}
    inline DescribeNodeSdkResult& WithConnectionState(NodeConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the Node. Unique in the Cluster. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DescribeNodeSdkResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeNodeSdkResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeNodeSdkResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the EC2 instance hosting the Node.
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArn.assign(value); }
    inline DescribeNodeSdkResult& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline DescribeNodeSdkResult& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline DescribeNodeSdkResult& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the Node.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeNodeSdkResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeNodeSdkResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeNodeSdkResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::Vector<NodeInterfaceMapping>& GetNodeInterfaceMappings() const{ return m_nodeInterfaceMappings; }
    inline void SetNodeInterfaceMappings(const Aws::Vector<NodeInterfaceMapping>& value) { m_nodeInterfaceMappings = value; }
    inline void SetNodeInterfaceMappings(Aws::Vector<NodeInterfaceMapping>&& value) { m_nodeInterfaceMappings = std::move(value); }
    inline DescribeNodeSdkResult& WithNodeInterfaceMappings(const Aws::Vector<NodeInterfaceMapping>& value) { SetNodeInterfaceMappings(value); return *this;}
    inline DescribeNodeSdkResult& WithNodeInterfaceMappings(Aws::Vector<NodeInterfaceMapping>&& value) { SetNodeInterfaceMappings(std::move(value)); return *this;}
    inline DescribeNodeSdkResult& AddNodeInterfaceMappings(const NodeInterfaceMapping& value) { m_nodeInterfaceMappings.push_back(value); return *this; }
    inline DescribeNodeSdkResult& AddNodeInterfaceMappings(NodeInterfaceMapping&& value) { m_nodeInterfaceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The initial role current role of the Node in the Cluster. ACTIVE means the Node
     * is available for encoding. BACKUP means the Node is a redundant Node and might
     * get used if an ACTIVE Node fails.
     */
    inline const NodeRole& GetRole() const{ return m_role; }
    inline void SetRole(const NodeRole& value) { m_role = value; }
    inline void SetRole(NodeRole&& value) { m_role = std::move(value); }
    inline DescribeNodeSdkResult& WithRole(const NodeRole& value) { SetRole(value); return *this;}
    inline DescribeNodeSdkResult& WithRole(NodeRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the Node.
     */
    inline const NodeState& GetState() const{ return m_state; }
    inline void SetState(const NodeState& value) { m_state = value; }
    inline void SetState(NodeState&& value) { m_state = std::move(value); }
    inline DescribeNodeSdkResult& WithState(const NodeState& value) { SetState(value); return *this;}
    inline DescribeNodeSdkResult& WithState(NodeState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeNodeSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeNodeSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeNodeSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_channelPlacementGroups;

    Aws::String m_clusterId;

    NodeConnectionState m_connectionState;

    Aws::String m_id;

    Aws::String m_instanceArn;

    Aws::String m_name;

    Aws::Vector<NodeInterfaceMapping> m_nodeInterfaceMappings;

    NodeRole m_role;

    NodeState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
