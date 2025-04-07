/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/NodeRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/SdiSourceMappingUpdateRequest.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update the node.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateNodeRequest">AWS
   * API Reference</a></p>
   */
  class UpdateNodeRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateNodeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNode"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the cluster
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    UpdateNodeRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the current name of the Node.
     * Specify a name that is unique in the Cluster. You can't change the name. Names
     * are case-sensitive.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateNodeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the node.
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    UpdateNodeRequest& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The initial role of the Node in the Cluster. ACTIVE means the Node is available
     * for encoding. BACKUP means the Node is a redundant Node and might get used if an
     * ACTIVE Node fails.
     */
    inline NodeRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(NodeRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline UpdateNodeRequest& WithRole(NodeRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * The mappings of a SDI capture card port to a logical SDI data stream
     */
    inline const Aws::Vector<SdiSourceMappingUpdateRequest>& GetSdiSourceMappings() const { return m_sdiSourceMappings; }
    inline bool SdiSourceMappingsHasBeenSet() const { return m_sdiSourceMappingsHasBeenSet; }
    template<typename SdiSourceMappingsT = Aws::Vector<SdiSourceMappingUpdateRequest>>
    void SetSdiSourceMappings(SdiSourceMappingsT&& value) { m_sdiSourceMappingsHasBeenSet = true; m_sdiSourceMappings = std::forward<SdiSourceMappingsT>(value); }
    template<typename SdiSourceMappingsT = Aws::Vector<SdiSourceMappingUpdateRequest>>
    UpdateNodeRequest& WithSdiSourceMappings(SdiSourceMappingsT&& value) { SetSdiSourceMappings(std::forward<SdiSourceMappingsT>(value)); return *this;}
    template<typename SdiSourceMappingsT = SdiSourceMappingUpdateRequest>
    UpdateNodeRequest& AddSdiSourceMappings(SdiSourceMappingsT&& value) { m_sdiSourceMappingsHasBeenSet = true; m_sdiSourceMappings.emplace_back(std::forward<SdiSourceMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    NodeRole m_role{NodeRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::Vector<SdiSourceMappingUpdateRequest> m_sdiSourceMappings;
    bool m_sdiSourceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
