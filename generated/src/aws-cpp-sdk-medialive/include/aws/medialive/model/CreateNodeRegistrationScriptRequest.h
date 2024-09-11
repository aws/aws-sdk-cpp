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
    AWS_MEDIALIVE_API CreateNodeRegistrationScriptRequest();

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
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline CreateNodeRegistrationScriptRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * If you're generating a re-registration script for an already existing node, this
     * is where you provide the id.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CreateNodeRegistrationScriptRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a pattern for MediaLive Anywhere to use to assign a name to each Node in
     * the Cluster. The pattern can include the variables $hn (hostname of the node
     * hardware) and $ts for the date and time that the Node is created, in UTC (for
     * example, 2024-08-20T23:35:12Z).
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateNodeRegistrationScriptRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::Vector<NodeInterfaceMapping>& GetNodeInterfaceMappings() const{ return m_nodeInterfaceMappings; }
    inline bool NodeInterfaceMappingsHasBeenSet() const { return m_nodeInterfaceMappingsHasBeenSet; }
    inline void SetNodeInterfaceMappings(const Aws::Vector<NodeInterfaceMapping>& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = value; }
    inline void SetNodeInterfaceMappings(Aws::Vector<NodeInterfaceMapping>&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = std::move(value); }
    inline CreateNodeRegistrationScriptRequest& WithNodeInterfaceMappings(const Aws::Vector<NodeInterfaceMapping>& value) { SetNodeInterfaceMappings(value); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithNodeInterfaceMappings(Aws::Vector<NodeInterfaceMapping>&& value) { SetNodeInterfaceMappings(std::move(value)); return *this;}
    inline CreateNodeRegistrationScriptRequest& AddNodeInterfaceMappings(const NodeInterfaceMapping& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.push_back(value); return *this; }
    inline CreateNodeRegistrationScriptRequest& AddNodeInterfaceMappings(NodeInterfaceMapping&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.push_back(std::move(value)); return *this; }
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
    inline CreateNodeRegistrationScriptRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
    inline CreateNodeRegistrationScriptRequest& WithRole(const NodeRole& value) { SetRole(value); return *this;}
    inline CreateNodeRegistrationScriptRequest& WithRole(NodeRole&& value) { SetRole(std::move(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    NodeRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
