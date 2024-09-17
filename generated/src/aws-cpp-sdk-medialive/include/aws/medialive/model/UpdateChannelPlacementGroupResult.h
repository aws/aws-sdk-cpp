/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ChannelPlacementGroupState.h>
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
   * Placeholder documentation for UpdateChannelPlacementGroupResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelPlacementGroupResponse">AWS
   * API Reference</a></p>
   */
  class UpdateChannelPlacementGroupResult
  {
  public:
    AWS_MEDIALIVE_API UpdateChannelPlacementGroupResult();
    AWS_MEDIALIVE_API UpdateChannelPlacementGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateChannelPlacementGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of this ChannelPlacementGroup. It is automatically assigned when the
     * ChannelPlacementGroup is created.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateChannelPlacementGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateChannelPlacementGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Used in ListChannelPlacementGroupsResult
     */
    inline const Aws::Vector<Aws::String>& GetChannels() const{ return m_channels; }
    inline void SetChannels(const Aws::Vector<Aws::String>& value) { m_channels = value; }
    inline void SetChannels(Aws::Vector<Aws::String>&& value) { m_channels = std::move(value); }
    inline UpdateChannelPlacementGroupResult& WithChannels(const Aws::Vector<Aws::String>& value) { SetChannels(value); return *this;}
    inline UpdateChannelPlacementGroupResult& WithChannels(Aws::Vector<Aws::String>&& value) { SetChannels(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupResult& AddChannels(const Aws::String& value) { m_channels.push_back(value); return *this; }
    inline UpdateChannelPlacementGroupResult& AddChannels(Aws::String&& value) { m_channels.push_back(std::move(value)); return *this; }
    inline UpdateChannelPlacementGroupResult& AddChannels(const char* value) { m_channels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Cluster that the Node belongs to.
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline void SetClusterId(const Aws::String& value) { m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterId.assign(value); }
    inline UpdateChannelPlacementGroupResult& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline UpdateChannelPlacementGroupResult& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupResult& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the ChannelPlacementGroup. Unique in the AWS account. The ID is the
     * resource-id portion of the ARN.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateChannelPlacementGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateChannelPlacementGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the ChannelPlacementGroup.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateChannelPlacementGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateChannelPlacementGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * An array with one item, which is the signle Node that is associated with the
     * ChannelPlacementGroup.
     */
    inline const Aws::Vector<Aws::String>& GetNodes() const{ return m_nodes; }
    inline void SetNodes(const Aws::Vector<Aws::String>& value) { m_nodes = value; }
    inline void SetNodes(Aws::Vector<Aws::String>&& value) { m_nodes = std::move(value); }
    inline UpdateChannelPlacementGroupResult& WithNodes(const Aws::Vector<Aws::String>& value) { SetNodes(value); return *this;}
    inline UpdateChannelPlacementGroupResult& WithNodes(Aws::Vector<Aws::String>&& value) { SetNodes(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupResult& AddNodes(const Aws::String& value) { m_nodes.push_back(value); return *this; }
    inline UpdateChannelPlacementGroupResult& AddNodes(Aws::String&& value) { m_nodes.push_back(std::move(value)); return *this; }
    inline UpdateChannelPlacementGroupResult& AddNodes(const char* value) { m_nodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The current state of the ChannelPlacementGroup.
     */
    inline const ChannelPlacementGroupState& GetState() const{ return m_state; }
    inline void SetState(const ChannelPlacementGroupState& value) { m_state = value; }
    inline void SetState(ChannelPlacementGroupState&& value) { m_state = std::move(value); }
    inline UpdateChannelPlacementGroupResult& WithState(const ChannelPlacementGroupState& value) { SetState(value); return *this;}
    inline UpdateChannelPlacementGroupResult& WithState(ChannelPlacementGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateChannelPlacementGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateChannelPlacementGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_channels;

    Aws::String m_clusterId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_nodes;

    ChannelPlacementGroupState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
