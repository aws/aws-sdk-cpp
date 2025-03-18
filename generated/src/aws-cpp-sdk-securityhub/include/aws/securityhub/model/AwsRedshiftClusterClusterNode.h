/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A node in an Amazon Redshift cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterClusterNode">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterClusterNode
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterNode() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline const Aws::String& GetNodeRole() const { return m_nodeRole; }
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }
    template<typename NodeRoleT = Aws::String>
    void SetNodeRole(NodeRoleT&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::forward<NodeRoleT>(value); }
    template<typename NodeRoleT = Aws::String>
    AwsRedshiftClusterClusterNode& WithNodeRole(NodeRoleT&& value) { SetNodeRole(std::forward<NodeRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IP address of the node.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    AwsRedshiftClusterClusterNode& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address of the node.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const { return m_publicIpAddress; }
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }
    template<typename PublicIpAddressT = Aws::String>
    void SetPublicIpAddress(PublicIpAddressT&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::forward<PublicIpAddressT>(value); }
    template<typename PublicIpAddressT = Aws::String>
    AwsRedshiftClusterClusterNode& WithPublicIpAddress(PublicIpAddressT&& value) { SetPublicIpAddress(std::forward<PublicIpAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeRole;
    bool m_nodeRoleHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
