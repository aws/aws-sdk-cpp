/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/NodeRole.h>
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
    AWS_MEDIALIVE_API UpdateNodeRequest();

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
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline UpdateNodeRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline UpdateNodeRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline UpdateNodeRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the current name of the Node.
     * Specify a name that is unique in the Cluster. You can't change the name. Names
     * are case-sensitive.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateNodeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateNodeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateNodeRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the node.
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }
    inline UpdateNodeRequest& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}
    inline UpdateNodeRequest& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}
    inline UpdateNodeRequest& WithNodeId(const char* value) { SetNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * The initial role of the Node in the Cluster. ACTIVE means the Node is available
     * for encoding. BACKUP means the Node is a redundant Node and might get used if an
     * ACTIVE Node fails.
     */
    inline const NodeRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const NodeRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(NodeRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline UpdateNodeRequest& WithRole(const NodeRole& value) { SetRole(value); return *this;}
    inline UpdateNodeRequest& WithRole(NodeRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    NodeRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
