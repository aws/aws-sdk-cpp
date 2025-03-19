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
  class DeleteResourceEndpointAssociationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeleteResourceEndpointAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceEndpointAssociation"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the association.</p>
     */
    inline const Aws::String& GetResourceEndpointAssociationIdentifier() const { return m_resourceEndpointAssociationIdentifier; }
    inline bool ResourceEndpointAssociationIdentifierHasBeenSet() const { return m_resourceEndpointAssociationIdentifierHasBeenSet; }
    template<typename ResourceEndpointAssociationIdentifierT = Aws::String>
    void SetResourceEndpointAssociationIdentifier(ResourceEndpointAssociationIdentifierT&& value) { m_resourceEndpointAssociationIdentifierHasBeenSet = true; m_resourceEndpointAssociationIdentifier = std::forward<ResourceEndpointAssociationIdentifierT>(value); }
    template<typename ResourceEndpointAssociationIdentifierT = Aws::String>
    DeleteResourceEndpointAssociationRequest& WithResourceEndpointAssociationIdentifier(ResourceEndpointAssociationIdentifierT&& value) { SetResourceEndpointAssociationIdentifier(std::forward<ResourceEndpointAssociationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceEndpointAssociationIdentifier;
    bool m_resourceEndpointAssociationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
