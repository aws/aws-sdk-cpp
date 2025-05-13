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
#include <aws/medialive/model/NodeInterfaceMapping.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to create a new node registration script.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateNodeRegistrationScriptRequest">AWS
   * API Reference</a></p>
   */
  class CreateNodeRegistrationScriptRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateNodeRegistrationScriptRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNodeRegistrationScript"; }

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
    CreateNodeRegistrationScriptRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If you're generating a re-registration script for an already existing node, this
     * is where you provide the id.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateNodeRegistrationScriptRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify a pattern for MediaLive Anywhere to use to assign a name to each Node in
     * the Cluster. The pattern can include the variables $hn (hostname of the node
     * hardware) and $ts for the date and time that the Node is created, in UTC (for
     * example, 2024-08-20T23:35:12Z).
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateNodeRegistrationScriptRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::Vector<NodeInterfaceMapping>& GetNodeInterfaceMappings() const { return m_nodeInterfaceMappings; }
    inline bool NodeInterfaceMappingsHasBeenSet() const { return m_nodeInterfaceMappingsHasBeenSet; }
    template<typename NodeInterfaceMappingsT = Aws::Vector<NodeInterfaceMapping>>
    void SetNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = std::forward<NodeInterfaceMappingsT>(value); }
    template<typename NodeInterfaceMappingsT = Aws::Vector<NodeInterfaceMapping>>
    CreateNodeRegistrationScriptRequest& WithNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { SetNodeInterfaceMappings(std::forward<NodeInterfaceMappingsT>(value)); return *this;}
    template<typename NodeInterfaceMappingsT = NodeInterfaceMapping>
    CreateNodeRegistrationScriptRequest& AddNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.emplace_back(std::forward<NodeInterfaceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * An ID that you assign to a create request. This ID ensures idempotency when
     * creating resources.
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateNodeRegistrationScriptRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
    inline CreateNodeRegistrationScriptRequest& WithRole(NodeRole value) { SetRole(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<NodeInterfaceMapping> m_nodeInterfaceMappings;
    bool m_nodeInterfaceMappingsHasBeenSet = false;

    Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_requestIdHasBeenSet = true;

    NodeRole m_role{NodeRole::NOT_SET};
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
