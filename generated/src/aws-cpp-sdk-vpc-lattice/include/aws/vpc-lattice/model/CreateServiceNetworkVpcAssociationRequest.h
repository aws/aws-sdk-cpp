/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class CreateServiceNetworkVpcAssociationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API CreateServiceNetworkVpcAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceNetworkVpcAssociation"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups. Security groups aren't added by default. You
     * can add a security group to apply network level controls to control which
     * resources in a VPC are allowed to access the service network and its services.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Control
     * traffic to resources using security groups</a> in the <i>Amazon VPC User
     * Guide</i>.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network. You must use the
     * ARN when the resources specified in the operation are in different accounts.</p>
     */
    inline const Aws::String& GetServiceNetworkIdentifier() const{ return m_serviceNetworkIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network. You must use the
     * ARN when the resources specified in the operation are in different accounts.</p>
     */
    inline bool ServiceNetworkIdentifierHasBeenSet() const { return m_serviceNetworkIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network. You must use the
     * ARN when the resources specified in the operation are in different accounts.</p>
     */
    inline void SetServiceNetworkIdentifier(const Aws::String& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network. You must use the
     * ARN when the resources specified in the operation are in different accounts.</p>
     */
    inline void SetServiceNetworkIdentifier(Aws::String&& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network. You must use the
     * ARN when the resources specified in the operation are in different accounts.</p>
     */
    inline void SetServiceNetworkIdentifier(const char* value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network. You must use the
     * ARN when the resources specified in the operation are in different accounts.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithServiceNetworkIdentifier(const Aws::String& value) { SetServiceNetworkIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network. You must use the
     * ARN when the resources specified in the operation are in different accounts.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithServiceNetworkIdentifier(Aws::String&& value) { SetServiceNetworkIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network. You must use the
     * ARN when the resources specified in the operation are in different accounts.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithServiceNetworkIdentifier(const char* value) { SetServiceNetworkIdentifier(value); return *this;}


    /**
     * <p>The tags for the association.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the association.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the association.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the association.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the association.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcIdentifier() const{ return m_vpcIdentifier; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcIdentifier(const Aws::String& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcIdentifier(Aws::String&& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcIdentifier(const char* value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithVpcIdentifier(const Aws::String& value) { SetVpcIdentifier(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithVpcIdentifier(Aws::String&& value) { SetVpcIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateServiceNetworkVpcAssociationRequest& WithVpcIdentifier(const char* value) { SetVpcIdentifier(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_serviceNetworkIdentifier;
    bool m_serviceNetworkIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcIdentifier;
    bool m_vpcIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
