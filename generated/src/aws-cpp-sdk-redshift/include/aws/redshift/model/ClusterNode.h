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
   * <p>The identifier of a node in a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterNode">AWS
   * API Reference</a></p>
   */
  class ClusterNode
  {
  public:
    AWS_REDSHIFT_API ClusterNode() = default;
    AWS_REDSHIFT_API ClusterNode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterNode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline const Aws::String& GetNodeRole() const { return m_nodeRole; }
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }
    template<typename NodeRoleT = Aws::String>
    void SetNodeRole(NodeRoleT&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::forward<NodeRoleT>(value); }
    template<typename NodeRoleT = Aws::String>
    ClusterNode& WithNodeRole(NodeRoleT&& value) { SetNodeRole(std::forward<NodeRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline const Aws::String& GetPrivateIPAddress() const { return m_privateIPAddress; }
    inline bool PrivateIPAddressHasBeenSet() const { return m_privateIPAddressHasBeenSet; }
    template<typename PrivateIPAddressT = Aws::String>
    void SetPrivateIPAddress(PrivateIPAddressT&& value) { m_privateIPAddressHasBeenSet = true; m_privateIPAddress = std::forward<PrivateIPAddressT>(value); }
    template<typename PrivateIPAddressT = Aws::String>
    ClusterNode& WithPrivateIPAddress(PrivateIPAddressT&& value) { SetPrivateIPAddress(std::forward<PrivateIPAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline const Aws::String& GetPublicIPAddress() const { return m_publicIPAddress; }
    inline bool PublicIPAddressHasBeenSet() const { return m_publicIPAddressHasBeenSet; }
    template<typename PublicIPAddressT = Aws::String>
    void SetPublicIPAddress(PublicIPAddressT&& value) { m_publicIPAddressHasBeenSet = true; m_publicIPAddress = std::forward<PublicIPAddressT>(value); }
    template<typename PublicIPAddressT = Aws::String>
    ClusterNode& WithPublicIPAddress(PublicIPAddressT&& value) { SetPublicIPAddress(std::forward<PublicIPAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeRole;
    bool m_nodeRoleHasBeenSet = false;

    Aws::String m_privateIPAddress;
    bool m_privateIPAddressHasBeenSet = false;

    Aws::String m_publicIPAddress;
    bool m_publicIPAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
