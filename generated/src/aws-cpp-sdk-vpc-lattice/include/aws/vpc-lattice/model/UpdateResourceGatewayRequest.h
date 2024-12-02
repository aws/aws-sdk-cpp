/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class UpdateResourceGatewayRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API UpdateResourceGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceGateway"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the resource gateway.</p>
     */
    inline const Aws::String& GetResourceGatewayIdentifier() const{ return m_resourceGatewayIdentifier; }
    inline bool ResourceGatewayIdentifierHasBeenSet() const { return m_resourceGatewayIdentifierHasBeenSet; }
    inline void SetResourceGatewayIdentifier(const Aws::String& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = value; }
    inline void SetResourceGatewayIdentifier(Aws::String&& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = std::move(value); }
    inline void SetResourceGatewayIdentifier(const char* value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier.assign(value); }
    inline UpdateResourceGatewayRequest& WithResourceGatewayIdentifier(const Aws::String& value) { SetResourceGatewayIdentifier(value); return *this;}
    inline UpdateResourceGatewayRequest& WithResourceGatewayIdentifier(Aws::String&& value) { SetResourceGatewayIdentifier(std::move(value)); return *this;}
    inline UpdateResourceGatewayRequest& WithResourceGatewayIdentifier(const char* value) { SetResourceGatewayIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups associated with the resource gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline UpdateResourceGatewayRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline UpdateResourceGatewayRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateResourceGatewayRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline UpdateResourceGatewayRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateResourceGatewayRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_resourceGatewayIdentifier;
    bool m_resourceGatewayIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
