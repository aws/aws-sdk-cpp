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
    AWS_REDSHIFT_API SecondaryClusterInfo();
    AWS_REDSHIFT_API SecondaryClusterInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API SecondaryClusterInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline SecondaryClusterInfo& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline SecondaryClusterInfo& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone in which the secondary compute unit of the
     * cluster is located.</p>
     */
    inline SecondaryClusterInfo& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline const Aws::Vector<ClusterNode>& GetClusterNodes() const{ return m_clusterNodes; }

    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline bool ClusterNodesHasBeenSet() const { return m_clusterNodesHasBeenSet; }

    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline void SetClusterNodes(const Aws::Vector<ClusterNode>& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = value; }

    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline void SetClusterNodes(Aws::Vector<ClusterNode>&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = std::move(value); }

    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline SecondaryClusterInfo& WithClusterNodes(const Aws::Vector<ClusterNode>& value) { SetClusterNodes(value); return *this;}

    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline SecondaryClusterInfo& WithClusterNodes(Aws::Vector<ClusterNode>&& value) { SetClusterNodes(std::move(value)); return *this;}

    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline SecondaryClusterInfo& AddClusterNodes(const ClusterNode& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.push_back(value); return *this; }

    /**
     * <p>The nodes in the secondary compute unit.</p>
     */
    inline SecondaryClusterInfo& AddClusterNodes(ClusterNode&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<ClusterNode> m_clusterNodes;
    bool m_clusterNodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
