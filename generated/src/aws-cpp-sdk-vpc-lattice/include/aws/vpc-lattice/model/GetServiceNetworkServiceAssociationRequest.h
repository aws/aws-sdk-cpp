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
  class GetServiceNetworkServiceAssociationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API GetServiceNetworkServiceAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceNetworkServiceAssociation"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the association.</p>
     */
    inline const Aws::String& GetServiceNetworkServiceAssociationIdentifier() const { return m_serviceNetworkServiceAssociationIdentifier; }
    inline bool ServiceNetworkServiceAssociationIdentifierHasBeenSet() const { return m_serviceNetworkServiceAssociationIdentifierHasBeenSet; }
    template<typename ServiceNetworkServiceAssociationIdentifierT = Aws::String>
    void SetServiceNetworkServiceAssociationIdentifier(ServiceNetworkServiceAssociationIdentifierT&& value) { m_serviceNetworkServiceAssociationIdentifierHasBeenSet = true; m_serviceNetworkServiceAssociationIdentifier = std::forward<ServiceNetworkServiceAssociationIdentifierT>(value); }
    template<typename ServiceNetworkServiceAssociationIdentifierT = Aws::String>
    GetServiceNetworkServiceAssociationRequest& WithServiceNetworkServiceAssociationIdentifier(ServiceNetworkServiceAssociationIdentifierT&& value) { SetServiceNetworkServiceAssociationIdentifier(std::forward<ServiceNetworkServiceAssociationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceNetworkServiceAssociationIdentifier;
    bool m_serviceNetworkServiceAssociationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
