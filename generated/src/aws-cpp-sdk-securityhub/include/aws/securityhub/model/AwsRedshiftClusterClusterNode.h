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
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterNode();
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline const Aws::String& GetNodeRole() const{ return m_nodeRole; }

    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }

    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline void SetNodeRole(const Aws::String& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = value; }

    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline void SetNodeRole(Aws::String&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::move(value); }

    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline void SetNodeRole(const char* value) { m_nodeRoleHasBeenSet = true; m_nodeRole.assign(value); }

    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithNodeRole(const Aws::String& value) { SetNodeRole(value); return *this;}

    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithNodeRole(Aws::String&& value) { SetNodeRole(std::move(value)); return *this;}

    /**
     * <p>The role of the node. A node might be a leader node or a compute node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithNodeRole(const char* value) { SetNodeRole(value); return *this;}


    /**
     * <p>The private IP address of the node.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IP address of the node.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IP address of the node.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP address of the node.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IP address of the node.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IP address of the node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP address of the node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IP address of the node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>The public IP address of the node.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const{ return m_publicIpAddress; }

    /**
     * <p>The public IP address of the node.</p>
     */
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }

    /**
     * <p>The public IP address of the node.</p>
     */
    inline void SetPublicIpAddress(const Aws::String& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = value; }

    /**
     * <p>The public IP address of the node.</p>
     */
    inline void SetPublicIpAddress(Aws::String&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::move(value); }

    /**
     * <p>The public IP address of the node.</p>
     */
    inline void SetPublicIpAddress(const char* value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress.assign(value); }

    /**
     * <p>The public IP address of the node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithPublicIpAddress(const Aws::String& value) { SetPublicIpAddress(value); return *this;}

    /**
     * <p>The public IP address of the node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithPublicIpAddress(Aws::String&& value) { SetPublicIpAddress(std::move(value)); return *this;}

    /**
     * <p>The public IP address of the node.</p>
     */
    inline AwsRedshiftClusterClusterNode& WithPublicIpAddress(const char* value) { SetPublicIpAddress(value); return *this;}

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
