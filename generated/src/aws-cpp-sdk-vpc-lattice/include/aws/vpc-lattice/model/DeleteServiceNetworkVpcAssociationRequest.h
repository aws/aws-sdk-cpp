/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
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
  class DeleteServiceNetworkVpcAssociationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeleteServiceNetworkVpcAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServiceNetworkVpcAssociation"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


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
    inline DeleteServiceNetworkVpcAssociationRequest& WithServiceNetworkVpcAssociationIdentifier(const Aws::String& value) { SetServiceNetworkVpcAssociationIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline DeleteServiceNetworkVpcAssociationRequest& WithServiceNetworkVpcAssociationIdentifier(Aws::String&& value) { SetServiceNetworkVpcAssociationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the association.</p>
     */
    inline DeleteServiceNetworkVpcAssociationRequest& WithServiceNetworkVpcAssociationIdentifier(const char* value) { SetServiceNetworkVpcAssociationIdentifier(value); return *this;}

  private:

    Aws::String m_serviceNetworkVpcAssociationIdentifier;
    bool m_serviceNetworkVpcAssociationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
