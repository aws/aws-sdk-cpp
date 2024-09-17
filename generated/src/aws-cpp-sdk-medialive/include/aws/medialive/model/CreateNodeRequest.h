/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/NodeRole.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/NodeInterfaceMappingCreateRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to create a node<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateNodeRequest">AWS
   * API Reference</a></p>
   */
  class CreateNodeRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNode"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the cluster.
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline CreateNodeRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline CreateNodeRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline CreateNodeRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * The user-specified name of the Node to be created.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateNodeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNodeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNodeRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::Vector<NodeInterfaceMappingCreateRequest>& GetNodeInterfaceMappings() const{ return m_nodeInterfaceMappings; }
    inline bool NodeInterfaceMappingsHasBeenSet() const { return m_nodeInterfaceMappingsHasBeenSet; }
    inline void SetNodeInterfaceMappings(const Aws::Vector<NodeInterfaceMappingCreateRequest>& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = value; }
    inline void SetNodeInterfaceMappings(Aws::Vector<NodeInterfaceMappingCreateRequest>&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = std::move(value); }
    inline CreateNodeRequest& WithNodeInterfaceMappings(const Aws::Vector<NodeInterfaceMappingCreateRequest>& value) { SetNodeInterfaceMappings(value); return *this;}
    inline CreateNodeRequest& WithNodeInterfaceMappings(Aws::Vector<NodeInterfaceMappingCreateRequest>&& value) { SetNodeInterfaceMappings(std::move(value)); return *this;}
    inline CreateNodeRequest& AddNodeInterfaceMappings(const NodeInterfaceMappingCreateRequest& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.push_back(value); return *this; }
    inline CreateNodeRequest& AddNodeInterfaceMappings(NodeInterfaceMappingCreateRequest&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * An ID that you assign to a create request. This ID ensures idempotency when
     * creating resources.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline CreateNodeRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNodeRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNodeRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
    inline CreateNodeRequest& WithRole(const NodeRole& value) { SetRole(value); return *this;}
    inline CreateNodeRequest& WithRole(NodeRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNodeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateNodeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNodeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateNodeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNodeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNodeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateNodeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNodeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNodeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<NodeInterfaceMappingCreateRequest> m_nodeInterfaceMappings;
    bool m_nodeInterfaceMappingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    NodeRole m_role;
    bool m_roleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
