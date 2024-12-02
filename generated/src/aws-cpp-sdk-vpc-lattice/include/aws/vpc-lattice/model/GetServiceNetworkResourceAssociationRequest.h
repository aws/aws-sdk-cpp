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
  class GetServiceNetworkResourceAssociationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API GetServiceNetworkResourceAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceNetworkResourceAssociation"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetServiceNetworkResourceAssociationIdentifier() const{ return m_serviceNetworkResourceAssociationIdentifier; }
    inline bool ServiceNetworkResourceAssociationIdentifierHasBeenSet() const { return m_serviceNetworkResourceAssociationIdentifierHasBeenSet; }
    inline void SetServiceNetworkResourceAssociationIdentifier(const Aws::String& value) { m_serviceNetworkResourceAssociationIdentifierHasBeenSet = true; m_serviceNetworkResourceAssociationIdentifier = value; }
    inline void SetServiceNetworkResourceAssociationIdentifier(Aws::String&& value) { m_serviceNetworkResourceAssociationIdentifierHasBeenSet = true; m_serviceNetworkResourceAssociationIdentifier = std::move(value); }
    inline void SetServiceNetworkResourceAssociationIdentifier(const char* value) { m_serviceNetworkResourceAssociationIdentifierHasBeenSet = true; m_serviceNetworkResourceAssociationIdentifier.assign(value); }
    inline GetServiceNetworkResourceAssociationRequest& WithServiceNetworkResourceAssociationIdentifier(const Aws::String& value) { SetServiceNetworkResourceAssociationIdentifier(value); return *this;}
    inline GetServiceNetworkResourceAssociationRequest& WithServiceNetworkResourceAssociationIdentifier(Aws::String&& value) { SetServiceNetworkResourceAssociationIdentifier(std::move(value)); return *this;}
    inline GetServiceNetworkResourceAssociationRequest& WithServiceNetworkResourceAssociationIdentifier(const char* value) { SetServiceNetworkResourceAssociationIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceNetworkResourceAssociationIdentifier;
    bool m_serviceNetworkResourceAssociationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
