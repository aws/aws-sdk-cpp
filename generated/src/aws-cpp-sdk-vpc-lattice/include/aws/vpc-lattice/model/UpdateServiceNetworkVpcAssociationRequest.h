/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class UpdateServiceNetworkVpcAssociationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API UpdateServiceNetworkVpcAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceNetworkVpcAssociation"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline UpdateServiceNetworkVpcAssociationRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline UpdateServiceNetworkVpcAssociationRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline UpdateServiceNetworkVpcAssociationRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline UpdateServiceNetworkVpcAssociationRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups. Once you add a security group, it cannot be
     * removed.</p>
     */
    inline UpdateServiceNetworkVpcAssociationRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetServiceNetworkVpcAssociationIdentifier() const{ return m_serviceNetworkVpcAssociationIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline bool ServiceNetworkVpcAssociationIdentifierHasBeenSet() const { return m_serviceNetworkVpcAssociationIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetServiceNetworkVpcAssociationIdentifier(const Aws::String& value) { m_serviceNetworkVpcAssociationIdentifierHasBeenSet = true; m_serviceNetworkVpcAssociationIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetServiceNetworkVpcAssociationIdentifier(Aws::String&& value) { m_serviceNetworkVpcAssociationIdentifierHasBeenSet = true; m_serviceNetworkVpcAssociationIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetServiceNetworkVpcAssociationIdentifier(const char* value) { m_serviceNetworkVpcAssociationIdentifierHasBeenSet = true; m_serviceNetworkVpcAssociationIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationRequest& WithServiceNetworkVpcAssociationIdentifier(const Aws::String& value) { SetServiceNetworkVpcAssociationIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationRequest& WithServiceNetworkVpcAssociationIdentifier(Aws::String&& value) { SetServiceNetworkVpcAssociationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationRequest& WithServiceNetworkVpcAssociationIdentifier(const char* value) { SetServiceNetworkVpcAssociationIdentifier(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_serviceNetworkVpcAssociationIdentifier;
    bool m_serviceNetworkVpcAssociationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
