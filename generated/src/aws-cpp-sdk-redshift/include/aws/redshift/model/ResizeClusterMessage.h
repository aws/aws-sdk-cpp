/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
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
  class ResizeClusterMessage
  {
  public:
    AWS_REDSHIFT_API ResizeClusterMessage() = default;
    AWS_REDSHIFT_API ResizeClusterMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ResizeClusterMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ResizeClusterMessage& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline const Aws::String& GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    template<typename ClusterTypeT = Aws::String>
    void SetClusterType(ClusterTypeT&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::forward<ClusterTypeT>(value); }
    template<typename ClusterTypeT = Aws::String>
    ResizeClusterMessage& WithClusterType(ClusterTypeT&& value) { SetClusterType(std::forward<ClusterTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    ResizeClusterMessage& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new number of nodes for the cluster. If not specified, the cluster's
     * current number of nodes is used.</p>
     */
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline ResizeClusterMessage& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether the resize operation is using the classic
     * resize process. If you don't provide this parameter or set the value to
     * <code>false</code>, the resize type is elastic. </p>
     */
    inline bool GetClassic() const { return m_classic; }
    inline bool ClassicHasBeenSet() const { return m_classicHasBeenSet; }
    inline void SetClassic(bool value) { m_classicHasBeenSet = true; m_classic = value; }
    inline ResizeClusterMessage& WithClassic(bool value) { SetClassic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the reserved node.</p>
     */
    inline const Aws::String& GetReservedNodeId() const { return m_reservedNodeId; }
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }
    template<typename ReservedNodeIdT = Aws::String>
    void SetReservedNodeId(ReservedNodeIdT&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::forward<ReservedNodeIdT>(value); }
    template<typename ReservedNodeIdT = Aws::String>
    ResizeClusterMessage& WithReservedNodeId(ReservedNodeIdT&& value) { SetReservedNodeId(std::forward<ReservedNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline const Aws::String& GetTargetReservedNodeOfferingId() const { return m_targetReservedNodeOfferingId; }
    inline bool TargetReservedNodeOfferingIdHasBeenSet() const { return m_targetReservedNodeOfferingIdHasBeenSet; }
    template<typename TargetReservedNodeOfferingIdT = Aws::String>
    void SetTargetReservedNodeOfferingId(TargetReservedNodeOfferingIdT&& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = std::forward<TargetReservedNodeOfferingIdT>(value); }
    template<typename TargetReservedNodeOfferingIdT = Aws::String>
    ResizeClusterMessage& WithTargetReservedNodeOfferingId(TargetReservedNodeOfferingIdT&& value) { SetTargetReservedNodeOfferingId(std::forward<TargetReservedNodeOfferingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_numberOfNodes{0};
    bool m_numberOfNodesHasBeenSet = false;

    bool m_classic{false};
    bool m_classicHasBeenSet = false;

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet = false;

    Aws::String m_targetReservedNodeOfferingId;
    bool m_targetReservedNodeOfferingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
