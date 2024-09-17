/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a resize cluster operation. For example, a scheduled action to run
   * the <code>ResizeCluster</code> API operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ResizeClusterMessage">AWS
   * API Reference</a></p>
   */
  class ResizeClusterRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ResizeClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResizeCluster"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline ResizeClusterRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline ResizeClusterRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline ResizeClusterRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }
    inline ResizeClusterRequest& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}
    inline ResizeClusterRequest& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}
    inline ResizeClusterRequest& WithClusterType(const char* value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline ResizeClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline ResizeClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline ResizeClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new number of nodes for the cluster. If not specified, the cluster's
     * current number of nodes is used.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline ResizeClusterRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether the resize operation is using the classic
     * resize process. If you don't provide this parameter or set the value to
     * <code>false</code>, the resize type is elastic. </p>
     */
    inline bool GetClassic() const{ return m_classic; }
    inline bool ClassicHasBeenSet() const { return m_classicHasBeenSet; }
    inline void SetClassic(bool value) { m_classicHasBeenSet = true; m_classic = value; }
    inline ResizeClusterRequest& WithClassic(bool value) { SetClassic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the reserved node.</p>
     */
    inline const Aws::String& GetReservedNodeId() const{ return m_reservedNodeId; }
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }
    inline void SetReservedNodeId(const Aws::String& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = value; }
    inline void SetReservedNodeId(Aws::String&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::move(value); }
    inline void SetReservedNodeId(const char* value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId.assign(value); }
    inline ResizeClusterRequest& WithReservedNodeId(const Aws::String& value) { SetReservedNodeId(value); return *this;}
    inline ResizeClusterRequest& WithReservedNodeId(Aws::String&& value) { SetReservedNodeId(std::move(value)); return *this;}
    inline ResizeClusterRequest& WithReservedNodeId(const char* value) { SetReservedNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline const Aws::String& GetTargetReservedNodeOfferingId() const{ return m_targetReservedNodeOfferingId; }
    inline bool TargetReservedNodeOfferingIdHasBeenSet() const { return m_targetReservedNodeOfferingIdHasBeenSet; }
    inline void SetTargetReservedNodeOfferingId(const Aws::String& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = value; }
    inline void SetTargetReservedNodeOfferingId(Aws::String&& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = std::move(value); }
    inline void SetTargetReservedNodeOfferingId(const char* value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId.assign(value); }
    inline ResizeClusterRequest& WithTargetReservedNodeOfferingId(const Aws::String& value) { SetTargetReservedNodeOfferingId(value); return *this;}
    inline ResizeClusterRequest& WithTargetReservedNodeOfferingId(Aws::String&& value) { SetTargetReservedNodeOfferingId(std::move(value)); return *this;}
    inline ResizeClusterRequest& WithTargetReservedNodeOfferingId(const char* value) { SetTargetReservedNodeOfferingId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    bool m_classic;
    bool m_classicHasBeenSet = false;

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet = false;

    Aws::String m_targetReservedNodeOfferingId;
    bool m_targetReservedNodeOfferingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
