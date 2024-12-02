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
  class GetResourceGatewayRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API GetResourceGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceGateway"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the resource gateway.</p>
     */
    inline const Aws::String& GetResourceGatewayIdentifier() const{ return m_resourceGatewayIdentifier; }
    inline bool ResourceGatewayIdentifierHasBeenSet() const { return m_resourceGatewayIdentifierHasBeenSet; }
    inline void SetResourceGatewayIdentifier(const Aws::String& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = value; }
    inline void SetResourceGatewayIdentifier(Aws::String&& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = std::move(value); }
    inline void SetResourceGatewayIdentifier(const char* value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier.assign(value); }
    inline GetResourceGatewayRequest& WithResourceGatewayIdentifier(const Aws::String& value) { SetResourceGatewayIdentifier(value); return *this;}
    inline GetResourceGatewayRequest& WithResourceGatewayIdentifier(Aws::String&& value) { SetResourceGatewayIdentifier(std::move(value)); return *this;}
    inline GetResourceGatewayRequest& WithResourceGatewayIdentifier(const char* value) { SetResourceGatewayIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGatewayIdentifier;
    bool m_resourceGatewayIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
