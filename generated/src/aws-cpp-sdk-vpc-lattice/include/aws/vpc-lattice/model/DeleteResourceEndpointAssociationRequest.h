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
    AWS_VPCLATTICE_API DeleteResourceEndpointAssociationRequest();

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
    inline const Aws::String& GetResourceEndpointAssociationIdentifier() const{ return m_resourceEndpointAssociationIdentifier; }
    inline bool ResourceEndpointAssociationIdentifierHasBeenSet() const { return m_resourceEndpointAssociationIdentifierHasBeenSet; }
    inline void SetResourceEndpointAssociationIdentifier(const Aws::String& value) { m_resourceEndpointAssociationIdentifierHasBeenSet = true; m_resourceEndpointAssociationIdentifier = value; }
    inline void SetResourceEndpointAssociationIdentifier(Aws::String&& value) { m_resourceEndpointAssociationIdentifierHasBeenSet = true; m_resourceEndpointAssociationIdentifier = std::move(value); }
    inline void SetResourceEndpointAssociationIdentifier(const char* value) { m_resourceEndpointAssociationIdentifierHasBeenSet = true; m_resourceEndpointAssociationIdentifier.assign(value); }
    inline DeleteResourceEndpointAssociationRequest& WithResourceEndpointAssociationIdentifier(const Aws::String& value) { SetResourceEndpointAssociationIdentifier(value); return *this;}
    inline DeleteResourceEndpointAssociationRequest& WithResourceEndpointAssociationIdentifier(Aws::String&& value) { SetResourceEndpointAssociationIdentifier(std::move(value)); return *this;}
    inline DeleteResourceEndpointAssociationRequest& WithResourceEndpointAssociationIdentifier(const char* value) { SetResourceEndpointAssociationIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceEndpointAssociationIdentifier;
    bool m_resourceEndpointAssociationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
