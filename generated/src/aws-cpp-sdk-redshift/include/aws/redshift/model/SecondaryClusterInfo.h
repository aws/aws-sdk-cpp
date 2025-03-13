/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ClusterNode.h>
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
   * <p>The AvailabilityZone and ClusterNodes information of the secondary compute
   * unit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SecondaryClusterInfo">AWS
   * API Reference</a></p>
   */
  class SecondaryClusterInfo
  {
  public:
    AWS_REDSHIFT_API SecondaryClusterInfo() = default;
    AWS_REDSHIFT_API SecondaryClusterInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API SecondaryClusterInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    SecondaryClusterInfo& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline const Aws::Vector<ClusterNode>& GetClusterNodes() const { return m_clusterNodes; }
    inline bool ClusterNodesHasBeenSet() const { return m_clusterNodesHasBeenSet; }
    template<typename ClusterNodesT = Aws::Vector<ClusterNode>>
    void SetClusterNodes(ClusterNodesT&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = std::forward<ClusterNodesT>(value); }
    template<typename ClusterNodesT = Aws::Vector<ClusterNode>>
    SecondaryClusterInfo& WithClusterNodes(ClusterNodesT&& value) { SetClusterNodes(std::forward<ClusterNodesT>(value)); return *this;}
    template<typename ClusterNodesT = ClusterNode>
    SecondaryClusterInfo& AddClusterNodes(ClusterNodesT&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.emplace_back(std::forward<ClusterNodesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<ClusterNode> m_clusterNodes;
    bool m_clusterNodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
