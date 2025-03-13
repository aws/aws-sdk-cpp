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
  class DeleteResourceGatewayRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeleteResourceGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceGateway"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the resource gateway.</p>
     */
    inline const Aws::String& GetResourceGatewayIdentifier() const { return m_resourceGatewayIdentifier; }
    inline bool ResourceGatewayIdentifierHasBeenSet() const { return m_resourceGatewayIdentifierHasBeenSet; }
    template<typename ResourceGatewayIdentifierT = Aws::String>
    void SetResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = std::forward<ResourceGatewayIdentifierT>(value); }
    template<typename ResourceGatewayIdentifierT = Aws::String>
    DeleteResourceGatewayRequest& WithResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) { SetResourceGatewayIdentifier(std::forward<ResourceGatewayIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceGatewayIdentifier;
    bool m_resourceGatewayIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
